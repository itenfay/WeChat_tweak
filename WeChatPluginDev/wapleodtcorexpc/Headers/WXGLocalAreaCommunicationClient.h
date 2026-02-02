//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LocalAreaNetworkClient, LocalAreaPeerClient, MMTimer, NSData, NSDate, NSMutableString, NSString;
@protocol LocalAreaCommunicationClientDelegate;

@interface WXGLocalAreaCommunicationClient : NSObject
{
    LocalAreaPeerClient *m_peerClient;
    LocalAreaNetworkClient *m_networkClient;
    unsigned long long m_transferType;
    NSData *m_firstPacketData;
    MMTimer *m_cutConnectionTimer;
    MMTimer *m_transferSpeedTimer;
    NSMutableString *m_connectInfoString;
    NSDate *m_timeTryToCut;
    double m_slowCutInterval;
    float m_slowGapSpeed;
    _Bool m_detectReach;
    _Bool _tryPeer;
    unsigned short _server_port;
    id <LocalAreaCommunicationClientDelegate> _delegate;
    NSString *_server_ip;
    NSString *_server_id;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_wifiName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(nonatomic) _Bool tryPeer; // @synthesize tryPeer=_tryPeer;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(nonatomic) __weak id <LocalAreaCommunicationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getDebugInfo;
- (void)ReachabilityChange:(unsigned int)arg1;
- (unsigned long long)getClientOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getClientSendSpeed:(unsigned long long *)arg1;
- (float)getClientReceiveSpeed:(unsigned long long *)arg1;
- (void)onPeerConnected;
- (void)onPeerConnectFailed;
- (void)onPeerDisconnect;
- (void)onPeerReceiveData:(id)arg1;
- (void)onNetworkConnectFail;
- (void)onNetworkDisconnect;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)choosePeerChannel;
- (void)chooseNetworkChannel;
- (_Bool)canHaveMultipeer;
- (_Bool)isPeerTransferData;
- (void)p_stopPeerClient;
- (void)p_stopNetworkClient;
- (void)clientDisconnect;
- (unsigned long long)clientSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_initiativeToTerminateClient;
- (void)checkTransferSpeed;
- (void)p_resetPeerClient;
- (void)p_resetNetworkClient;
- (id)initWithServerIP:(id)arg1 serverPort:(unsigned short)arg2 serverID:(id)arg3 serverHello:(id)arg4 serverOk:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

