//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureVideoPreviewLayer, CameraReflectDevice, FaceRecogAVRecorder, FaceRecogFlashParamProcessor, MMTimer, NSString;

@interface FaceRecogFlashHandler
{
    _Bool _isRecogingFace;
    _Bool _isPipelineInited;
    _Bool _hasDetectFace;
    _Bool _canShowNextTips;
    NSString *_bioId;
    NSString *_verifyInfo;
    double _faceDetectRatio;
    FaceRecogFlashParamProcessor *_paramProcessor;
    long long _workMode;
    CameraReflectDevice *_cameraDevice;
    FaceRecogAVRecorder *_avRecorder;
    CDUnknownBlockType _configResponseCallback;
    CDUnknownBlockType _verifyResponseCallback;
    long long _resetCount;
    NSString *_lastTipId;
    MMTimer *_tipsTimer;
    double _tipsDuration;
    struct CGRect _detectRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canShowNextTips; // @synthesize canShowNextTips=_canShowNextTips;
@property(nonatomic) double tipsDuration; // @synthesize tipsDuration=_tipsDuration;
@property(retain, nonatomic) MMTimer *tipsTimer; // @synthesize tipsTimer=_tipsTimer;
@property(retain, nonatomic) NSString *lastTipId; // @synthesize lastTipId=_lastTipId;
@property(nonatomic) long long resetCount; // @synthesize resetCount=_resetCount;
@property(copy, nonatomic) CDUnknownBlockType verifyResponseCallback; // @synthesize verifyResponseCallback=_verifyResponseCallback;
@property(copy, nonatomic) CDUnknownBlockType configResponseCallback; // @synthesize configResponseCallback=_configResponseCallback;
@property(retain, nonatomic) FaceRecogAVRecorder *avRecorder; // @synthesize avRecorder=_avRecorder;
@property(retain, nonatomic) CameraReflectDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(nonatomic) _Bool hasDetectFace; // @synthesize hasDetectFace=_hasDetectFace;
@property(nonatomic) _Bool isPipelineInited; // @synthesize isPipelineInited=_isPipelineInited;
@property(nonatomic) long long workMode; // @synthesize workMode=_workMode;
@property(retain, nonatomic) FaceRecogFlashParamProcessor *paramProcessor; // @synthesize paramProcessor=_paramProcessor;
@property(nonatomic) _Bool isRecogingFace; // @synthesize isRecogingFace=_isRecogingFace;
@property(nonatomic) double faceDetectRatio; // @synthesize faceDetectRatio=_faceDetectRatio;
@property(nonatomic) struct CGRect detectRect; // @synthesize detectRect=_detectRect;
@property(retain, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(copy, nonatomic) NSString *bioId; // @synthesize bioId=_bioId;
- (struct CGRect)getDetectRect;
- (void)didDetectFace;
- (void)startRecordAudio;
- (void)triggerDetectBegin;
- (void)onPipelineReset;
- (void)onFlashActionFinish;
- (void)onShowUITips:(id)arg1;
- (void)onPipelineFinishWithSuccess:(_Bool)arg1;
- (void)onReflectColorChange:(unsigned int)arg1 light:(double)arg2;
- (id)resolveString:(id)arg1;
- (void)onTipsTimerEnd;
- (void)startShowTipsCountdown;
- (void)callbackFlashWithData:(id)arg1 error:(id)arg2;
- (void)BeginInterruption;
- (long long)cameraModuleReportScene;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)onGetBioConfig:(id)arg1 failedCauseOf:(int)arg2 forScene:(unsigned int)arg3 errMsg:(id)arg4;
- (void)onGetBioConfig:(id)arg1 succeedForScene:(unsigned int)arg2 succeedForBioId:(unsigned long long)arg3;
- (void)setFaceBioId:(unsigned long long)arg1;
- (void)onGetConfigResponse:(id)arg1 error:(id)arg2;
- (void)onStartVerifyResult:(id)arg1;
- (_Bool)onStartRequestConfig:(id)arg1;
- (void)doUploadFlashDataToCdn:(id)arg1 voiceData:(id)arg2;
- (void)didGetFlashRequestUrl:(id)arg1 requests:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)didGetFlashStateEvent:(id)arg1;
- (void)didGetFlashTipsEvent:(id)arg1;
- (void)tryResetWithError:(id)arg1 errorCode:(long long)arg2;
- (void)didGetFlashUIEvent:(id)arg1;
- (void)didGetFlashEvent:(long long)arg1 eventDict:(id)arg2;
- (void)onReflectStart:(long long)arg1;
- (id)getVoiceData;
- (void)onReflectEventWithArgb:(unsigned int)arg1 withLight:(double)arg2;
- (id)getCaptureSession;
- (id)getCaptureDevice;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 depthPixelBuffer:(id)arg3;
- (void)mergeXLabConfig:(id)arg1;
- (id)getSDKConfig;
- (void)initPipeline;
- (void)requestStop;
- (void)requestRetry;
- (void)onCameraStart;
- (void)didAccessVideo;
- (_Bool)supportDepthCamera;
- (void)registerLogCallback;
@property(readonly, nonatomic) double cameraHeight;
@property(readonly, nonatomic) double cameraWidth;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *cameraPreviewLayer;
@property(readonly, nonatomic) unsigned int currentCheckAliveType;
- (void)start;
- (id)initWithScene:(unsigned int)arg1;
- (id)initWithWorkMode:(long long)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *appId;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

