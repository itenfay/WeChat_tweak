//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSInputStream, NSNetService, NSOutputStream;

@protocol NSNetServiceDelegate <NSObject>

@optional
- (void)netService:(NSNetService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)netService:(NSNetService *)arg1 didUpdateTXTRecordData:(NSData *)arg2;
- (void)netServiceDidStop:(NSNetService *)arg1;
- (void)netService:(NSNetService *)arg1 didNotResolve:(NSDictionary *)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg1;
- (void)netServiceWillResolve:(NSNetService *)arg1;
- (void)netService:(NSNetService *)arg1 didNotPublish:(NSDictionary *)arg2;
- (void)netServiceDidPublish:(NSNetService *)arg1;
- (void)netServiceWillPublish:(NSNetService *)arg1;
@end

