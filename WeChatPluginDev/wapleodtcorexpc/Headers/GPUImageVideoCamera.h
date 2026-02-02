//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, GLProgram, NSDate, NSObject, NSString;
@protocol GPUImageVideoCameraDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GPUImageVideoCamera
{
    unsigned long long numberOfFramesCaptured;
    double totalFrameTimeDuringCapture;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDevice *_microphone;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    _Bool capturePaused;
    unsigned long long outputRotation;
    unsigned long long internalRotation;
    NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
    _Bool captureAsYUV;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    id <GPUImageVideoCameraDelegate> _delegate;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    NSDate *startingCaptureTime;
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *audioProcessingQueue;
    NSObject<OS_dispatch_queue> *delegateProcessingQueue;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    _Bool isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool addedAudioInputsDueToEncodingTarget;
    _Bool _useCustomCaptureDevice;
    _Bool _runBenchmark;
    _Bool _horizontallyMirrorFrontFacingCamera;
    _Bool _horizontallyMirrorRearFacingCamera;
    int _frameRate;
    NSString *_captureSessionPreset;
    long long _outputImageOrientation;
}

+ (_Bool)isFrontFacingCameraPresent;
+ (_Bool)isBackFacingCameraPresent;
- (void).cxx_destruct;
@property(nonatomic) _Bool horizontallyMirrorRearFacingCamera; // @synthesize horizontallyMirrorRearFacingCamera=_horizontallyMirrorRearFacingCamera;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera; // @synthesize horizontallyMirrorFrontFacingCamera=_horizontallyMirrorFrontFacingCamera;
@property(nonatomic) id <GPUImageVideoCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long outputImageOrientation; // @synthesize outputImageOrientation=_outputImageOrientation;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(readonly) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(readonly, retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(copy, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
- (void)updateOrientationSendToTargets;
- (void)setAudioEncodingTarget:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)resetBenchmarkAverage;
- (double)averageFrameDurationDuringCapture;
- (void)convertYUVToRGBOutput;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)videoCaptureConnection;
@property int frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
- (long long)cameraPosition;
- (void)rotateCamera;
- (void)resumeCameraCapture;
- (void)pauseCameraCapture;
- (void)stopCameraCaptureWaitUntilDone;
- (void)stopCameraCapture;
- (void)startCameraCapture;
@property(readonly, nonatomic) _Bool isRunning;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)removeInputsAndOutputs;
- (_Bool)removeAudioInputsAndOutputs;
- (_Bool)addAudioInputsAndOutputs;
- (void)dealloc;
- (id)framebufferForOutput;
- (id)customGetCaptureDevice:(long long)arg1;
- (id)defaultGetCaptureDevice:(long long)arg1;
- (id)getCaptureDevice:(long long)arg1;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 useCustomCaptureDevice:(_Bool)arg3;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

