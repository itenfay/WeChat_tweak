//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WALocalCacheFilePathUtil : NSObject
{
}

+ (id)getAppBrandFrameworkLocalCacheRootDir;
+ (id)getAppBrandWebCacheRootDir;
+ (id)getPublicStoragePath;
+ (id)getPublicResPathUnpackedFromBundle;
+ (id)getPublicResPathWithDebugModeType:(unsigned long long)arg1 version:(unsigned long long)arg2;
+ (id)getPublicResDirWithDebugModeType:(unsigned long long)arg1;
+ (id)getWeAppLocalCacheFileNameWithVersion:(unsigned long long)arg1;
+ (id)getWeAppLocalCacheRootDirPathWithPluginCodeAppid:(id)arg1;
+ (id)getWeAppLocalCacheRootDirPathWithAppid:(id)arg1;
+ (id)getReleaseAppLocalCacheRootDirPath;
+ (id)getWeAppXnetCacheRootDirPath;
+ (id)getWeAppXnetCacheRootDirPathWithAppid:(id)arg1;
+ (id)getWeAppDebugLocalCacheRootDirPathWithAppid:(id)arg1;
+ (id)getDebugWeAppLocalCacheRootDirPath;
+ (id)getWeAppLocalCacheFilePathWithAppInfo:(id)arg1;
+ (id)getWeAppLocalCacheFilePathWithAppid:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3 packageType:(unsigned long long)arg4 moduleName:(id)arg5 encryptType:(unsigned long long)arg6 versionDesc:(id)arg7;
+ (id)videoCachesDirectoryPathWithURL:(id)arg1;
+ (id)downloadCachesDirectoryPath;

@end

