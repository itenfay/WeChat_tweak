//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCTDatabase, WCTTable;

@interface MMOrderCenterDataService
{
    _Bool _prefetchedOrderDetailsWeApp;
    NSArray *_prefetchedTabCountItems;
    WCTDatabase *_database;
    WCTTable *_orderSearchHistoryTable;
}

+ (_Bool)isOrderCenterEnabledForFinder;
- (void).cxx_destruct;
@property(nonatomic) _Bool prefetchedOrderDetailsWeApp; // @synthesize prefetchedOrderDetailsWeApp=_prefetchedOrderDetailsWeApp;
@property(retain, nonatomic) WCTTable *orderSearchHistoryTable; // @synthesize orderSearchHistoryTable=_orderSearchHistoryTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSArray *prefetchedTabCountItems; // @synthesize prefetchedTabCountItems=_prefetchedTabCountItems;
- (id)createTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTables;
- (void)closeDatabase;
- (void)openDatabase;
- (id)databasePath;
- (void)willRecoverDatabase;
- (_Bool)clearSearchHistory;
- (_Bool)removeSearchHistory:(id)arg1;
- (_Bool)addSearchHistory:(id)arg1;
- (id)getSearchHistory;
- (void)invalidatePrefetchedOrderDetailsWeApp;
- (void)prefetchOrderDetailsWeApp;
- (void)getLandingPageTabCountItemsWithFilteringAppId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)invalidatePrefetchedLandingPageTabCountItems;
- (void)updatePrefetchedLandingPageTabCountItemsWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)searchForOrdersWithKeyword:(id)arg1 filteringAppId:(id)arg2 offset:(unsigned int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void)getOrderListWithOrderType:(unsigned int)arg1 evaluationStatus:(unsigned int)arg2 filteringAppId:(id)arg3 lastIndex:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
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

