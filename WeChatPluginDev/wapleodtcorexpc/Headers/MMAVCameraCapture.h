//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString, WCLoopMetricsCollector;
@protocol MMAVCameraCapturerActionDelegate, MMAVCameraCapturerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MMAVCameraCapture : NSObject
{
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
    _Bool _front;
    _Bool _isCapturing;
    unsigned long long _lastDetectedTime;
    unsigned long long _captureFrameCount;
    double _presetWidth;
    double _presetHeight;
    long long _resolution;
    _Bool _isFrontMirror;
    _Bool _isBackMirror;
    unsigned int _videoErrCnt;
    _Bool _isFrontStable;
    _Bool _isBackStable;
    _Bool _isAutoExposure;
    _Bool _isAutoWhiteBalance;
    _Bool _ignoreDarkFramesOnce;
    double _lastExposureTime;
    double _lastISOSpeedRatings;
    _Bool _loggedInvalidFrame;
    _Bool _faceDetect;
    _Bool _allowCompressed;
    _Bool _currentEnableAutoSwitchCamera;
    _Bool _currentVirtualDeviceIsUltraWideCamera;
    unsigned int _framerate;
    id <MMAVCameraCapturerDelegate> _delegate;
    id <MMAVCameraCapturerActionDelegate> _actionDelegate;
    double _zoomScale;
    long long _cameraPreviewOrientation;
    long long _rotation;
    WCLoopMetricsCollector *_captureMetricsCollector;
    double _autoSwitchingScanCameraLensPosition;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureConnection *_connection;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    NSObject<OS_dispatch_queue> *_cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *_captureQueue;
    long long _position;
    AVCaptureVideoPreviewLayer *_prevLayer;
    long long _interfaceOritation;
    AVCaptureMetadataOutput *_metaOutput;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVCaptureMetadataOutput *metaOutput; // @synthesize metaOutput=_metaOutput;
@property long long interfaceOritation; // @synthesize interfaceOritation=_interfaceOritation;
@property(retain) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraProcessingQueue; // @synthesize cameraProcessingQueue=_cameraProcessingQueue;
@property(retain, nonatomic) AVCaptureVideoDataOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *captureInput; // @synthesize captureInput=_captureInput;
@property(retain, nonatomic) AVCaptureConnection *connection; // @synthesize connection=_connection;
@property(retain) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool currentVirtualDeviceIsUltraWideCamera; // @synthesize currentVirtualDeviceIsUltraWideCamera=_currentVirtualDeviceIsUltraWideCamera;
@property(nonatomic) double autoSwitchingScanCameraLensPosition; // @synthesize autoSwitchingScanCameraLensPosition=_autoSwitchingScanCameraLensPosition;
@property(nonatomic) _Bool currentEnableAutoSwitchCamera; // @synthesize currentEnableAutoSwitchCamera=_currentEnableAutoSwitchCamera;
@property(nonatomic) _Bool allowCompressed; // @synthesize allowCompressed=_allowCompressed;
@property(retain, nonatomic) WCLoopMetricsCollector *captureMetricsCollector; // @synthesize captureMetricsCollector=_captureMetricsCollector;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long cameraPreviewOrientation; // @synthesize cameraPreviewOrientation=_cameraPreviewOrientation;
@property(nonatomic) _Bool faceDetect; // @synthesize faceDetect=_faceDetect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
@property(nonatomic) __weak id <MMAVCameraCapturerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <MMAVCameraCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCurrentFront;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)setAutoWhiteBalance:(_Bool)arg1;
- (void)setAutoExposure:(_Bool)arg1;
- (void)setVideoStable:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (struct CGPoint)devicePointForPoint:(struct CGPoint)arg1;
- (void)resetInterestPoint:(struct CGPoint)arg1 monitorSubjectAreaChange:(_Bool)arg2;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (_Bool)setResolutionWithDevice:(id)arg1 dimension:(struct CGSize)arg2;
- (_Bool)setSessionPreset:(id)arg1;
- (_Bool)setResolution:(long long)arg1;
@property(readonly, nonatomic) double defaultZoomScale;
- (void)setZoomScale:(double)arg1 ignoreLimit:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)rotateCamera;
- (void)setFront:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)switchCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchCamera;
- (int)findNearestVideoFrameRate:(int)arg1 videoDevice:(id)arg2;
- (_Bool)supportsVideoFrameRate:(long long)arg1;
- (void)setFrameRate:(int)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)removeInputsAndOutputs;
- (void)dealloc;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (int)calculateRotation;
- (void)stopCaptureWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)stopCapture;
- (void)setRelativeVideoOrientation;
- (void)initCameraCapture;
- (unsigned int)findSuitableFormatForOutput:(id)arg1;
- (void)startCaptureUseFrontCamera:(_Bool)arg1;
- (void)restartCapture;
- (void)startCapture;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)checkAutoSwitchCamera;
- (_Bool)isAutoSwitchCameraDeviceEnabled;
- (double)defaultSwitchZoomFactor;
- (_Bool)isAutoSwitchCameraEnabled;
- (id)cameraWithPosition:(long long)arg1;
- (id)frontCamera;
- (id)init;
- (void)runAsyncOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runSyncOnCameraProcessingQueue:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

