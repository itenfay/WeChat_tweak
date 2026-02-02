//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface _TtC6WeChat15MagicSclBaseBiz : NSObject
{
    MISSING_TYPE *sessionIdToTime;
    MISSING_TYPE *appContextId;
    MISSING_TYPE *created;
    MISSING_TYPE *pendingStart;
    MISSING_TYPE *mainScriptInjected;
    MISSING_TYPE *sclEventEmitter;
    MISSING_TYPE *pendingEvents;
    MISSING_TYPE *canvasMgr;
    MISSING_TYPE *frameSets;
    MISSING_TYPE *lock;
    MISSING_TYPE *frameSetRoots;
    MISSING_TYPE *defaultJsApiContext;
    MISSING_TYPE *paused;
    MISSING_TYPE *starterDelegate;
    MISSING_TYPE *magicbrush;
}

- (void).cxx_destruct;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)reportFrameSetReadyWithFrameSetId:(id)arg1;
- (id)getFrameSetWithFrameSetId:(id)arg1;
- (void)setFrameSetStatusWithFrameSetId:(id)arg1 params:(id)arg2;
- (void)removeStartupCoverViewWithInstanceName:(id)arg1 frameSetId:(id)arg2;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)arg1 imageBlock:(CDUnknownBlockType)arg2;
- (void)startUpCoverViewReadyWithBizName:(id)arg1 frameSetId:(id)arg2;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (_Bool)setFlutterCanvasMaxFpsWithBizName:(id)arg1 params:(id)arg2;
- (void)setCanvasStatusWithBizName:(id)arg1 frameSetId:(id)arg2 params:(id)arg3;
- (id)getJsApiContextDelegate;
- (id)bizVersionInfo;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)addFrameSetJsapiWithConfig:(id)arg1 type:(long long)arg2;
- (id)getFrameSetRootWithId:(id)arg1;
- (long long)frameSetRootCount;
- (void)destroyFrameSetRootWithId:(id)arg1;
- (id)createFrameSetRootWithPath:(id)arg1 query:(id)arg2 useClientClick:(_Bool)arg3;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (void)destroy;
- (void)resume;
- (void)pause;
- (void)start;
- (void)setup:(id)arg1;
- (id)init;
@property(nonatomic, readonly) id <_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;
- (void)reportFirstFrameWithFrameSet:(id)arg1;
- (void)reportFrameSetReadyWithFrameSet:(id)arg1;
- (void)reportFrameSetAvaliableWithFrameSet:(id)arg1;
- (void)resetReport;

@end

