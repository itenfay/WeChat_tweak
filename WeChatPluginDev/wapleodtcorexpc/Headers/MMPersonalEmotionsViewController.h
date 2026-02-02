//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCellLikeButton, EmotionCollectionFooterView, InfiniteLoopContainerView, MMTimer, NSMutableArray, NSString, StoreEmoticonTopicProxyLogic, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIView, UIViewController;

@interface MMPersonalEmotionsViewController
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    UIView *m_collectionHeaderView;
    EmoticonCellLikeButton *m_designerEmojiEntranceView;
    UIImageView *m_designerEmojiEntranceReddot;
    InfiniteLoopContainerView *_bannerView;
    EmotionCollectionFooterView *_footerView;
    NSMutableArray *_storeItemArray;
    NSMutableArray *_storeAdsArray;
    unsigned int _scene;
    unsigned int _reqType;
    unsigned long long _sessionId;
    _Bool _isLoadedFromCache;
    unsigned int _topHotNum;
    MMTimer *_timer;
    UIView *_chartsContainerView;
    _Bool m_isOpenDesignerEmoji;
    UIViewController *m_contentsViewController;
    unsigned long long _searchScene;
    StoreEmoticonTopicProxyLogic *_topicVCPorxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmoticonTopicProxyLogic *topicVCPorxy; // @synthesize topicVCPorxy=_topicVCPorxy;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (void)OnEmoticonRecommendNewStateChangedForDesignerEmojiEntranceNew:(_Bool)arg1;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openPageForBannerSet:(id)arg1 IsFromBanner:(_Bool)arg2;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (struct CGSize)adjustedSizeForBanner;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (void)OnStoreListChanged:(id)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)setupChartsContainerWithHeaderView:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reportEmoticonStoreExposure;
- (void)clickDesignerEmojiEntrance;
- (void)clickEmotionCharts;
- (void)adjustContentInsetAndSearchBarMask;
- (void)tryInitViewOfSearchController;
- (void)reloadAdsFromMgr;
- (void)reloadData;
- (void)configDesignerEmojiEntranceView;
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
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
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

