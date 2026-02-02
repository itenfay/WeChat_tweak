//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItemVideoOutput, CADisplayLink, FlutterEventChannel, NSString;

@interface FLTVideoPlayer : NSObject
{
    _Bool _disposed;
    _Bool _isPlaying;
    _Bool _isLooping;
    _Bool _isInitialized;
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    CADisplayLink *_displayLink;
    FlutterEventChannel *_eventChannel;
    CDUnknownBlockType _eventSink;
    struct CGAffineTransform _preferredTransform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) _Bool isLooping; // @synthesize isLooping=_isLooping;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(copy, nonatomic) CDUnknownBlockType eventSink; // @synthesize eventSink=_eventSink;
@property(retain, nonatomic) FlutterEventChannel *eventChannel; // @synthesize eventChannel=_eventChannel;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)dispose;
- (void)disposeSansEventChannel;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)onTextureUnregistered:(id)arg1;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)setPlaybackSpeed:(double)arg1;
- (void)setVolume:(double)arg1;
- (void)seekTo:(int)arg1;
- (long long)duration;
- (long long)position;
- (void)pause;
- (void)play;
- (void)sendInitialized;
- (void)updatePlayingState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithPlayerItem:(id)arg1 frameUpdater:(id)arg2;
- (struct CGAffineTransform)fixTransform:(id)arg1;
- (id)initWithURL:(id)arg1 frameUpdater:(id)arg2 httpHeaders:(id)arg3;
- (void)createVideoOutputAndDisplayLink:(id)arg1;
- (id)getVideoCompositionWithTransform:(struct CGAffineTransform)arg1 withAsset:(id)arg2 withVideoTrack:(id)arg3;
- (void)itemDidPlayToEndTime:(id)arg1;
- (void)addObservers:(id)arg1;
- (id)initWithAsset:(id)arg1 frameUpdater:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

