//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, UIView;

@interface _TtC6WeChat17MagicEmojiBaseBiz
{
    MISSING_TYPE *runtimeView;
    MISSING_TYPE *frame;
    MISSING_TYPE *delegate;
    MISSING_TYPE *useJitMode;
}

- (void).cxx_destruct;
- (id)init;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)destroy;
- (void)dispatchClientEventWithEventName:(id)arg1 data:(id)arg2;
- (void)resume;
- (void)start;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic, retain) UIView *runtimeView; // @synthesize runtimeView;

@end

