//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString;
@protocol FlutterTaskQueue;

@protocol FlutterBinaryMessenger <NSObject>
- (void)cleanUpConnection:(long long)arg1;
- (long long)setMessageHandlerOnChannel:(NSString *)arg1 binaryMessageHandler:(void (^)(NSData *, void (^)(NSData *)))arg2;
- (void)sendOnChannel:(NSString *)arg1 message:(NSData *)arg2 binaryReply:(void (^)(NSData *))arg3;
- (void)sendOnChannel:(NSString *)arg1 message:(NSData *)arg2;

@optional
- (long long)setMessageHandlerOnChannel:(NSString *)arg1 binaryMessageHandler:(void (^)(NSData *, void (^)(NSData *)))arg2 taskQueue:(NSObject<FlutterTaskQueue> *)arg3;
- (NSObject<FlutterTaskQueue> *)makeBackgroundTaskQueue;
@end

