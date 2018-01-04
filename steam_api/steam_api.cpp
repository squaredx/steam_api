/*
 *  steam_api.cpp
 *  steam_api
 *
 *  Created by Jason Wolfe on 2017-05-30.
 *  Copyright © 2017 Jason Wolfe. All rights reserved.
 *
 *
 */

#include <iostream>
#include "MainInc.h"
#include "SteamCallback.h"
#include "SteamUser.h"
#include "SteamUtils.h"
#include "SteamApps.h"
#include "SteamRemoteStorage.h"
#include "SteamNetworking.h"
#include "SteamFriends.h"
#include "SteamMatchmaking.h"
#include "SteamGameServer.h"

SteamCallback steam_callback;

SteamUser* steam_user;
SteamUtils* steam_utils;
SteamApps* steam_apps;
SteamRemoteStorage* steam_remote_storage;
SteamNetworking* steam_networking;
SteamFriends* steam_friends;
SteamMatchmaking* steam_matchmaking;
SteamGameServer* steam_game_server;


extern "C"
{
    int SteamAPI_IsSteamRunning()
    {
        printf("SteamAPI_IsSteamRunning()\n");
        return 1;
    }
    
    int SteamAPI_Init()
    {
        printf("SteamAPI_Init()\n");
        steam_user = new SteamUser();
        steam_utils = new SteamUtils();
        steam_apps = new SteamApps();
        steam_remote_storage = new SteamRemoteStorage();
        steam_networking = new SteamNetworking();
        steam_friends = new SteamFriends();
        steam_matchmaking = new SteamMatchmaking();
        steam_game_server = new SteamGameServer();
        
        ModInit();
        
        return 1;
    }
    
    void SteamAPI_RegisterCallResult(CCallbackBase* pResult, SteamAPICall_t APICall)
    {
        PRINTDEBUG();
        steam_callback.RegisterCallResult(APICall, pResult);
    }
    
    void SteamAPI_RegisterCallback( CCallbackBase *pCallback, int iCallback )
    {
        PRINTDEBUG();
        steam_callback.RegisterCallback(pCallback, iCallback);
    }
    
    void SteamAPI_UnregisterCallResult( CCallbackBase* pResult, SteamAPICall_t APICall )
    {
        PRINTDEBUG();
    }
    
    void SteamAPI_UnregisterCallback( CCallbackBase *pCallback, int iCallback )
    {
        PRINTDEBUG();
    }
    
    void SteamAPI_RunCallbacks()
    {
        steam_callback.RunCallbacks();
    }
    
    int SteamAPI_Shutdown()
    {
        printf("SteamAPI_Shutdown()\n");
        return 1;
    }
    
    ISteamApps007* SteamApps()
    {
        printf("SteamApps()");
        return (ISteamApps007 *)steam_apps;
    }
    
    ISteamRemoteStorage012* SteamRemoteStorage()
    {
        printf("SteamRemoteStorage()");
        return (ISteamRemoteStorage012 *)steam_remote_storage;
    }
    
    ISteamUtils005* SteamUtils()
    {
        printf("SteamUtils()");
        return (ISteamUtils005 *)steam_utils;
    }
    
    ISteamUser012* SteamUser()
    {
        printf("SteamUser()");
        return (ISteamUser012 *)steam_user;
    }
    
    ISteamNetworking005* SteamNetworking()
    {
        //printf("SteamNetworking()");
        return (ISteamNetworking005 *)steam_networking;
    }
    
    ISteamFriends015* SteamFriends()
    {
        printf("SteamFriends()");
        return (ISteamFriends015 *)steam_friends;
    }
    
    ISteamMatchmaking007* SteamMatchmaking()
    {
        printf("SteamMatchmaking()");
        return (ISteamMatchmaking007 *)steam_matchmaking;
    }
    
    ISteamGameServer009* SteamGameServer()
    {
        printf("SteamGameServer()");
        return (ISteamGameServer009 *)steam_game_server;
    }
    
    bool SteamGameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, EServerMode eServerMode, int nGameAppId, const char *pchGameDir, const char *pchVersionString )
    {
        PRINTDEBUG();
        return true;
    }
    void  SteamGameServer_RunCallbacks()
    {
        PRINTDEBUG();
    }
    
    void SteamGameServer_Shutdown()
    {
        PRINTDEBUG();
    }
    
};
