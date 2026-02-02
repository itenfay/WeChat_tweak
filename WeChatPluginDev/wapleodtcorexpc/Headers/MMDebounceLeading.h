//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MMDebounceLeading
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSDate *_lastCallTaskDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastCallTaskDate; // @synthesize lastCallTaskDate=_lastCallTaskDate;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)runTaskDirectly;
- (void)invalidate;
- (void)call;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;

@end

