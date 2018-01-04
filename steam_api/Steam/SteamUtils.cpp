//
//  SteamUtils.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-22.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamUtils.h"



uint32 SteamUtils::GetSecondsSinceAppActive() {
    PRINTDEBUG();
    return NULL;
}

uint32 SteamUtils::GetSecondsSinceComputerActive() {
    PRINTDEBUG();
    return NULL;
}

EUniverse SteamUtils::GetConnectedUniverse() {
    PRINTDEBUG();
    return k_EUniversePublic;
}

uint32 SteamUtils::GetServerRealTime() {
    PRINTDEBUG();
    return NULL;
}

const char *SteamUtils::GetIPCountry() {
    PRINTDEBUG();
    return "US";
}

bool SteamUtils::GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight) {
    PRINTDEBUG();
    return 1;
}

bool SteamUtils::GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize) {
    PRINTDEBUG();
    return 1;
}

bool SteamUtils::GetCSERIPPort(uint32 *unIP, uint16 *usPort) {
    PRINTDEBUG();
    return 1;
}

uint8 SteamUtils::GetCurrentBatteryPower() {
    PRINTDEBUG();
    return 255;
}

uint32 SteamUtils::GetAppID() {
    PRINTDEBUG();
    return 0;
}

void SteamUtils::SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition) {
    PRINTDEBUG();
}

bool SteamUtils::IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed) {
    PRINTDEBUG();
    return 1;
}

ESteamAPICallFailure SteamUtils::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) {
    PRINTDEBUG();
    return k_ESteamAPICallFailureSteamGone;
}

bool SteamUtils::GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed) {
    PRINTDEBUG();
    return 1;
}

void SteamUtils::RunFrame() {
    PRINTDEBUG();
}

uint32 SteamUtils::GetIPCCallCount() {
    PRINTDEBUG();
    return 0;
}

void SteamUtils::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) {
    PRINTDEBUG();
    
}

bool SteamUtils::IsOverlayEnabled() {
    PRINTDEBUG();
    return 1;
}

bool SteamUtils::BOverlayNeedsPresent() {
    PRINTDEBUG();
    return 0;
}

SteamAPICall_t SteamUtils::CheckFileSignature(const char *szFileName) {
    PRINTDEBUG();
    return NULL;
}

bool SteamUtils::ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength) {
    PRINTDEBUG();
    return 1;
}

uint32 SteamUtils::GetEnteredGamepadTextLength() {
    PRINTDEBUG();
    return 0;
}

bool SteamUtils::GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax) {
    PRINTDEBUG();
    return 1;
}
