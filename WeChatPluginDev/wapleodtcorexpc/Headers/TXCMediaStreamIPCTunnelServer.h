//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCIPCTunnelTransport;
@protocol TXCMediaStreamIPCTunnelServerDelegate;

@interface TXCMediaStreamIPCTunnelServer : NSObject
{
    _Bool _isAccept;
    id <TXCMediaStreamIPCTunnelServerDelegate> _delegate;
    TXCIPCTunnelTransport *_transport;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCIPCTunnelTransport *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <TXCMediaStreamIPCTunnelServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAccept; // @synthesize isAccept=_isAccept;
- (void)onDisconnect;
- (void)onAccept;
- (void)onConnect;
- (void)onReceivePacket:(int)arg1 data:(id)arg2;
- (void)updateEncoderParams:(EncodeParamsTypeHeader_a837b28d)arg1;
- (void)sendTime;
- (void)sendVersion;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)requestIFrame;
- (void)sendSamplePacketWithCmd:(unsigned int)arg1;
- (void)startListen;
- (id)initWithAppGroup:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

