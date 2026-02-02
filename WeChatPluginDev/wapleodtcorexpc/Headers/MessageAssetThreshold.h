//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MessageAssetThreshold : NSObject
{
    long long _maxConcurrent;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) long long maxConcurrent; // @synthesize maxConcurrent=_maxConcurrent;
- (void)fetchAssetImage:(id)arg1 processBlock:(CDUnknownBlockType)arg2 resultBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;

@end

