//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayerLayer, NSNumber, NSString, TAVMediaPlayer;
@protocol MAVVideoCompositionPlayerDelegate;

@interface MAVVideoCompositionPlayer : NSObject
{
    _Bool _loop;
    NSNumber *_id;
    id <MAVVideoCompositionPlayerDelegate> _delegate;
    TAVMediaPlayer *_player;
    AVPlayerLayer *_playerLayer;
    CDStruct_e83c9415 _playRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) TAVMediaPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <MAVVideoCompositionPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) CDStruct_e83c9415 playRange; // @synthesize playRange=_playRange;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void)callbackPlayError;
- (void)callbackPlayCompleted;
- (void)callbackPlayStopped;
- (void)callbackPlayStarted;
- (void)mediaPlayer:(id)arg1 playerDidReset:(id)arg2;
- (void)mediaPlayer:(id)arg1 stateDidChange:(long long)arg2;
- (void)mediaPlayer:(id)arg1 progressDidChange:(CDStruct_1b6d18a9)arg2;
- (void)mediaPlayerDidPlayToEnd:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)destory;
- (void)stop;
- (void)refreshSurface;
- (void)pause;
- (void)play;
- (void)muteOrigin:(_Bool)arg1;
- (_Bool)isPlaying;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (void)setProgressInterval:(CDStruct_1b6d18a9)arg1;
- (void)updateComposition:(id)arg1 withPlay:(_Bool)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)updateComposition:(id)arg1;
- (void)dealloc;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

