//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface MMDebounceTrailing
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)invalidate;
- (void)call;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;

@end

