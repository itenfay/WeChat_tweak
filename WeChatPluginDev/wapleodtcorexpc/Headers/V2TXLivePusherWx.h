//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_semaphore, V2TXLivePusherObserverWx;

@interface V2TXLivePusherWx
{
    unsigned long long _mode;
    long long _networkQuality;
    NSMutableSet *_mainStreamUserList;
    NSMutableSet *_subStreamUserList;
    id <V2TXLivePusherObserverWx> _observer;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (void)log:(id)arg1 isOnline:(_Bool)arg2;
- (void).cxx_destruct;
- (void)sendEventNotify:(long long)arg1 msg:(id)arg2;
- (void)sendEventNotify:(long long)arg1 param:(id)arg2;
- (void)notifyFullUserList;
- (id)streamTypeConvert:(long long)arg1;
- (id)getPlayUrl:(id)arg1 streamType:(long long)arg2;
- (id)getJSONStrForUserList:(id)arg1;
- (_Bool)isRTC;
- (unsigned long long)getURLModeWithURL:(id)arg1;
- (void)onNetworkQuality:(long long)arg1;
- (void)onUserAudioAvailable:(id)arg1 available:(_Bool)arg2;
- (void)onUserVideoAvailable:(id)arg1 streamType:(long long)arg2 available:(_Bool)arg3;
- (void)onRemoteUserExit:(id)arg1 reason:(long long)arg2;
- (void)onRemoteUserEnter:(id)arg1;
- (void)onExitRoom:(long long)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onPushNetStatus:(id)arg1;
- (void)onPushEvent:(long long)arg1 param:(id)arg2;
- (void)onSetMixTranscodingConfig:(long long)arg1 message:(id)arg2;
- (void)onGLContextDestroyed;
- (void)onProcessVideoFrame:(id)arg1 dstFrame:(id)arg2;
- (void)onSnapshotComplete:(id)arg1;
- (void)onStatisticsUpdate:(id)arg1;
- (void)onPushStatusUpdate:(long long)arg1 message:(id)arg2 extraInfo:(id)arg3;
- (void)onMicrophoneVolumeUpdate:(long long)arg1;
- (void)onCaptureFirstVideoFrame;
- (void)onCaptureFirstAudioFrame;
- (void)onWarning:(long long)arg1 message:(id)arg2 extraInfo:(id)arg3;
- (void)onError:(long long)arg1 message:(id)arg2 extraInfo:(id)arg3;
- (long long)startPush:(id)arg1;
- (void)setObserver:(id)arg1;
- (id)initWithLiveMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

