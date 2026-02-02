//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TPWorkerQueue : NSObject
{
    void *_workingQueueKey;
    unsigned long long _queueType;
    NSObject<OS_dispatch_queue> *_workingQueue;
}

+ (id)workerQueueWithQueueType:(unsigned long long)arg1 queueName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(nonatomic) unsigned long long queueType; // @synthesize queueType=_queueType;
- (void)destoryQueue;
- (void)scheduleTaskSync:(CDUnknownBlockType)arg1;
- (void)scheduleTaskAsync:(CDUnknownBlockType)arg1;

@end

