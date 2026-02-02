//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableDictionary, NSString, WAAppTask, WARemoteDebugChannel, WARemoteDebugRecvQueue, WARemoteDebugSendQueue, WARemoteDebug_BaseReq, WCStateMachine, WKWebView;

@interface WARemoteDebugger : NSObject
{
    _Bool _hasConnected;
    unsigned int _channelType;
    unsigned int _debugType;
    unsigned int _supportCompressAlgo;
    unsigned int _todoReconnectCount;
    unsigned int _doneReconnectCount;
    unsigned int _evaluateID;
    unsigned int _alertBitset;
    unsigned int _maskBitset;
    WAAppTask *_task;
    WCStateMachine *_stateMachine;
    WARemoteDebugChannel *_channel;
    NSString *_roomID;
    NSString *_pkgInfo;
    WKWebView *_webView;
    NSMutableDictionary *_uuid2SendoutTimestapMap;
    WARemoteDebug_BaseReq *_baseReq;
    WARemoteDebugSendQueue *_sendQueue;
    WARemoteDebugRecvQueue *_recvQueue;
    double _heartBeatTimestamp;
    MMTimer *_heartBeatTimer;
    MMTimer *_eventMessageTimer;
    MMTimer *_speedTimer;
    NSMutableDictionary *_jscID2IDWrapMap;
    NSString *_connectJSCID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasConnected; // @synthesize hasConnected=_hasConnected;
@property(copy, nonatomic) NSString *connectJSCID; // @synthesize connectJSCID=_connectJSCID;
@property(retain, nonatomic) NSMutableDictionary *jscID2IDWrapMap; // @synthesize jscID2IDWrapMap=_jscID2IDWrapMap;
@property(nonatomic) unsigned int maskBitset; // @synthesize maskBitset=_maskBitset;
@property(nonatomic) unsigned int alertBitset; // @synthesize alertBitset=_alertBitset;
@property(retain, nonatomic) MMTimer *speedTimer; // @synthesize speedTimer=_speedTimer;
@property(retain, nonatomic) MMTimer *eventMessageTimer; // @synthesize eventMessageTimer=_eventMessageTimer;
@property(retain, nonatomic) MMTimer *heartBeatTimer; // @synthesize heartBeatTimer=_heartBeatTimer;
@property(nonatomic) double heartBeatTimestamp; // @synthesize heartBeatTimestamp=_heartBeatTimestamp;
@property(retain, nonatomic) WARemoteDebugRecvQueue *recvQueue; // @synthesize recvQueue=_recvQueue;
@property(retain, nonatomic) WARemoteDebugSendQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain, nonatomic) WARemoteDebug_BaseReq *baseReq; // @synthesize baseReq=_baseReq;
@property(nonatomic) unsigned int evaluateID; // @synthesize evaluateID=_evaluateID;
@property(nonatomic) unsigned int doneReconnectCount; // @synthesize doneReconnectCount=_doneReconnectCount;
@property(nonatomic) unsigned int todoReconnectCount; // @synthesize todoReconnectCount=_todoReconnectCount;
@property(retain, nonatomic) NSMutableDictionary *uuid2SendoutTimestapMap; // @synthesize uuid2SendoutTimestapMap=_uuid2SendoutTimestapMap;
@property(nonatomic) unsigned int supportCompressAlgo; // @synthesize supportCompressAlgo=_supportCompressAlgo;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *pkgInfo; // @synthesize pkgInfo=_pkgInfo;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) WARemoteDebugChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(nonatomic) unsigned int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak WAAppTask *task; // @synthesize task=_task;
- (id)waServiceMD5;
- (void)recvAccumulateCountReachThreshold;
- (void)recvHandleMessage:(id)arg1;
- (void)recvSyncMessagesFromMinSeq:(unsigned int)arg1 toMaxSeq:(unsigned int)arg2;
- (void)serverStateChange:(id)arg1;
- (void)onResendCancel;
- (void)onResendConfirm;
- (void)resendCountReachThreshold;
- (void)updateNoConfirmedCount:(unsigned int)arg1 noSendCount:(unsigned int)arg2;
- (void)sendFrameData:(id)arg1 consoleLog:(id)arg2;
- (void)fillSendDebugMsgReq:(id)arg1;
- (void)destorySpeedTimer;
- (void)initSpeedTimer;
- (void)destoryEventMessageTimer;
- (void)initEventMessageTimer;
- (void)destoryHeartBeatTimer;
- (void)initHeartBeatTimer;
- (void)updateSpeed;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)setupMessageTypeLookup;
- (_Bool)checkDataFormat:(id)arg1 baseResp:(id)arg2;
- (void)consoleLog:(id)arg1 isSendout:(_Bool)arg2;
- (void)onChannelReciveData:(id)arg1;
- (void)onChannelReciveString:(id)arg1;
- (void)onChannelDisconnected;
- (void)onChannelConnected;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)fetchLoginTicket;
- (void)handleDisconnectWithCode:(long long)arg1;
- (void)handleClearDisconnect;
- (void)checkEventMessageTimeout;
- (void)sendPbReq:(id)arg1 frameCmd:(unsigned int)arg2;
- (void)onConnectJSContext:(id)arg1;
- (void)onCustomMessage:(id)arg1;
- (void)onChromeDevtools:(id)arg1;
- (void)onDomOp:(id)arg1;
- (void)onPing:(id)arg1;
- (_Bool)isGameDebugBitBreakpoint;
- (void)updateMaskView;
- (void)onBreakpoint:(id)arg1;
- (void)onEvaluateJavascriptResult:(id)arg1;
- (void)onCallInterface:(id)arg1;
- (void)enSendQueue:(id)arg1;
- (void)enSendQueueOnMainThread:(id)arg1;
- (void)remoteNetworkRequest:(id)arg1 taskID:(id)arg2 header:(id)arg3;
- (void)remoteRemoteJSCString:(id)arg1;
- (void)remoteAddJSCString:(id)arg1 jscName:(id)arg2;
- (void)remoteRemoveJSCoreIDWrap:(id)arg1;
- (void)remoteAddJSCoreIDWrap:(id)arg1;
- (void)sendNewDebuggerCustomMessage:(id)arg1 payload:(id)arg2;
- (void)sendNewDebuggerMessage:(id)arg1;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (void)remoteCallInterfaceResult:(id)arg1 callID:(unsigned int)arg2;
- (void)remoteSetupContextWithConfigureJS:(id)arg1 publibVersion:(unsigned int)arg2 publibMD5:(id)arg3 threeJSMD5:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)remoteEvaluateJavascript:(id)arg1;
- (void)onSyncMessageResp:(id)arg1;
- (void)syncMessageWithMinSeq:(unsigned int)arg1 maxSeq:(unsigned int)arg2;
- (void)onQuitRoomResp:(id)arg1;
- (void)quitRoom;
- (void)onJoinRoomResp:(id)arg1;
- (void)joinRoom;
- (void)onHeartBeatResp:(id)arg1;
- (void)heartBeat;
- (void)updateHeartBeatTimestamp;
- (void)checkHeartBeatTimestamp;
- (void)onLoginResp:(id)arg1;
- (void)loginWithTick:(id)arg1;
- (void)reConnect;
- (void)onReconnectCancel;
- (void)onReconnectConfirm;
- (void)performReconnectLater;
- (void)disConnect;
- (_Bool)hasLocalJSCore;
- (void)endDebug;
- (void)endDebugAndClostTask;
- (void)onRemoteDebugWillEnd;
- (void)alterEndReason:(id)arg1;
- (void)onNotSupportedConfirm;
- (void)beginDebugWithRoomID:(id)arg1 pkgInfo:(id)arg2 channelType:(unsigned int)arg3 debugType:(unsigned int)arg4 proxyPort:(unsigned int)arg5 supportCompressAlgo:(unsigned int)arg6;
- (void)setupStateMachine;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

