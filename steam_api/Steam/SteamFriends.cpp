//
//  SteamFriends.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-25.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamFriends.h"
#include "FriendsCommon.h"

const char *SteamFriends::GetPersonaName() {
    PRINTDEBUG();
    return "A good name";
}

SteamAPICall_t SteamFriends::SetPersonaName(const char *pchPersonaName) {
    PRINTDEBUG();
    return NULL;
}

EPersonaState SteamFriends::GetPersonaState() {
    PRINTDEBUG();
    return k_EPersonaStateOnline;
}

int SteamFriends::GetFriendCount(int iFriendFlags) {
    PRINTDEBUG();
    return 10;
}

CSteamID SteamFriends::GetFriendByIndex(int iFriend, int iFriendFlags) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

EFriendRelationship SteamFriends::GetFriendRelationship(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return k_EFriendRelationshipFriend;
}

EPersonaState SteamFriends::GetFriendPersonaState(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return k_EPersonaStateOnline;
}

const char *SteamFriends::GetFriendPersonaName(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return "Not a good name";
}

bool SteamFriends::GetFriendGamePlayed(CSteamID steamID, FriendGameInfo_t *pGamePlayInfo) {
    PRINTDEBUG();
    return true;
}

const char *SteamFriends::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    PRINTDEBUG();
    return "ayyy";
}

int SteamFriends::GetFriendSteamLevel(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return 10;
}

const char *SteamFriends::GetPlayerNickname(CSteamID steamIDPlayer) {
    PRINTDEBUG();
    return "WADDUP";
}

int16 SteamFriends::GetFriendsGroupCount() {
    PRINTDEBUG();
    return 0;
}

int16 SteamFriends::GetFriendsGroupIDByIndex(int32) {
    PRINTDEBUG();
    return 0;
}

const char *SteamFriends::GetFriendsGroupName(int16) {
    PRINTDEBUG();
    return "good group";
}

unknown_ret SteamFriends::GetFriendsGroupMembersCount(int16) {
    PRINTDEBUG();
    return NULL;
}

unknown_ret SteamFriends::GetFriendsGroupMembersList(int16, CSteamID *, int32) {
    PRINTDEBUG();
    return NULL;
}

bool SteamFriends::HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    PRINTDEBUG();
    return true;
}

int SteamFriends::GetClanCount() {
    PRINTDEBUG();
    return 0;
}

CSteamID SteamFriends::GetClanByIndex(int iClan) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

const char *SteamFriends::GetClanName(CSteamID steamIDClan) {
    PRINTDEBUG();
    return "";
}

const char *SteamFriends::GetClanTag(CSteamID steamIDClan) {
    PRINTDEBUG();
    return "";
}

bool SteamFriends::GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting) {
    PRINTDEBUG();
    return false;
}

SteamAPICall_t SteamFriends::DownloadClanActivityCounts(CSteamID groupIDs[], int nIds) {
    PRINTDEBUG();
    return NULL;
}

int SteamFriends::GetFriendCountFromSource(CSteamID steamIDSource) {
    PRINTDEBUG();
    return 0;
}

CSteamID SteamFriends::GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

bool SteamFriends::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    PRINTDEBUG();
    return false;
}

void SteamFriends::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    PRINTDEBUG();
}

void SteamFriends::ActivateGameOverlay(const char *pchDialog) {
    PRINTDEBUG();
}

void SteamFriends::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) {
    PRINTDEBUG();
}

void SteamFriends::ActivateGameOverlayToWebPage(const char *pchURL) {
    PRINTDEBUG();
}

void SteamFriends::ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) {
    PRINTDEBUG();
}

void SteamFriends::SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    PRINTDEBUG();
}

void SteamFriends::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    PRINTDEBUG();
}

int SteamFriends::GetSmallFriendAvatar(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return 0;
}

int SteamFriends::GetMediumFriendAvatar(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return 0;
}

int SteamFriends::GetLargeFriendAvatar(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return 0;
}

bool SteamFriends::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    PRINTDEBUG();
    return false;
}

SteamAPICall_t SteamFriends::RequestClanOfficerList(CSteamID steamIDClan) {
    PRINTDEBUG();
    return NULL;
}

CSteamID SteamFriends::GetClanOwner(CSteamID steamIDClan) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

int SteamFriends::GetClanOfficerCount(CSteamID steamIDClan) {
    PRINTDEBUG();
    return 0;
}

CSteamID SteamFriends::GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

EUserRestriction SteamFriends::GetUserRestrictions() {
    PRINTDEBUG();
    return k_nUserRestrictionNone;
}

bool SteamFriends::SetRichPresence(const char *pchKey, const char *pchValue) {
    PRINTDEBUG();
    return false;
}

void SteamFriends::ClearRichPresence() {
    PRINTDEBUG();
}

const char *SteamFriends::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) {
    PRINTDEBUG();
    return "";
}

int SteamFriends::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return 0;
}

const char *SteamFriends::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) {
    PRINTDEBUG();
    return "";
}

void SteamFriends::RequestFriendRichPresence(CSteamID steamIDFriend) {
    PRINTDEBUG();
}

bool SteamFriends::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) {
    PRINTDEBUG();
    return false;
}

int SteamFriends::GetCoplayFriendCount() {
    PRINTDEBUG();
    return 0;
}

CSteamID SteamFriends::GetCoplayFriend(int iCoplayFriend) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

int SteamFriends::GetFriendCoplayTime(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return 0;
}

AppId_t SteamFriends::GetFriendCoplayGame(CSteamID steamIDFriend) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamFriends::JoinClanChatRoom(CSteamID steamIDClan) {
    PRINTDEBUG();
    return NULL;
}

bool SteamFriends::LeaveClanChatRoom(CSteamID steamIDClan) {
    PRINTDEBUG();
    return false;
}

int SteamFriends::GetClanChatMemberCount(CSteamID steamIDClan) {
    PRINTDEBUG();
    return 0;
}

CSteamID SteamFriends::GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
    PRINTDEBUG();
    return CSteamID(0xABCD1234, k_EUniversePublic, k_EAccountTypeIndividual);
}

bool SteamFriends::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText) {
    PRINTDEBUG();
    return false;
}

int SteamFriends::GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) {
    PRINTDEBUG();
    return 0;
}

bool SteamFriends::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) {
    PRINTDEBUG();
    return false;
}

bool SteamFriends::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
    PRINTDEBUG();
    return false;
}

bool SteamFriends::OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
    PRINTDEBUG();
    return false;
}

bool SteamFriends::CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
    PRINTDEBUG();
    return false;
}

bool SteamFriends::SetListenForFriendsMessages(bool bInterceptEnabled) {
    PRINTDEBUG();
    return false;
}

bool SteamFriends::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend) {
    PRINTDEBUG();
    return false;
}

int SteamFriends::GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType) {
    PRINTDEBUG();
    return 0;
}

SteamAPICall_t SteamFriends::GetFollowerCount(CSteamID steamID) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamFriends::IsFollowing(CSteamID steamID) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamFriends::EnumerateFollowingList(uint32 unStartIndex) {
    PRINTDEBUG();
    return NULL;
}

