//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonUtil : NSObject
{
}

+ (id)PackageIdForCustomEmoticonType:(unsigned long long)arg1;
+ (id)GetPathOfEmoticonUploadQueue;
+ (id)GetUploadPathOfEmoticonInUploadDirForMd5:(id)arg1 isWxam:(_Bool)arg2;
+ (id)GetPathOfUploadEmoticonDir;
+ (id)GetStablePathOfEmoticonForMd5:(id)arg1 cleanable:(_Bool)arg2 isWxam:(_Bool)arg3;
+ (id)GetUploadPathOfEmoticonInTempDirForMd5:(id)arg1 isWxam:(_Bool)arg2;
+ (id)GetDownloadingPathOfEmoticonInTempDirForMd5:(id)arg1;
+ (id)GetPathOfEmoticonWebGifInWKTempDirForMd5:(id)arg1;
+ (id)GetPathOfEmoticonWebGifInTempDirForMd5:(id)arg1;
+ (id)GetPathOfEmoticonInTempDirForMd5:(id)arg1;
+ (id)GetPathOfWKTempEmoticonDir;
+ (id)GetPathOfTempEmoticonDir;
+ (id)pathOfCleanableDirWithWxAM:(_Bool)arg1;
+ (id)pathOfNotCleanDirWithWxAM:(_Bool)arg1;
+ (id)pathOfCleanableDir;
+ (id)pathOfNotCleanDir;
+ (id)pathOfAutoCleanDir;
+ (id)fileNameForMd5:(id)arg1 isWxAM:(_Bool)arg2;
+ (void)cleanFileWithMd5:(id)arg1 isWxAM:(_Bool)arg2;
+ (_Bool)InternalMoveToTargetPath:(id)arg1 originPath:(id)arg2 originData:(id)arg3;
+ (_Bool)InternalMoveToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 originData:(id)arg3 isCleanable:(_Bool)arg4;
+ (id)AESDecryptWithKeyString:(id)arg1 andData:(id)arg2;
+ (_Bool)migrationEmoticonForMd5:(id)arg1 toDirIsCleanable:(_Bool)arg2;
+ (_Bool)moveFileToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 originData:(id)arg3 isCleanable:(_Bool)arg4;
+ (_Bool)moveFileToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 isCleanable:(_Bool)arg3;
+ (_Bool)trySaveCustomEmoticonThumbForMd5:(id)arg1 data:(id)arg2;
+ (_Bool)saveEmoticonToEmoticonDirForMd5:(id)arg1 data:(id)arg2 isCleanable:(_Bool)arg3;
+ (id)loadDataOfEmoticonForMd5:(id)arg1 offset:(unsigned int)arg2 maxLen:(unsigned int)arg3;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2 ignoreWxAM:(_Bool)arg3;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2;
+ (id)dataOfEmoticonForMd5:(id)arg1;
+ (_Bool)tryRemoveWrongWxAMFileForMd5:(id)arg1;
+ (_Bool)removeFileOfEmoticonForMd5:(id)arg1;
+ (_Bool)fileExistInNotCleanDirOfEmoticonForMd5:(id)arg1;
+ (_Bool)fileExistOfEmoticonForMd5:(id)arg1;
+ (long long)fileSizeOfEmoticonForMd5:(id)arg1;
+ (id)pathOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2 ignoreWxAM:(_Bool)arg3;
+ (id)pathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)pathOfCustomThumbDir;
+ (id)pathOfThumbDir;
+ (id)thumbPathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)thumbPathOfEmoticonForMd5:(id)arg1;
+ (id)thumbPathOfCustomEmoticonForMd5:(id)arg1;
+ (_Bool)isEmoticonOverSizeWithMd5:(id)arg1;
+ (_Bool)isEmoticonOverSize:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (_Bool)isSingleFrameWithData:(id)arg1;
+ (_Bool)isWxAMData:(id)arg1;
+ (_Bool)isEnableToUploadWxAM;
+ (_Bool)isEnableToDownloadWxAM;
+ (_Bool)isSupportWxAM;
+ (void)setWxAMConfig:(id)arg1;
+ (int)emojiTypeForImageData:(id)arg1;
+ (_Bool)FileExist:(id)arg1 byUtime:(_Bool)arg2;
+ (_Bool)isInGetDetailBlockListForProductId:(id)arg1;
+ (void)addAppid:(id)arg1 designerId:(id)arg2 activityId:(id)arg3 thumbImgUrl:(id)arg4 attachedText:(id)arg5 attachedTextColor:(id)arg6 lensId:(id)arg7 linkId:(id)arg8 toExtInfo:(id)arg9;
+ (id)extInfoForAppid:(id)arg1 DesignerId:(id)arg2 activityId:(id)arg3 thumbImgUrl:(id)arg4 attachedText:(id)arg5 attachedTextColor:(id)arg6 lensId:(id)arg7 linkId:(id)arg8;
+ (unsigned short)cacheSizeForCleanCacheMgrWithNeedRemove:(_Bool)arg1;
+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (id)getEmoticonDBPath;
+ (id)getUserEmotionDocumentsDir;
+ (_Bool)unZipRes:(id)arg1 toPath:(id)arg2;
+ (id)GetPathOfEmotionPersonalizedVocabulary;
+ (id)GetPathOfEmojiRecentUseDataFile;
+ (id)GetPathOfRewardTipsStatisticsDataFile;
+ (id)getEmotionRewardInfoCacheForPid:(id)arg1;
+ (id)getEmotionRewardInfoCacheDir;
+ (id)getUserEmotionCommonDataDir;
+ (id)GetAnimateEmojiDir;
+ (id)getLensIconCacheDir;
+ (id)getLensIconTempDir;
+ (id)getLensPackageZipTempDir;
+ (id)getEmoticonVideoRecordTempDir;
+ (id)GetEmoticonLensConfigDir;
+ (id)GetWord2EmojiResDir;
+ (id)GetEmojiEggConfigDir;
+ (id)GetEmojiSuggestConfigDir;
+ (id)GetEmojiPanelConfigDir;
+ (id)GetNewEmojiConfigDir;
+ (id)GetTempPathOfUnZipDir;
+ (id)getEmotionSetInfoDir;
+ (id)getEmotionSetInfoPicFilePathForSetKey:(id)arg1 type:(unsigned long long)arg2;
+ (id)getEmotionActivityDecodeFilePathForActivityId:(id)arg1;
+ (id)getEmotionLinkDecodeFilePathForLinkId:(id)arg1 md5:(id)arg2;
+ (id)getEmotionLinkDecodeDir;
+ (id)getEmotionActivityDecodeDir;
+ (id)getEmotionDesignerIdDecodeFilePath;
+ (id)getEmotionPersonalDesignerFilePathForUin:(unsigned int)arg1;
+ (id)getEmotionPersonalDesignerDir;
+ (id)getEmotionCommonCacheDir;
+ (id)genUniqueIdWithOriginMd5:(id)arg1 finderUserName:(id)arg2;
+ (id)appendUniqueIdentifier:(id)arg1 toPICData:(id)arg2;
+ (id)createGifFromWxAMData:(id)arg1;
+ (id)imageWithoutHalfTransparent:(id)arg1 bgR:(int)arg2 bgG:(int)arg3 bgB:(int)arg4;
+ (id)createWxAMForImages:(id)arg1 duration:(double)arg2 qp:(int)arg3 useWXAM3:(_Bool)arg4;
+ (id)createGifForImages:(id)arg1 duration:(double)arg2;
+ (void)appendList:(id)arg1 withQuery:(id)arg2 toSet:(id)arg3 andCombineArray:(id)arg4;
+ (void)appendItem:(id)arg1 toSet:(id)arg2 andCombineArray:(id)arg3;
+ (void)fullFillDBWrap:(id)arg1 withRecommendInfoWrap:(id)arg2;
+ (id)mergeLocalList:(id)arg1 withSvrList:(id)arg2 shuffleEnable:(_Bool)arg3 recentUse:(id)arg4 query:(id)arg5;
+ (_Bool)realHasAlphaForImage:(id)arg1;
+ (id)dataRepresentationForImage:(id)arg1;
+ (_Bool)isEmoticonLimitedReduced;
+ (_Bool)isEmoticonIPpageLiteAppEnabled;
+ (_Bool)isEmoticonDesignerProfileLiteAppEnabled;
+ (_Bool)isEmoticonBrowseAllOtherLiteAppEnabled;
+ (_Bool)isEmoticonBrowseActivityLiteAppEnabled;
+ (_Bool)isEmoticonBrowseStoreLiteAppEnabled;
+ (_Bool)isEmoticonDetailLiteAppEnabled;
+ (_Bool)isEmoticonHomePageLiteAppEnabled;
+ (_Bool)isFinderSourceEnabled;
+ (_Bool)isEmotionEditEnable;
+ (_Bool)isCustomEmoticonInBlackList;
+ (_Bool)isEmoticonLimited;
+ (_Bool)isEmoticonAllow;

@end

