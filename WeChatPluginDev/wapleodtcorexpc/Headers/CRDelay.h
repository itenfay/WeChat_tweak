//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface CRDelay : NSObject
{
    double _seconds;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)delayWithSeconds:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
- (void)start;
- (void)cancel;
- (id)initWithDelayInSeconds:(double)arg1;

@end

