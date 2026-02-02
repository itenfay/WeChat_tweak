//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface WAPackageInfoCacheLogic : NSObject
{
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableDictionary *_dicUnpackedPackageInfo;
    NSMutableSet *_setUnpackedPkgFilePath;
    long long _unpackTime;
    NSMutableDictionary *_dicCacheFileAccessedTimeRecord;
}

- (void).cxx_destruct;
- (long long)getAccessedTimeWithFullUrl:(id)arg1;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)arg1;
- (long long)getUnpackTime;
- (_Bool)isString:(id)arg1 inArray:(id)arg2;
- (_Bool)unpackPublicResPkgFromPath:(id)arg1 isDebugMode:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (void)removePackageFilePathCache:(id)arg1;
- (void)clearAllPkgInfo;
- (_Bool)hasUnpackedPackageWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (_Bool)unpackPkgFromPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4 packageType:(unsigned long long)arg5 extParams:(id)arg6;
- (void)removePackageCacheIfDifferentPackageType:(unsigned long long)arg1 appId:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (_Bool)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (id)getCacheFileInfoKeyWithSubPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (void)dealloc;
- (id)init;

@end

