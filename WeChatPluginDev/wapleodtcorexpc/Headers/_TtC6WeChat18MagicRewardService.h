//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat18MagicRewardService
{
    MISSING_TYPE *$__lazy_storage_$_listeners;
    MISSING_TYPE *$__lazy_storage_$_prepareResCallbacksDict;
    MISSING_TYPE *prepareResCallbackId;
    MISSING_TYPE *currentScene;
    MISSING_TYPE *currentBundle;
    MISSING_TYPE *_biz;
    MISSING_TYPE *_frameRate;
    MISSING_TYPE *_qualityLevel;
    MISSING_TYPE *_pixelRatio;
}

- (void).cxx_destruct;
- (id)init;
- (void)onPkgUpdateFail:(id)arg1 reason:(unsigned long long)arg2;
- (void)onPkgUpdateSuccess:(id)arg1 pkgVersion:(id)arg2;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onMainScriptInjected:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)addListener:(id)arg1;
- (void)updateResourcesWithZipPath:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)destroy;
- (void)preload:(long long)arg1;
- (void)forceUpdate;
- (void)prepareResourceWithResourceName:(id)arg1 url:(id)arg2 md5:(id)arg3 force:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)isPkgExist;
- (_Bool)isCodeVersionSupported:(id)arg1;
- (id)getCodeVersion;
- (void)fetchEngineStatus:(CDUnknownBlockType)arg1;
@property(nonatomic) float pixelRatio;
@property(nonatomic) long long qualityLevel;
@property(nonatomic) long long frameRate;

@end

