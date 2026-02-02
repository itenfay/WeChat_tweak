//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol V2TXLivePlayerObserverWx;

@interface V2TXLivePlayerWx
{
    long long _networkQuality;
    _Bool _enableMessage;
    id <V2TXLivePlayerObserverWx> _observer;
}

+ (void)log:(id)arg1 isOnline:(_Bool)arg2;
- (void).cxx_destruct;
- (void)sendEventNotify:(long long)arg1 msg:(id)arg2;
- (void)sendEventNotify:(long long)arg1 param:(id)arg2;
- (void)onNetworkQuality:(long long)arg1;
- (void)onPlayNetStatus:(id)arg1;
- (void)onPlayEvent:(long long)arg1 param:(id)arg2;
- (void)onReceiveSeiMessage:(id)arg1 payloadType:(int)arg2 data:(id)arg3;
- (void)onRenderVideoFrame:(id)arg1 frame:(id)arg2;
- (void)onSnapshotComplete:(id)arg1 image:(id)arg2;
- (void)onStatisticsUpdate:(id)arg1 statistics:(id)arg2;
- (void)onPlayoutVolumeUpdate:(id)arg1 volume:(long long)arg2;
- (void)onAudioLoading:(id)arg1 extraInfo:(id)arg2;
- (void)onVideoLoading:(id)arg1 extraInfo:(id)arg2;
- (void)onAudioPlaying:(id)arg1 firstPlay:(_Bool)arg2 extraInfo:(id)arg3;
- (void)onVideoPlaying:(id)arg1 firstPlay:(_Bool)arg2 extraInfo:(id)arg3;
- (void)onConnected:(id)arg1 extraInfo:(id)arg2;
- (void)onVideoResolutionChanged:(id)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)onWarning:(id)arg1 code:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)onError:(id)arg1 code:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (long long)enableReceiveSeiMessage:(_Bool)arg1 payloadType:(int)arg2;
- (void)setObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

