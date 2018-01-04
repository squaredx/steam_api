//
//  SteamNetworking.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-25.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamNetworking_h
#define SteamNetworking_h
#include "MainInc.h"

class SteamNetworking : public ISteamNetworking005
{
    
    bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iVirtualPort) override;
    
    bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int iVirtualPort) override;
    
    bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iVirtualPort) override;
    
    bool AcceptP2PSessionWithUser(CSteamID steamIDRemote) override;
    
    bool CloseP2PSessionWithUser(CSteamID steamIDRemote) override;
    
    bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int iVirtualPort) override;
    
    bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState) override;
    
    bool AllowP2PPacketRelay(bool bAllow) override;
    
    SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) override;
    
    SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) override;
    
    SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) override;
    
    bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) override;
    
    bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) override;
    
    bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable) override;
    
    bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize) override;
    
    bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize) override;
    
    bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket) override;
    
    bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket) override;
    
    bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote) override;
    
    bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort) override;
    
    ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket) override;
    
    int GetMaxPacketSize(SNetSocket_t hSocket) override;
    
};

#endif /* SteamNetworking_h */
