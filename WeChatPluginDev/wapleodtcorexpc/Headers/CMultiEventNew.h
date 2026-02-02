//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface CMultiEventNew : NSObject
{
    _Bool m_bStart;
    NSMutableArray *m_arrEvent;
    NSMutableArray *m_arrPendingEvent;
    NSRecursiveLock *m_oEventLock;
}

- (void).cxx_destruct;
- (id)FindEvent:(unsigned int)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (void)AddEvent:(id)arg1;
- (void)ClearStopEvent;
- (void)Stop;
- (void)TryStartEvent:(id)arg1;
- (void)Start;
- (_Bool)IsStart;
- (void)dealloc;
- (id)init;

@end

