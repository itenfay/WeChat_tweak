//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, TingBizPlayer, TingPlayerCore;

@interface TingPlatformPlayerCore : NSObject
{
    _Bool _isPlayerSeeking;
    TingPlayerCore *_core;
    TingBizPlayer *_stashBizPlayer;
    NSHashTable *_observerList;
    NSMutableArray *_associatedPlayerListeners;
    long long _seekTargetPosition;
}

- (void).cxx_destruct;
@property(nonatomic) long long seekTargetPosition; // @synthesize seekTargetPosition=_seekTargetPosition;
@property(nonatomic) _Bool isPlayerSeeking; // @synthesize isPlayerSeeking=_isPlayerSeeking;
@property(retain, nonatomic) NSMutableArray *associatedPlayerListeners; // @synthesize associatedPlayerListeners=_associatedPlayerListeners;
@property(retain, nonatomic) NSHashTable *observerList; // @synthesize observerList=_observerList;
@property(retain, nonatomic) TingBizPlayer *stashBizPlayer; // @synthesize stashBizPlayer=_stashBizPlayer;
@property(retain, nonatomic) TingPlayerCore *core; // @synthesize core=_core;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onInfoEvent:(int)arg3 error:(id)arg4;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)stopLastPlayerCore;
- (void)holdLastPlayerCore;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)setVolume:(float)arg1;
- (void)removeAssociatedPlayerStateListener:(id)arg1;
- (void)addAssociatedPlayerStateListener:(id)arg1;
- (float)getPlayRate;
- (void)removePlayerStateClient:(id)arg1;
- (void)addWeakPlayerStateClient:(id)arg1;
- (void)addPlayerStateClient:(id)arg1;
- (long long)getPlayerDownloadPercent;
- (long long)getPlayerDuration;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerPosition;
- (int)getPlayerState;
- (void)performOnMainThread:(CDUnknownBlockType)arg1;
- (void)setPlayRate:(float)arg1;
- (void)update:(id)arg1;
- (void)seek:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)play:(id)arg1;
- (void)resetSeekingStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

