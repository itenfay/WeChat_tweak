//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString, WXGSpeedFilter;
@protocol LocalAreaNetworkServerDelegate;

@interface LocalAreaNetworkServer
{
    NSString *client_ip;
    unsigned short client_port;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    NSDate *m_serverConnectDate;
    id <LocalAreaNetworkServerDelegate> _delegate;
}

+ (void)stopServer;
- (void).cxx_destruct;
@property(nonatomic) __weak id <LocalAreaNetworkServerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getServerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getServerReceiveSpeed:(unsigned long long *)arg1;
- (float)getServerSendSpeed:(unsigned long long *)arg1;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)onConnected:(id)arg1 port:(unsigned short)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (_Bool)startServer:(id *)arg1 port:(unsigned short *)arg2;
- (void)dealloc;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

