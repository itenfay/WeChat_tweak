//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue, UBBaseSignal;

@interface UBSignalObserver : NSObject
{
    _Bool _cancelsAfterNextFire;
    NSOperationQueue *_operationQueue;
    unsigned long long _priority;
    UBBaseSignal *_signal;
    id _observer;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) __weak id observer; // @synthesize observer=_observer;
@property(nonatomic) __weak UBBaseSignal *signal; // @synthesize signal=_signal;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool cancelsAfterNextFire; // @synthesize cancelsAfterNextFire=_cancelsAfterNextFire;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)cancel;
- (id)debugDescription;
- (id)initWithSignal:(id)arg1 observer:(id)arg2 queue:(id)arg3 callback:(CDUnknownBlockType)arg4 priority:(unsigned long long)arg5;

@end

