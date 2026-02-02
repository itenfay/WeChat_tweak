//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface CMultiEvent : NSObject
{
    _Bool m_bStart;
    NSMutableArray *m_arrEvent;
    NSMutableDictionary *m_dicThreadEvent;
    NSOperationQueue *m_operationQueuEvent;
    NSRecursiveLock *m_oEventLock;
}

- (void).cxx_destruct;
- (id)GetLock;
- (id)FindEvent:(unsigned int)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (void)AddEvent:(id)arg1;
- (void)ClearStopEvent;
- (void)Stop;
- (void)Start;
- (_Bool)IsStart;
- (void)dealloc;
- (id)init;

@end

