//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPMediaItemArtwork, NSDate, NSMutableDictionary, NSString;

@interface TingNowPlayingInfoCenter : NSObject
{
    NSMutableDictionary *_nowPlayingInfo;
    NSDate *_lastCheckNowPlayingInfoTime;
    long long _backgroundState;
    MPMediaItemArtwork *_defaultArtwork;
}

+ (id)reportParamWithPlayer:(id)arg1;
+ (id)handlerArtworkResponseImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MPMediaItemArtwork *defaultArtwork; // @synthesize defaultArtwork=_defaultArtwork;
@property(nonatomic) long long backgroundState; // @synthesize backgroundState=_backgroundState;
@property(retain, nonatomic) NSDate *lastCheckNowPlayingInfoTime; // @synthesize lastCheckNowPlayingInfoTime=_lastCheckNowPlayingInfoTime;
@property(retain, nonatomic) NSMutableDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
- (void)checkUpdateProgressChanged:(id)arg1;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)flowPlayer:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)flowPlayer:(id)arg1 onPlayingContextUpdated:(id)arg2;
- (void)onPlayingInfoUpdate:(id)arg1;
- (void)iRemoteControlCheckEvent:(id)arg1;
- (unsigned long long)__genNowPlayingPlayBackState:(int)arg1;
- (id)genNowPlayingArtworkForImage:(id)arg1;
- (id)nowPlayingInfoWithPlayingItem:(id)arg1 player:(id)arg2;
- (void)onNowPlayingInfoUpdated:(id)arg1;
- (void)updateNowPlayingInfoIfNeedWithPlayingItem:(id)arg1 player:(id)arg2;
- (long long)onHandleMPRemoteCommandClicked:(id)arg1;
- (void)setMPRemoteCommand:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (void)registerMPRemoteCommand:(id)arg1 action:(SEL)arg2;
- (void)refreshRemoteControlButtonStatus:(int)arg1;
- (void)registerCommandCenterActions;
- (long long)onPrevTrackCommand:(id)arg1;
- (long long)onNextTrackCommand:(id)arg1;
- (long long)onChangePlaybackPositionCommand:(id)arg1;
- (long long)onPlayPauseCommand:(id)arg1;
- (long long)onPauseCommand:(id)arg1;
- (long long)onPlayCommand:(id)arg1;
- (void)resetRemoteControlAndPlayingInfoWithPlayingItem:(id)arg1;
- (void)resetRemoteControlAndPlayingInfo;
- (_Bool)canResetNowPlay;
- (id)moduleId;
- (id)activePlayer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

