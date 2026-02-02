//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCUtil : NSObject
{
}

+ (struct CGSize)resizeSize:(struct CGSize)arg1 shortSideLen:(double)arg2;
+ (_Bool)isCameraAvailable;
+ (_Bool)microMerchantCleanSementCheckSectionMinSize;
+ (_Bool)microMerchantFoldSwitchOn;
+ (_Bool)isUploadLargeFileAPISwitchOn;
+ (unsigned int)uploadLargeFileAPIMinSize;
+ (id)getAppIdFromUrl:(id)arg1;
+ (void)writeImageData:(id)arg1 ToFilePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)safeGetPostDraftImagePath:(id)arg1;
+ (id)genPostDraftRelativePath;
+ (_Bool)isBatchDownloadSnsThumb;
+ (id)tryFixUTFCodingErr:(id)arg1;
+ (id)getDocSnWithUrl:(id)arg1;
+ (id)rangesOfString:(id)arg1 inString:(id)arg2;
+ (_Bool)isUseC2CUpload;
+ (id)wxamPathWithAbsolutePath:(id)arg1;
+ (id)wxamPathExtension;
+ (_Bool)isUseWxamDownload;
+ (_Bool)isUseWxamUpload;
+ (_Bool)isUseWxpcDownload;
+ (_Bool)isUseWxpcUpload;
+ (_Bool)isUseVCodecDownload;
+ (_Bool)isUseVCodecUpload;
+ (_Bool)isUseWebpDownload;
+ (_Bool)isUseWebpUpload;
+ (_Bool)isExistGroupName:(id)arg1 exceptGroup:(id)arg2;
+ (_Bool)saveWCReceivedAdList:(id)arg1;
+ (id)getWCReceivedAdList;
+ (_Bool)saveSnsAdExpInfo:(id)arg1;
+ (id)getSnsAdExpInfo;
+ (_Bool)saveWCSetting:(id)arg1;
+ (id)getWCSetting;
+ (id)mergeHomePage:(unsigned long long)arg1 minId:(unsigned long long)arg2 Left:(id)arg3 Right:(id)arg4 Added:(id)arg5 Changed:(id)arg6 Deleted:(id)arg7 PageCount:(unsigned long long)arg8;
+ (id)masterWorksConfigFilePathForLanguage:(id)arg1;
+ (id)masterWorksConfigDir;
+ (id)masterWorksDir;
+ (id)pathForBGImg:(id)arg1;
+ (id)pathForBGImgDir;
+ (long long)serverUrlTypeToLocalType:(long long)arg1;
+ (int)localUrlTypeToServerType:(long long)arg1;
+ (long long)serverActionTypeToLocalType:(long long)arg1;
+ (int)localActionTypeToServerType:(long long)arg1;
+ (long long)serverActionSceneToLocalScene:(long long)arg1;
+ (int)localActionSceneToServerScene:(long long)arg1;
+ (long long)serverContentDescSceneToLocalType:(long long)arg1;
+ (int)localContentDescSceneToServerType:(long long)arg1;
+ (long long)serverContentDescShowTypeToLocalType:(long long)arg1;
+ (int)localContentDescShowTypeToServerType:(long long)arg1;
+ (long long)serverContentTypeToLocalType:(long long)arg1;
+ (long long)localContentTypeToServerType:(long long)arg1;
+ (long long)serverMediaSubTypeToLocalType:(long long)arg1 serverSubType:(long long)arg2;
+ (long long)localMediaSubTypeToServerType:(long long)arg1 localSubType:(long long)arg2;
+ (long long)serverMediaTypeToLocalType:(long long)arg1;
+ (long long)localMediaTypeToServerType:(long long)arg1;
+ (id)mediaAbsolutePathWithRelativePath:(id)arg1;
+ (id)getWCReceivedAdListPath;
+ (id)getUserWCAdExpInfoPath;
+ (id)getUserWCSucceedItemPath;
+ (id)getUserSightDraftPostDraftSaveItemDir;
+ (id)getUserWCImagePostDraftSaveItemDir;
+ (id)getUserWCImageFoldedQueuePath;
+ (id)getUserWCSightFoldedQueuePath;
+ (id)getUserWCLikeFailedQueuePath;
+ (id)getUserWCCommentFailedQueuePath;
+ (id)getUserWCFailedQueuePath;
+ (id)uploadPathForUploadMedia:(id)arg1;
+ (id)getUserWCPendingTempResourceDir;
+ (id)getWCDBPath;
+ (id)getUserWCMediaUploadDir;
+ (id)getUserWCMediaDir;
+ (id)getUserWCDBRootDir;
+ (id)getUserWCRootDir;
+ (id)getLocationUrl:(id)arg1 Tid:(id)arg2;
+ (id)getLocationUrl:(id)arg1;
+ (void)exportLivePhotoVideoWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchLivePhotoVideoWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchImageExifInfoWithAsset:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)delayInvokingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)generateAssetErrorWithCode:(long long)arg1 errorDescription:(id)arg2;
+ (void)reportVideoThumbError:(unsigned long long)arg1 picFormat:(id)arg2 taskInfo:(id)arg3;
+ (id)picFormatInVideoThumbDownloadTask:(id)arg1;
+ (id)tryConvertWCDownloadImageData:(id)arg1 withCdnTaskInfo:(id)arg2 keyVector:(void *)arg3;
+ (id)thumbImageFromMMImage:(id)arg1;
+ (void)modifyImageArray:(id)arg1 byRemovingImageObjects:(id)arg2;
+ (id)getProductParametersWithProductId:(id)arg1 skAdItem:(id)arg2 url:(id)arg3;
+ (id)_taskUniqueKeyForId:(id)arg1;
+ (_Bool)deleteSightCompositeTaskFromDiskForTaskId:(id)arg1;
+ (id)recoverSightCompositeTaskFromDiskForTaskId:(id)arg1;
+ (_Bool)saveSightCompositeTaskToDisk:(id)arg1;
+ (id)_getWCSightDirPath;
+ (void)clearStubFromSightDraft:(id)arg1;
+ (void)clearStubFromUploadMedia:(id)arg1;
+ (void)clearStubFromDataItem:(id)arg1;
+ (void)clearCompositeTaskFromUploadTask:(id)arg1;
+ (void)loadUploadMedia:(id)arg1 forClientIdAtMediaIndex:(unsigned int)arg2;
+ (void)loadUploadMedia:(id)arg1 forSharingInfoFromCopy:(id)arg2;
+ (void)loadUploadMedia:(id)arg1 forSharingInfoFromUploadTask:(id)arg2;
+ (void)loadUploadMedia:(id)arg1 forEXIFInfo:(id)arg2;
+ (void)loadUploadMedia:(id)arg1 forSessionState:(id)arg2;
+ (_Bool)resizeSightThumbImageForUploadMedia:(id)arg1;
+ (id)encodeSightThumbBufferToWxAM:(id)arg1;
+ (id)uploadMediaFromSightDraft:(id)arg1 requiresThumb:(_Bool)arg2;
+ (id)uploadMediaFromSightDraft:(id)arg1;
+ (id)uploadTaskFromSightDraft:(id)arg1;
+ (void)loadSightDraft:(id)arg1 forExportedVideoURL:(id)arg2 videoCompositionAttr:(id)arg3;
+ (void)loadSightDraft:(id)arg1 forReportParam:(id)arg2 withThumbImage:(id)arg3;
+ (void)loadSightDraft:(id)arg1 forMiaoJianMetaInfoStr:(id)arg2;
+ (void)loadSightDraft:(id)arg1 forEditInfo:(id)arg2 srcVideoPath:(id)arg3;
+ (void)loadSightDraftItem:(id)arg1 forEditInfo:(id)arg2 compositionAttr:(id)arg3 originalVideoAsset:(id)arg4;
+ (void)loadEditVideoAttr:(id)arg1 fromSightCompositeTask:(id)arg2;
+ (id)sightDraftFromSightCompositeTask:(id)arg1;
+ (id)sightDraftItemWithVideoPath:(id)arg1 thumbImage:(id)arg2 resizesThumbImage:(_Bool)arg3;
+ (void)setUpOpenParams:(id)arg1 withComment:(id)arg2;
+ (id)filterTodayTimeStampsFromTimeStamps:(id)arg1;
+ (double)todayTimeIntervalAtHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;

@end

