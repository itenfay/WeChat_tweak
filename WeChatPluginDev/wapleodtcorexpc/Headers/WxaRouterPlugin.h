//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, SafeMethodChannel;

@interface WxaRouterPlugin : NSObject
{
    SafeMethodChannel *_channel;
    NSMutableSet *_consumers;
}

+ (void)registerWithRegistrar:(id)arg1;
+ (id)registerRegistrar:(id)arg1;
+ (id)pluginName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *consumers; // @synthesize consumers=_consumers;
@property(retain, nonatomic) SafeMethodChannel *channel; // @synthesize channel=_channel;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)setupChannelWithRegistrar:(id)arg1;
- (void)removeMethodConsumer:(id)arg1;
- (void)addMethodConsumer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

