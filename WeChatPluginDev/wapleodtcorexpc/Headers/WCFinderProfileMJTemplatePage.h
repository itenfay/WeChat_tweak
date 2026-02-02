//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UILabel, WCFinderAnimationLoadingView, WCFinderStreamFooterView;

@interface WCFinderProfileMJTemplatePage
{
    WCFinderStreamFooterView *_footerView;
    UILabel *_statusTips;
    WCFinderAnimationLoadingView *_loadingView;
    NSMutableDictionary *_exposedTimeMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *exposedTimeMap; // @synthesize exposedTimeMap=_exposedTimeMap;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *statusTips; // @synthesize statusTips=_statusTips;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
- (void)clickRetry;
- (id)displayStatusTips;
- (void)_layoutStatuViews;
- (void)setupStatusTipsView:(id)arg1;
- (void)setupLoadingView:(_Bool)arg1;
- (void)updateStatus;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (id)reportUdfKVForItem:(id)arg1;
- (void)recordStartExposeTimeWhenAppear;
- (void)exposeWhenDisAppear;
- (void)exposeItemExposeIndexPath:(id)arg1 cell:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onMJTempModelFetchStateChanged:(id)arg1;
- (void)onMJTempDataAppendFromRange:(struct _NSRange)arg1;
- (void)viewWillDisappear;
- (void)viewWillApear;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

