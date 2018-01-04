//
//  SteamRemoteStorage.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-24.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef SteamRemoteStorage_h
#define SteamRemoteStorage_h
#include "MainInc.h"

class SteamRemoteStorage : public ISteamRemoteStorage012
{
    
    bool FileWrite(const char *pchFile, const void *pvData, int32 cubData) override;
    
    int32 FileRead(const char *pchFile, void *pvData, int32 cubDataToRead) override;
    
    bool FileForget(const char *pchFile) override;
    
    bool FileDelete(const char *pchFile) override;
    
    SteamAPICall_t FileShare(const char *pchFile) override;
    
    bool SetSyncPlatforms(const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) override;
    
    GID_t FileWriteStreamOpen(const char *pchFile) override;
    
    EResult FileWriteStreamWriteChunk(GID_t hStream, const void *pvData, int32 cubData) override;
    
    EResult FileWriteStreamClose(GID_t hStream) override;
    
    EResult FileWriteStreamCancel(GID_t hStream) override;
    
    bool FileExists(const char *pchFile) override;
    
    bool FilePersisted(const char *pchFile) override;
    
    int32 GetFileSize(const char *pchFile) override;
    
    int64 GetFileTimestamp(const char *pchFile) override;
    
    ERemoteStoragePlatform GetSyncPlatforms(const char *pchFile) override;
    
    int32 GetFileCount() override;
    
    const char *GetFileNameAndSize(int iFile, int32 *pnFileSizeInBytes) override;
    
    bool GetQuota(int32 *pnTotalBytes, int32 *puAvailableBytes) override;
    
    bool IsCloudEnabledForAccount() override;
    
    bool IsCloudEnabledForApp() override;
    
    void SetCloudEnabledForApp(bool bEnabled) override;
    
    SteamAPICall_t UGCDownload(UGCHandle_t hContent, uint32 uUnk) override;
    
    bool GetUGCDownloadProgress(UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes) override;
    
    bool GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner) override;
    
    int32 UGCRead(UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction) override;
    
    int32 GetCachedUGCCount() override;
    
    UGCHandle_t GetCachedUGCHandle(int32 iCachedContent) override;
    
    SteamAPICall_t PublishWorkshopFile(const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType) override;
    
    JobID_t CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) override;
    
    bool UpdatePublishedFileFile(JobID_t hUpdateRequest, const char *pchFile) override;
    
    bool UpdatePublishedFilePreviewFile(JobID_t hUpdateRequest, const char *pchPreviewFile) override;
    
    bool UpdatePublishedFileTitle(JobID_t hUpdateRequest, const char *pchTitle) override;
    
    bool UpdatePublishedFileDescription(JobID_t hUpdateRequest, const char *pchDescription) override;
    
    bool UpdatePublishedFileVisibility(JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility) override;
    
    bool UpdatePublishedFileTags(JobID_t hUpdateRequest, SteamParamStringArray_t *pTags) override;
    
    SteamAPICall_t CommitPublishedFileUpdate(JobID_t hUpdateRequest) override;
    
    SteamAPICall_t GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32) override;
    
    SteamAPICall_t DeletePublishedFile(PublishedFileId_t unPublishedFileId) override;
    
    SteamAPICall_t EnumerateUserPublishedFiles(uint32 uStartIndex) override;
    
    SteamAPICall_t SubscribePublishedFile(PublishedFileId_t unPublishedFileId) override;
    
    SteamAPICall_t EnumerateUserSubscribedFiles(uint32 uStartIndex) override;
    
    SteamAPICall_t UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) override;
    
    bool UpdatePublishedFileSetChangeDescription(JobID_t hUpdateRequest, const char *cszDescription) override;
    
    SteamAPICall_t GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) override;
    
    SteamAPICall_t UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) override;
    
    SteamAPICall_t GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) override;
    
    SteamAPICall_t EnumerateUserSharedWorkshopFiles(AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags) override;
    
    SteamAPICall_t PublishVideo(EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags) override;
    
    SteamAPICall_t SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) override;
    
    SteamAPICall_t EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32 uStartIndex) override;
    
    SteamAPICall_t EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags) override;
    
    SteamAPICall_t UGCDownloadToLocation(UGCHandle_t hContent, const char *cszLocation, uint32 unPriority) override;
    
};

#endif /* SteamRemoteStorage_h */
