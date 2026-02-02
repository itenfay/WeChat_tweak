//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCCollectionViewManagerConfig, GCCollectionViewSectionModel, MMUIActivityIndicatorView, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UILongPressGestureRecognizer, UIRefreshControl;
@protocol GCClvManagerProtocol;

@interface GCCollectionViewManager : NSObject
{
    _Bool _disableChildViewEvent;
    _Bool _isLoadingMorePreviousData;
    _Bool _hasInitEnd;
    _Bool _showHeaderView;
    CDUnknownBlockType _loadMoreBlock;
    id <GCClvManagerProtocol> _managerDelegate;
    UILongPressGestureRecognizer *_longPressGesture;
    double _trigerPreloadRefreshDistance;
    UICollectionView *_collectionView;
    GCCollectionViewManagerConfig *_config;
    UIRefreshControl *_refreshControl;
    NSMutableArray *_sectionArray;
    NSMutableDictionary *_reuseIdentifierDict;
    NSMutableDictionary *_reuseIdentifierForSupplementaryElementDict;
    MMUIActivityIndicatorView *_activityView;
    double _activityHeight;
    struct CGPoint _previousContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showHeaderView; // @synthesize showHeaderView=_showHeaderView;
@property(nonatomic) double activityHeight; // @synthesize activityHeight=_activityHeight;
@property(nonatomic) _Bool hasInitEnd; // @synthesize hasInitEnd=_hasInitEnd;
@property(nonatomic) _Bool isLoadingMorePreviousData; // @synthesize isLoadingMorePreviousData=_isLoadingMorePreviousData;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) NSMutableDictionary *reuseIdentifierForSupplementaryElementDict; // @synthesize reuseIdentifierForSupplementaryElementDict=_reuseIdentifierForSupplementaryElementDict;
@property(retain, nonatomic) NSMutableDictionary *reuseIdentifierDict; // @synthesize reuseIdentifierDict=_reuseIdentifierDict;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) GCCollectionViewManagerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) double trigerPreloadRefreshDistance; // @synthesize trigerPreloadRefreshDistance=_trigerPreloadRefreshDistance;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) _Bool disableChildViewEvent; // @synthesize disableChildViewEvent=_disableChildViewEvent;
@property(nonatomic) __weak id <GCClvManagerProtocol> managerDelegate; // @synthesize managerDelegate=_managerDelegate;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)realContentSize;
- (void)invalidAllCellModelLayout;
- (id)cellModelForIndexPath:(id)arg1;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)insertSection:(id)arg1 withSectionModel:(id)arg2 offset:(long long)arg3;
- (void)insertSection:(id)arg1 afterSectionModel:(id)arg2;
- (void)insertSection:(id)arg1 beforeSectionModel:(id)arg2;
- (void)appendSection:(id)arg1;
- (void)reloadSection:(id)arg1;
@property(readonly, nonatomic) GCCollectionViewSectionModel *singleSectionModel;
- (_Bool)isIndexPathVisible:(id)arg1;
- (id)indexPathForLastItem;
- (id)bindCollectionView;
- (id)collectionViewFlowLayout;
- (void)didLoadMorePreviousModelArray:(id)arg1;
- (void)forceScrollToBottom:(_Bool)arg1;
- (id)layoutAttributeForCellModel:(id)arg1;
- (id)indexPathOfCellModelPassingTest:(CDUnknownBlockType)arg1;
- (void)replaceCellModel:(id)arg1 withNewModel:(id)arg2;
- (void)reloadCellModel:(id)arg1;
- (id)indexPathForCellModel:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertModelArray:(id)arg1 toSection:(id)arg2 atIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)appendModelArray:(id)arg1 toSection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)appendModelArray:(id)arg1 toSection:(id)arg2;
- (id)getSectionModelForIndex:(long long)arg1;
- (void)setSectionModelArray:(id)arg1;
- (void)setModelArrayOnly1Section:(id)arg1;
- (void)configureShowHeaderView:(_Bool)arg1;
- (void)endRefreshWithPreviousModelArray:(id)arg1 hasMoreMessage:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onCollectionViewDataChange;
- (void)reloadCollectionView;
- (void)refreshControlDidRefresh;
- (void)handleLongPress:(id)arg1;
- (id)initWithManagerConfig:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

