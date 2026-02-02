//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol TXCIPCTunnelTransportDelegate <NSObject>
- (void)onDisconnect;
- (void)onAccept;
- (void)onConnect;
- (void)onReceivePacket:(int)arg1 data:(NSData *)arg2;
@end

