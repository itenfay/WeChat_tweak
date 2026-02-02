//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVPlayerItem, AVPlayerLayer, AVURLAsset, NSString, WXAVPlayerView;
@protocol WCNetworkMediaCoreDelegate;

@interface WCNetworkMediaCore
{
    WCNetworkMediaCore *weakSelf;
    _Bool hasPlayed;
    _Bool m_isNeedRestartMusic;
    int m_state;
    NSString *url;
    id <WCNetworkMediaCoreDelegate> delegate;
    AVURLAsset *m_asset;
    AVPlayerItem *m_item;
    double m_duration;
    double m_cacheDuration;
    WXAVPlayerView *_playerView;
    struct CGSize m_videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXAVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool m_isNeedRestartMusic; // @synthesize m_isNeedRestartMusic;
@property(readonly, nonatomic) int state; // @synthesize state=m_state;
@property(nonatomic) double m_cacheDuration; // @synthesize m_cacheDuration;
@property double m_duration; // @synthesize m_duration;
@property struct CGSize m_videoSize; // @synthesize m_videoSize;
@property(retain, nonatomic) AVPlayerItem *m_item; // @synthesize m_item;
@property(retain, nonatomic) AVURLAsset *m_asset; // @synthesize m_asset;
@property(nonatomic) __weak id <WCNetworkMediaCoreDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void)updateState:(int)arg1;
- (void)onCacheRangeChange:(id)arg1;
- (void)onPlayerStatusChange:(long long)arg1;
- (void)onPlayerItemStatusChange:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPlaybackFailedToEnd:(id)arg1;
- (void)onPlaybackEnd:(id)arg1;
- (void)onPlaybackStalled:(id)arg1;
- (void)internalPlay;
- (void)initPlayer;
@property(nonatomic) _Bool mute;
- (void)seekTo:(double)arg1;
- (void)accurateSeekTo:(double)arg1;
- (double)currentPosition;
- (struct CGSize)videoSize;
- (double)duration;
- (double)cacheDuration;
- (void)prepareMediaWithMuted:(_Bool)arg1;
- (void)pause;
- (void)play;
- (void)dealloc;
@property(readonly, nonatomic) AVPlayerLayer *layer;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

