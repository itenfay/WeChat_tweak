//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LocalAreaNetworkServer, LocalAreaPeerServer, MMTimer, NSString;
@protocol LocalAreaCommunicationServerDelegate;

@interface WXGLocalAreaCommunicationServer : NSObject
{
    LocalAreaPeerServer *m_peerServer;
    LocalAreaNetworkServer *m_networkServer;
    unsigned long long m_transferType;
    MMTimer *m_transferSpeedTimer;
    MMTimer *m_cutConnectionTimer;
    _Bool m_isTestSpeedOpen;
    double m_slowCutInterval;
    float m_slowGapSpeed;
    _Bool m_peerDisconnect;
    _Bool m_networkDisconnect;
    id <LocalAreaCommunicationServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LocalAreaCommunicationServerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getServerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getServerReceiveSpeed:(unsigned long long *)arg1;
- (float)getServerSendSpeed:(unsigned long long *)arg1;
- (void)onPeerDisconnect;
- (void)onPeerConnected;
- (void)onPeerReceiveData:(id)arg1;
- (void)onNetworkDisconnect;
- (void)onNetworkConnected;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (unsigned long long)sendPeerTestSpeedPacketResponse;
- (unsigned long long)sendNetworkTestSpeedPacketResponse;
- (void)chooseNetworkChannel;
- (void)choosePeerChannel;
- (void)markTestSpeedIsClose;
- (void)markTestSpeedIsOpen;
- (unsigned long long)serverSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_stopPeerServer;
- (void)p_stopNetworkServer;
- (void)stopServer;
- (void)startPeerServerWithServerID:(id)arg1 serverHello:(id)arg2 serverOK:(id)arg3;
- (void)initiativeToTerminateServer;
- (void)checkTransferSpeed;
- (void)startNetworkServer:(id *)arg1 port:(unsigned short *)arg2;
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

