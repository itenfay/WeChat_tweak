//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingTPPlayerConfigManager
{
}

+ (long long)getConfigValueWithDict:(id)arg1 key:(id)arg2 defaultValue:(long long)arg3 error:(id *)arg4;
+ (_Bool)isEnableForceOpenWhenResume;
+ (_Bool)isEnableIndependentQueue;
- (void)tryCreateCacheFileDir;
- (id)fileCacheIdForUrl:(id)arg1 listenType:(unsigned int)arg2 cacheKey:(id)arg3;
- (id)fileDownloadingPathWithCacheId:(id)arg1;
- (id)fileTargetPathWithCacheId:(id)arg1 pathSuffix:(id)arg2;
- (id)cacheFilePathWithCacheId:(id)arg1;
- (id)cacheDataPath;
- (id)cacheConfigPath;
- (void)logWithLevel:(int)arg1 tag:(id)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 content:(id)arg6;
- (id)createTPPlayerEnaleCache:(_Bool)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

