//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;
@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface _TtC6WeChat17MagicBrandBaseBiz
{
    MISSING_TYPE *flutterPlugin;
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *pkgMgr;
    MISSING_TYPE *bizVc;
    MISSING_TYPE *$__lazy_storage_$_preInitedFrameSetRoot;
    MISSING_TYPE *jsapiContextImpl;
    MISSING_TYPE *testPendingJs;
}

- (void).cxx_destruct;
- (id)init;
- (id)bizAppConfig;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)testJsWithTestJs:(id)arg1;
- (id)getAppId;
- (id)getParentViewController;
- (unsigned int)getDebugModeType;
- (void)getBrandServiceSessionIdWithCallback:(CDUnknownBlockType)arg1;
- (void)invokeFlutterApiWithEvent:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)showCustomHalfScreenDialogWithExtra:(id)arg1;
- (void)dismissPopupWindow;
- (void)showPopupWindowWithMask:(_Bool)arg1 maskColor:(long long)arg2;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)destroy;
- (void)resume;
- (void)pause;
- (void)start;
@property(nonatomic, readonly) id <_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;

@end

