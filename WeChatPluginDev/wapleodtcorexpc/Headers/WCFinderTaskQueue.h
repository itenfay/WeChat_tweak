//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface WCFinderTaskQueue : NSObject
{
    _Bool _needWakeup;
    id _owner;
    NSHashTable *_tasks;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needWakeup; // @synthesize needWakeup=_needWakeup;
@property(retain, nonatomic) NSHashTable *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
- (void)onTaskFullFill:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)onTaskFinish:(id)arg1;
- (void)cancelAll;
- (void)runTask:(id)arg1;
- (void)tryNextTask;
- (void)tryWakeup;
- (void)executeImpediately;
- (void)executeTask:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (void)executeTask:(id)arg1;
- (id)taskByName:(id)arg1;
- (_Bool)hasTask:(id)arg1;
- (id)init;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

