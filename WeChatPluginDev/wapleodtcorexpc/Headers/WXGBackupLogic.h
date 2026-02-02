//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatMigrationHeartBeatMonitor, MMTimer, NSString, WXGBackupBasicLogic, WXGChatLogProtoHandler, WXGLocalAreaCommunicationClient;
@protocol OS_dispatch_queue, WXGBackupLogicDelegate;

@interface WXGBackupLogic : NSObject
{
    _Bool _bGetFirstPacket;
    _Bool _bInDilutedNetwork;
    _Bool _bDone;
    _Bool _bHeartBeatLate;
    id <WXGBackupLogicDelegate> _delegate;
    WXGLocalAreaCommunicationClient *_networkHandler;
    WXGChatLogProtoHandler *_protoHandler;
    WXGBackupBasicLogic *_processLogic;
    ChatMigrationHeartBeatMonitor *_heartBeatMonitor;
    NSObject<OS_dispatch_queue> *_processLogicQueue;
    MMTimer *_sendHeartBeatTimer;
    double _transferDataStartTime;
    long long _otherSideSupportExt;
}

- (void).cxx_destruct;
@property(nonatomic) long long otherSideSupportExt; // @synthesize otherSideSupportExt=_otherSideSupportExt;
@property(nonatomic) double transferDataStartTime; // @synthesize transferDataStartTime=_transferDataStartTime;
@property(nonatomic) _Bool bHeartBeatLate; // @synthesize bHeartBeatLate=_bHeartBeatLate;
@property(nonatomic) _Bool bDone; // @synthesize bDone=_bDone;
@property(nonatomic) _Bool bInDilutedNetwork; // @synthesize bInDilutedNetwork=_bInDilutedNetwork;
@property(retain, nonatomic) MMTimer *sendHeartBeatTimer; // @synthesize sendHeartBeatTimer=_sendHeartBeatTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processLogicQueue; // @synthesize processLogicQueue=_processLogicQueue;
@property(retain, nonatomic) ChatMigrationHeartBeatMonitor *heartBeatMonitor; // @synthesize heartBeatMonitor=_heartBeatMonitor;
@property(nonatomic) _Bool bGetFirstPacket; // @synthesize bGetFirstPacket=_bGetFirstPacket;
@property(retain, nonatomic) WXGBackupBasicLogic *processLogic; // @synthesize processLogic=_processLogic;
@property(retain, nonatomic) WXGChatLogProtoHandler *protoHandler; // @synthesize protoHandler=_protoHandler;
@property(retain, nonatomic) WXGLocalAreaCommunicationClient *networkHandler; // @synthesize networkHandler=_networkHandler;
@property(nonatomic) __weak id <WXGBackupLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSupportWXAM;
- (id)getConnectDebugInfo;
- (_Bool)isLogicRetransfer;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)processOnMainThreadAlertCode:(unsigned long long)arg1;
- (void)processAlertCode:(unsigned long long)arg1;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)onBasicLogicAlert:(unsigned long long)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBasicLogicNotifyEvent:(unsigned long long)arg1;
- (_Bool)onBasicLogicSendData:(id)arg1;
- (void)onClientTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)onClientConnectFail;
- (void)onClientDisconnect;
- (void)onClientReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)processHeartBeatResponseData:(id)arg1;
- (void)processHeartBeatRequestData:(id)arg1;
- (void)processCancelRequestData:(id)arg1;
- (void)processAuthResponseData:(id)arg1;
- (void)processCommandResponseData:(id)arg1;
- (void)processCommandRequestData:(id)arg1;
- (id)makeProcessLogifyForCommand:(int)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeat;
- (void)restSendHeartBeatTimer;
- (void)sendCancelRequest;
- (void)sendSecondAuthenticateRequestPakage;
- (void)sendFirstAuthenticateRequestPakage;
- (_Bool)sendCommandRequestWithCommand:(int)arg1 withData:(id)arg2;
- (_Bool)sendCommandResponseWithCommand:(int)arg1;
- (_Bool)sendData:(id)arg1;
- (void)reportDisconnect;
- (unsigned long long)getAlreadyTransferSize;
- (_Bool)isInDilutedNetwork;
- (void)startAuthenticate;
- (void)restartLogic;
- (void)cancelLogic;
- (void)confirmLogic;
- (void)stopLogic;
- (void)startLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

