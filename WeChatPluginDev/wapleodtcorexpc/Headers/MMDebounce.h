//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDebounce : NSObject
{
    double _interval;
    CDUnknownBlockType _taskBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void)invalidate;
- (void)call;
- (id)initWithDebounceMode:(unsigned long long)arg1 interval:(double)arg2 onQueue:(id)arg3 taskBlock:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;
- (id)initWithInterval:(double)arg1 taskBlock:(CDUnknownBlockType)arg2;

@end

