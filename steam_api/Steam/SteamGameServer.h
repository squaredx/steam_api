//
//  SteamGameServer.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-27.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamGameServer_h
#define SteamGameServer_h
#include "MainInc.h"

class SteamGameServer : public ISteamGameServer009
{
    
    void LogOn() override;
    
    void LogOff() override;
    
    bool BLoggedOn() override;
    
    bool BSecure() override;
    
    CSteamID GetSteamID() override;
    
    bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser) override;
    
    CSteamID CreateUnauthenticatedUserConnection() override;
    
    void SendUserDisconnect(CSteamID steamIDUser) override;
    
    bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore) override;
    
    bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode) override;
    
    void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName) override;
    
    void UpdateSpectatorPort(uint16 unSpectatorPort) override;
    
    void SetGameType(const char *pchGameType) override;
    
    bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName) override;
    
    void GetGameplayStats() override;
    
    bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) override;
    
    uint32 GetPublicIP() override;
    
    void SetGameData(const char *pchGameData) override;
    
    EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID) override;
    
};

#endif /* SteamGameServer_h */
