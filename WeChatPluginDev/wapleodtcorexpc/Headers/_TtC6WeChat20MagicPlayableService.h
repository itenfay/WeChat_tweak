//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat20MagicPlayableService
{
    MISSING_TYPE *mainScriptCallback;
    MISSING_TYPE *mainScriptJSContext;
    MISSING_TYPE *$__lazy_storage_$_jsApiContext;
    MISSING_TYPE *config;
    MISSING_TYPE *magicbrush;
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *$__lazy_storage_$_mbVConsoleHelper;
    MISSING_TYPE *containerView;
    MISSING_TYPE *canvasView;
    MISSING_TYPE *pkg;
    MISSING_TYPE *manualPaused;
    MISSING_TYPE *startTime;
    MISSING_TYPE *usingOldJs;
    MISSING_TYPE *bootsPkg;
}

- (void).cxx_destruct;
- (id)init;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (id)getFileDataByPath:(id)arg1;
- (id)provideFileSystem;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
- (void)provideMainScriptWithJSContext:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(_Bool)arg1;
- (void)setContainerViewWithView:(id)arg1;
- (void)sendEventWithEvent:(id)arg1 data:(id)arg2;
- (void)setMuteWithMute:(_Bool)arg1;
- (void)manualResume;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithConfig:(id)arg1;

@end

