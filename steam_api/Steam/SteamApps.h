//
//  SteamApps.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-23.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamApps_h
#define SteamApps_h
#include "MainInc.h"

class SteamApps : public ISteamApps007
{
public:
    bool BIsSubscribed() override;
    
    bool BIsLowViolence() override;
    
    bool BIsCybercafe() override;
    
    bool BIsVACBanned() override;
    
    const char *GetCurrentGameLanguage() override;
    
    const char *GetAvailableGameLanguages() override;
    
    bool BIsSubscribedApp(AppId_t nAppID) override;
    
    bool BIsDlcInstalled(AppId_t nAppID) override;
    
    uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID) override;
    
    bool BIsSubscribedFromFreeWeekend() override;
    
    int GetDLCCount() override;
    
    bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize) override;
    
    void InstallDLC(AppId_t nAppID) override;
    
    void UninstallDLC(AppId_t nAppID) override;
    
    void RequestAppProofOfPurchaseKey(AppId_t nAppID) override;
    
    bool GetCurrentBetaName(char *pchName, int cchNameBufferSize) override;
    
    bool MarkContentCorrupt(bool bMissingFilesOnly) override;
    
    uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots) override;
    
    uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize) override;
    
    bool BIsAppInstalled(AppId_t appID) override;
    
    CSteamID GetAppOwner() override;
    
    const char *GetLaunchQueryParam(const char *pchKey) override;
    
    bool GetDlcDownloadProgress(uint32, uint64 *, uint64 *) override;
    
    int GetAppBuildId() override;
    
};

#endif /* SteamApps_h */
