//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, CMMotionManager, NSMutableArray, NSObject, NSRecursiveLock, NSString, WeVisVoipEffectMgr, XImageContext;
@protocol AVVideoDataSource, AVVideoDeviceDelegate, AVVideoDeviceFrameDelegate, AVVideoDeviceSessionDelegate, OS_dispatch_queue;

@interface AVVideoDevice
{
    _Bool _m_usingBackCamera;
    _Bool _enableClipBeforePreprocessing;
    _Bool _remoteIsNoPhone;
    _Bool _enableRci;
    _Bool _isRunning;
    _Bool _shouldWeVisEffectIgnoreBackground;
    _Bool _isThisTalkIlink;
    _Bool _isFristFrameWhileUsingBeautyFilter;
    _Bool _isVoipBeautySupported;
    _Bool _isVoipSpatiotemporalDenosingSupported;
    _Bool _isVoipClaritySupported;
    _Bool _isEnableClipResamplingGPU;
    _Bool _enable720pCapture;
    _Bool _enableVoIPLogSwitch;
    _Bool _isEnablePipeline;
    _Bool _hasSetEffect;
    _Bool _isCurrentDirectionHasBlur;
    int videoDevErrCode;
    int videoErrCnt;
    int mVoipBeautyCfg;
    int _mVideoInterruptEndFlag;
    int _workMode;
    int _beautyMode;
    int _gpuResNoAdditionalSize;
    int _clipRatio;
    int _voipBeautyBlackList;
    int _videoSTDenosingBlackList;
    int _VoipSpatiotemporalDenosingPara;
    int _voipClarityMode;
    int _wevisDeviceCode;
    int _rotation;
    AVCaptureSession *session;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoDataOutput;
    id <AVVideoDeviceDelegate> delegate;
    id <AVVideoDataSource> dataSource;
    NSRecursiveLock *m_startSessionLock;
    id <AVVideoDeviceSessionDelegate> m_sessionDelegate;
    char *mCameraBuf;
    id <AVVideoDeviceFrameDelegate> _frameDelegate;
    unsigned long long _frameIndex;
    unsigned long long _timestampStartupAtFirst;
    unsigned long long _timestampRecvAtFirst;
    unsigned long long _countOutputFrames;
    unsigned long long _countDropFrames;
    NSMutableArray *_m_requestLayerBlocks;
    WeVisVoipEffectMgr *_wevisEffectMgr;
    long long _frontFilter;
    long long _backFilter;
    CMMotionManager *_motion;
    NSObject<OS_dispatch_queue> *_captureQueue;
    XImageContext *_context;
    struct CGSize _resamplingSize;
    struct CGSize _cropSize;
    struct CGSize _lastFrameEncodeSize;
}

+ (void)kvReportEffect:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(long long)arg3 scene:(int)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) XImageContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(retain, nonatomic) CMMotionManager *motion; // @synthesize motion=_motion;
@property int rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool isCurrentDirectionHasBlur; // @synthesize isCurrentDirectionHasBlur=_isCurrentDirectionHasBlur;
@property(nonatomic) _Bool hasSetEffect; // @synthesize hasSetEffect=_hasSetEffect;
@property(nonatomic) long long backFilter; // @synthesize backFilter=_backFilter;
@property(nonatomic) long long frontFilter; // @synthesize frontFilter=_frontFilter;
@property(nonatomic) _Bool isEnablePipeline; // @synthesize isEnablePipeline=_isEnablePipeline;
@property(nonatomic) int wevisDeviceCode; // @synthesize wevisDeviceCode=_wevisDeviceCode;
@property(retain, nonatomic) WeVisVoipEffectMgr *wevisEffectMgr; // @synthesize wevisEffectMgr=_wevisEffectMgr;
@property(nonatomic) _Bool enableVoIPLogSwitch; // @synthesize enableVoIPLogSwitch=_enableVoIPLogSwitch;
@property(nonatomic) _Bool enable720pCapture; // @synthesize enable720pCapture=_enable720pCapture;
@property(nonatomic) _Bool isEnableClipResamplingGPU; // @synthesize isEnableClipResamplingGPU=_isEnableClipResamplingGPU;
@property(nonatomic) int voipClarityMode; // @synthesize voipClarityMode=_voipClarityMode;
@property(nonatomic) _Bool isVoipClaritySupported; // @synthesize isVoipClaritySupported=_isVoipClaritySupported;
@property(nonatomic) int VoipSpatiotemporalDenosingPara; // @synthesize VoipSpatiotemporalDenosingPara=_VoipSpatiotemporalDenosingPara;
@property(nonatomic) _Bool isVoipSpatiotemporalDenosingSupported; // @synthesize isVoipSpatiotemporalDenosingSupported=_isVoipSpatiotemporalDenosingSupported;
@property(nonatomic) _Bool isVoipBeautySupported; // @synthesize isVoipBeautySupported=_isVoipBeautySupported;
@property(nonatomic) int videoSTDenosingBlackList; // @synthesize videoSTDenosingBlackList=_videoSTDenosingBlackList;
@property(nonatomic) int voipBeautyBlackList; // @synthesize voipBeautyBlackList=_voipBeautyBlackList;
@property(nonatomic) _Bool isFristFrameWhileUsingBeautyFilter; // @synthesize isFristFrameWhileUsingBeautyFilter=_isFristFrameWhileUsingBeautyFilter;
@property(retain, nonatomic) NSMutableArray *m_requestLayerBlocks; // @synthesize m_requestLayerBlocks=_m_requestLayerBlocks;
@property(nonatomic) unsigned long long countDropFrames; // @synthesize countDropFrames=_countDropFrames;
@property(nonatomic) unsigned long long countOutputFrames; // @synthesize countOutputFrames=_countOutputFrames;
@property(nonatomic) unsigned long long timestampRecvAtFirst; // @synthesize timestampRecvAtFirst=_timestampRecvAtFirst;
@property(nonatomic) unsigned long long timestampStartupAtFirst; // @synthesize timestampStartupAtFirst=_timestampStartupAtFirst;
@property(nonatomic) _Bool isThisTalkIlink; // @synthesize isThisTalkIlink=_isThisTalkIlink;
@property(nonatomic) _Bool shouldWeVisEffectIgnoreBackground; // @synthesize shouldWeVisEffectIgnoreBackground=_shouldWeVisEffectIgnoreBackground;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) unsigned long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(nonatomic) __weak id <AVVideoDeviceFrameDelegate> frameDelegate; // @synthesize frameDelegate=_frameDelegate;
@property(nonatomic) _Bool enableRci; // @synthesize enableRci=_enableRci;
@property(nonatomic) struct CGSize lastFrameEncodeSize; // @synthesize lastFrameEncodeSize=_lastFrameEncodeSize;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize=_cropSize;
@property(nonatomic) struct CGSize resamplingSize; // @synthesize resamplingSize=_resamplingSize;
@property(nonatomic) _Bool remoteIsNoPhone; // @synthesize remoteIsNoPhone=_remoteIsNoPhone;
@property(nonatomic) int clipRatio; // @synthesize clipRatio=_clipRatio;
@property(nonatomic) _Bool enableClipBeforePreprocessing; // @synthesize enableClipBeforePreprocessing=_enableClipBeforePreprocessing;
@property(nonatomic) int gpuResNoAdditionalSize; // @synthesize gpuResNoAdditionalSize=_gpuResNoAdditionalSize;
@property(nonatomic) int beautyMode; // @synthesize beautyMode=_beautyMode;
@property(nonatomic) int workMode; // @synthesize workMode=_workMode;
@property(nonatomic) int mVideoInterruptEndFlag; // @synthesize mVideoInterruptEndFlag=_mVideoInterruptEndFlag;
@property(nonatomic) _Bool m_usingBackCamera; // @synthesize m_usingBackCamera=_m_usingBackCamera;
@property(nonatomic) int mVoipBeautyCfg; // @synthesize mVoipBeautyCfg;
@property(nonatomic) int videoErrCnt; // @synthesize videoErrCnt;
@property(nonatomic) char *mCameraBuf; // @synthesize mCameraBuf;
@property(nonatomic) __weak id <AVVideoDeviceSessionDelegate> m_sessionDelegate; // @synthesize m_sessionDelegate;
@property(nonatomic) int videoDevErrCode; // @synthesize videoDevErrCode;
@property(retain, nonatomic) NSRecursiveLock *m_startSessionLock; // @synthesize m_startSessionLock;
@property(nonatomic) __weak id <AVVideoDataSource> dataSource; // @synthesize dataSource;
@property(nonatomic) __weak id <AVVideoDeviceDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session;
- (unsigned long long)currentFrameRate;
- (void)_updateVideoFilterSetting;
- (void)updateVideoFilterSetting;
- (void)setVirtualBackground:(_Bool)arg1;
- (void)loadCurrentVirtualBackgroundAsset;
- (_Bool)isCameraFront;
- (unsigned long long)cameraCount;
- (void)toggleCamera;
- (void)_stopSession;
- (void)stopSession;
- (void)startSession;
- (void)_startSession;
- (void)changeToHighCapture:(int)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)setupSessionWithCameraFront:(_Bool)arg1;
- (void)setVideoDeviceSessionDelegate:(id)arg1;
- (void)dealloc;
- (_Bool)setGPUReslution:(int)arg1;
- (struct CGSize)gpuResolution;
- (int)getSTFilterStatus;
- (_Bool)getVoIPLogSwitch;
- (_Bool)get720pCaptureStatus;
- (void)setRemoteDevice:(_Bool)arg1;
- (void)setClipRatioWith:(int)arg1 enableClipBeforePreprocessing:(_Bool)arg2;
- (id)init;
- (id)cameraWithPosition:(long long)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (void)setTorchModeOff;
- (void)setFlashModeOff;
- (void)setFrameDuration;
- (int)findNearestVideoFrameRate:(int)arg1 videoDevice:(id)arg2;
- (_Bool)supportsVideoFrameRate:(int)arg1 videoDevice:(id)arg2;
- (int)getCaptureFps;
- (void)newVideoRawSample:(struct opaqueCMSampleBuffer *)arg1 withFrameIndex:(unsigned long long)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)processSamplerBuffer:(struct opaqueCMSampleBuffer *)arg1 captureOutput:(id)arg2;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withFrameIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clipAndRotateWithSamplerBuffer:(struct opaqueCMSampleBuffer *)arg1 outputBlock:(CDUnknownBlockType)arg2;
- (struct opaqueCMSampleBuffer *)recreateSampleBuffer:(struct __CVBuffer *)arg1 originSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (struct opaqueCMSampleBuffer *)clipResamplingFrame:(struct opaqueCMSampleBuffer *)arg1 enableClipResampleGPU:(_Bool)arg2;
- (void)newVideoPixel:(struct __CVBuffer *)arg1 withFrameIndex:(unsigned long long)arg2 rgbaTexture:(id)arg3;
- (void)newVideoSample:(struct opaqueCMSampleBuffer *)arg1 withFrameIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

