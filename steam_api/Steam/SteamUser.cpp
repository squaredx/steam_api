//
//  SteamUser.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-22.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "MainInc.h"
#include "SteamUser.h"

HSteamUser SteamUser::GetHSteamUser()
{
    PRINTDEBUG();
    return NULL;
}

bool SteamUser::BLoggedOn()
{
    PRINTDEBUG();
    return true;
}

CSteamID SteamUser::GetSteamID()
{
    //PRINTDEBUG();
    return CSteamID(0xDEADC0DE, 1, k_EUniversePublic, k_EAccountTypeIndividual);
}

int SteamUser::InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    PRINTDEBUG();
    return NULL;
}

void SteamUser::TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)
{
    PRINTDEBUG();
}

void SteamUser::TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo)
{
    PRINTDEBUG();
}

bool SteamUser::GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
    PRINTDEBUG();
    return true;
}

void SteamUser::StartVoiceRecording() {
    PRINTDEBUG();
}

void SteamUser::StopVoiceRecording() {
    PRINTDEBUG();
}

EVoiceResult SteamUser::GetCompressedVoice(void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) {
    PRINTDEBUG();
    return k_EVoiceResultOK;
}

EVoiceResult SteamUser::DecompressVoice(void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) {
    PRINTDEBUG();
    return k_EVoiceResultOK;
}

HAuthTicket SteamUser::GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket) {
    PRINTDEBUG();
    return HAuthTicket();
}

EBeginAuthSessionResult SteamUser::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID) {
    PRINTDEBUG();
    return k_EBeginAuthSessionResultOK;
}

void SteamUser::EndAuthSession(CSteamID steamID) {
    PRINTDEBUG();
}

void SteamUser::CancelAuthTicket(HAuthTicket hAuthTicket) {
    PRINTDEBUG();
}

EUserHasLicenseForAppResult SteamUser::UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    PRINTDEBUG();
    return k_EUserHasLicenseResultHasLicense;
}












