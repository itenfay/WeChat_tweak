//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger, FlutterMethodCodec, FlutterTaskQueue;

@interface FlutterMethodChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMethodCodec> *_codec;
    long long _connection;
    NSObject<FlutterTaskQueue> *_taskQueue;
}

+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
- (void).cxx_destruct;
- (void)resizeChannelBuffer:(long long)arg1;
- (void)setMethodCallHandler:(CDUnknownBlockType)arg1;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3 taskQueue:(id)arg4;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;

@end

