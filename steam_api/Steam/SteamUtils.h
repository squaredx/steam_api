//
//  SteamUtils.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-22.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamUtils_h
#define SteamUtils_h
#include "MainInc.h"

class SteamUtils : public ISteamUtils005
{
public:
    uint32 GetSecondsSinceAppActive() override;
    
    uint32 GetSecondsSinceComputerActive() override;
    
    EUniverse GetConnectedUniverse() override;
    
    uint32 GetServerRealTime() override;
    
    const char *GetIPCountry() override;
    
    bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight) override;
    
    bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize) override;
    
    bool GetCSERIPPort(uint32 *unIP, uint16 *usPort) override;
    
    uint8 GetCurrentBatteryPower() override;
    
    uint32 GetAppID() override;
    
    void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition) override;
    
    bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed) override;
    
    ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) override;
    
    bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed) override;
    
    void RunFrame() override;
    
    uint32 GetIPCCallCount() override;
    
    void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) override;
    
    bool IsOverlayEnabled() override;
    
    bool BOverlayNeedsPresent() override;
    
    SteamAPICall_t CheckFileSignature(const char *szFileName) override;
    
    bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength) override;
    
    uint32 GetEnteredGamepadTextLength() override;
    
    bool GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax) override;
    
};

#endif /* SteamUtils_h */
