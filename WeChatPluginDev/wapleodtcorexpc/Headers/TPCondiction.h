//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TPCondiction : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _waitMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long waitMs; // @synthesize waitMs=_waitMs;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void)signal;
- (void)waitWithTimeoutBlock:(CDUnknownBlockType)arg1;
- (void)wait;
- (id)initWithCondiction:(long long)arg1 waitTime:(unsigned long long)arg2;
- (id)init;

@end

