//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat19MagicDynamicBaseBiz
{
    MISSING_TYPE *magicbrush;
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *mbVConsoleHelper;
    MISSING_TYPE *created;
    MISSING_TYPE *pendingStart;
    MISSING_TYPE *paused;
    MISSING_TYPE *mainScriptInjected;
    MISSING_TYPE *pendingEvents;
    MISSING_TYPE *lock;
    MISSING_TYPE *viewController;
    MISSING_TYPE *jsapiContextImpl;
}

- (void).cxx_destruct;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (unsigned int)getDebugModeType;
- (id)provideCurrentViewController;
- (void)destroy;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (void)resume;
- (void)pause;
- (void)start;
- (void)setup:(id)arg1;
- (id)init;

@end

