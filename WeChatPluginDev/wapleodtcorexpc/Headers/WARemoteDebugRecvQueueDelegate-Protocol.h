//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WARemoteDebug_DebugMessage;

@protocol WARemoteDebugRecvQueueDelegate <NSObject>
- (void)consoleLog:(NSString *)arg1 isSendout:(_Bool)arg2;
- (void)recvAccumulateCountReachThreshold;
- (void)recvHandleMessage:(WARemoteDebug_DebugMessage *)arg1;
- (void)recvSyncMessagesFromMinSeq:(unsigned int)arg1 toMaxSeq:(unsigned int)arg2;
@end

