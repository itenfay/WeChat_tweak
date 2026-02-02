//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol WXGBackupBasicLogicProtocol <NSObject>
- (void)restartLogic;
- (void)confirmLogic;
- (void)stopService;
- (void)startService;

@optional
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)processFilterResponseData:(NSData *)arg1;
- (void)processFilterRequestData:(NSData *)arg1;
- (void)processFinishRequestData:(NSData *)arg1;
- (void)processBackupDataTagResponseData:(NSData *)arg1;
- (void)processBackupDataTagData:(NSData *)arg1;
- (void)processDataPushResponseData:(NSData *)arg1;
- (void)processDataPushData:(NSData *)arg1;
- (void)processRequestSessionResponseData:(NSData *)arg1;
- (void)processRequestSessionData:(NSData *)arg1;
- (void)processStartRequestData:(NSData *)arg1;
- (void)processStartResponseData:(NSData *)arg1;
- (void)resendService;
@end

