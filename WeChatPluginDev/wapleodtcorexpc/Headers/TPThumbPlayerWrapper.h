//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPThumbPlayerWrapper : NSObject
{
    struct ITPPlayer *_player;
    struct TPThumbPlayerMessageCallbackWrapper *_msgCbWrapper;
    struct TPThumbPlayerAudioFrameCallbackWrapper *_audioFrameCbWrapper;
    struct TPThumbPlayerVideoFrameCallbackWrapper *_videoFrameCbWrapper;
    struct TPThumbPlayerSubtitleFrameCallbackWrapper *_subtitleFrameCbWrapper;
    struct TPThumbPlayerDemuxerCallbackWrapper *_demuxerCbWrapper;
    struct TPThumbPlayerPostProcessFrameCallbackWrapper *_postprocessFrameCbWrapper;
    shared_ptr_61da5af9 _eventRecordCbWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_61da5af9 eventRecordCbWrapper; // @synthesize eventRecordCbWrapper=_eventRecordCbWrapper;
@property(nonatomic) struct TPThumbPlayerPostProcessFrameCallbackWrapper *postprocessFrameCbWrapper; // @synthesize postprocessFrameCbWrapper=_postprocessFrameCbWrapper;
@property(nonatomic) struct TPThumbPlayerDemuxerCallbackWrapper *demuxerCbWrapper; // @synthesize demuxerCbWrapper=_demuxerCbWrapper;
@property(nonatomic) struct TPThumbPlayerSubtitleFrameCallbackWrapper *subtitleFrameCbWrapper; // @synthesize subtitleFrameCbWrapper=_subtitleFrameCbWrapper;
@property(nonatomic) struct TPThumbPlayerVideoFrameCallbackWrapper *videoFrameCbWrapper; // @synthesize videoFrameCbWrapper=_videoFrameCbWrapper;
@property(nonatomic) struct TPThumbPlayerAudioFrameCallbackWrapper *audioFrameCbWrapper; // @synthesize audioFrameCbWrapper=_audioFrameCbWrapper;
@property(nonatomic) struct TPThumbPlayerMessageCallbackWrapper *msgCbWrapper; // @synthesize msgCbWrapper=_msgCbWrapper;
@property(nonatomic) struct ITPPlayer *player; // @synthesize player=_player;
- (struct ITPPlayer *)getPlayer;
- (struct TPDynamicStatisticParams)getDynamicStatisticParamsAndReset;
- (struct TPDynamicStatisticParams)getDynamicStatisticParams;
- (struct TPGeneralPlayFlowParams)getGeneralPlayFlowParams;
- (long long)getDemuxerOffsetInFile;
- (int)getPlayerID;
- (struct TPFrame *)getSubtitleSnapshot:(int)arg1 width:(int)arg2 height:(int)arg3;
- (struct TPFrame *)getSnapshot:(int)arg1 width:(int)arg2 height:(int)arg3;
- (vector_5a53d670)getProgramInfo;
- (vector_fdf80d0c)getTrackInfo;
- (long long)getBufferedSize;
- (long long)getBufferedDurationMs;
- (long long)getCurrentPositionMs;
- (long long)getDurationMs;
- (int)getVideoHeight;
- (int)getVideoWidth;
- (id)getPropertyString:(int)arg1;
- (long long)getPropertyLong:(int)arg1;
- (int)setEventRecordCallback:(id)arg1;
- (int)setPostProcessFrameCallback:(id)arg1;
- (int)setDemuxerCallback:(id)arg1;
- (int)setSubtitleFrameCallback:(id)arg1;
- (int)setVideoFrameCallback:(id)arg1;
- (int)setAudioFrameCallback:(id)arg1;
- (int)setMessageCallback:(id)arg1;
- (int)setLoopback:(_Bool)arg1 startTimeMs:(long long)arg2 endTimeMs:(long long)arg3;
- (int)setVideoGravity:(int)arg1;
- (int)setVideoSurface:(id)arg1;
- (int)setPlaybackRate:(float)arg1;
- (int)setAudioNormalizeVolumeParams:(id)arg1;
- (int)setAudioMute:(_Bool)arg1;
- (int)setAudioVolume:(float)arg1;
- (int)setOptionObject:(int)arg1 objectParam:(void *)arg2;
- (int)setOptionLong:(int)arg1 lParam1:(long long)arg2 lParam2:(long long)arg3;
- (int)selectProgramAsync:(int)arg1 opaque:(long long)arg2;
- (int)deselectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (int)selectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (int)addAudioTrackSource:(id)arg1 trackName:(id)arg2 httpHeader:(id)arg3;
- (int)addAudioTrackSource:(id)arg1 trackName:(id)arg2;
- (int)addSubtitleTrackSource:(id)arg1 trackName:(id)arg2 httpHeader:(id)arg3;
- (int)addSubtitleTrackSource:(id)arg1 trackName:(id)arg2;
- (int)switchDefinitionAsync:(id)arg1 withHttpHeader:(id)arg2 mode:(int)arg3 opaque:(long long)arg4;
- (int)switchDefinitionAsync:(id)arg1 mode:(int)arg2 opaque:(long long)arg3;
- (int)switchDefinitionAsync:(id)arg1 opaque:(long long)arg2;
- (int)seekToAsync:(long long)arg1 mode:(int)arg2 opaque:(long long)arg3;
- (int)releasePlayer;
- (int)reset;
- (int)stop;
- (int)pause;
- (int)start;
- (int)prepareAsync;
- (int)prepare;
- (int)setDataSource:(id)arg1 withHttpHeaders:(id)arg2;
- (int)setDataSource:(id)arg1;
- (int)setInitConfig:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

