//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJTemplateUtilities : NSObject
{
}

+ (id)checkSumOfFile:(id)arg1;
+ (unsigned long long)cleanMaasDir;
+ (unsigned long long)preGetMaasDirSize;
+ (_Bool)moveFile:(id)arg1 toFile:(id)arg2;
+ (_Bool)mergeSubDirectory:(id)arg1 toDestDirectory:(id)arg2;
+ (_Bool)unzipFile:(id)arg1 toDirectory:(id)arg2;
+ (_Bool)removeFile:(id)arg1;
+ (id)movieSessionOptions;
+ (id)maasTempPath;
+ (id)maasResourcePath;
+ (id)maasCachesPath;
+ (id)maasPersistentPath;
+ (id)clipBundleDirectory;
+ (id)cameraAuditPath;
+ (id)materialResourcePath;
+ (id)temporaryCdnDirectory;
+ (id)temporaryDirectoryForType:(unsigned int)arg1;
+ (id)temporaryRootDirectory;
+ (id)cachePreviewDirectory;
+ (id)cacheRootDirectory;
+ (id)preloadResourceDirectoryForType:(unsigned long long)arg1;
+ (id)preloadResourceRootDirectory;
+ (id)resourceDirectoryForType:(unsigned int)arg1;
+ (id)resourceRootDirectory;
+ (id)rootDirectory;
+ (id)getPreloadResourceFileNameWithTemplateId:(id)arg1 templateType:(unsigned long long)arg2 descUrl:(id)arg3 descVersion:(unsigned long long)arg4;
+ (id)getPreloadResourcePathWithTemplateInfo:(id)arg1;
+ (id)getPreloadResourcePathWithTemplateItem:(id)arg1;
+ (_Bool)_checkIfInstalledMiaoJianForScene:(unsigned long long)arg1 withShareParams:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (void)_onLaunchMJAppWithShareConfigure:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)_checkMomentsRegularForScene:(unsigned long long)arg1 withShareParams:(id)arg2 checkRegularBlock:(CDUnknownBlockType)arg3;
+ (void)_checkRegularForScene:(unsigned long long)arg1 withShareParams:(id)arg2 checkRegularBlock:(CDUnknownBlockType)arg3;
+ (void)launchMiaoJianAppFromScene:(unsigned long long)arg1 withShareParams:(id)arg2 resultBlock:(CDUnknownBlockType)arg3 doWhenWillLaunch:(CDUnknownBlockType)arg4;
+ (void)launchMiaoJianAppFromScene:(unsigned long long)arg1 withShareParams:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end

