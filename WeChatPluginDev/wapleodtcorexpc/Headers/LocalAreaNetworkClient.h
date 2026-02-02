//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSDate, NSString, WXGSpeedFilter;
@protocol LocalAreaNetworkClientDelegate;

@interface LocalAreaNetworkClient
{
    unsigned long long m_totalReciveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    NSDate *m_realSendStartDate;
    NSDate *m_sendStartDate;
    NSDate *m_reciveStartDate;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    _Bool m_bIsInDisconnect;
    _Bool m_bFirstBusinessPacket;
    _Bool m_bFirstPacketOKofBusiness;
    MMTimer *m_firstPacketTimer;
    unsigned short _server_port;
    id <LocalAreaNetworkClientDelegate> _delegate;
    NSString *_server_ip;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(nonatomic) __weak id <LocalAreaNetworkClientDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getClientOpenTime;
- (unsigned long long)getTotalRecvLength;
- (unsigned long long)getTotalSendLength;
- (float)getClientSendSpeed:(unsigned long long *)arg1;
- (float)getClientRecvSpeed:(unsigned long long *)arg1;
- (void)p_checkFirstPacket;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)stopClient;
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

