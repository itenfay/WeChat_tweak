//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputSynchronizer, AVCaptureDepthDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSArray, NSString;
@protocol CameraVideoDeviceDelegate, OS_dispatch_queue;

@interface FaceRecogCameraDevice : NSObject
{
    NSObject<OS_dispatch_queue> *deviceOperationQueue;
    NSObject<OS_dispatch_queue> *videoProcessingQueue;
    NSArray *observers;
    _Bool focusListening;
    _Bool _lowLightBoost;
    _Bool _isAdjustingWhiteBalance;
    _Bool _isCustomExposureSupported;
    _Bool _isDepthEnabled;
    int _flashMode;
    int _frameRate;
    NSObject<CameraVideoDeviceDelegate> *_delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    double _DeviceISO;
    double _Device_minISO;
    double _Device_maxISO;
    double _DeviceAperture;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    double _width;
    double _height;
    AVCaptureDepthDataOutput *_depthDataOutput;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    long long _missingDepthFrameCount;
    long long _skipDepthPhotoSyncCheck;
    struct CGPoint _focusPoint;
    struct CGPoint _exposurePoint;
    CDStruct_1b6d18a9 _DeviceExposureDuration;
}

- (void).cxx_destruct;
@property(nonatomic) long long skipDepthPhotoSyncCheck; // @synthesize skipDepthPhotoSyncCheck=_skipDepthPhotoSyncCheck;
@property(nonatomic) long long missingDepthFrameCount; // @synthesize missingDepthFrameCount=_missingDepthFrameCount;
@property(retain, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer; // @synthesize outputSynchronizer=_outputSynchronizer;
@property(retain, nonatomic) AVCaptureDepthDataOutput *depthDataOutput; // @synthesize depthDataOutput=_depthDataOutput;
@property(nonatomic) _Bool isDepthEnabled; // @synthesize isDepthEnabled=_isDepthEnabled;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool isCustomExposureSupported; // @synthesize isCustomExposureSupported=_isCustomExposureSupported;
@property(nonatomic) CDStruct_1b6d18a9 DeviceExposureDuration; // @synthesize DeviceExposureDuration=_DeviceExposureDuration;
@property(nonatomic) double DeviceAperture; // @synthesize DeviceAperture=_DeviceAperture;
@property(nonatomic) double Device_maxISO; // @synthesize Device_maxISO=_Device_maxISO;
@property(nonatomic) double Device_minISO; // @synthesize Device_minISO=_Device_minISO;
@property(nonatomic) double DeviceISO; // @synthesize DeviceISO=_DeviceISO;
@property(nonatomic) _Bool isAdjustingWhiteBalance; // @synthesize isAdjustingWhiteBalance=_isAdjustingWhiteBalance;
@property(nonatomic) int frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) _Bool lowLightBoost; // @synthesize lowLightBoost=_lowLightBoost;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) struct CGPoint exposurePoint; // @synthesize exposurePoint=_exposurePoint;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(nonatomic) __weak NSObject<CameraVideoDeviceDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFocusChangeListener;
- (void)addFocusChangeListener;
- (id)deviceWithType:(id)arg1 position:(long long)arg2;
- (void)stopDevice;
- (void)startDevice;
- (_Bool)isRunning;
@property(readonly, nonatomic) _Bool hasFront;
@property(readonly, nonatomic) _Bool hasFlash;
@property(nonatomic) long long whiteBalanceMode;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
@property(nonatomic) long long exposureMode;
@property(nonatomic) long long focusMode;
- (_Bool)frameRateSupported:(int)arg1;
- (void)setupCaptureSession;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 isDepthEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

