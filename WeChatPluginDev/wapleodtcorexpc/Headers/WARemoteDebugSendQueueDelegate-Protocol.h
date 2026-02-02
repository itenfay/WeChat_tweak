//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WARemoteDebug_SendDebugMessageReq;

@protocol WARemoteDebugSendQueueDelegate <NSObject>
- (void)alterEndReason:(NSString *)arg1;
- (void)serverStateChange:(NSString *)arg1;
- (void)resendCountReachThreshold;
- (void)updateNoConfirmedCount:(unsigned int)arg1 noSendCount:(unsigned int)arg2;
- (void)sendFrameData:(NSData *)arg1 consoleLog:(NSString *)arg2;
- (void)fillSendDebugMsgReq:(WARemoteDebug_SendDebugMessageReq *)arg1;
@end

