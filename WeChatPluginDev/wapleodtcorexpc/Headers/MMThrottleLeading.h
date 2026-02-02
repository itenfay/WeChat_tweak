//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MMThrottleLeading
{
    double _interval;
    CDUnknownBlockType _taskBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRunTaskDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastRunTaskDate; // @synthesize lastRunTaskDate=_lastRunTaskDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void)invalidate;
- (void)runTaskDirectly;
- (void)call;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;

@end

