//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger, FlutterMessageCodec, FlutterTaskQueue;

@interface FlutterBasicMessageChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMessageCodec> *_codec;
    long long _connection;
    NSObject<FlutterTaskQueue> *_taskQueue;
}

+ (void)setWarnsOnOverflow:(_Bool)arg1 forChannelWithName:(id)arg2 binaryMessenger:(id)arg3;
+ (void)resizeChannelWithName:(id)arg1 binaryMessenger:(id)arg2 size:(long long)arg3;
+ (id)messageChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
+ (id)messageChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
- (void).cxx_destruct;
- (void)setWarnsOnOverflow:(_Bool)arg1;
- (void)resizeChannelBuffer:(long long)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3 taskQueue:(id)arg4;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;

@end

