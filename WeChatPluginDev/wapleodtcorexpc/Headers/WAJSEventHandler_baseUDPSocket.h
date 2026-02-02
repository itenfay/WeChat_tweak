//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_baseUDPSocket
{
}

+ (void *)udpClientForSocketId:(id)arg1;
+ (id)socketIdForUdpClient:(void *)arg1;
+ (void)removeAllUdpSocketForAppId:(id)arg1;
+ (void)removePairSocketId:(id)arg1;
- (void)addPairSocketId:(id)arg1 udpClient:(void *)arg2;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)handleJSEvent:(id)arg1 socketId:(id)arg2 udpClient:(void *)arg3;
- (void)handleJSEvent:(id)arg1;

@end

