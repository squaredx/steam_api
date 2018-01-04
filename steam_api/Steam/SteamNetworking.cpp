//
//  SteamNetworking.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-25.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamNetworking.h"


bool SteamNetworking::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iVirtualPort) {
    //PRINTDEBUG();
    return true;
}

bool SteamNetworking::IsP2PPacketAvailable(uint32 *pcubMsgSize, int iVirtualPort) {
    //PRINTDEBUG();
    return false;
}

bool SteamNetworking::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iVirtualPort) {
    //PRINTDEBUG();
    return true;
}

bool SteamNetworking::AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::CloseP2PSessionWithUser(CSteamID steamIDRemote) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::CloseP2PChannelWithUser(CSteamID steamIDRemote, int iVirtualPort) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::AllowP2PPacketRelay(bool bAllow) {
    PRINTDEBUG();
    return true;
}

SNetListenSocket_t SteamNetworking::CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) {
    PRINTDEBUG();
    return NULL;
}

SNetSocket_t SteamNetworking::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) {
    PRINTDEBUG();
    return NULL;
}

SNetSocket_t SteamNetworking::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) {
    PRINTDEBUG();
    return NULL;
}

bool SteamNetworking::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote) {
    PRINTDEBUG();
    return true;
}

bool SteamNetworking::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort) {
    PRINTDEBUG();
    return true;
}

ESNetSocketConnectionType SteamNetworking::GetSocketConnectionType(SNetSocket_t hSocket) {
    PRINTDEBUG();
    return k_ESNetSocketConnectionTypeUDP;
}

int SteamNetworking::GetMaxPacketSize(SNetSocket_t hSocket) {
    PRINTDEBUG();
    return 255;
}
