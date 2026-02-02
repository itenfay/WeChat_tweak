//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface UBBaseSignal : NSObject
{
    unsigned long long _maxObservers;
    CDUnknownBlockType _observerAdded;
    CDUnknownBlockType _observerRemoved;
    id _fire;
    id _fireForSignalObserver;
    NSMutableArray *_signalObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *signalObservers; // @synthesize signalObservers=_signalObservers;
@property(readonly, nonatomic) id fireForSignalObserver; // @synthesize fireForSignalObserver=_fireForSignalObserver;
@property(readonly, nonatomic) id fire; // @synthesize fire=_fire;
@property(copy, nonatomic) CDUnknownBlockType observerRemoved; // @synthesize observerRemoved=_observerRemoved;
@property(copy, nonatomic) CDUnknownBlockType observerAdded; // @synthesize observerAdded=_observerAdded;
@property(nonatomic) unsigned long long maxObservers; // @synthesize maxObservers=_maxObservers;
- (void)_fireData:(id)arg1 forSignalObservers:(id)arg2;
- (void)_fireNewData:(id)arg1 forSignalObservers:(id)arg2;
- (void)_purgeDeallocedListeners;
- (void)removeSignalObserver:(id)arg1;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(id)arg1 queue:(id)arg2 priority:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
- (id)addObserver:(id)arg1 priority:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (id)addObserver:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)addObserver:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long observerCount;
- (id)debugDescription;
- (id)initWithProtocol:(id)arg1;

@end

