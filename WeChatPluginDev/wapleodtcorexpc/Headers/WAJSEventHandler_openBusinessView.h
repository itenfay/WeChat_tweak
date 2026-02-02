//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSDictionary, NSString, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_openBusinessView
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
    NSString *_bizTypeStr;
    _Bool _isSyncRequest;
    _Bool _disableVisibilityEvent;
    NSDictionary *_dicParam;
    MemoryMappedKV *_mmkv;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableVisibilityEvent; // @synthesize disableVisibilityEvent=_disableVisibilityEvent;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(nonatomic) _Bool isSyncRequest; // @synthesize isSyncRequest=_isSyncRequest;
@property(retain, nonatomic) NSDictionary *dicParam; // @synthesize dicParam=_dicParam;
- (void)didGetLiteAppVC:(id)arg1 isHalfScreen:(_Bool)arg2 isTransparent:(_Bool)arg3;
- (void)endWithFailErrMsg:(id)arg1 params:(id)arg2;
- (void)endWithOKParams:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)navigateToMiniProgramWitAppID:(id)arg1 userName:(id)arg2 debugMode:(unsigned long long)arg3 pagePath:(id)arg4 extraData:(id)arg5 privateExtraData:(id)arg6 agentId:(id)arg7 sourceType:(unsigned int)arg8 preScene:(unsigned int)arg9 preSceneNote:(id)arg10 scene:(unsigned int)arg11 sceneNote:(id)arg12 originScene:(unsigned int)arg13 transparentBackgroundEnabled:(_Bool)arg14;
- (void)navigateToMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3 pagePath:(id)arg4 transparentBackgroundEnabled:(_Bool)arg5;
- (void)openLiteApp:(id)arg1 appId:(id)arg2 path:(id)arg3 query:(id)arg4;
- (void)handleAuthorizationForLaunchResponse:(id)arg1 request:(id)arg2 isCache:(_Bool)arg3;
- (void)requestAuthorizationForLaunch:(id)arg1 queryStr:(id)arg2 referrerAppId:(id)arg3;
- (void)cacheResponseIfNeeded:(id)arg1 forBusinessType:(id)arg2 source:(int)arg3;
- (id)getValidCacheResponseForBusinessType:(id)arg1 source:(int)arg2;
- (id)mmkvKeyForBusinessType:(id)arg1 source:(int)arg2;
- (void)handleJSEvent:(id)arg1;

@end

