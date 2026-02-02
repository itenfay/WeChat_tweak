//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TRTCAudioConfig, TRTCParams, TRTCVideoConfig;

@interface MMLiveTRTCPushAdapter
{
    _Bool _isLocalMicClosed;
    unsigned long long _trtcCloudAppId;
    unsigned long long _trtcCloudBizId;
    long long _trtcRoleType;
    TRTCVideoConfig *_videoConfig;
    TRTCAudioConfig *_audioConfig;
}

+ (struct CGSize)getResolutionSize:(long long)arg1 resolutionMode:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TRTCAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(retain, nonatomic) TRTCVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(nonatomic) long long trtcRoleType; // @synthesize trtcRoleType=_trtcRoleType;
@property(nonatomic) unsigned long long trtcCloudBizId; // @synthesize trtcCloudBizId=_trtcCloudBizId;
@property(nonatomic) unsigned long long trtcCloudAppId; // @synthesize trtcCloudAppId=_trtcCloudAppId;
@property(nonatomic) _Bool isLocalMicClosed; // @synthesize isLocalMicClosed=_isLocalMicClosed;
- (void)onMixedAllAudioFrame:(id)arg1;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (void)stopPlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)playMusic:(int)arg1 path:(id)arg2 publish:(_Bool)arg3 startBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)disconnectTwoRoom:(id)arg1 roomB:(id)arg2;
- (void)stopCrossRommWithRoomId:(id)arg1;
- (void)stopCrossRomm;
- (void)startCrossRoom:(id)arg1 userId:(id)arg2 sdkNewPkSign:(id)arg3 pkSign:(id)arg4;
- (void)sendSEIMessageData:(id)arg1;
- (_Bool)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (_Bool)sendCustomMessage:(id)arg1;
- (void)stopRemoteVideo:(id)arg1;
- (void)startRemoteVideo:(id)arg1 withView:(id)arg2;
- (void)updateRemoteUser:(id)arg1 rotation:(long long)arg2;
- (void)updateRemoteUser:(id)arg1 fillMode:(long long)arg2;
- (void)updateMixTranscodingConfig:(id)arg1;
- (_Bool)updateCloudMixtureParamsForFinderLiveKTVModeWithMicUsers:(id)arg1;
- (_Bool)updateCloudMixtureParamsForFinderLiveAudioRoomModeWithMicUsersInfo:(id)arg1 mixWithVideo:(_Bool)arg2;
- (_Bool)updateCloudMixtureParamsForFinderLiveWithMicUsersInfo:(id)arg1 allMicTalkingUsersList:(id)arg2 isPureAudioMode:(_Bool)arg3;
- (void)updateCloudMixtureParamsWithFirstSmallVideoRectRatio:(struct CGRect)arg1;
- (id)currentVideoCloudMixtureParams;
- (void)mixExternalAudioVolume:(long long)arg1 playoutVolume:(long long)arg2;
- (void)mixExternalAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)enableMixExternalAudio:(_Bool)arg1 playout:(_Bool)arg2;
- (void)sendCustomAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)enableCustomAudioCapture:(_Bool)arg1;
- (void)restartAudioDevice:(_Bool)arg1;
- (id)getAudioEffectManager;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)setStereoDirection:(_Bool)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1 withVadDetection:(_Bool)arg2;
- (void)setVadDetectionEnabled:(_Bool)arg1;
- (void)setVolumeEvaluationEnabled:(_Bool)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)updateTRTCLocalAudioUpstreamStopped:(_Bool)arg1;
- (void)setVolumeType:(long long)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setAudioQuality:(long long)arg1;
- (void)switchAudioCapture:(_Bool)arg1;
- (void)setAudioMuted:(_Bool)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)setCustomVideo:(id)arg1;
- (void)setVideoToolboxSetting:(id)arg1;
- (_Bool)setVideoEncoderRotation:(long long)arg1;
- (void)sendH264EncodedVideoData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (void)enableExternalH264EncodedVideo:(_Bool)arg1;
- (void)sendCustomVideoData:(id)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6;
- (void)sendCustomVideoData:(struct __CVBuffer *)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4;
- (void)enableCustomVideoCapture:(_Bool)arg1;
- (void)enableTrtcBackgroundDecoding:(_Bool)arg1;
- (void)setWaterMark:(id)arg1 inRect:(struct CGRect)arg2;
- (void)setPrefersLowQuality:(_Bool)arg1;
- (void)setSmallVideoEnabled:(_Bool)arg1;
- (void)setQosPreference:(long long)arg1 andQosControlMode:(long long)arg2;
- (void)setGSensorEnabled:(_Bool)arg1;
- (void)setVideoFillMode:(long long)arg1;
- (void)setResolutionMode:(long long)arg1;
- (void)enableBlackStream:(_Bool)arg1;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)updateHevcEncodeEnabled:(_Bool)arg1;
- (void)setVideoMuted:(_Bool)arg1;
- (void)setVideoEnabled:(_Bool)arg1 destroyRender:(_Bool)arg2;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (struct CGSize)getResolutionSize:(id)arg1;
- (void)switchRole:(long long)arg1;
- (long long)currVolumeType;
- (long long)currTrtcRoleType;
- (void)updateTRTCPrivateMapKey:(id)arg1;
- (void)startCameraCaptureWithContainerView:(id)arg1 useFrontCamera:(_Bool)arg2;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (void)destroySharedTRTCInstance;
- (void)setQCloudAccount:(unsigned long long)arg1 bizId:(unsigned long long)arg2;
- (void)exitRoom;
- (void)enterRoom;
- (void)stopLocalAudio;
- (void)startLocalAudio;
- (void)setupTrtcAudio;
- (void)setupTrtcVideo:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canStartLocalCapture;
@property(readonly, nonatomic) TRTCParams *trtcParams;
- (_Bool)isLiveAudience;
- (void)initDefaultData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

