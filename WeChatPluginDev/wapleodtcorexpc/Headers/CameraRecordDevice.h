//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDataOutputSynchronizer, AVCaptureDepthDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CameraRecordDevice
{
    AVCaptureMovieFileOutput *movieFileOutput;
    NSObject<OS_dispatch_queue> *videoProcessingQueue;
    _Bool _isDepthEnabled;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CDUnknownBlockType _onGetGrightness;
    CDUnknownBlockType _onGetGrightness_showLux;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    AVCaptureDepthDataOutput *_depthDataOutput;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer; // @synthesize outputSynchronizer=_outputSynchronizer;
@property(retain, nonatomic) AVCaptureDepthDataOutput *depthDataOutput; // @synthesize depthDataOutput=_depthDataOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *captureDeviceInput; // @synthesize captureDeviceInput=_captureDeviceInput;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(copy, nonatomic) CDUnknownBlockType onGetGrightness_showLux; // @synthesize onGetGrightness_showLux=_onGetGrightness_showLux;
@property(copy, nonatomic) CDUnknownBlockType onGetGrightness; // @synthesize onGetGrightness=_onGetGrightness;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopDetectBrightness_showLux;
- (void)startDetectBrightness_showLux:(CDUnknownBlockType)arg1;
- (void)stopDetectBrightness;
- (void)startDetectBrightness:(CDUnknownBlockType)arg1;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)stopRecord;
- (void)startRecord;
- (void)setupCaptureSession;
- (id)initWithPosition:(long long)arg1 deep:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

