//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXLivePlayConfig, UIView;
@protocol TXAudioRawDataDelegate, TXLivePlayListener, TXLiveRecordListener, TXVideoCustomProcessDelegate;

@interface TXLivePlayer : NSObject
{
    struct unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread;
    struct Player *_player;
    Config_224c4c0b _inner_config;
    struct shared_ptr<liteav::live::TXLivePlayerObserverImpl> _client;
    UIView *_containView;
    _Bool _enableHWAcceleration;
    _Bool _isAutoPlay;
    id <TXLivePlayListener> _delegate;
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate;
    id <TXAudioRawDataDelegate> _audioRawDataDelegate;
    TXLivePlayConfig *_config;
    id <TXLiveRecordListener> _recordDelegate;
}

+ (void)setAudioRoute:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) __weak id <TXLiveRecordListener> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
@property(copy, nonatomic) TXLivePlayConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool enableHWAcceleration; // @synthesize enableHWAcceleration=_enableHWAcceleration;
@property(nonatomic) __weak id <TXAudioRawDataDelegate> audioRawDataDelegate; // @synthesize audioRawDataDelegate=_audioRawDataDelegate;
@property(nonatomic) __weak id <TXVideoCustomProcessDelegate> videoProcessDelegate; // @synthesize videoProcessDelegate=_videoProcessDelegate;
@property(nonatomic) __weak id <TXLivePlayListener> delegate; // @synthesize delegate=_delegate;
- (id)getFileNameByTimeNow:(id)arg1 fileType:(id)arg2;
- (void)enableAudioVolumeEqualizer:(id)arg1;
- (void)enableIPMultiplexing:(_Bool)arg1;
- (void)setLebCacheParams:(id)arg1;
- (void)reportExternalBusinessData:(id)arg1;
- (void)enableReportStreamRspInfo:(id)arg1;
- (void)setAudioJitterBufferFactory:(id)arg1;
- (void)externalNotifyCustomRenderFirstFrameEvent;
- (void)enableMetalRender:(_Bool)arg1;
- (void)EnableBackgroundDecoding:(_Bool)arg1;
- (void)setEncryptionParams:(id)arg1;
- (void)callExperimentalAPI:(id)arg1;
- (unsigned long long)getCurrentRenderPts;
- (int)switchStream:(id)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)setAudioVolumeEvaluationListener:(CDUnknownBlockType)arg1;
- (void)showVideoDebugLog:(_Bool)arg1;
- (void)setLogViewMargin:(struct UIEdgeInsets)arg1;
- (void)setRate:(float)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (int)stopRecord;
- (int)startRecord:(long long)arg1;
- (void)setVolume:(int)arg1;
- (void)setMute:(_Bool)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setRenderRotation:(long long)arg1;
- (int)resumeLive;
- (int)seek:(float)arg1;
- (int)prepareLiveSeek:(id)arg1 bizId:(long long)arg2;
- (void)resume;
- (void)pause;
- (_Bool)isPlaying;
- (int)stopPlay;
- (int)startPlay:(id)arg1 type:(long long)arg2;
- (void)removeVideoWidget;
- (void)setupVideoWidget:(struct CGRect)arg1 containView:(id)arg2 insertIndex:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

@end

