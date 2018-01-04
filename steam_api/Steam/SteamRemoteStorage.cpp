//
//  SteamRemoteStorage.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-24.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include "SteamRemoteStorage.h"

bool SteamRemoteStorage::FileWrite(const char *pchFile, const void *pvData, int32 cubData) {\
    PRINTDEBUG();
    return true;
}

int32 SteamRemoteStorage::FileRead(const char *pchFile, void *pvData, int32 cubDataToRead) {
    PRINTDEBUG();
    return 0;
}

bool SteamRemoteStorage::FileForget(const char *pchFile) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::FileDelete(const char *pchFile) {
    PRINTDEBUG();
    return true;
}

SteamAPICall_t SteamRemoteStorage::FileShare(const char *pchFile) {
    PRINTDEBUG();
    return NULL;
}

bool SteamRemoteStorage::SetSyncPlatforms(const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) {
    PRINTDEBUG();
    return true;
}

GID_t SteamRemoteStorage::FileWriteStreamOpen(const char *pchFile) {
    PRINTDEBUG();
    return NULL;
}

EResult SteamRemoteStorage::FileWriteStreamWriteChunk(GID_t hStream, const void *pvData, int32 cubData) {
    PRINTDEBUG();
    return k_EResultOK;
}

EResult SteamRemoteStorage::FileWriteStreamClose(GID_t hStream) {
    PRINTDEBUG();
    return k_EResultOK;
}

EResult SteamRemoteStorage::FileWriteStreamCancel(GID_t hStream) {
    PRINTDEBUG();
    return k_EResultOK;
}

bool SteamRemoteStorage::FileExists(const char *pchFile) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::FilePersisted(const char *pchFile) {
    PRINTDEBUG();
    return true;
}

int32 SteamRemoteStorage::GetFileSize(const char *pchFile) {
    PRINTDEBUG();
    return 0;
}

int64 SteamRemoteStorage::GetFileTimestamp(const char *pchFile) {
    PRINTDEBUG();
    return 0;
}

ERemoteStoragePlatform SteamRemoteStorage::GetSyncPlatforms(const char *pchFile) {
    PRINTDEBUG();
    return k_ERemoteStoragePlatformAll;
}

int32 SteamRemoteStorage::GetFileCount() {
    PRINTDEBUG();
    return 0;
}

const char* SteamRemoteStorage::GetFileNameAndSize(int iFile, int32 *pnFileSizeInBytes) {
    PRINTDEBUG();
    return "true";
}

bool SteamRemoteStorage::GetQuota(int32 *pnTotalBytes, int32 *puAvailableBytes) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::IsCloudEnabledForAccount() {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::IsCloudEnabledForApp() {
    PRINTDEBUG();
    return true;
}

void SteamRemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
    PRINTDEBUG();
}

SteamAPICall_t SteamRemoteStorage::UGCDownload(UGCHandle_t hContent, uint32 uUnk) {
    PRINTDEBUG();
    return NULL;
}

bool SteamRemoteStorage::GetUGCDownloadProgress(UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner) {
    PRINTDEBUG();
    return true;
}

int32 SteamRemoteStorage::UGCRead(UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction) {
    PRINTDEBUG();
    return 0;
}

int32 SteamRemoteStorage::GetCachedUGCCount() {
    PRINTDEBUG();
    return 0;
}

UGCHandle_t SteamRemoteStorage::GetCachedUGCHandle(int32 iCachedContent) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::PublishWorkshopFile(const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType) {
    PRINTDEBUG();
    return NULL;
}

JobID_t SteamRemoteStorage::CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    PRINTDEBUG();
    return NULL;
}

bool SteamRemoteStorage::UpdatePublishedFileFile(JobID_t hUpdateRequest, const char *pchFile) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::UpdatePublishedFilePreviewFile(JobID_t hUpdateRequest, const char *pchPreviewFile) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::UpdatePublishedFileTitle(JobID_t hUpdateRequest, const char *pchTitle) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::UpdatePublishedFileDescription(JobID_t hUpdateRequest, const char *pchDescription) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::UpdatePublishedFileVisibility(JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility) {
    PRINTDEBUG();
    return true;
}

bool SteamRemoteStorage::UpdatePublishedFileTags(JobID_t hUpdateRequest, SteamParamStringArray_t *pTags) {
    PRINTDEBUG();
    return true;
}

SteamAPICall_t SteamRemoteStorage::CommitPublishedFileUpdate(JobID_t hUpdateRequest) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::EnumerateUserPublishedFiles(uint32 uStartIndex) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::EnumerateUserSubscribedFiles(uint32 uStartIndex) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    PRINTDEBUG();
    return NULL;
}

bool SteamRemoteStorage::UpdatePublishedFileSetChangeDescription(JobID_t hUpdateRequest, const char *cszDescription) {
    PRINTDEBUG();
    return true;
}

SteamAPICall_t SteamRemoteStorage::GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::EnumerateUserSharedWorkshopFiles(AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::PublishVideo(EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32 uStartIndex) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags) {
    PRINTDEBUG();
    return NULL;
}

SteamAPICall_t SteamRemoteStorage::UGCDownloadToLocation(UGCHandle_t hContent, const char *cszLocation, uint32 unPriority) {
    PRINTDEBUG();
    return NULL;
}
