//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, NSURL, WAOpenALAudioDecodeInfo;
@protocol IWAAudioPlayerDelegate, WAAudioSource;

@interface WAGameAudioPlayer
{
    long long _state;
    _Bool _autoLoop;
    _Bool _autoPlay;
    _Bool _obeyMuteSwitch;
    NSURL *_url;
    NSString *_appId;
    NSString *_audioId;
    NSString *_src;
    double _startTime;
    double _bufferTime;
    double _volume;
    NSData *_fileData;
    WAOpenALAudioDecodeInfo *_alDecodeInfo;
    id <WAAudioSource> _source;
    id <IWAAudioPlayerDelegate> _delegate;
    double _playbackRate;
}

- (void).cxx_destruct;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) __weak id <IWAAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <WAAudioSource> source; // @synthesize source=_source;
@property(retain) WAOpenALAudioDecodeInfo *alDecodeInfo; // @synthesize alDecodeInfo=_alDecodeInfo;
@property(retain) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool autoLoop; // @synthesize autoLoop=_autoLoop;
- (void)sourceDidError:(id)arg1 error:(id)arg2;
- (void)sourceDidFinishPlaying:(id)arg1;
- (void)sourceSeeked:(id)arg1;
- (void)sourceSeeking:(id)arg1;
- (void)sourceStop:(id)arg1;
- (void)sourcePaused:(id)arg1;
- (void)sourceStartPlaying:(id)arg1;
- (void)setOpenALContext;
- (void)setState:(long long)arg1 error:(id)arg2;
- (void)endLoad;
- (void)initSourceOnMainThread;
- (_Bool)bUseOpenAL;
- (_Bool)backgroundLoadData:(id)arg1 src:(id)arg2;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double curTime;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isSet;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;
- (void)setPlayerWithSrc:(id)arg1 url:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7 fileData:(id)arg8 playbackRate:(double)arg9 referrer:(id)arg10;
- (id)initWithAudioId:(id)arg1 appId:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

