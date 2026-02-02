//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MCNearbyServiceBrowser, MCPeerID, MCSession, MMTimer, NSDate, NSDictionary, NSString, WXGSpeedFilter;
@protocol LocalAreaPeerClientDelegate;

@interface LocalAreaPeerClient : NSObject
{
    MCNearbyServiceBrowser *m_browser;
    MCSession *m_clientSession;
    NSString *m_currentServiceType;
    NSDictionary *m_dicoverInfo;
    NSString *m_answerInfo;
    MCPeerID *m_localPeerID;
    MCPeerID *m_otherPeerID;
    _Bool m_bConnectOK;
    MMTimer *m_connectTimer;
    NSDate *m_peerOpenDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReceiveLength;
    unsigned long long m_lastTotalSendLength;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_receiveSpeedFilter;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    id <LocalAreaPeerClientDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LocalAreaPeerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getClientOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getPeertSendSpeed:(unsigned long long *)arg1;
- (float)getPeerReceiveSpeed:(unsigned long long *)arg1;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (_Bool)p_checkDiscoverInfo:(id)arg1;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)stopClient;
- (void)p_checkConnected;
- (void)startClientWithDiscoverInfo:(id)arg1 withAnswerInfo:(id)arg2 withServiceType:(id)arg3;
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

