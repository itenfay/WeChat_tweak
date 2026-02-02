//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WARemoteJSCoreIDWrap;

@protocol WAJSCoreServiceRemoteDelegate <NSObject>
- (void)sendNewDebuggerCustomMessage:(NSString *)arg1 payload:(NSString *)arg2;
- (void)sendNewDebuggerMessage:(NSString *)arg1;
- (void)remoteNetworkRequest:(NSString *)arg1 taskID:(NSString *)arg2 header:(NSDictionary *)arg3;
- (void)remoteRemoveJSCoreIDWrap:(WARemoteJSCoreIDWrap *)arg1;
- (void)remoteAddJSCoreIDWrap:(WARemoteJSCoreIDWrap *)arg1;
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned int)arg2;
- (void)remoteCallInterfaceResult:(NSString *)arg1 callID:(unsigned int)arg2;
- (void)remoteSetupContextWithConfigureJS:(NSString *)arg1 publibVersion:(unsigned int)arg2 publibMD5:(NSString *)arg3 threeJSMD5:(NSString *)arg4 completionHandler:(void (^)(void))arg5;
- (void)remoteEvaluateJavascript:(NSString *)arg1;
- (_Bool)hasLocalJSCore;
- (void)endDebug;
- (void)alterEndReason:(NSString *)arg1;
- (void)beginDebugWithRoomID:(NSString *)arg1 pkgInfo:(NSString *)arg2 channelType:(unsigned int)arg3 debugType:(unsigned int)arg4 proxyPort:(unsigned int)arg5 supportCompressAlgo:(unsigned int)arg6;
@end

