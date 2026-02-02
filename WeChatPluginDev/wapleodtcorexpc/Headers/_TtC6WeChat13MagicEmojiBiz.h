//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, UIView;

@interface _TtC6WeChat13MagicEmojiBiz
{
    MISSING_TYPE *createdTime;
    MISSING_TYPE *delegate;
    MISSING_TYPE *magicbrush;
    MISSING_TYPE *adapter;
    MISSING_TYPE *package;
    MISSING_TYPE *packageUDR;
    MISSING_TYPE *$__lazy_storage_$_mbVConsoleHelper;
    MISSING_TYPE *eventTaskQueue;
    MISSING_TYPE *$__lazy_storage_$_semaphore;
    MISSING_TYPE *envStatus;
    MISSING_TYPE *$__lazy_storage_$_easterEggElementDict;
    MISSING_TYPE *easterEggTimeout;
    MISSING_TYPE *runtimeView;
    MISSING_TYPE *frame;
    MISSING_TYPE *belowInputContainerWrapper;
    MISSING_TYPE *useUDR;
}

- (void).cxx_destruct;
- (void)shakeAllVisiableViews:(_Bool)arg1;
- (id)getMetaByID:(id)arg1 needFrame:(_Bool)arg2;
- (id)getVisibleMetaDict:(_Bool)arg1;
- (id)getInstanceName;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)setCoverViewContainerBelowInputCoverView:(id)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)resume;
- (void)pause;
- (void)setFrame:(struct CGRect)arg1;
- (void)dispatchClientEventWithEventName:(id)arg1 data:(id)arg2;
- (void)dispatch:(id)arg1 data:(id)arg2;
- (void)sendWithScene:(long long)arg1 emojiData:(id)arg2;
- (void)destroy;
- (void)start;
- (void)setup;
- (void)dealloc;
- (id)init;
@property(nonatomic, retain) UIView *runtimeView; // @synthesize runtimeView;

@end

