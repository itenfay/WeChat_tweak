//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMThrottle : NSObject
{
}

- (void)invalidate;
- (void)call;
- (id)initWithThrottleMode:(unsigned long long)arg1 interval:(double)arg2 onQueue:(id)arg3 taskBlock:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(CDUnknownBlockType)arg3;
- (id)initWithInterval:(double)arg1 taskBlock:(CDUnknownBlockType)arg2;

@end

