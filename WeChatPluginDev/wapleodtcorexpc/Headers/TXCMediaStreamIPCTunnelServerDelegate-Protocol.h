//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXCMediaStreamIPCTunnelServerDelegate <NSObject>
- (void)onReceiveAudioPacket:(unique_ptr_100b2e14)arg1;
- (void)onReceiveVideoPacket:(unique_ptr_fc608599)arg1;

@optional
- (void)onDisconnected;
- (void)onConnected;
@end

