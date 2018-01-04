//
//  SteamApps.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-23.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamApps.h"


bool SteamApps::BIsSubscribed() {
    PRINTDEBUG();
    return true;
}

bool SteamApps::BIsLowViolence() {
    PRINTDEBUG();
    return false;
}

bool SteamApps::BIsCybercafe() {
    PRINTDEBUG();
    return false;
}

bool SteamApps::BIsVACBanned() {
    PRINTDEBUG();
    return false;
}

const char *SteamApps::GetCurrentGameLanguage() {
    PRINTDEBUG();
    return "US";
}

const char *SteamApps::GetAvailableGameLanguages() {
    PRINTDEBUG();
    return "US";
}

bool SteamApps::BIsSubscribedApp(AppId_t nAppID) {
    PRINTDEBUG();
    return true;
}

bool SteamApps::BIsDlcInstalled(AppId_t nAppID) {
    PRINTDEBUG();
    return true;
}

uint32 SteamApps::GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    PRINTDEBUG();
    return 0;
}

bool SteamApps::BIsSubscribedFromFreeWeekend() {
    PRINTDEBUG();
    return false;
}

int SteamApps::GetDLCCount() {
    PRINTDEBUG();
    return 0;
}

bool SteamApps::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize) {
    PRINTDEBUG();
    return true;
}

void SteamApps::InstallDLC(AppId_t nAppID) {
    PRINTDEBUG();
}

void SteamApps::UninstallDLC(AppId_t nAppID) {
    PRINTDEBUG();
}

void SteamApps::RequestAppProofOfPurchaseKey(AppId_t nAppID) {
    PRINTDEBUG();
}

bool SteamApps::GetCurrentBetaName(char *pchName, int cchNameBufferSize) {
    PRINTDEBUG();
    return true;
}

bool SteamApps::MarkContentCorrupt(bool bMissingFilesOnly) {
    PRINTDEBUG();
    return false;
}

uint32 SteamApps::GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots) {
    PRINTDEBUG();
    return 0;
}

uint32 SteamApps::GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize) {
    PRINTDEBUG();
    return 0;
}

bool SteamApps::BIsAppInstalled(AppId_t appID) {
    PRINTDEBUG();
    return true;
}

CSteamID SteamApps::GetAppOwner() {
    PRINTDEBUG();
    return CSteamID(0xDEADC0DE, k_EUniversePublic, k_EAccountTypeIndividual);
}

const char *SteamApps::GetLaunchQueryParam(const char *pchKey) {
    PRINTDEBUG();
    return "";
}

bool SteamApps::GetDlcDownloadProgress(uint32, uint64 *, uint64 *) {
    PRINTDEBUG();
    return true;
}

int SteamApps::GetAppBuildId() {
    PRINTDEBUG();
    return 0;
}
