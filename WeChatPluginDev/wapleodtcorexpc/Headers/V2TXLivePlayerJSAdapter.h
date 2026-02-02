//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, V2TXLivePlayerJSConfig, V2TXLivePlayerWx;
@protocol V2TXLivePlayerJSAdapterDelegate;

@interface V2TXLivePlayerJSAdapter : NSObject
{
    V2TXLivePlayerWx *_player;
    V2TXLivePlayerJSConfig *_appliedConfig;
    _Bool _needCompress;
    CDUnknownBlockType _snapshotCompletion;
    id <V2TXLivePlayerJSAdapterDelegate> _delegate;
    NSString *_playerId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(nonatomic) __weak id <V2TXLivePlayerJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)apiOnlineLog:(id)arg1 online:(_Bool)arg2;
- (void)sendEventNotify:(long long)arg1 msg:(id)arg2;
- (void)sendEventNotify:(long long)arg1 param:(id)arg2;
- (void)onPlayNetStatus:(id)arg1;
- (void)onPlayEvent:(long long)arg1 param:(id)arg2;
- (void)onPlayoutVolumeUpdate:(id)arg1 volume:(long long)arg2;
- (void)onSnapshotComplete:(id)arg1 image:(id)arg2;
- (id)getPlayerIdWithUrl:(id)arg1;
- (void)muteVideo:(_Bool)arg1;
- (void)muteAudio:(_Bool)arg1;
- (void)resumePlay;
- (void)pausePlay;
- (long long)stopPlay;
- (long long)startPlay;
- (void)applyConfig:(id)arg1 force:(_Bool)arg2;
- (id)parseConfigs:(id)arg1;
- (void)restartAudioDevice;
- (void)onlineLog:(id)arg1 online:(_Bool)arg2;
- (void)onlineLog:(id)arg1;
- (void)takePhoto:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAudioRoute:(long long)arg1;
- (void)setPreview:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) V2TXLivePlayerJSConfig *config;
- (_Bool)operateLivePlayerWithType:(id)arg1 params:(id)arg2;
- (void)updateLivePlayerWithConfigs:(id)arg1 force:(_Bool)arg2;
- (void)updateLivePlayerWithConfigs:(id)arg1;
- (id)initWithPreviewView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

