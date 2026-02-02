//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, MBWeakProxy, MagicBrushPerformance, NSCondition, NSMutableDictionary, NSString, NSThread;
@protocol MagicBrushCoreJSStuffDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreScreenCanvasDelegate;

@interface MagicBrushCore : NSObject
{
    _Bool _pauseByBackground;
    _Bool _pauseByUser;
    _Bool _suspendInBackground;
    _Bool _autoHighFreshRate;
    _Bool _isFirstNativeRenderScreenCanvasCreated;
    id <MagicBrushCoreScreenCanvasDelegate> _windowDelegate;
    id <MagicBrushCoreResourceDelegate> _resDelegate;
    id <MagicBrushCoreJSStuffDelegate> _jsDelegate;
    MagicBrushPerformance *_performance;
    void *_runtime;
    CADisplayLink *_displayLink;
    NSMutableDictionary *_canvasInfoMap;
    NSThread *_thread;
    NSCondition *_bgCondition;
    MBWeakProxy *_weakProxy;
    struct CmdBufferResultHelperOC *_cmdbuffer_helper;
}

+ (_Bool)supportRenderdoc;
- (void).cxx_destruct;
@property(nonatomic) struct CmdBufferResultHelperOC *cmdbuffer_helper; // @synthesize cmdbuffer_helper=_cmdbuffer_helper;
@property(retain, nonatomic) MBWeakProxy *weakProxy; // @synthesize weakProxy=_weakProxy;
@property(nonatomic) _Bool isFirstNativeRenderScreenCanvasCreated; // @synthesize isFirstNativeRenderScreenCanvasCreated=_isFirstNativeRenderScreenCanvasCreated;
@property(nonatomic) _Bool autoHighFreshRate; // @synthesize autoHighFreshRate=_autoHighFreshRate;
@property(retain, nonatomic) NSCondition *bgCondition; // @synthesize bgCondition=_bgCondition;
@property(nonatomic) _Bool suspendInBackground; // @synthesize suspendInBackground=_suspendInBackground;
@property(nonatomic) _Bool pauseByUser; // @synthesize pauseByUser=_pauseByUser;
@property(nonatomic) _Bool pauseByBackground; // @synthesize pauseByBackground=_pauseByBackground;
@property(nonatomic) __weak NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSMutableDictionary *canvasInfoMap; // @synthesize canvasInfoMap=_canvasInfoMap;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) void *runtime; // @synthesize runtime=_runtime;
@property(retain, nonatomic) MagicBrushPerformance *performance; // @synthesize performance=_performance;
@property(nonatomic) __weak id <MagicBrushCoreJSStuffDelegate> jsDelegate; // @synthesize jsDelegate=_jsDelegate;
@property(nonatomic) __weak id <MagicBrushCoreResourceDelegate> resDelegate; // @synthesize resDelegate=_resDelegate;
@property(nonatomic) __weak id <MagicBrushCoreScreenCanvasDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onSetUserPreferredFps:(double)arg1;
- (void)stopGLProfile;
- (void)startGLProfile:(id)arg1;
- (void)stopCaptureFrames:(int)arg1;
- (void)startCaptureFrames:(int)arg1 count:(int)arg2;
- (void)setupFrameCapture:(unsigned long long)arg1;
- (void)unregisterExternalPlainPixel:(int)arg1;
- (_Bool)registerExternaPlainPixelRGBA:(const char *)arg1 withId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)onNativeRenderSwapWindow;
- (id)onNativeRenderProcessBuffer:(id)arg1 extBuffer:(id)arg2;
- (id)notifyNativeRenderFontLoaded:(id)arg1;
- (void)notifyNativeRenderImageDestroyed:(int)arg1;
- (id)notifyNativeRenderImageLoaded:(id)arg1 withId:(int)arg2;
- (id)onNativeRenderCanvasToDataURL:(int)arg1 type:(id)arg2 encoderOptions:(float)arg3;
- (void)notifyNativeRenderCanvasGotContext:(int)arg1 contextId:(int)arg2 contextType:(id)arg3 options:(id)arg4;
- (_Bool)getBool:(id)arg1 withKey:(id)arg2 andDefaultValue:(_Bool)arg3;
- (void)notifyNativeRenderCanvasSetStyle:(int)arg1 x:(float)arg2 y:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (void)notifyNativeRenderCanvasDestroyed:(int)arg1;
- (void)notifyNativeRenderCanvasResized:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)notifyNativeRenderCanvasCreated:(int)arg1 width:(int)arg2 height:(int)arg3 onscreen:(_Bool)arg4;
- (void)release2DMemory;
- (void)fetchCanvasContentAsync:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)fetchCanvasContent:(int)arg1;
- (id)fetchCanvasContentImpl:(int)arg1;
- (void)onRenderTargetDestroyed:(id)arg1 forCanvas:(int)arg2;
- (void)onRenderTargetCreated:(id)arg1 forCanvas:(int)arg2;
- (id)createRenderTargetWithPixelBufferDelegate:(id)arg1 forCanvas:(int)arg2;
- (id)createRenderTargetWithLayer:(id)arg1 forCanvas:(int)arg2;
- (struct __CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(id)arg2;
- (id)onLoadDataFromURLSync:(id)arg1;
- (void)onLoadDataFromURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onJsEventSend:(id)arg1 data:(id)arg2;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (void)onJsLog:(id)arg1;
- (void)onCanvasFirstFrameRendered:(int)arg1;
- (void)onCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onCanvasRemove:(int)arg1;
- (void)onCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onCanvasContextCreated:(int)arg1 contextId:(int)arg2 contextType:(int)arg3;
- (void)onCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onCanvasCreated:(int)arg1 onscreen:(_Bool)arg2;
- (void)postToJsThread:(CDUnknownBlockType)arg1;
- (void)runOnJsThreadSync:(CDUnknownBlockType)arg1;
- (void)runOnJsThread:(CDUnknownBlockType)arg1;
- (void)realRunOnJsThread:(CDUnknownBlockType)arg1;
- (void)sendTouchEvent:(id)arg1 forCanvas:(int)arg2;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)unregisterAppLifecycleEvent;
- (void)registerAppLifecycleEvent;
- (void)destroy;
- (void)resume;
- (void)pause;
- (void)run:(id)arg1;
- (void)bindTo:(id)arg1;
- (void)setup:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

