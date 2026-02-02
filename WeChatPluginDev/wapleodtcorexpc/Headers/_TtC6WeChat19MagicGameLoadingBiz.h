//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat19MagicGameLoadingBiz
{
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *mbVConsoleHelper;
    MISSING_TYPE *pkgMgr;
    MISSING_TYPE *jsapiContextImpl;
    MISSING_TYPE *magicGameLoadingVC;
    MISSING_TYPE *framesetRootId;
}

- (void).cxx_destruct;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (id)getParentViewController;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (id)getMagicGameLoadingVC;
- (void)setMagicGameLoadingVCWithVc:(id)arg1;
- (id)getAppId;
- (unsigned int)getDebugModeType;
- (long long)addCustomViewWithView:(id)arg1;
- (id)bizPkgInfo;
- (id)bizVersionInfo;
- (void)destroy;
- (void)onMainScriptInjected:(id)arg1;
- (void)destroyFrameSetRootWithId:(id)arg1;
- (void)unbindFrameSetView:(id)arg1;
- (void)bindFrameSetView:(id)arg1;
- (void)preLayoutFrameSet;
- (id)getFrameSetRoot;
- (void)start;
- (id)init;

@end

