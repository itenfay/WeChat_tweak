//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface FlutterBinaryMessengerRelay : NSObject
{
    NSObject<FlutterBinaryMessenger> *_parent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<FlutterBinaryMessenger> *parent; // @synthesize parent=_parent;
- (void)cleanUpConnection:(long long)arg1;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(CDUnknownBlockType)arg2 taskQueue:(id)arg3;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(CDUnknownBlockType)arg2;
- (id)makeBackgroundTaskQueue;
- (void)sendOnChannel:(id)arg1 message:(id)arg2 binaryReply:(CDUnknownBlockType)arg3;
- (void)sendOnChannel:(id)arg1 message:(id)arg2;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

