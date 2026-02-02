//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol EditVideoBGMPlayerDelegate;

@interface EditVideoBGMPlayer : NSObject
{
    _Bool _muted;
    _Bool _playOnSystemMutedState;
    _Bool _allowsExternalPlayback;
    _Bool _asyncLoadInfo;
    _Bool _hasReadyToPlayObserver;
    _Bool _hasStartedPlaying;
    id <EditVideoBGMPlayerDelegate> _delegate;
    AVPlayer *_player;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStartedPlaying; // @synthesize hasStartedPlaying=_hasStartedPlaying;
@property(nonatomic) _Bool hasReadyToPlayObserver; // @synthesize hasReadyToPlayObserver=_hasReadyToPlayObserver;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool asyncLoadInfo; // @synthesize asyncLoadInfo=_asyncLoadInfo;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) _Bool playOnSystemMutedState; // @synthesize playOnSystemMutedState=_playOnSystemMutedState;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <EditVideoBGMPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updatePlayerMuted;
- (void)downloadMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadMusic:(id)arg1;
- (void)replayMusic;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (double)currentPlayerItemDuration;
- (_Bool)shouldBePlaying;
- (_Bool)isPlayingState;
- (_Bool)isPausedState;
- (void)seekToTime:(double)arg1;
- (void)resume;
- (void)pause;
- (id)urlOfCurrentlyPlayingInPlayer:(id)arg1;
- (id)getInnerPlayer;
- (long long)currentTimeControlStatus;
- (CDStruct_1b6d18a9)currentPlayerTime;
- (id)getPlayerUrl;
- (id)assetWithLocalPath:(id)arg1 startTimeInMs:(unsigned long long)arg2 durationInMs:(unsigned long long)arg3;
- (id)assetWithUrl:(id)arg1;
- (_Bool)musicDataNeedTimeCrop:(id)arg1;
- (void)_playWithAVAsset:(id)arg1;
- (void)playMusicWithData:(id)arg1;
- (void)asyncPlayMusicWithData:(id)arg1;
- (void)playMusic:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeCurrentItemReadyToPlayObserver;
- (void)addCurrentItemReadyToPlayObserver;
- (void)dealloc;
- (id)init;

@end

