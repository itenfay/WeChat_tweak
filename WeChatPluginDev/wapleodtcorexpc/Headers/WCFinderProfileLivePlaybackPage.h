//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableDictionary, NSString, WCFinderExtStatsReporter, WCFinderStreamFooterView;

@interface WCFinderProfileLivePlaybackPage
{
    WCFinderStreamFooterView *_footerView;
    long long _contentSection;
    WCFinderExtStatsReporter *_extStatReporter;
    NSMutableDictionary *_exposedTimeMap;
    NSArray *_displayTids;
}

+ (_Bool)isValidLiveContentVM:(id)arg1;
+ (_Bool)isValidFeedContentVM:(id)arg1;
+ (id)onFeedCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 isAuthor:(_Bool)arg3 contentVM:(id)arg4 hiddenSticker:(_Bool)arg5;
+ (id)onLiveCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 item:(id)arg3;
+ (id)collectionView:(id)arg1 displayCellForContentVM:(id)arg2 atIndexPath:(id)arg3 hiddenSticker:(_Bool)arg4;
+ (void)registerDisplayCellForCollectionView:(id)arg1;
+ (_Bool)checkPurchaseUserCount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *displayTids; // @synthesize displayTids=_displayTids;
@property(retain, nonatomic) NSMutableDictionary *exposedTimeMap; // @synthesize exposedTimeMap=_exposedTimeMap;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(nonatomic) long long contentSection; // @synthesize contentSection=_contentSection;
@property(nonatomic) __weak WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
- (void)reportFeedStreamClickSelectedIndexPath:(id)arg1;
- (id)reportUdfKVForItem;
- (void)exposeItemViewDisappear;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)getCurrentCommentScene;
- (id)createContentVMFromDataItems:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (_Bool)isSelfPostFeed:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onLoadingStateChanged:(id)arg1;
- (void)updateFooterState;
- (void)onLivePlaybackViewModelDataFetchRefresh;
- (void)onLivePlaybackViewModelDataFetchError;
- (void)onFeedArrayChanged;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)registerStreamCellForCollection:(id)arg1;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

