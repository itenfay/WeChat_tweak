//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXLivePush;

@interface MMLiveRTMPPushAdapter
{
    TXLivePush *_txLivePusher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXLivePush *txLivePusher; // @synthesize txLivePusher=_txLivePusher;
- (void)onNetStatus:(id)arg1;
- (void)onPushEvent:(int)arg1 withParam:(id)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (void)playLivePusherBgmOnMain:(id)arg1;
- (void)onLivePusherBGMComplete:(long long)arg1;
- (void)onLivePusherBGMProgress:(long long)arg1 duration:(long long)arg2;
- (void)onLivePusherBGMStart:(long long)arg1;
- (void)sendSEIMessageData:(id)arg1;
- (_Bool)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)setAudioMuted:(_Bool)arg1;
- (void)doRtmpVideoQosChange;
- (void)enableBlackStream:(_Bool)arg1;
- (void)setHEVCUsing:(_Bool)arg1 forceMixing:(_Bool)arg2;
- (void)setVideoMuted:(_Bool)arg1;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)exitRoom;
- (void)enterRoom;
- (void)stopLocalAudio;
- (void)startLocalAudio;
- (void)stopPush;
- (void)livePuserEnableBlackStream:(_Bool)arg1;
- (void)updateAudioRecord:(_Bool)arg1;
- (void)startPush:(id)arg1;
- (id)createPusher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

