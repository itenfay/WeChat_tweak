//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat23MagicNewPlayableService
{
    MISSING_TYPE *$__lazy_storage_$_jsApiContext;
    MISSING_TYPE *initConfig;
    MISSING_TYPE *magicbrush;
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *$__lazy_storage_$_mbVConsoleHelper;
    MISSING_TYPE *pendingEvents;
    MISSING_TYPE *containerView;
    MISSING_TYPE *canvasView;
    MISSING_TYPE *pkg;
    MISSING_TYPE *manualPaused;
    MISSING_TYPE *startTime;
    MISSING_TYPE *mainScriptInjected;
}

- (void).cxx_destruct;
- (id)init;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)postMessageToMiniProgramLibWithExtra:(id)arg1;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(_Bool)arg1;
- (void)injectJsFilesWithJsInfoFileArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContainerViewWithView:(id)arg1;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (void)setMuteWithMute:(_Bool)arg1;
- (void)setManualPauseStatus;
- (void)manualResume;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithConfig:(id)arg1;

@end

