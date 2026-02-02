//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveAudio3AParamConfig, MMLivePushMediaConfig, MMLivePushParams, MMLiveVideoEncParam, NSArray, NSMutableDictionary, NSMutableSet, NSString, TRTCCloud, UIView;
@protocol MMLivePushAdapterDelegate;

@interface MMLivePushAdapter
{
    _Bool _isHEVCUsing;
    _Bool _forceHEVCMixing;
    _Bool _isInRoom;
    _Bool _isBlackStreamEnabled;
    _Bool _isAudioRoomMode;
    _Bool _isAudioMuteAll;
    _Bool _isVideoMuteAll;
    unsigned int _videoGop;
    id <MMLivePushAdapterDelegate> _pushDelegate;
    TRTCCloud *_trtcInstance;
    unsigned long long _currentVideoSourceType;
    UIView *_videoView;
    UIView *_viewForCapturing;
    MMLiveVideoEncParam *_videoEncConfigForAnchorCloudMixture;
    MMLiveAudio3AParamConfig *_audio3AParam;
    MMLivePushParams *_pushParams;
    NSString *_pushUrl;
    MMLivePushMediaConfig *_mediaConfig;
    NSMutableDictionary *_allRemoteUsersDict;
    NSMutableSet *_allRemoteUsersSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *allRemoteUsersSet; // @synthesize allRemoteUsersSet=_allRemoteUsersSet;
@property(retain, nonatomic) NSMutableDictionary *allRemoteUsersDict; // @synthesize allRemoteUsersDict=_allRemoteUsersDict;
@property(retain, nonatomic) MMLivePushMediaConfig *mediaConfig; // @synthesize mediaConfig=_mediaConfig;
@property(copy, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(retain, nonatomic) MMLivePushParams *pushParams; // @synthesize pushParams=_pushParams;
@property(nonatomic) _Bool isVideoMuteAll; // @synthesize isVideoMuteAll=_isVideoMuteAll;
@property(nonatomic) _Bool isAudioMuteAll; // @synthesize isAudioMuteAll=_isAudioMuteAll;
@property(nonatomic) _Bool isAudioRoomMode; // @synthesize isAudioRoomMode=_isAudioRoomMode;
@property(nonatomic) _Bool isBlackStreamEnabled; // @synthesize isBlackStreamEnabled=_isBlackStreamEnabled;
@property(retain, nonatomic) MMLiveAudio3AParamConfig *audio3AParam; // @synthesize audio3AParam=_audio3AParam;
@property(nonatomic) unsigned int videoGop; // @synthesize videoGop=_videoGop;
@property(nonatomic) _Bool isInRoom; // @synthesize isInRoom=_isInRoom;
@property(retain, nonatomic) MMLiveVideoEncParam *videoEncConfigForAnchorCloudMixture; // @synthesize videoEncConfigForAnchorCloudMixture=_videoEncConfigForAnchorCloudMixture;
@property(nonatomic) _Bool forceHEVCMixing; // @synthesize forceHEVCMixing=_forceHEVCMixing;
@property(nonatomic) _Bool isHEVCUsing; // @synthesize isHEVCUsing=_isHEVCUsing;
@property(retain, nonatomic) UIView *viewForCapturing; // @synthesize viewForCapturing=_viewForCapturing;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) unsigned long long currentVideoSourceType; // @synthesize currentVideoSourceType=_currentVideoSourceType;
@property(retain, nonatomic) TRTCCloud *trtcInstance; // @synthesize trtcInstance=_trtcInstance;
@property(nonatomic) __weak id <MMLivePushAdapterDelegate> pushDelegate; // @synthesize pushDelegate=_pushDelegate;
- (id)jsonDictFromString:(id)arg1;
- (id)jsonStringFromDict:(id)arg1;
- (id)setExperimentConfig:(id)arg1 params:(id)arg2;
- (void)stopLocalVideoAndDestoryRenderView:(_Bool)arg1;
- (void)stopLocalVideo;
- (void)startLocalVideo;
- (void)stopLocalAudio;
- (void)startLocalAudio;
@property(readonly, nonatomic) _Bool isLiveAudience;
- (void)stopPlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)playMusic:(int)arg1 path:(id)arg2 publish:(_Bool)arg3 startBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)sendSEIMessageData:(id)arg1;
- (_Bool)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (_Bool)sendCustomMessage:(id)arg1;
- (void)updateMixTranscodingConfig:(id)arg1;
- (void)notifyRemoteUsersVideoSettingChanged;
- (void)notifyRemoteUsersChanged;
- (void)stopRemoteVideo:(id)arg1;
- (void)startRemoteVideo:(id)arg1 withView:(id)arg2;
- (id)getRemoteUserConfig:(id)arg1;
- (void)updateRemoteUser:(id)arg1 volume:(long long)arg2;
- (void)updateRemoteUser:(id)arg1 rotation:(long long)arg2;
- (long long)getRemoteUserFillMode:(id)arg1;
- (void)updateRemoteUser:(id)arg1 fillMode:(long long)arg2;
- (void)updateAllRemoteUsersAudioMuted:(_Bool)arg1;
- (void)updateAllRemoteUsersVideoMuted:(_Bool)arg1;
- (void)updateRemoteUser:(id)arg1 isAudioMuted:(_Bool)arg2;
- (void)updateRemoteUser:(id)arg1 isVideoMuted:(_Bool)arg2;
- (void)updateRemoteUser:(id)arg1 isAudioEnabled:(_Bool)arg2;
- (void)updateRemoteUser:(id)arg1 isVideoEnabled:(_Bool)arg2;
- (_Bool)isRemoteUserInRoom:(id)arg1;
- (void)removeRemoteUser:(id)arg1;
- (void)addOrUpdateRemoteUser:(id)arg1 withRoomId:(id)arg2;
- (void)addRemoteUser:(id)arg1 withRoomId:(id)arg2;
@property(readonly, nonatomic) NSArray *remoteUserIdList;
@property(readonly, nonatomic) NSArray *remoteUsersList;
@property(readonly, nonatomic) NSMutableDictionary *mutableRemoteUsersDict;
@property(readonly, nonatomic) _Bool isAudioEnabled;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)setStereoDirection:(_Bool)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1 withVadDetection:(_Bool)arg2;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)updateWXAudio3AParam:(_Bool)arg1;
- (void)setVadDetectionEnabled:(_Bool)arg1;
- (void)setVolumeEvaluationEnabled:(_Bool)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setAudioMuted:(_Bool)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (int)videoEncodeFps;
- (void)setVideoToolboxSetting:(id)arg1;
@property(readonly, nonatomic) _Bool isVideoEnabled;
- (void)enableBlackStream:(_Bool)arg1;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)switchVideoSourceTo:(unsigned long long)arg1;
- (void)setResolutionMode:(long long)arg1;
- (void)setVideoMuted:(_Bool)arg1;
- (void)setVideoEnabled:(_Bool)arg1 destroyRender:(_Bool)arg2;
- (void)setVideoEnabled:(_Bool)arg1;
- (void)setVideoEncGop:(unsigned int)arg1;
- (void)updateHevcEncodeEnabled:(_Bool)arg1;
- (void)setHEVCUsing:(_Bool)arg1 forceMixing:(_Bool)arg2;
- (void)setCustomVideoEncoderParam:(int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 fps:(int)arg4 bitrate:(int)arg5 minbitrate:(int)arg6 gop:(int)arg7;
- (void)setVideoEncoderParamWithWidth:(unsigned int)arg1 andHeight:(unsigned int)arg2;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)setVideoEncoderParam:(id)arg1;
- (void)switchCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchCamera;
- (void)updatePushURL:(id)arg1;
- (void)exitRoom;
- (void)enterRoom;
- (void)updateVideoSourceType:(unsigned long long)arg1 isVideoEnabled:(_Bool)arg2 isAudioEnabled:(_Bool)arg3 andIsFrontCamera:(_Bool)arg4;
- (void)initDefaultData;
- (id)initWithParams:(id)arg1 effectManager:(id)arg2 andLiveCapture:(id)arg3;

@end

