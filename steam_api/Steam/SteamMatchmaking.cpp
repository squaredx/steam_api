//
//  SteamMatchmaking.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-25.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamMatchmaking.h"


int SteamMatchmaking::GetFavoriteGameCount() {
    PRINTDEBUG();
    return 0;
}

bool SteamMatchmaking::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer) {
    PRINTDEBUG();
    return false;
}

int SteamMatchmaking::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    PRINTDEBUG();
    return 0;
}

bool SteamMatchmaking::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    PRINTDEBUG();
    return false;
}

SteamAPICall_t SteamMatchmaking::RequestLobbyList() {
    PRINTDEBUG();
    return NULL;
}

void SteamMatchmaking::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType) {
    PRINTDEBUG();
}

void SteamMatchmaking::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType) {
    PRINTDEBUG();
}

void SteamMatchmaking::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo) {
    PRINTDEBUG();
}

void SteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) {
    PRINTDEBUG();
}

CSteamID SteamMatchmaking::GetLobbyByIndex(int iLobby) {
    PRINTDEBUG();
    return CSteamID(0xDEADC0DE, k_EUniversePublic, k_EAccountTypeIndividual);
}

SteamAPICall_t SteamMatchmaking::CreateLobby(ELobbyType eLobbyType, int cMaxMembers) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamMatchmaking::JoinLobby(CSteamID steamIDLobby) {
    PRINTDEBUG();
    return NULL;
}

void SteamMatchmaking::LeaveLobby(CSteamID steamIDLobby) {
    PRINTDEBUG();
}

bool SteamMatchmaking::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    PRINTDEBUG();
    return false;
}

int SteamMatchmaking::GetNumLobbyMembers(CSteamID steamIDLobby) {
    PRINTDEBUG();
    return 0;
}

CSteamID SteamMatchmaking::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    PRINTDEBUG();
    return CSteamID(0xDEADC0DE, k_EUniversePublic, k_EAccountTypeIndividual);
}

const char *SteamMatchmaking::GetLobbyData(CSteamID steamIDLobby, const char *pchKey) {
    PRINTDEBUG();
    return "";
}

bool SteamMatchmaking::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) {
    PRINTDEBUG();
    return false;
}

int SteamMatchmaking::GetLobbyDataCount(CSteamID steamIDLobby) {
    PRINTDEBUG();
    return 0;
}

bool SteamMatchmaking::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize) {
    PRINTDEBUG();
    return false;
}

bool SteamMatchmaking::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey) {
    PRINTDEBUG();
    return false;
}

const char *SteamMatchmaking::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey) {
    PRINTDEBUG();
    return "";
}

void SteamMatchmaking::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) {
    PRINTDEBUG();
}

bool SteamMatchmaking::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody) {
    PRINTDEBUG();
    return false;
}

int SteamMatchmaking::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType) {
    PRINTDEBUG();
    return 0;
}

bool SteamMatchmaking::RequestLobbyData(CSteamID steamIDLobby) {
    PRINTDEBUG();
    return false;
}

void SteamMatchmaking::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    PRINTDEBUG();
}

bool SteamMatchmaking::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer) {
    PRINTDEBUG();
    return false;
}

bool SteamMatchmaking::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) {
    PRINTDEBUG();
    return false;
}

int SteamMatchmaking::GetLobbyMemberLimit(CSteamID steamIDLobby) {
    PRINTDEBUG();
    return 0;
}

bool SteamMatchmaking::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType) {
    PRINTDEBUG();
    return false;
}

bool SteamMatchmaking::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable) {
    PRINTDEBUG();
    return false;
}

CSteamID SteamMatchmaking::GetLobbyOwner(CSteamID steamIDLobby) {
    PRINTDEBUG();
    return CSteamID(0xDEADC0DE, k_EUniversePublic, k_EAccountTypeIndividual);
}

bool SteamMatchmaking::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) {
    PRINTDEBUG();
    return false;
}
