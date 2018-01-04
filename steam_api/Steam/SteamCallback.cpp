//
//  SteamCallback.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-24.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//
#
#include "SteamCallback.h"
#include "CCallback.h"

// define so the template can be compiled
std::map<SteamAPICall_t, bool> SteamCallback::_calls;
std::map<SteamAPICall_t, CCallbackBase*> SteamCallback::_resultHandlers;
std::vector<SteamAPIResult_t> SteamCallback::_results;
std::vector<CCallbackBase*> SteamCallback::_callbacks;
int SteamCallback::_callID;

void SteamCallback::RegisterCallback(CCallbackBase *handler, int callback)
{
    
    handler->SetICallback(callback);
    _callbacks.push_back(handler);
}

void SteamCallback::RegisterCallResult(SteamAPICall_t call, CCallbackBase *result)
{
    _resultHandlers[call] = result;
}

SteamAPICall_t SteamCallback::RegisterCall()
{
    _callID++;
    
    _calls[_callID] = false;
    
    return _callID;
}

void SteamCallback::ReturnCall(void *data, int size, int type, SteamAPICall_t call)
{
    SteamAPIResult_t result;
    
    _calls[call] = true;
    
    result.call = call;
    result.data = data;
    result.size = size;
    result.type = type;
    
    _results.push_back(result);
}

void SteamCallback::RunCallbacks()
{
    std::vector<SteamAPIResult_t>::iterator iter;
    
    for (iter = _results.begin(); iter < _results.end(); iter++)
    {
        SteamAPIResult_t result = *iter;
        
        if (_resultHandlers.find(result.call) != _resultHandlers.end())
        {
            _resultHandlers[result.call]->Run(result.data, false, result.call);
        }
        
        std::vector<CCallbackBase*>::iterator cbiter;
        
        for (cbiter = _callbacks.begin(); cbiter < _callbacks.end(); cbiter++)
        {
            CCallbackBase* cb = *cbiter;
            
            if (cb->GetICallback() == result.type)
            {
                cb->Run(result.data, false, 0);
            }
        }
        
        free(result.data);
    }
    
    _results.clear();
}
