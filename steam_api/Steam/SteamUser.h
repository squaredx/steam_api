//
//  SteamUser.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-22.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamUser_h
#define SteamUser_h
#include "MainInc.h"

class SteamUser : public ISteamUser012
{
public:
    
    
    HSteamUser GetHSteamUser() override;
    
    bool BLoggedOn() override;
    
    CSteamID GetSteamID() override;
    
    int InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure) override;
    
    void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer) override;
    
    void TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo = "") override;
    
    bool GetUserDataFolder(char *pchBuffer, int cubBuffer) override;
    
    void StartVoiceRecording() override;
    
    void StopVoiceRecording() override;
    
    EVoiceResult GetCompressedVoice(void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) override;
    
    EVoiceResult DecompressVoice(void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) override;
    
    HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket) override;
    
    EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID) override;
    
    void EndAuthSession(CSteamID steamID) override;
    
    void CancelAuthTicket(HAuthTicket hAuthTicket) override;
    
    EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID) override;
    
};

#endif /* SteamUser_h */
