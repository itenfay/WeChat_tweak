//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCRedEnvelopesControlMgr
{
    _Bool m_bRceivingGreeting;
}

@property(nonatomic) _Bool m_bRceivingGreeting; // @synthesize m_bRceivingGreeting;
- (void)refreshCurrentRedEnvLaunchMode:(long long)arg1;
- (void)resetCurrentRedEnvLaunchMode;
- (long long)getCurrentRedEnvLaunchMode;
- (unsigned int)startOpenTextStateRedenvelopesDetailLogic:(id)arg1 delegate:(id)arg2;
- (unsigned int)startReceiveLiveStreamRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startReceiveLiveStreamRedEnvelopesLogic:(id)arg1 messageWrap:(id)arg2 showCustomMessage:(id)arg3 senderIdentity:(unsigned int)arg4;
- (unsigned int)startStreamRedEnvelopesDetailSystemMessageControlLogic:(id)arg1 NativeUrl:(id)arg2 senderIdentity:(unsigned int)arg3;
- (unsigned int)startOpenLiveStreamRedEnvelopesDetail:(id)arg1 sendId:(id)arg2;
- (unsigned int)startReceiveLiveStreamRedEnvelopesLogic:(id)arg1 messageWrap:(id)arg2 liveStreamId:(id)arg3 liveStreamInfo:(id)arg4 senderIdentity:(unsigned int)arg5;
- (unsigned int)startSendLiveStreamEnvelopesLogic:(id)arg1 liveStreamId:(id)arg2 liveStreamInfo:(id)arg3 senderIdentity:(unsigned int)arg4;
- (unsigned int)startOpenIMSystemMessageLogic:(id)arg1 nativeUrl:(id)arg2 messageWrap:(id)arg3 withSelectedContact:(id)arg4;
- (unsigned int)startOverseaSystemMessageControlLogic:(id)arg1 NativeUrl:(id)arg2 messageWrap:(id)arg3;
- (unsigned int)startSendOpenIMRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3 WithSelectContact:(id)arg4;
- (unsigned int)startSendOpenIMRedEnvelopesLogic:(id)arg1 Scene:(unsigned int)arg2 WithSelectContact:(id)arg3;
- (unsigned int)startOverseaReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startPreviewRedEnvelopes:(id)arg1 Data:(id)arg2;
- (unsigned int)startOverseaRedEnvelopesDetail:(id)arg1 sendId:(id)arg2;
- (unsigned int)startOpenRedEnvelopesDetail:(id)arg1 sendId:(id)arg2 hbKind:(unsigned int)arg3 receiveId:(id)arg4;
- (_Bool)UseBalance;
- (unsigned int)startReceiveGreetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (void)OnWCHBOpenApi:(id)arg1 withAppID:(id)arg2 andBundleID:(id)arg3 universalLink:(id)arg4;
- (void)jsGetRecevieBizHongBaoRequest:(id)arg1;
- (unsigned int)startReceiveRedEnvelopesLogicWithJS:(id)arg1 Data:(id)arg2 Scene:(int)arg3 Event:(id)arg4;
- (unsigned int)startSystemMessageControlLogic:(id)arg1 NativeUrl:(id)arg2 messageWrap:(id)arg3;
- (unsigned int)startBrandServiceControlLogic:(id)arg1 NativeUrl:(id)arg2;
- (unsigned int)startReceiveRedEnvEnterpriseLogicWithOpenApiInner:(id)arg1 AppId:(id)arg2 BundleId:(id)arg3 universalLink:(id)arg4 HBParam:(id)arg5;
- (unsigned int)startReceiveRedEnvelopesLogicByC2C:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendGeetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned long long)arg3;
- (unsigned int)startSendGeetingRedEnvelopesLogicWithShake:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendGeetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendNotReceivedListEnvelopesReceivedListLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendEnvelopesReceivedListLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceivedRedEnvelopesListLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendRedEnvelopesLogic:(id)arg1 Data:(id)arg2 WithSelectContact:(id)arg3 Scene:(unsigned int)arg4 RedEnvelopesType:(unsigned long long)arg5;
- (unsigned int)startSendRedEnvelopesLogic:(id)arg1 WithSelectContact:(id)arg2 Scene:(unsigned int)arg3 RedEnvelopesType:(unsigned long long)arg4;
- (_Bool)checkIsCanSendRedEnvelopesLogic;
- (unsigned int)startSendRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (void)stopCurrentLogic;
- (unsigned int)startLogic:(id)arg1;
- (_Bool)isLastLogicTheSame:(Class)arg1;
- (void)onServiceTerminate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

