//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger, FlutterMethodCodec, FlutterTaskQueue;

@interface FlutterEventChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMethodCodec> *_codec;
    NSObject<FlutterTaskQueue> *_taskQueue;
    long long _connection;
}

+ (id)eventChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
+ (id)eventChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
- (void).cxx_destruct;
- (void)setStreamHandler:(id)arg1;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3 taskQueue:(id)arg4;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;

@end

