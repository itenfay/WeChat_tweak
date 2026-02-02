//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer, NSMutableArray;

@interface MMFinderLiveBackgroundMusicLogic : NSObject
{
    _Bool _canPlayMusic;
    NSMutableArray *_musicURLList;
    unsigned long long _currentIndex;
    AVPlayer *_audioPlayer;
    unsigned long long _playerErrorCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playerErrorCount; // @synthesize playerErrorCount=_playerErrorCount;
@property(retain, nonatomic) AVPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *musicURLList; // @synthesize musicURLList=_musicURLList;
@property(nonatomic) _Bool canPlayMusic; // @synthesize canPlayMusic=_canPlayMusic;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)appDidBecomeActive:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)removeAudioSessionObserver;
- (void)addAudioSessionObserver;
- (void)removeAudioPlayerObserver;
- (void)addAudioPlayerObserver;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)onPlayerDidFinishPlaying;
- (void)checkAndResumeAfterEvent;
- (void)handlePlayerError;
- (void)createMusicURLListWithList:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long musicCount;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)stop;
- (void)pause;
- (void)resumeOrPlayNext;
- (void)playNext;
- (void)play;
- (id)initWithMusicList:(id)arg1;

@end

