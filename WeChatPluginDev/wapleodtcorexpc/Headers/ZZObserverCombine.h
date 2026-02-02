//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IZZReactive;

@interface ZZObserverCombine : NSObject
{
    NSArray *_poList;
    CDUnknownBlockType _map;
    CDUnknownBlockType _filter;
    CDUnknownBlockType _next;
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _filterAction;
    id _mapAction;
}

+ (id)createWithPOList:(id)arg1 mapAction:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id mapAction; // @synthesize mapAction=_mapAction;
@property(copy, nonatomic) CDUnknownBlockType filterAction; // @synthesize filterAction=_filterAction;
@property(copy, nonatomic) CDUnknownBlockType nextAction; // @synthesize nextAction=_nextAction;
@property(copy, nonatomic) CDUnknownBlockType next; // @synthesize next=_next;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;
@property(retain, nonatomic) NSArray *poList; // @synthesize poList=_poList;
@property(readonly, nonatomic) __weak NSObject<IZZReactive> *headPO;
@property(readonly, nonatomic) NSObject<IZZReactive> *installAndFire;
@property(readonly, nonatomic) NSObject<IZZReactive> *fire;
@property(readonly, nonatomic) NSObject<IZZReactive> *install;
- (id)getIDRetrunValue;
- (void)getReturnValue:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

