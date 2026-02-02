//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WAEJJavaScriptView;
@protocol WAOpenGLScreenCanvasDelegate, WAOpenGLViewDelegate;

@interface WAOpenGLView : UIView
{
    id <WAOpenGLViewDelegate> delegate;
    WAEJJavaScriptView *_glView;
    double _startTime;
    id <WAOpenGLScreenCanvasDelegate> _screenCanvasDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAOpenGLScreenCanvasDelegate> screenCanvasDelegate; // @synthesize screenCanvasDelegate=_screenCanvasDelegate;
@property(nonatomic) __weak id <WAOpenGLViewDelegate> delegate; // @synthesize delegate;
- (struct __CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(id)arg2;
- (void)onScreenCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(struct CGRect)arg3;
- (void)onScreenCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onScreenCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (id)onCreateScreenCanvas:(unsigned int)arg1 viewId:(int)arg2;
- (void *)sg_get_state:(void *)arg1;
- (unsigned int)sg_get_texture:(struct OpaqueJSValue *)arg1;
- (void)sg_swap:(void *)arg1;
- (void)sg_make_current:(void *)arg1;
- (void)sg_release_context:(void *)arg1;
- (void)sg_retain_context:(void *)arg1;
- (void *)sg_get_context:(struct OpaqueJSValue *)arg1;
- (struct WasmAdaptorImpl *)createWasmWebGLAdaptor;
- (void)onGLViewStyleChanged:(unsigned int)arg1 withStyle:(struct CGRect)arg2;
- (_Bool)setCaptureDelegate:(unsigned int)arg1 mark:(unsigned int)arg2 options:(id)arg3 delegate:(id)arg4;
- (id)getObjClass;
- (void)setBindingDelegate:(id)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)present;
- (void)setUseCommandBuffer:(_Bool)arg1;
- (void)getCanvasImageAsync:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getCanvasImageWithScaleFactor:(unsigned int)arg1 Factor:(float)arg2;
- (id)getCanvasImage:(unsigned int)arg1;
- (void)getImageFromOffscreenCanvas:(id)arg1;
- (struct __CVBuffer *)getPixelBuffer:(unsigned int)arg1;
- (void)setComponent:(_Bool)arg1;
- (void)setLandScape:(_Bool)arg1;
- (void)enableDebug:(_Bool)arg1;
- (void)resetJankInfo;
- (CDStruct_b6d5f750)getPerformance;
- (unsigned long long)getMainCanvasContextType;
- (long long)getVarianceFps;
- (unsigned int)getRunDuration;
- (void)onEJViewEnterForeground;
- (void)onEJViewEnterBackground;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)onFrameEnd;
- (void)onFrameBegin;
- (void)onFrameTimeout:(int)arg1;
- (void)logGLError:(int)arg1 name:(id)arg2;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (void)cancelAllFileTask;
- (id)getFileDataWithUrl:(id)arg1;
- (id)createImageWithSvgData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (_Bool)isEnterBackground;
- (void)setReportVarianceFps:(_Bool)arg1;
- (void)setInterrupt:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (void)suspend;
- (void)resume;
- (void)pause;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2 ignoreException:(_Bool)arg3;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)clearCaches;
- (void)loadScriptAtPath:(id)arg1;
- (void)layoutSubviews;
- (void)initSubContext:(struct OpaqueJSContext *)arg1;
- (void)setupJSContextOnSubThread:(struct OpaqueJSContext *)arg1 appId:(id)arg2 name:(const char *)arg3 config:(id)arg4;
- (void)commonInit;
- (id)initWithFrameOnlyMainThreadPart:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(struct OpaqueJSContext *)arg2 appId:(id)arg3 name:(const char *)arg4 config:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

