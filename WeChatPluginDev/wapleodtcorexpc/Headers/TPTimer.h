//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TPTimer : NSObject
{
    _Bool _isValid;
    _Bool _isrepeat;
    double _timeInterval;
    id _atarget;
    SEL _aSelector;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 queue:(id)arg6;
+ (id)timerQueue;
- (void).cxx_destruct;
@property(nonatomic) _Bool isrepeat; // @synthesize isrepeat=_isrepeat;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) SEL aSelector; // @synthesize aSelector=_aSelector;
@property __weak id atarget; // @synthesize atarget=_atarget;
@property double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)invalidate;
- (void)pause;
- (void)resumeAfterSec:(long long)arg1;
- (void)resume;
- (void)repeatSelector;
- (id)init;

@end

