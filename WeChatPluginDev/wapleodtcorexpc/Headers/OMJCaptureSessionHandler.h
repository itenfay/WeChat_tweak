//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureAudioDataOutput, AVCaptureDeviceInput, AVCapturePhotoOutput, AVCaptureSession, AVCaptureVideoDataOutput, NSString, OMJPhotoCapturer;
@protocol OS_dispatch_queue;

@interface OMJCaptureSessionHandler : NSObject
{
    _Bool _isCameraSwitching;
    int _frontCamDimensionLevel;
    OMJPhotoCapturer *_photoCapturer;
    AVCaptureSession *_captureSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureSession *_audioCaptureSession;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureAudioDataOutput *_audioOutput;
    double _videoMaxZoomFactor;
    double _videoMinZoomFactor;
    long long _currentFlashMode;
    long long _targetPositionFlagForSwitchCamera;
    function_8fed91df _didCapturePhotoCallback;
    function_15b34fc7 _didOutputVideoSampleBufferCallback;
    function_52b62172 _didOutputAudioSampleBufferCallback;
    function_ffe40f9b _didFinishSwitchCameraCallbackFunc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) function_ffe40f9b didFinishSwitchCameraCallbackFunc; // @synthesize didFinishSwitchCameraCallbackFunc=_didFinishSwitchCameraCallbackFunc;
@property(nonatomic) long long targetPositionFlagForSwitchCamera; // @synthesize targetPositionFlagForSwitchCamera=_targetPositionFlagForSwitchCamera;
@property(nonatomic) _Bool isCameraSwitching; // @synthesize isCameraSwitching=_isCameraSwitching;
@property(nonatomic) function_52b62172 didOutputAudioSampleBufferCallback; // @synthesize didOutputAudioSampleBufferCallback=_didOutputAudioSampleBufferCallback;
@property(nonatomic) function_15b34fc7 didOutputVideoSampleBufferCallback; // @synthesize didOutputVideoSampleBufferCallback=_didOutputVideoSampleBufferCallback;
@property(nonatomic) function_8fed91df didCapturePhotoCallback; // @synthesize didCapturePhotoCallback=_didCapturePhotoCallback;
@property(nonatomic) int frontCamDimensionLevel; // @synthesize frontCamDimensionLevel=_frontCamDimensionLevel;
@property(nonatomic) long long currentFlashMode; // @synthesize currentFlashMode=_currentFlashMode;
@property(nonatomic) double videoMinZoomFactor; // @synthesize videoMinZoomFactor=_videoMinZoomFactor;
@property(nonatomic) double videoMaxZoomFactor; // @synthesize videoMaxZoomFactor=_videoMaxZoomFactor;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureSession *audioCaptureSession; // @synthesize audioCaptureSession=_audioCaptureSession;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCapturePhotoOutput *photoOutput; // @synthesize photoOutput=_photoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // @synthesize videoDeviceInput=_videoDeviceInput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) OMJPhotoCapturer *photoCapturer; // @synthesize photoCapturer=_photoCapturer;
- (id)getBackLongerFocusCaptureDevice;
- (id)getBackBuiltInWideCaptureDevice;
- (id)getBackCommonCaptureDevice;
- (id)getFrontTrueDepthCaptureDevice;
- (id)getFrontCommonCaptureDevice;
- (void)configVideoMaxAndMinZoomFactor;
- (void)configCaptureConnectionMirrorAndOrientationWithDevicePosition:(long long)arg1;
- (void)configSessionPresetWithDevicePosition:(long long)arg1;
- (void)didFinishCapturePhoto:(id)arg1 photos:(id)arg2;
- (id)setUpPhotoSettings;
- (void)capturePhoto;
- (void)resetExposureISO;
- (double)minExposureISO;
- (double)maxExposureISO;
- (double)exposureISO;
- (void)setExposureISO:(double)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (void)zoomCaptureDeviceWithScale:(double)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (double)videoZoomFactor;
- (long long)devicePosition;
- (void)switchCameraWithDevice:(id)arg1 position:(long long)arg2;
- (void)switchCameraToPosition:(long long)arg1;
- (void)reverseCamera;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashMode;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopAudioCaptureSessionRunning:(CDUnknownBlockType)arg1;
- (void)startAudioCaptureSessionRunning:(CDUnknownBlockType)arg1;
- (void)stopRunning:(CDUnknownBlockType)arg1;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)setupCaptureSessionIfNeededWithIsUseFrontCamera:(_Bool)arg1 frontCamDimensionLevel:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)switchCameraIfNeeded:(_Bool)arg1;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

