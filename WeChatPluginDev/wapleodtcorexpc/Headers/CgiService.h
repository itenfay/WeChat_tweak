//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSLock, NSMapTable, NSString;

@interface CgiService
{
    NSMapTable *_mapTable;
    NSLock *_lock;
}

+ (void)handleResultWithExpacedClass:(Class)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)sharedService;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)eventForId:(unsigned int)arg1;
- (void)invalidateAllEvent;
- (void)cancelCgiEvent:(unsigned int)arg1;
- (unsigned int)sendCgi:(unsigned int)arg1 request:(id)arg2 expectedResponseClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned int)sendCgi:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)sendCgi:(unsigned int)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_removeAllRequest;
- (void)_removeEventForId:(unsigned int)arg1;
- (void)_addEvent:(id)arg1 forId:(unsigned int)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

