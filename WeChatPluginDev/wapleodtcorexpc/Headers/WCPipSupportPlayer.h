//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayer, AVPlayerItem, NSString, WCPlayerLayerView;
@protocol WCPipPlayerDelegate;

@interface WCPipSupportPlayer : NSObject
{
    _Bool _loopBack;
    _Bool _isPipPlaying;
    unsigned int _taskId;
    float _volume;
    float _rate;
    id <WCPipPlayerDelegate> _delegate;
    double _duration;
    long long _state;
    NSString *_videoGravity;
    AVAsset *_asset;
    AVPlayerItem *_playerItem;
    WCPlayerLayerView *_displayView;
    AVPlayer *_player;
    id _positionObserver;
    double _lastPlaybackTime;
}

- (void).cxx_destruct;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) double lastPlaybackTime; // @synthesize lastPlaybackTime=_lastPlaybackTime;
@property(retain, nonatomic) id positionObserver; // @synthesize positionObserver=_positionObserver;
@property(retain) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) WCPlayerLayerView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isPipPlaying; // @synthesize isPipPlaying=_isPipPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool loopBack; // @synthesize loopBack=_loopBack;
@property(nonatomic) __weak id <WCPipPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)onCurrentPlaybackChanged:(double)arg1;
- (void)addPlayerObservers;
- (void)onPlayerItemDidPlayToEnd;
- (void)changePlayerState:(long long)arg1;
- (void)onTimeControlStatusChange:(long long)arg1;
- (void)observePlayerStatus;
- (void)printTimeControlStatus:(long long)arg1;
- (void)startToPlayItem;
- (void)removePositionObserver;
- (void)resetPlayerValues;
- (void)resetPlayerComponent;
- (void)resetPlayerView;
- (void)reset;
- (void)onMainPlayerPlayToEnd;
- (void)setPlayerRate:(double)arg1;
- (void)setPlayerVolume:(double)arg1;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareWithPlayerItem:(id)arg1;
@property(readonly, nonatomic) double currentTime;
- (void)dealloc;
- (id)initWithDisplayView:(id)arg1;

@end

