//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol IZZReactive;

@interface ZZPropertyObserver : NSObject
{
    id _instance;
    NSString *_propertyName;
    CDUnknownBlockType _map;
    CDUnknownBlockType _filter;
    CDUnknownBlockType _next;
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _filterAction;
    id _mapAction;
    NSString *_tag;
    id _removeObserverAction;
    void *_data;
    ZZPropertyObserver *_prePO;
    ZZPropertyObserver *_nextPO;
}

+ (id)createWithInstance:(id)arg1 propertyName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ZZPropertyObserver *nextPO; // @synthesize nextPO=_nextPO;
@property(nonatomic) __weak ZZPropertyObserver *prePO; // @synthesize prePO=_prePO;
@property(nonatomic) void *data; // @synthesize data=_data;
@property(copy, nonatomic) id removeObserverAction; // @synthesize removeObserverAction=_removeObserverAction;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id mapAction; // @synthesize mapAction=_mapAction;
@property(copy, nonatomic) CDUnknownBlockType filterAction; // @synthesize filterAction=_filterAction;
@property(copy, nonatomic) CDUnknownBlockType nextAction; // @synthesize nextAction=_nextAction;
@property(copy, nonatomic) CDUnknownBlockType next; // @synthesize next=_next;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) __weak id instance; // @synthesize instance=_instance;
- (id)target;
@property(readonly, nonatomic) __weak NSObject<IZZReactive> *headPO;
@property(readonly, nonatomic) NSObject<IZZReactive> *installAndFire;
@property(readonly, nonatomic) NSObject<IZZReactive> *fire;
@property(readonly, nonatomic) NSObject<IZZReactive> *install;
- (void)setIDPropertyValue:(id)arg1;
- (void)setPropertyValue:(void *)arg1;
- (id)getIDRetrunValue;
- (void)getReturnValue:(void *)arg1;
- (void)notiValueChanged;
- (void)removeObserver;
- (void)addObserver:(id)arg1;
- (void)resetObserverIfNeed;
- (void)regetDataIfNeed;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerProperty;
- (void)dealloc;
- (id)initWithInstance:(id)arg1 propertyName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

