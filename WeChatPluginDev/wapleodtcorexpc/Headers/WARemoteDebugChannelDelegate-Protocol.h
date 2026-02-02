//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WARemoteDebugChannelDelegate <NSObject>
- (void)consoleLog:(NSString *)arg1 isSendout:(_Bool)arg2;
- (void)onChannelReciveData:(NSData *)arg1;
- (void)onChannelReciveString:(NSString *)arg1;
- (void)onChannelDisconnected;
- (void)onChannelConnected;
@end

