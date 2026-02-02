//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface TPTimeTracker : NSObject
{
    NSDate *_beginDate;
    long long _intervalMs;
    unsigned long long _lastState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastState; // @synthesize lastState=_lastState;
@property(nonatomic) long long intervalMs; // @synthesize intervalMs=_intervalMs;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
- (void)invalidate;
- (void)stop;
- (void)pause;
- (void)run;
- (long long)totalIntervalMs;
- (id)init;

@end

