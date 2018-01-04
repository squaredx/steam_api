//
//  SteamGameServer.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-27.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamGameServer.h"


void SteamGameServer::LogOn() {
    PRINTDEBUG();
}

void SteamGameServer::LogOff() {
    PRINTDEBUG();
}

bool SteamGameServer::BLoggedOn() {
    PRINTDEBUG();
    return true;
}

bool SteamGameServer::BSecure() {
    PRINTDEBUG();
    return false;
}

CSteamID SteamGameServer::GetSteamID() {
    PRINTDEBUG();
    return CSteamID(0xDEADC0DE, k_EUniversePublic, k_EAccountTypeIndividual);
}

bool SteamGameServer::SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser) {
    PRINTDEBUG();
    return true;
}

CSteamID SteamGameServer::CreateUnauthenticatedUserConnection() {
    
    PRINTDEBUG();
    return CSteamID(0xDEADC0DE, k_EUniversePublic, k_EAccountTypeIndividual);
}

void SteamGameServer::SendUserDisconnect(CSteamID steamIDUser) {
    PRINTDEBUG();
}

bool SteamGameServer::BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore) {
    PRINTDEBUG();
    return true;
}

bool SteamGameServer::BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode) {
    PRINTDEBUG();
    return true;
}

void SteamGameServer::UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName) {
    PRINTDEBUG();
}

void SteamGameServer::UpdateSpectatorPort(uint16 unSpectatorPort) {
    PRINTDEBUG();
}

void SteamGameServer::SetGameType(const char *pchGameType) {
    PRINTDEBUG();
}

bool SteamGameServer::BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName) {
    PRINTDEBUG();
    return true;
}

void SteamGameServer::GetGameplayStats() {
    PRINTDEBUG();
}

bool SteamGameServer::RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) {
    PRINTDEBUG();
    return true;
}

uint32 SteamGameServer::GetPublicIP() {
    PRINTDEBUG();
    return 0;
}

void SteamGameServer::SetGameData(const char *pchGameData) {
    PRINTDEBUG();
}

EUserHasLicenseForAppResult SteamGameServer::UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    PRINTDEBUG();
    return k_EUserHasLicenseResultHasLicense;
}
