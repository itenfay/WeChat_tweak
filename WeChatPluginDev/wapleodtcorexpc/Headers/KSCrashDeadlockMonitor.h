//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSThread;

@interface KSCrashDeadlockMonitor : NSObject
{
    _Bool _awaitingResponse;
    NSThread *_monitorThread;
}

- (void).cxx_destruct;
@property _Bool awaitingResponse; // @synthesize awaitingResponse=_awaitingResponse;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
- (void)runMonitor;
- (void)handleDeadlock;
- (void)watchdogAnswer;
- (void)watchdogPulse;
- (void)cancel;
- (id)init;

@end

