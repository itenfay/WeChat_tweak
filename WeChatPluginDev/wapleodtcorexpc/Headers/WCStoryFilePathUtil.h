//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCStoryFilePathUtil : NSObject
{
}

+ (_Bool)cleanStoryMediaFileCacheSize;
+ (_Bool)cleanStoryWCDB;
+ (unsigned long long)getStoryMeidaFileCacheSize;
+ (unsigned long long)getStoryWCDBSize;
+ (id)getPhotoComposeMovieWithMovieFileName:(id)arg1;
+ (id)getMediaFolderPath;
+ (id)hashPathForStirng:(id)arg1;
+ (id)getStoryMediaFilePathWithTid:(id)arg1 ExtensionName:(id)arg2;
+ (id)mediaPathAppendFileName:(id)arg1;
+ (id)getPathForMediaDataWithTid:(id)arg1;
+ (id)getTmpPathForPreviewWithTid:(id)arg1;
+ (id)getPathForPreviewWithTid:(id)arg1;
+ (id)getPathForSightDataWithTid:(id)arg1;
+ (id)getTempPathForSightDataWithTid:(id)arg1;
+ (id)getPathForUploadThumbWithTid:(id)arg1;
+ (id)getPathForUploadVideoWithTid:(id)arg1;
+ (id)getUserWCStoryUploadMediaDir;
+ (id)getUserWCStoryMediaDir;
+ (id)getStoryBGMDir;
+ (id)getStorySettingPath;
+ (id)getUserWCStoryCommentFailedPath;
+ (id)getUserWCStoryCommentUploadingPath;
+ (id)getUserWCStoryTaskDeletePath;
+ (id)getUserWCStoryTaskFailPath;
+ (id)getUserWCStoryTaskRetryPath;
+ (id)getUserWCStoryUploadingTaskPath;
+ (id)getUserWCStoryDBPath;
+ (id)getUserWCStoryPostLimitPath;

@end

