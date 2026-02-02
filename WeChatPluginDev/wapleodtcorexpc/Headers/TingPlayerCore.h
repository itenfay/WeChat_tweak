//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TingBizPlayer, TingItem, TingPlayingInfo, TingTPResourceLoader;

@interface TingPlayerCore : NSObject
{
    long long _playerId;
    TingPlayingInfo *_playingInfo;
    TingBizPlayer *_preloadBizPlayer;
    TingBizPlayer *_holdBizPlayer;
    TingTPResourceLoader *_resourceLoader;
    NSMutableArray *_pendingStopList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingStopList; // @synthesize pendingStopList=_pendingStopList;
@property(retain, nonatomic) TingTPResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) TingBizPlayer *holdBizPlayer; // @synthesize holdBizPlayer=_holdBizPlayer;
@property(retain, nonatomic) TingBizPlayer *preloadBizPlayer; // @synthesize preloadBizPlayer=_preloadBizPlayer;
@property(retain, nonatomic) TingPlayingInfo *playingInfo; // @synthesize playingInfo=_playingInfo;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(readonly, nonatomic) TingItem *tingItem;
@property(readonly, nonatomic) double bufferedTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) int status;
- (void)setVolume:(float)arg1;
@property(readonly, nonatomic) _Bool isPlayRateSupported;
@property(nonatomic) float playRate;
- (void)tingPlayingInfo:(id)arg1 onDisplayViewMTKViewCreated:(id)arg2;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onDisplayElementAvailable:(id)arg3;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onDisplayElementFrameOut:(id)arg3;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onInfoEvent:(int)arg3 error:(id)arg4;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 statusChanged:(int)arg3;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (id)currentDisplayElement;
- (id)parseTingItemFromUserInfo:(id)arg1;
- (id)parseErrorFromUserInfo:(id)arg1;
- (id)userInfoFromError:(id)arg1 tingItem:(id)arg2;
- (void)stopPreloadBizPlayer;
- (void)stopCurrentBizPlayer;
- (void)seekToTime:(double)arg1;
- (_Bool)canSeek;
- (void)clear;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)play;
- (id)tingItemPreloadKey:(id)arg1;
- (_Bool)isNewTTSSentence:(id)arg1;
- (void)pleload:(id)arg1;
- (void)createPlayingInfoWithItem:(id)arg1;
- (void)playWithItem:(id)arg1;
- (void)loadItem:(id)arg1;
- (id)init;
- (void)logError:(id)arg1;
- (void)logInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

