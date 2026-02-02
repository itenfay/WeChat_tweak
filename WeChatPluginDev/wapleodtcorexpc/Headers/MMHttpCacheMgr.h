//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMHttpCacheMgr
{
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (void)ClearCacheDirByUsrName:(id)arg1;
+ (void)ClearCacheDir:(unsigned int)arg1;
+ (id)GetFilePath:(id)arg1 Type:(unsigned int)arg2;
+ (id)GetCacheDir:(unsigned int)arg1;
+ (unsigned int)GetCacheType:(id)arg1;
- (void)HttpConnectionFail:(id)arg1;
- (void)HttpConnectionFinished:(id)arg1 cachekey:(id)arg2 response:(id)arg3 ErrNo:(int)arg4;
- (void)LoadCache:(id *)arg1 CacheKey:(id)arg2 Type:(unsigned int)arg3;
- (_Bool)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4 RefererHeader:(id)arg5;
- (_Bool)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

