//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TXCDispatchQueue : NSObject
{
    void *_queueKey;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)mainQueue;
+ (id)createDecodeQueue;
+ (id)createEncodeQueue;
+ (id)captureQueue;
+ (id)consumerQueue;
+ (id)producerQueue;
+ (id)pipelineQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)assertInQueue;
- (_Bool)isInQueue;
- (void)runAsync:(CDUnknownBlockType)arg1 after:(long long)arg2;
- (void)forceAsync:(CDUnknownBlockType)arg1;
- (void)runSync:(CDUnknownBlockType)arg1;
- (void)runOnQueueOrAsync:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithName:(const char *)arg1;

@end

