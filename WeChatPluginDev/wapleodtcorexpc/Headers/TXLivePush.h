//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXAudioEffectManager, TXBeautyManager, TXDeviceManager, TXLivePushConfig;
@protocol TXAudioCustomProcessDelegate, TXLivePushListener, TXLiveRecordListener, TXVideoCustomProcessDelegate;

@interface TXLivePush : NSObject
{
    struct unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread;
    struct shared_ptr<liteav::live::TXLivePushObserverImpl> _client;
    struct Pusher *_pusher;
    TXDeviceManager *_deviceManager;
    TXBeautyManager *_beautyManager;
    TXAudioEffectManager *_audioEffectManager;
    TXLivePushConfig *_config;
    struct PushNetworkConfig _network_config;
    long long _video_quality;
    unsigned long long _bgm_id;
    id <TXLivePushListener> _delegate;
    NSString *_rtmpURL;
    id <TXLiveRecordListener> _recordDelegate;
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate;
    id <TXAudioCustomProcessDelegate> _audioProcessDelegate;
    unsigned long long _audioVolumeEvaluationInterval;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long audioVolumeEvaluationInterval; // @synthesize audioVolumeEvaluationInterval=_audioVolumeEvaluationInterval;
@property(nonatomic) __weak id <TXAudioCustomProcessDelegate> audioProcessDelegate; // @synthesize audioProcessDelegate=_audioProcessDelegate;
@property(nonatomic) __weak id <TXVideoCustomProcessDelegate> videoProcessDelegate; // @synthesize videoProcessDelegate=_videoProcessDelegate;
@property(nonatomic) __weak id <TXLiveRecordListener> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
@property(readonly, nonatomic) NSString *rtmpURL; // @synthesize rtmpURL=_rtmpURL;
@property(nonatomic) __weak id <TXLivePushListener> delegate; // @synthesize delegate=_delegate;
- (id)cloneConfig:(id)arg1;
- (void)setupDiffConfig:(id)arg1;
- (void)doSetEncoderParams:(id)arg1;
@property(copy, nonatomic) TXLivePushConfig *config;
- (void)callExperimentalAPI:(id)arg1;
- (_Bool)setBGMPosition:(long long)arg1;
- (_Bool)setVoiceChangerType:(long long)arg1;
- (_Bool)setReverbType:(long long)arg1;
- (_Bool)setBGMPitch:(float)arg1;
- (_Bool)setMicVolume:(float)arg1;
- (_Bool)setBGMVolume:(float)arg1;
- (int)getMusicDuration:(id)arg1;
- (_Bool)resumeBGM;
- (_Bool)pauseBGM;
- (_Bool)stopBGM;
- (_Bool)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (_Bool)playBGM:(id)arg1;
- (void)setMotionMute:(_Bool)arg1;
- (void)selectMotionTmpl:(id)arg1 inDir:(id)arg2;
- (void)setGreenScreenFile:(id)arg1;
- (void)setNoseSlimLevel:(float)arg1;
- (void)setFaceShortLevel:(float)arg1;
- (void)setChinLevel:(float)arg1;
- (void)setFaceVLevel:(float)arg1;
- (void)setFaceScaleLevel:(float)arg1;
- (void)setEyeScaleLevel:(float)arg1;
- (void)setSpecialRatio:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setBeautyStyle:(long long)arg1 beautyLevel:(float)arg2 whitenessLevel:(float)arg3 ruddinessLevel:(float)arg4;
- (int)resumeScreenCapture;
- (int)pauseScreenCapture;
- (int)stopScreenCapture;
- (void)startScreenCaptureByReplaykit:(id)arg1;
- (_Bool)enableClockOverlay;
- (void)setEnableClockOverlay:(_Bool)arg1;
- (void)setLogViewMargin:(struct UIEdgeInsets)arg1;
- (void)showVideoDebugLog:(_Bool)arg1;
- (void)sendMessage:(id)arg1;
- (_Bool)sendMessageEx:(id)arg1;
- (void)setSendAudioSampleBufferMuted:(_Bool)arg1;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (int)stopRecord;
- (int)startRecord:(id)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)setAudioVolumeEvaluationListener:(CDUnknownBlockType)arg1;
- (id)getAudioEffectManager;
- (void)setMute:(_Bool)arg1;
- (id)getBeautyManager;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)setZoom:(double)arg1;
- (_Bool)toggleTorch:(_Bool)arg1;
- (void)setRenderRotation:(int)arg1;
- (void)setMirror:(_Bool)arg1;
- (int)switchCamera;
- (void)setVideoQuality:(long long)arg1 adjustBitrate:(_Bool)arg2 adjustResolution:(_Bool)arg3;
@property(readonly, nonatomic) _Bool frontCamera;
- (_Bool)isPublishing;
- (void)resumePush;
- (void)pausePush;
- (void)stopPush;
- (int)startPush:(id)arg1;
- (void)stopPreview;
- (int)startPreview:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

