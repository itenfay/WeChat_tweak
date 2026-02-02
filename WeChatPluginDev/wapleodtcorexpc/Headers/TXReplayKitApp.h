//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TXCDarwinNotificationCenter, TXCMediaStreamIPCTunnelServer;
@protocol OS_dispatch_queue;

@interface TXReplayKitApp : NSObject
{
    NSMutableDictionary *_delegateTable;
    TXCMediaStreamIPCTunnelServer *_server;
    TXCDarwinNotificationCenter *_center;
    NSObject<OS_dispatch_queue> *_outputQueue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(retain, nonatomic) TXCDarwinNotificationCenter *center; // @synthesize center=_center;
@property(retain, nonatomic) TXCMediaStreamIPCTunnelServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSMutableDictionary *delegateTable; // @synthesize delegateTable=_delegateTable;
- (void)onDisconnected;
- (void)onConnected;
- (void)onReceiveAudioPacket:(unique_ptr_100b2e14)arg1;
- (void)onReceiveVideoPacket:(unique_ptr_fc608599)arg1;
- (void)removeDelegateWithKey:(id)arg1;
- (void)addDelegateWithKey:(id)arg1 delegate:(id)arg2;
- (void)requestIFrame;
- (void)updateEncoderParams:(EncodeParamsTypeHeader_a837b28d)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithAppGroup:(id)arg1;
- (void)setupObserver;
- (void)removeObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

