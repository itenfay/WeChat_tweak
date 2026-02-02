//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, NSMutableArray;

@interface SafeMethodChannel : NSObject
{
    _Bool _isReady;
    FlutterMethodChannel *_channel;
    CDUnknownBlockType _handler;
    NSMutableArray *_mWaitingInvokeCall;
}

+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mWaitingInvokeCall; // @synthesize mWaitingInvokeCall=_mWaitingInvokeCall;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void)notifyReady;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)setMethodCallHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

