//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface MJTimeCostReporterService : NSObject
{
    NSMutableDictionary *_eventStartDates;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSMutableDictionary *eventStartDates; // @synthesize eventStartDates=_eventStartDates;
- (void)reportEventWithName:(id)arg1 params:(id)arg2;
- (void)markEventEndWithName:(id)arg1 endReason:(id)arg2 params:(id)arg3;
- (void)markEventEndWithName:(id)arg1 endReason:(id)arg2;
- (void)markEventEndWithName:(id)arg1;
- (void)markEventBeginWithName:(id)arg1;
- (id)init;

@end

