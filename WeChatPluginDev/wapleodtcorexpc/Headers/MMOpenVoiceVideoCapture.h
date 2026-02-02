//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CMMotionManager, NSObject, NSString, VOIPVideoRender, WeVisVoipEffectMgr;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoCapture
{
    _Bool _inited;
    _Bool _useFrontCamera;
    _Bool _m_usingFrontCameraLastFrame;
    _Bool _m_cameraFrontState;
    int _currentRenderOrien;
    unsigned int _frameIdx;
    int _m_switchCameraFrameCnt;
    unsigned int _m_cameraChangeToOrientationLastCount;
    NSObject<OS_dispatch_queue> *_queue;
    AVCaptureDevice *_device;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_input;
    AVCaptureVideoDataOutput *_output;
    AVCaptureVideoPreviewLayer *_previewLayer;
    long long _m_videoOrientation;
    long long _m_cameraOrientation;
    long long _m_cameraChangeToOrientation;
    CMMotionManager *_m_motionMgr;
    WeVisVoipEffectMgr *_wevisEffectMgr;
    VOIPVideoRender *_render;
    struct CGSize _resamplingSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VOIPVideoRender *render; // @synthesize render=_render;
@property(retain, nonatomic) WeVisVoipEffectMgr *wevisEffectMgr; // @synthesize wevisEffectMgr=_wevisEffectMgr;
@property(nonatomic) struct CGSize resamplingSize; // @synthesize resamplingSize=_resamplingSize;
@property(retain, nonatomic) CMMotionManager *m_motionMgr; // @synthesize m_motionMgr=_m_motionMgr;
@property(nonatomic) unsigned int m_cameraChangeToOrientationLastCount; // @synthesize m_cameraChangeToOrientationLastCount=_m_cameraChangeToOrientationLastCount;
@property(nonatomic) long long m_cameraChangeToOrientation; // @synthesize m_cameraChangeToOrientation=_m_cameraChangeToOrientation;
@property(nonatomic) int m_switchCameraFrameCnt; // @synthesize m_switchCameraFrameCnt=_m_switchCameraFrameCnt;
@property(nonatomic) _Bool m_cameraFrontState; // @synthesize m_cameraFrontState=_m_cameraFrontState;
@property(nonatomic) _Bool m_usingFrontCameraLastFrame; // @synthesize m_usingFrontCameraLastFrame=_m_usingFrontCameraLastFrame;
@property(nonatomic) long long m_cameraOrientation; // @synthesize m_cameraOrientation=_m_cameraOrientation;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) unsigned int frameIdx; // @synthesize frameIdx=_frameIdx;
@property(nonatomic) _Bool useFrontCamera; // @synthesize useFrontCamera=_useFrontCamera;
@property(nonatomic) _Bool inited; // @synthesize inited=_inited;
@property(nonatomic) int currentRenderOrien; // @synthesize currentRenderOrien=_currentRenderOrien;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)renderNV12:(id)arg1;
- (void)initWeVisEffectMgr;
- (int)getCaptureFps;
- (_Bool)isCameraFront;
- (unsigned long long)cameraCount;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)newVideoSample:(struct opaqueCMSampleBuffer *)arg1;
- (void)uintView;
- (void)stop;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (int)start;
- (void)updateCameraPosToFitDevice;
- (void)setCameraPos:(long long)arg1;
- (_Bool)updateGPUReslution:(int)arg1;
- (_Bool)enable720pCapture;
- (void)updateCaptureRes:(int)arg1;
- (int)initView:(int)arg1 openId:(id)arg2 dic:(id)arg3 queue:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

