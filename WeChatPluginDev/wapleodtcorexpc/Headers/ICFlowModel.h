//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ICBatchFetchingContext, ICCollectionStatInfo, NSHashTable, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICFlowModel : NSObject
{
    _Bool _isFirstLoad;
    _Bool _hasMore;
    ICCollectionStatInfo *_statInfo;
    NSHashTable *_observerList;
    NSObject<OS_dispatch_queue> *_workThread;
    NSMutableArray *_sectionItems;
    id _loadingNewId;
    id _loadingMoreId;
    ICBatchFetchingContext *_batchFetchingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICBatchFetchingContext *batchFetchingContext; // @synthesize batchFetchingContext=_batchFetchingContext;
@property(nonatomic) __weak id loadingMoreId; // @synthesize loadingMoreId=_loadingMoreId;
@property(nonatomic) __weak id loadingNewId; // @synthesize loadingNewId=_loadingNewId;
@property(retain, nonatomic) NSMutableArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workThread; // @synthesize workThread=_workThread;
@property(retain, nonatomic) NSHashTable *observerList; // @synthesize observerList=_observerList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) ICCollectionStatInfo *statInfo; // @synthesize statInfo=_statInfo;
- (void)cancelFetchMore:(id)arg1;
- (void)cancelFetchMore;
- (void)handleFetchMore:(id)arg1 result:(id)arg2 error:(id)arg3 hasMore:(_Bool)arg4;
- (void)processLoadMore:(id)arg1 error:(id)arg2;
- (void)didExecuteLoadMoreWithResults:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3;
- (id)executeLoadMore;
- (id)loadMore:(CDUnknownBlockType)arg1;
- (void)fetchMore:(id)arg1;
- (_Bool)shouldLoadMore;
- (_Bool)isLoadingMore;
- (void)cancelFetchNew:(id)arg1;
- (void)cancelFetchNew;
- (void)handleFetchNewResult:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3;
- (void)processLoadNew:(id)arg1 error:(id)arg2;
- (id)loadNew:(CDUnknownBlockType)arg1;
- (void)didExecuteLoadNewWithResults:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3;
- (id)executeLoadNew;
- (void)fetchNew;
- (_Bool)isLoadingNew;
- (_Bool)isLoading;
- (void)enumerateObserver:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateObserver:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)updateUIDataItems:(id)arg1;
- (void)reloadDataItems:(id)arg1;
- (void)removeAllDataItem;
- (id)sectionItemsAt:(long long)arg1;
- (long long)sectionItemCountAt:(long long)arg1;
- (long long)sectionCount;
- (void)removeSectionAt:(unsigned long long)arg1;
- (void)insertSectionItems:(id)arg1 at:(long long)arg2;
- (void)appendSectionItems:(id)arg1;
- (void)appendDataItems:(id)arg1 atSection:(long long)arg2;
- (void)replaceSectionItems:(id)arg1 at:(long long)arg2;
- (long long)dataItemCount;
- (void)removeDataItemAt:(id)arg1;
- (void)replaceDataItem:(id)arg1 at:(id)arg2;
- (void)insertDataItem:(id)arg1 at:(id)arg2;
- (void)appendDataItem:(id)arg1;
- (id)dataItemAt:(id)arg1;
- (id)lastSectionItems;
- (id)lastDataItem;
- (id)allSectionItems;
- (id)allFlatDataItemsWhere:(CDUnknownBlockType)arg1;
- (id)allFlatDataItems;
- (id)indexPathOfDataItemWhere:(CDUnknownBlockType)arg1;
- (id)indexPathOfDataItem:(id)arg1;

@end

