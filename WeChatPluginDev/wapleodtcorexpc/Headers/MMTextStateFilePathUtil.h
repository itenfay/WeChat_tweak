//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTextStateFilePathUtil : NSObject
{
}

+ (id)GetDBConfigPath;
+ (id)GetTextStateDBPath;
+ (id)GetTextStateUserDir;
+ (_Bool)cleanTextStateMediaFileCacheSize;
+ (id)getMediaFolderPath;
+ (id)hashPathForStirng:(id)arg1;
+ (id)getTextStateMediaFilePathWithTid:(id)arg1 ExtensionName:(id)arg2;
+ (id)mediaPathAppendFileName:(id)arg1;
+ (id)getPathForLikedData;
+ (id)getTmpPathForImageWithTid:(id)arg1;
+ (id)getPathForImageWithTid:(id)arg1;
+ (id)getTmpPathForPreviewWithTid:(id)arg1;
+ (id)getPathForPreviewWithTid:(id)arg1;
+ (id)getPathForWxamDataWithTid:(id)arg1;
+ (id)getPathForSightDataWithTid:(id)arg1;
+ (id)getTempPathForSightDataWithTid:(id)arg1;
+ (id)getPathForUploadWxamWithTid:(id)arg1;
+ (id)getPathForUploadThumbWithTid:(id)arg1;
+ (id)getPathForUploadVideoWithTid:(id)arg1;
+ (id)getPathForUploadImageWithTid:(id)arg1;
+ (id)getPathForUploadTempCacheDir;
+ (id)getUserTextStateCacheDir;
+ (id)getUserTextStateMediaUploadMediaDir;
+ (id)getUserTextStateMediaDir;

@end

