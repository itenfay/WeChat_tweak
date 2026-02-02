//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, NSString;

@interface TingMinimizeManagerObjc : NSObject
{
    NSMutableArray *_listenerArray;
    NSRecursiveLock *_lock;
}

+ (id)create;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *listenerArray; // @synthesize listenerArray=_listenerArray;
- (void)minimizeMar:(id)arg1 onMonimizeActiveStateChanged:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)activeMinimizeTask:(CDUnknownBlockType)arg1;
- (void)deactiveMinimizeTask:(CDUnknownBlockType)arg1;
- (_Bool)hasActiveMinimizeTask;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

