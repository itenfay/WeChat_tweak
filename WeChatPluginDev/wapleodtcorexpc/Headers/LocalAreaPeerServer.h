//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MCNearbyServiceAdvertiser, MCPeerID, MCSession, NSDate, NSDictionary, NSString, WXGSpeedFilter;
@protocol LocalAreaPeerServerDelegate;

@interface LocalAreaPeerServer : NSObject
{
    MCNearbyServiceAdvertiser *m_advertiser;
    MCSession *m_serverSession;
    NSDictionary *m_dicoverInfo;
    NSString *m_answerInfo;
    MCPeerID *m_localPeerID;
    MCPeerID *m_otherPeerID;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    NSDate *m_peerOpenDate;
    id <LocalAreaPeerServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LocalAreaPeerServerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getPeerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getPeerReceiveSpeed:(unsigned long long *)arg1;
- (float)getPeerSendSpeed:(unsigned long long *)arg1;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)stopServer;
- (void)startServerWithDiscoverInfo:(id)arg1 withAnswerInfo:(id)arg2 withServiceType:(id)arg3;
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

