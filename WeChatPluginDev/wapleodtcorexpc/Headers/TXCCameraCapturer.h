//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, NSMutableSet, NSString, TXCCameraCaptureConfig, TXCDispatchQueue;
@protocol OS_dispatch_queue;

@interface TXCCameraCapturer : NSObject
{
    struct atomic<unsigned int> _subscribersCount;
    _Bool _supportsFaceDetection;
    _Bool _isRunning;
    _Bool _isCustomCaptureSize;
    unsigned long long captureType;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    TXCCameraCaptureConfig *_config;
    NSMutableSet *_subscribers;
    AVCaptureSession *_session;
    AVCaptureVideoDataOutput *_output;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    AVCaptureConnection *_connection;
    AVCaptureMetadataOutput *_metaOutput;
    CDUnknownBlockType _metaOutputHandler;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (_Bool)isCameraDevice:(id)arg1;
+ (id)presetSizes;
+ (id)sizeToPresetMap;
+ (id)presetOfResolution:(struct CGSize)arg1;
+ (id)deviceOfPosition:(_Bool)arg1;
+ (id)deviceWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCustomCaptureSize; // @synthesize isCustomCaptureSize=_isCustomCaptureSize;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) _Bool supportsFaceDetection; // @synthesize supportsFaceDetection=_supportsFaceDetection;
@property(copy, nonatomic) CDUnknownBlockType metaOutputHandler; // @synthesize metaOutputHandler=_metaOutputHandler;
@property(retain, nonatomic) AVCaptureMetadataOutput *metaOutput; // @synthesize metaOutput=_metaOutput;
@property(retain, nonatomic) AVCaptureConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain) AVCaptureDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) AVCaptureVideoDataOutput *output; // @synthesize output=_output;
@property(readonly, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(readonly, nonatomic) TXCCameraCaptureConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)notifyDeviceUpdated:(id)arg1 isConnected:(_Bool)arg2;
- (void)handleDeviceDisconnected:(id)arg1;
- (void)handleDeviceConnected:(id)arg1;
- (void)handleCaptureSessionRuntimeError:(id)arg1;
- (void)handleCaptureSessionInterruptionEnded:(id)arg1;
- (void)handleCaptureSessionInterrupted:(id)arg1;
- (void)setupNotifications;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)notifyFrame:(id)arg1 error:(id)arg2;
- (void)processCapturedFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)setSessionPreset:(id)arg1;
- (void)updatePreset;
- (void)setVideoZoomFactor:(double)arg1 multiplyByZoomfactor:(_Bool)arg2;
- (void)requestAuthorization:(CDUnknownBlockType)arg1;
- (void)focusAt:(struct CGPoint)arg1;
- (_Bool)supportsVideoFrameRate:(long long)arg1;
- (void)updateFrameRate;
- (void)addOutput;
- (_Bool)addInput;
- (void)switchCamera:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)setExposureTargetBias:(float)arg1;
- (_Bool)isFaceDetectEnabled;
- (void)setTorchOn:(_Bool)arg1;
- (_Bool)isTorchSupported;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)enablesFaceDetect:(_Bool)arg1;
- (_Bool)isAutoFocusSupported;
- (void)enableZoom:(_Bool)arg1;
- (void)setZoomScale:(double)arg1 multiplyByZoomfactor:(_Bool)arg2;
- (double)zoomMaxRatio;
- (_Bool)isZoomSupported;
- (void)setFront:(_Bool)arg1;
- (_Bool)isFrontCamera;
- (void)setCaptureResolution:(struct CGSize)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long captureType; // @synthesize captureType;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2 device:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

