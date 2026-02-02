//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat22MagicCardStarterSclBiz
{
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *mbVConsoleHelper;
    MISSING_TYPE *pkgMgr;
    MISSING_TYPE *jsapiContextImpl;
    MISSING_TYPE *frameSetRootId;
    MISSING_TYPE *_bizName;
    MISSING_TYPE *delegate;
    MISSING_TYPE *destroyCallback;
    MISSING_TYPE *bizConfig;
    MISSING_TYPE *mbJsApiList;
    MISSING_TYPE *appBrandJsApiList;
    MISSING_TYPE *frameSetRootMap;
    MISSING_TYPE *frameSetRootConfigWithViewCache;
    MISSING_TYPE *_preloadingMap;
    MISSING_TYPE *hasStarted;
    MISSING_TYPE *hasStartedByPreload;
    MISSING_TYPE *isBizActive;
    MISSING_TYPE *PreloadMaxSize;
    MISSING_TYPE *PRELOAD_ITEM_EXPIRED_TIME_MS;
    MISSING_TYPE *bizVc;
}

- (void).cxx_destruct;
- (id)init;
- (id)getAppId;
- (id)getParentViewController;
- (unsigned int)getDebugModeType;
- (long long)addCustomViewWithView:(id)arg1;
- (id)getBizAppConfig;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)notifyJsEventWithJsEvent:(id)arg1;
- (void)destroy;
- (void)onMainScriptInjected:(id)arg1;
- (void)start;
- (void)deactive;
- (void)activeWithViewController:(id)arg1;
- (void)removeAllFrameSetViewWithRootConfig:(id)arg1;
- (void)removeFrameSetViewWithRootConfig:(id)arg1 frameSetName:(id)arg2;
- (void)scrollAllOnScreenFrameSetViewWithRootConfig:(id)arg1 offsetHeight:(double)arg2 listViewTop:(double)arg3;
- (void)bindFrameSetViewWithRootConfig:(id)arg1 containerView:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
- (void)onStartUpCoverReadyWithFrameSetId:(id)arg1;
- (void)preloadWithRootConfig:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3 containerRect:(struct CGRect)arg4 preloadStrategy:(long long)arg5;

@end

