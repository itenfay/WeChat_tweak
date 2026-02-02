//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSLock, NSMapTable, NSString;

@interface BrandCGIReportService
{
    NSMapTable *_mapTable;
    NSLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
- (id)_requestForEventID:(unsigned int)arg1;
- (id)_removeAllRequest;
- (void)_removeRequestForEventID:(unsigned int)arg1;
- (void)_addRequest:(id)arg1 forEventID:(unsigned int)arg2;
- (void)cancelAllRequest;
- (void)cancelCgiRequest:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)sendCgiRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
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

