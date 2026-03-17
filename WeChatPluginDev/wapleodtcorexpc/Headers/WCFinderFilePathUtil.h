//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFilePathUtil : NSObject
{
}

+ (id)finderResourceFileTmpPathWithUrl:(id)arg1;
+ (id)finderResourceFilePathWithUrl:(id)arg1;
+ (id)getFinderActivityResPathWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
+ (id)getFinderActivityResTempPathWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
+ (id)getFinderActivityResBasePath;
+ (id)finderEditVideoTmpPath;
+ (id)finderEventCoverTmpPath;
+ (id)finderTrumpetImageTempSavePath;
+ (id)finderDynamicIconPathWithURL:(id)arg1;
+ (id)finderHeaderImageTempPathWithHeadImgURL:(id)arg1;
+ (_Bool)finderHeaderImageExistWithHeadImgURL:(id)arg1;
+ (id)finderHeaderImagePathWithHeadImgURL:(id)arg1;
+ (_Bool)cleanFinderPreloadCacheFile;
+ (_Bool)cleanFinderDynamicIconFileCacheSize;
+ (_Bool)cleanFinderHeaderFileCacheSize;
+ (_Bool)cleanFinderMediaFileCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)getFinderAllResourceCacheFileSize;
+ (unsigned long long)getFinderfinderDynamicIconCacheSize;
+ (unsigned long long)getFinderPreloadCacheFileCacheSize;
+ (unsigned long long)getFinderHeaderFileCacheSize;
+ (unsigned long long)getFinderMeidaFileCacheSize;
+ (id)postActionConfigArrayTempSavePath;
+ (id)finderRedDotFilePath;
+ (id)finderCommentQueuePath;
+ (id)finderCommentPostingPath;
+ (id)finderReportPostStateTempSavaPath;
+ (id)finderPublishMediaTextTempSavePath;
+ (id)finderPublishPureTextTempSavePath;
+ (id)gameLiveCoverTempSavePathWithGame:(id)arg1;
+ (id)liveCoverOriginalImagePath;
+ (id)liveCover16Vs9ImagePath;
+ (id)liveCover4Vs3ImagePath;
+ (id)liveCoverPermanentImagePath;
+ (id)liveCoverImagePath;
+ (id)tmpLocalCoverPathWithURL:(id)arg1;
+ (id)coverPathWithURL:(id)arg1;
+ (id)preloadCacheTempVideoPathWithURL:(id)arg1 fileFormat:(id)arg2;
+ (id)tempVideoPathWithURL:(id)arg1 fileFormat:(id)arg2;
+ (id)tempVideoPathWithURL:(id)arg1;
+ (id)preloadCacheVideoPathWithURL:(id)arg1 fileFormat:(id)arg2;
+ (id)videoPathWithURL:(id)arg1 fileFormat:(id)arg2;
+ (id)tmpLocalDirImageMediaPathWithURL:(id)arg1;
+ (id)tmpLocalDirVideoPathWithURL:(id)arg1;
+ (id)videoPathWithURL:(id)arg1;
+ (id)imageMediaPathWithURL:(id)arg1;
+ (id)tmpLocalFullScreenThumbPathWithURL:(id)arg1;
+ (id)fullScreenThumbPathWithURL:(id)arg1;
+ (id)tmpLocalPreviewPathWithURL:(id)arg1;
+ (id)previewPathWithURL:(id)arg1;
+ (id)imageTempMediaPathWithURL:(id)arg1;
+ (id)fullScreenThumbTempPathWithURL:(id)arg1;
+ (id)previewTempPathWithURL:(id)arg1;
+ (id)finderTempMediaFilePathWithURL:(id)arg1 fileFormat:(id)arg2 ExtensionName:(id)arg3;
+ (id)finderTempMediaFilePathWithURL:(id)arg1 ExtensionName:(id)arg2;
+ (id)hashPathForString:(id)arg1;
+ (id)hashPathForTid:(unsigned long long)arg1;
+ (id)finderMediaFilePathWithURL:(id)arg1 fileFormat:(id)arg2 ExtensionName:(id)arg3;
+ (id)finderPermanentMediaFilePathWithURL:(id)arg1 fileFormat:(id)arg2 ExtensionName:(id)arg3;
+ (id)finderPermanentMediaFilePathWithURL:(id)arg1 ExtensionName:(id)arg2;
+ (id)finderMediaFilePathWithURL:(id)arg1 ExtensionName:(id)arg2;
+ (id)finderMediaPreloadCachePathWithMediaURL:(id)arg1 fileFormat:(id)arg2 extensionName:(id)arg3;
+ (id)finderMediaFilePathWithTid:(unsigned long long)arg1 ExtensionName:(id)arg2;
+ (id)mediaTempPathAppendFileName:(id)arg1;
+ (id)finderUploadMediaDir;
+ (id)mediaPathAppendFileName:(id)arg1;
+ (id)debugDBPath;
+ (id)debugSettingPath;
+ (id)finderMentionedContactsPath;
+ (id)syncBufferPath;
+ (id)finderSyncBufferPath;
+ (id)finderUserInfoSettingPath;
+ (id)finderDynamicIconConfigPath;
+ (id)finderSettingPath;
+ (id)textCardTempPath;
+ (id)mediaDataPathWithTid:(unsigned long long)arg1;
+ (id)previewTempPathWithTid:(unsigned long long)arg1;
+ (id)previewPathWithTid:(unsigned long long)arg1;
+ (id)sightDataPathWithTid:(unsigned long long)arg1;
+ (id)tempPathForSightDataWithTId:(unsigned long long)arg1;
+ (id)uploadThumbPathWithTid:(unsigned long long)arg1;
+ (id)uploadVideoPathWithTid:(unsigned long long)arg1;
+ (id)finderDynamicIconDir;
+ (id)finderHeaderDir;
+ (id)localUsrLibrary;
+ (id)localUsrDirPath;
+ (id)finderMediaTempDir;
+ (id)finderMediaDir;
+ (id)finderWillReusePath;
+ (id)finderBackupPath;
+ (id)finderDeletePath;
+ (id)finderFailPath;
+ (id)finderTaskRetryPath;
+ (id)finderTaskUploadingTaskPath;
+ (id)finderTempSaveDirPath;
+ (id)settingDirPath;
+ (id)finderSettingDirPath;
+ (id)finderDataBaseDirPath;
+ (id)finderPostEncodeDirPath;
+ (id)finderUploadDirPath;
+ (id)finderAuthorDBPath;
+ (id)wechatDBPath;
+ (id)finderDBDirPath;
+ (id)finderDBPath;

@end

