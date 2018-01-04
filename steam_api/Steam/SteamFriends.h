//
//  SteamFriends.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-25.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamFriends_h
#define SteamFriends_h
#include "MainInc.h"

class SteamFriends : public ISteamFriends015
{
    
    const char *GetPersonaName() override;
    
    SteamAPICall_t SetPersonaName(const char *pchPersonaName) override;
    
    EPersonaState GetPersonaState() override;
    
    int GetFriendCount(int iFriendFlags) override;
    
    CSteamID GetFriendByIndex(int iFriend, int iFriendFlags) override;
    
    EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend) override;
    
    EPersonaState GetFriendPersonaState(CSteamID steamIDFriend) override;
    
    const char *GetFriendPersonaName(CSteamID steamIDFriend) override;
    
    bool GetFriendGamePlayed(CSteamID steamID, FriendGameInfo_t *pGamePlayInfo) override;
    
    const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) override;
    
    int GetFriendSteamLevel(CSteamID steamIDFriend) override;
    
    const char *GetPlayerNickname(CSteamID steamIDPlayer) override;
    
    int16 GetFriendsGroupCount() override;
    
    int16 GetFriendsGroupIDByIndex(int32) override;
    
    const char *GetFriendsGroupName(int16) override;
    
    unknown_ret GetFriendsGroupMembersCount(int16) override;
    
    unknown_ret GetFriendsGroupMembersList(int16, CSteamID *, int32) override;
    
    bool HasFriend(CSteamID steamIDFriend, int iFriendFlags) override;
    
    int GetClanCount() override;
    
    CSteamID GetClanByIndex(int iClan) override;
    
    const char *GetClanName(CSteamID steamIDClan) override;
    
    const char *GetClanTag(CSteamID steamIDClan) override;
    
    bool GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting) override;
    
    SteamAPICall_t DownloadClanActivityCounts(CSteamID groupIDs[], int nIds) override;
    
    int GetFriendCountFromSource(CSteamID steamIDSource) override;
    
    CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) override;
    
    bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) override;
    
    void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) override;
    
    void ActivateGameOverlay(const char *pchDialog) override;
    
    void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) override;
    
    void ActivateGameOverlayToWebPage(const char *pchURL) override;
    
    void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) override;
    
    void SetPlayedWith(CSteamID steamIDUserPlayedWith) override;
    
    void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) override;
    
    int GetSmallFriendAvatar(CSteamID steamIDFriend) override;
    
    int GetMediumFriendAvatar(CSteamID steamIDFriend) override;
    
    int GetLargeFriendAvatar(CSteamID steamIDFriend) override;
    
    bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) override;
    
    SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan) override;
    
    CSteamID GetClanOwner(CSteamID steamIDClan) override;
    
    int GetClanOfficerCount(CSteamID steamIDClan) override;
    
    CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) override;
    
    EUserRestriction GetUserRestrictions() override;
    
    bool SetRichPresence(const char *pchKey, const char *pchValue) override;
    
    void ClearRichPresence() override;
    
    const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) override;
    
    int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) override;
    
    const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) override;
    
    void RequestFriendRichPresence(CSteamID steamIDFriend) override;
    
    bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) override;
    
    int GetCoplayFriendCount() override;
    
    CSteamID GetCoplayFriend(int iCoplayFriend) override;
    
    int GetFriendCoplayTime(CSteamID steamIDFriend) override;
    
    AppId_t GetFriendCoplayGame(CSteamID steamIDFriend) override;
    
    SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan) override;
    
    bool LeaveClanChatRoom(CSteamID steamIDClan) override;
    
    int GetClanChatMemberCount(CSteamID steamIDClan) override;
    
    CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser) override;
    
    bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText) override;
    
    int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) override;
    
    bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) override;
    
    bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) override;
    
    bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat) override;
    
    bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat) override;
    
    bool SetListenForFriendsMessages(bool bInterceptEnabled) override;
    
    bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend) override;
    
    int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType) override;
    
    SteamAPICall_t GetFollowerCount(CSteamID steamID) override;
    
    SteamAPICall_t IsFollowing(CSteamID steamID) override;
    
    SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex) override;
    
};

#endif /* SteamFriends_h */
