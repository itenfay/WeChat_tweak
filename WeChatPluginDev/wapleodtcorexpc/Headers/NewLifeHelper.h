//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NewLifeHelper : NSObject
{
}

+ (void)setIlinkGetWifiInfoCallback;
+ (_Bool)isDiscoverSearchEnabled;
+ (_Bool)postJumpNewLifeFlutterFlow;
+ (void)goToNewlifeFlutterFlow:(id)arg1 postScene:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)migratePictureLocationPermission;
+ (int)getUptimeInMilliseconds;
+ (id)countStringWithCount:(long long)arg1 isAuthor:(_Bool)arg2;
+ (struct CGSize)chatImageSizeWithSize:(struct CGSize)arg1;
+ (_Bool)wxamCompress:(id)arg1 targetPath:(id)arg2 useWxAM3:(_Bool)arg3;
+ (void)wxamDealModel:(id)arg1 name:(id)arg2 targetFolderPath:(id)arg3;
+ (id)compressImagesAtPath:(id)arg1 targetFolderPath:(id)arg2;
+ (id)compressImage:(id)arg1 compressType:(unsigned long long)arg2 targetPath:(id)arg3;
+ (id)createNewLifeFeedCompressConfig:(unsigned long long)arg1;
+ (void)asyncProcessAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)saveImageAsPng:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (id)getNewLifeDatabaseFolderPath;
+ (id)getNewLifeDocumentsRootFolderPath;
+ (id)getUniqueDraftImagePath;
+ (id)getNewLifeAutoCleanCacheFolderPath;
+ (id)getNewLifeShareCoverUrlKey:(id)arg1;
+ (void)saveNewLifeStreamCacheData:(id)arg1 ofType:(unsigned int)arg2;
+ (id)getNewLifeStreamCachePathForType:(unsigned int)arg1;
+ (id)getNewLifeStreamCacheFolderPath;
+ (id)getNewLifeDraftFolderPath;
+ (id)getNewLifePrivateRootFolderPath;
+ (id)getFixUrl:(id)arg1;
+ (id)fixAbsolutePath:(id)arg1;

@end

