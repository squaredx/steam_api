/*
 Taken from SteamAPIBase
 Initial author: (https://github.com/)Convery
 Started: 2014-0408
 Notes:
 Steam callbacks that are used allover the place.
 Pretty much a copypaste of Bas's work.
 */

#ifndef SteamCallback_h
#define SteamCallback_h
#include "MainInc.h"
#include "CCallback.h"
#include <vector>
#include <iostream>
#include <map>

// result type
typedef struct SteamAPIResult_s
{
    void* data;
    int size;
    int type;
    SteamAPICall_t call;
} SteamAPIResult_t;

class SteamCallback
{
private:
    static std::map<SteamAPICall_t, bool> _calls;
    static std::map<SteamAPICall_t, CCallbackBase*> _resultHandlers;
    static std::vector<SteamAPIResult_t> _results;
    static std::vector<CCallbackBase*> _callbacks;
    
    static int _callID;
public:
    // run callbacks
    static void RunCallbacks();
    
    // register a global callback
    static void RegisterCallback(CCallbackBase* handler, int callback);
    
    // register a call result
    static void RegisterCallResult(SteamAPICall_t call, CCallbackBase* result);
    
    // register a call
    static SteamAPICall_t RegisterCall();
    
    // return a callback
    static void ReturnCall(void* data, int size, int type, SteamAPICall_t call);
};

#endif /* SteamCallback_h */
