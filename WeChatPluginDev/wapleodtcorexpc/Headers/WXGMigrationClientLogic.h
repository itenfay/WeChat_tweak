//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatMigrationHeartBeatMonitor, MMTimer, NSArray, NSData, NSString, WXGChatLogProtoHandler, WXGLocalAreaCommunicationClient, WXGMigrationImportMessageHelper, WXGMigrationRecoverHelper;
@protocol OS_dispatch_group, OS_dispatch_queue, WXGMigrationClientLogicDelegate;

@interface WXGMigrationClientLogic : NSObject
{
    NSObject<OS_dispatch_queue> *m_processLogicQueue;
    _Bool m_bStartTransfer;
    int m_chatMigrationType;
    int m_otherSideChatMigrationVersion;
    long long m_otherSideSupportExt;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    MMTimer *m_sendHeartBeatTimer;
    double m_heartTimerCheckInterval;
    unsigned long long m_totalSize;
    unsigned long long m_recvSize;
    unsigned int m_checkLowSpeedTickTock;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    _Bool m_bFirstTag;
    double m_transferDataStartTime;
    NSString *m_lastSessionName;
    WXGMigrationRecoverHelper *m_recoverHelper;
    WXGMigrationImportMessageHelper *m_importHelper;
    WXGLocalAreaCommunicationClient *m_networkHandler;
    WXGChatLogProtoHandler *m_protoHandler;
    NSObject<OS_dispatch_group> *m_writeGroup;
    NSData *m_finishData;
    NSArray *m_currentRequestSessionDataInfoArray;
    _Bool m_bCheckSize;
    float m_lastCircleProgress;
    _Bool _bProcessFinish;
    id <WXGMigrationClientLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bProcessFinish; // @synthesize bProcessFinish=_bProcessFinish;
@property(nonatomic) __weak id <WXGMigrationClientLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getConnectDebugInfo;
- (void)onLastImportFinished;
- (void)onMigrationImportMessageError;
- (void)onMigrationImportMessageFinish;
- (void)onMigrationImportSucessPrepare;
- (_Bool)isSupportShowRescanButton;
- (_Bool)isSupportBackupNewFeature;
- (void)p_notifyOnMainThreadProcessSize;
- (void)p_notifyDisconnect;
- (void)p_notifyCurrentProgressOnMainthread;
- (void)p_notifyOnMainthread:(unsigned long long)arg1;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onData:(id)arg1 writeToFileFinish:(_Bool)arg2;
- (void)onClientTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)onClientConnectFail;
- (void)onClientDisconnect;
- (void)onClientReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_sendHeartBeat;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)p_sendDataTagResponseForDataTag:(id)arg1;
- (void)p_sendStartRequest;
- (void)p_sendSecondAuthenticateRequestPackage;
- (void)p_sendFirstAuthenticatePackage;
- (_Bool)sendData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (void)p_processHeartBeatReqeustData:(id)arg1;
- (void)p_processFinishRequestData:(id)arg1;
- (void)p_processCancelRequestData:(id)arg1;
- (void)p_processBackupDataTagData:(id)arg1;
- (void)p_processDataPushData:(id)arg1;
- (void)p_processRequestSessionData:(id)arg1;
- (void)p_processStartResponseData:(id)arg1;
- (void)p_processAuthResponseData:(id)arg1;
- (_Bool)p_checkFreeSize;
- (void)restSendHeartBeatTimer;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)sendRequestSessionResponseWithDataInfo:(id)arg1;
- (void)onMigrationNewData;
- (void)p_onMigrationNewDataNotCheckPersistent:(_Bool)arg1;
- (void)onMigrationAllDataNoCheckSize;
- (void)onMigrationAllData;
- (void)stopLogic;
- (void)startAuthenticate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

