//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_baseTCPSocket
{
}

+ (void *)tcpClientForSocketId:(id)arg1;
+ (id)socketIdForTcpClient:(void *)arg1;
+ (void)removeAllTcpSocketForAppId:(id)arg1;
+ (_Bool)removePairSocketId:(id)arg1 sockfd:(id)arg2;
- (void)addPairSocketId:(id)arg1 tcpClient:(void *)arg2;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)handleJSEvent:(id)arg1 socketId:(id)arg2 tcpClient:(void *)arg3;
- (void)handleJSEvent:(id)arg1;

@end

