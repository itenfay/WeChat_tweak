//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBCommonAdapter, NSMutableDictionary, NSString, _TtC6WeChat20MagicSclJsApiContext, _TtC6WeChat25MagicSclServicePkgManager;
@protocol IMBPublicServiceDispatcher;

@interface MagicSclService : NSObject
{
    MBCommonAdapter *_mbCommonAdapter;
    _TtC6WeChat20MagicSclJsApiContext *_jsApiContext;
    _TtC6WeChat25MagicSclServicePkgManager *_pkgMgr;
    NSMutableDictionary *_canvasIdToBizName;
    id <IMBPublicServiceDispatcher> _dispatcher;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IMBPublicServiceDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) NSMutableDictionary *canvasIdToBizName; // @synthesize canvasIdToBizName=_canvasIdToBizName;
@property(retain, nonatomic) _TtC6WeChat25MagicSclServicePkgManager *pkgMgr; // @synthesize pkgMgr=_pkgMgr;
@property(retain, nonatomic) _TtC6WeChat20MagicSclJsApiContext *jsApiContext; // @synthesize jsApiContext=_jsApiContext;
@property(retain, nonatomic) MBCommonAdapter *mbCommonAdapter; // @synthesize mbCommonAdapter=_mbCommonAdapter;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (id)getAppId;
- (id)getParentViewController;
- (unsigned int)getDebugModeType;
- (void)setFrameSetStatusWithFrameSetId:(id)arg1 params:(id)arg2;
- (void)reportFrameSetReadyWithFrameSetId:(id)arg1;
- (id)getFrameSetWithFrameSetId:(id)arg1;
- (void)removeStartupCoverViewWithInstanceName:(id)arg1 frameSetId:(id)arg2;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)arg1 imageBlock:(CDUnknownBlockType)arg2;
- (void)startUpCoverViewReadyWithBizName:(id)arg1 frameSetId:(id)arg2;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (_Bool)setFlutterCanvasMaxFpsWithBizName:(id)arg1 params:(id)arg2;
- (void)setCanvasStatusWithBizName:(id)arg1 frameSetId:(id)arg2 params:(id)arg3;
- (id)getSclDelegate:(id)arg1;
- (id)providePlugin:(id)arg1;
- (id)getPkgInfo;
- (id)getPkgVersion;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)setupDispatcher:(id)arg1;
- (id)provideLifecycle;
- (id)provideConfig:(id)arg1;
- (id)getPkgMgr;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

