//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCAsyncSocket, TXCIPCTunnelEndPoint;
@protocol OS_dispatch_queue, TXCIPCTunnelTransportDelegate;

@interface TXCIPCTunnelTransport : NSObject
{
    int _listenPort;
    int _current_packet_type;
    TXCAsyncSocket *_socket;
    NSObject<OS_dispatch_queue> *_socketQueue;
    TXCIPCTunnelEndPoint *_endpoint;
    id <TXCIPCTunnelTransportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int current_packet_type; // @synthesize current_packet_type=_current_packet_type;
@property(nonatomic) __weak id <TXCIPCTunnelTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TXCIPCTunnelEndPoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *socketQueue; // @synthesize socketQueue=_socketQueue;
@property(retain, nonatomic) TXCAsyncSocket *socket; // @synthesize socket=_socket;
@property(nonatomic) int listenPort; // @synthesize listenPort=_listenPort;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 memoryOwner:(id)arg4;
- (void)socket:(id)arg1 didConnectToUrl:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)readPacketHeader;
- (void)disconnect;
- (void)accept;
- (void)connect;
- (void)sendBuffer:(id)arg1;
- (id)initWithEndPoint:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

