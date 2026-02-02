//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMTimer, NSMutableString, NSObject, NSRecursiveLock, NSString;
@protocol CameraScannerViewDelegate, OS_dispatch_queue;

@interface CameraScannerView
{
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_prevLayer;
    NSRecursiveLock *_cameraLock;
    id <CameraScannerViewDelegate> _delegate;
    _Bool _hasInit;
    _Bool _hasCaptureOutput;
    _Bool _currentOpenAutoSwitchCamera;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    AVCaptureDevice *_captureDevice;
    MMTimer *_lowLightCheckTimer;
    _Bool _shouldCheckLowLight;
    _Bool _isLowLight;
    _Bool _isLightBoostOn;
    struct CGPoint _focusPoint;
    _Bool _observingFocus;
    _Bool _hasFocused;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    float _compareBrightness;
    AVCaptureStillImageOutput *_imageOutput;
    _Bool _isTakingPic;
    _Bool _shouldStopScan;
    _Bool _currentDeviceIsUltraWideAngleCamera;
    _Bool _stopTimerCheck;
    unsigned int _lightMode;
    float _cameraDefaultZoomFactor;
    NSMutableString *_zoomOplog;
}

+ (void)releaseInstance;
+ (void)stopInstanceIfNeed;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool stopTimerCheck; // @synthesize stopTimerCheck=_stopTimerCheck;
@property(nonatomic) float cameraDefaultZoomFactor; // @synthesize cameraDefaultZoomFactor=_cameraDefaultZoomFactor;
@property(nonatomic) _Bool currentDeviceIsUltraWideAngleCamera; // @synthesize currentDeviceIsUltraWideAngleCamera=_currentDeviceIsUltraWideAngleCamera;
@property(readonly, nonatomic) unsigned int lightMode; // @synthesize lightMode=_lightMode;
@property(readonly, nonatomic) NSMutableString *zoomOplog; // @synthesize zoomOplog=_zoomOplog;
@property(readonly, nonatomic) NSRecursiveLock *cameraLock; // @synthesize cameraLock=_cameraLock;
@property _Bool hasCaptureOutput; // @synthesize hasCaptureOutput=_hasCaptureOutput;
@property(readonly, nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(nonatomic) __weak id <CameraScannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)reportOnNotRecieveBufferForLongTerm;
- (void)reportOnNotRecieveBufferForShotTerm;
- (void)cancelReportTimer;
- (void)setupReportTimerWhenStartScan;
- (void)clearLog;
- (void)addZoomFactorLog:(double)arg1 manually:(_Bool)arg2;
- (void)setZoomFactor:(double)arg1 ignoreLimit:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setZoomFactor:(double)arg1 animated:(_Bool)arg2;
- (void)setDefaultZoomFactor;
- (double)getZoomFactor;
- (_Bool)setLightBoostOn:(_Bool)arg1;
- (void)onTimerFocus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)continuousExposureAtPoint:(struct CGPoint)arg1;
- (void)continuousFocusAtPoint:(struct CGPoint)arg1;
- (long long)getImageOrientationToCamera;
- (float)getRotateDegreeRelativeToCamera;
- (struct CGPoint)pointToCaptureDevice:(struct CGPoint)arg1;
- (struct CGPoint)convertDevicePointToPortraitPoint:(struct CGPoint)arg1;
- (struct CGRect)convertPortraitToCameraRect:(struct CGRect)arg1;
- (struct CGPoint)convertToPortraitPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToPortraitRect:(struct CGRect)arg1;
- (void)captureSessionInterruptionEnded:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)removeCaptureSessionObserver;
- (void)addCaptureSessionObserver;
- (void)addFocusObserver;
- (void)tryRemoveFocusObserver;
- (void)stopTimerCheckLowLight;
- (void)onTimerCheckLowLight;
- (void)startTimerCheckLowLight;
- (void)stop;
- (void)start;
- (void)setPreviewScale:(float)arg1;
- (void)onCaptureTimeout;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (long long)getDeviceOrientation:(long long)arg1;
- (void)showTorchButtonWithSeconds:(unsigned int)arg1;
- (double)autoSwitchingScanCameraLensPosition;
- (_Bool)enableScanAutoSwitchCameraWhenFocusing:(long long)arg1;
- (_Bool)isCurrentOpenAutoSwitchCamera;
- (double)maxZoomFactor;
- (double)defaultZoomFactor;
- (void)checkInitDefaultZoomFactor;
- (void)checkAutoSwitchCamera;
- (_Bool)isUsingUltraWideAngleCamera;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)initCaptureWithPreviewScale:(float)arg1 enableAutoSwitchCamera:(_Bool)arg2;
- (void)initCaptureWithPreviewScale:(float)arg1 isPortrait:(_Bool)arg2 enableAutoSwitchCamera:(_Bool)arg3;
- (void)initCaptureWithPreviewScale:(float)arg1 isPortrait:(_Bool)arg2;
- (id)defaultCaptureDevice;
- (id)getCaptureDeviceWithAutoSwitchCamera:(_Bool)arg1;
- (float)getRotateRadius:(long long)arg1;
- (void)adjustToNewSize:(double)arg1;
- (void)layoutSubviews;
- (id)captureDevice;
- (void)cleanupAVSession;
- (void)dealloc;
- (id)init;
- (void)removeAutoFocusObserverForCaptureDevice;
- (void)addAutoFocusObserverForCaptureDevice;
- (void)stopCaptureSessionRunning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

