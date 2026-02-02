//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayerCpp
{
}

- (void)removePlayerStateClient:(id)arg1;
- (void)addPlayerStateClient:(id)arg1;
- (float)getPlayRate;
- (long long)getPlayerDownloadPercent;
- (long long)getPlayerDuration;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerPosition;
- (int)getPlayerState;
- (void)setVolume:(float)arg1;
- (void)removeAssociatedPlayerStateListener:(id)arg1;
- (void)addAssociatedPlayerStateListener:(id)arg1;
- (void)stopLastPlayerCore;
- (void)holdLastPlayerCore;
- (void)update:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)seek:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)play:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

