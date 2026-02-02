//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ICCollectionStatInfo, ICCollectionView, NSMutableArray, NSString;

@interface ICCollectionViewController
{
    _Bool _hasMoreData;
    _Bool _isLoadingNewData;
    _Bool _isLoadingMoreData;
    _Bool _isFirstLoad;
    ICCollectionStatInfo *_statInfo;
    ICCollectionView *_collectionView;
    NSMutableArray *_sectionItems;
    id _loadingNewId;
    id _loadingMoreId;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id loadingMoreId; // @synthesize loadingMoreId=_loadingMoreId;
@property(nonatomic) __weak id loadingNewId; // @synthesize loadingNewId=_loadingNewId;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) _Bool isLoadingMoreData; // @synthesize isLoadingMoreData=_isLoadingMoreData;
@property(nonatomic) _Bool isLoadingNewData; // @synthesize isLoadingNewData=_isLoadingNewData;
@property(retain, nonatomic) NSMutableArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) ICCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ICCollectionStatInfo *statInfo; // @synthesize statInfo=_statInfo;
- (void)updateFooterViewHidden:(_Bool)arg1;
- (void)reset;
- (void)reloadDataItems:(id)arg1;
- (void)removeAllDataItem;
- (id)sectionItemsAt:(long long)arg1;
- (long long)sectionItemCountAt:(long long)arg1;
- (long long)sectionCount;
- (void)removeSectionAt:(unsigned long long)arg1;
- (void)appendSectionItems:(id)arg1;
- (void)appendDataItems:(id)arg1 atSection:(long long)arg2;
- (void)insertSectionItems:(id)arg1 at:(id)arg2;
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
- (id)indexPathOfDataItemWhere:(CDUnknownBlockType)arg1;
- (id)indexPathOfDataItem:(id)arg1;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (void)processLoadMoreDataResult:(id)arg1 error:(id)arg2 isFirstLoad:(_Bool)arg3;
- (id)loadMoreData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopLoadingMoreData:(id)arg1;
- (void)stopFetchingMoreData;
- (void)didApplyCacheDataWithHasMoreData:(_Bool)arg1;
- (void)fetchMoreData:(id)arg1;
- (void)fetchMoreData;
- (void)willLoadMoreData;
- (_Bool)shouldLoadMoreData;
- (void)didFinishLoadNewData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (void)processLoadNewDataResult:(id)arg1 error:(id)arg2 shouldClearOldData:(_Bool)arg3 isFirstLoad:(_Bool)arg4 processCompletion:(CDUnknownBlockType)arg5;
- (id)loadNewData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopLoadingNewData:(id)arg1;
- (void)stopFetchingNewData;
- (void)fetchNewData;
- (void)willLoadNewData;
- (_Bool)shouldLoadNewData;
- (_Bool)isLoadingData;
- (void)startBatchFetching:(id)arg1;
- (_Bool)shouldBeginBatchFetching;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (id)collectionLayout;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

