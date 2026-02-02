//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WARenderCacheMgr
{
}

+ (id)cachePathForPubVersion:(id)arg1 username:(id)arg2 debugType:(unsigned int)arg3 version:(unsigned int)arg4 pagePath:(id)arg5;
+ (id)cachePathForRenderCacheInfo:(id)arg1;
- (void)deleteRenderCache:(id)arg1;
- (void)deleteAllRenderCacheIfPubVersionNot:(id)arg1;
- (void)deleteAllRenderCacheForUsername:(id)arg1 debugType:(unsigned int)arg2;
- (void)deleteRenderCacheForUsername:(id)arg1 debugType:(unsigned int)arg2 underAppVersion:(unsigned int)arg3;
- (_Bool)useMMKVForStorage;
- (id)mmkvKeyForRecord;
- (id)getInitialRenderCacheForUsername:(id)arg1 path:(id)arg2 debugType:(unsigned int)arg3 appVersion:(unsigned int)arg4 pubVersion:(id)arg5;
- (void)saveInitialRenderCache:(id)arg1 webviewData:(id)arg2 appserviceData:(id)arg3 forUsername:(id)arg4 path:(id)arg5 debugType:(unsigned int)arg6 appVersion:(unsigned int)arg7 pubVersion:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

