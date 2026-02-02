//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreMoreManualFetchFooterView, EmotionCollectionFooterView, InfiniteLoopContainerView, MMLoadMoreCollectionView, MMTimer, MMUIViewController, NSArray, NSMutableArray, NSString, StoreEmoticonTopicProxyLogic, UICollectionViewFlowLayout, UIView;

@interface MMWechatEmotionsViewController
{
    UICollectionViewFlowLayout *_layout;
    UIView *m_collectionHeaderView;
    EmotionCollectionFooterView *_footerView;
    MMTimer *m_timer;
    NSArray *m_sectionInfoArray;
    NSMutableArray *_storeItemArray;
    NSMutableArray *_storeAdsArray;
    NSMutableArray *m_cellSetList;
    unsigned int _topHotNum;
    unsigned int m_recentHotNum;
    unsigned int _scene;
    unsigned int _reqType;
    unsigned long long _sessionId;
    _Bool m_hasGetFirstResponse;
    MMUIViewController *m_contentsViewController;
    _Bool m_isEmoticonStoreExpt;
    unsigned long long _searchScene;
    InfiniteLoopContainerView *_bannerView;
    EmoticonStoreMoreManualFetchFooterView *_moreFooterView;
    MMLoadMoreCollectionView *_collectionView;
    StoreEmoticonTopicProxyLogic *_topicVCPorxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmoticonTopicProxyLogic *topicVCPorxy; // @synthesize topicVCPorxy=_topicVCPorxy;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) EmoticonStoreMoreManualFetchFooterView *moreFooterView; // @synthesize moreFooterView=_moreFooterView;
@property(retain, nonatomic) InfiniteLoopContainerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (void)registerYReportSdk;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)onTriggerRefresh;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onStoreEmotionAllCellTapButton:(id)arg1;
- (void)openPageForBannerSet:(id)arg1 IsFromBanner:(_Bool)arg2;
- (struct CGSize)adjustedSizeForBanner;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (void)OnRestoreEmoticonItemSuccess;
- (void)OnStoreListChanged:(id)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reportEmoticonStoreExposure;
- (void)adjustContentInsetAndSearchBarMask;
- (void)tryInitViewOfSearchController;
- (_Bool)isFirstitemForSectionType:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)itemForSectionType:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)configSectionInfos;
- (void)reloadAdsFromMgr;
- (void)reloadData;
- (void)configTailView;
- (void)configBanner;
- (void)configHeaderView;
- (void)configCollectionView;
- (void)configData;
- (void)configViews;
- (void)changeBannerToNextPage;
- (void)initBannerPageTimer;
- (void)stopBannerPageTimer;
- (void)clearSearchDisplayController;
- (_Bool)shouldInteractivePop;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEmotionScene:(unsigned int)arg1 AndParentViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

