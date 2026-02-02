//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureSession, EAGLContext, NSString;

@interface NativeCaptureSessionIOS : NSObject
{
    _Bool _auto_focus_once;
    int _target_width;
    int _target_height;
    int _used_width;
    int _used_height;
    long long _cameraPosition;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_captureDevice;
    void *_callback;
    struct __CVBuffer *_curPixelBuffer;
    struct __CVBuffer *_curAcquiredPixelBuffer;
    struct __CVOpenGLESTextureCache *_textureCacheRef;
    EAGLContext *_glContextOld;
    EAGLContext *_glContextNew;
    struct ARNativeCameraFrame _curFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool auto_focus_once; // @synthesize auto_focus_once=_auto_focus_once;
@property(nonatomic) int used_height; // @synthesize used_height=_used_height;
@property(nonatomic) int used_width; // @synthesize used_width=_used_width;
@property(nonatomic) int target_height; // @synthesize target_height=_target_height;
@property(nonatomic) int target_width; // @synthesize target_width=_target_width;
@property(retain, nonatomic) EAGLContext *glContextNew; // @synthesize glContextNew=_glContextNew;
@property(retain, nonatomic) EAGLContext *glContextOld; // @synthesize glContextOld=_glContextOld;
@property(nonatomic) struct __CVOpenGLESTextureCache *textureCacheRef; // @synthesize textureCacheRef=_textureCacheRef;
@property(nonatomic) struct __CVBuffer *curAcquiredPixelBuffer; // @synthesize curAcquiredPixelBuffer=_curAcquiredPixelBuffer;
@property(nonatomic) struct ARNativeCameraFrame curFrame; // @synthesize curFrame=_curFrame;
@property(nonatomic) struct __CVBuffer *curPixelBuffer; // @synthesize curPixelBuffer=_curPixelBuffer;
@property(nonatomic) void *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)switchCameraPosition:(long long)arg1;
- (void)updateCaptureSession;
- (id)cameraWithPosition:(long long)arg1;
- (int)getNativeHeight;
- (int)getNativeWidth;
- (float)getFOV;
- (void)restoreEGLContext;
- (void)makeEGLContext;
- (void)setupEGLContext:(void *)arg1;
- (void)setupTextureCache;
- (struct ARNativeCameraFrame)acquireLatestFrame;
- (void)stopRunning;
- (void)startRunning;
- (_Bool)isRunning;
- (id)initWithCallback:(void *)arg1 width:(int)arg2 height:(int)arg3 autoFocus_once:(_Bool)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

