//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableSet, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderCustomImageRichTextView, WCFinderFavInfo, WCFinderFeedFavListViewModel, WCFinderMagicAnimationLogic, WCFinderStreamFooterView;

@interface WCFinderFeedFavListViewController
{
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    MMUIButton *_closeBtn;
    WCFinderCustomImageRichTextView *_richTextView;
    UILabel *_subTitleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCFinderStreamFooterView *_refreshFooterView;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderCustomImageRichTextView *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    unsigned long long _footerRefreshState;
    WCFinderFeedFavListViewModel *_viewModel;
    NSString *_tid;
    WCFinderFavInfo *_currentSelectFavInfo;
    double _heightRatio;
    WCFinderMagicAnimationLogic *_magicAnimationLogic;
    NSMutableSet *_cellExposeSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *cellExposeSet; // @synthesize cellExposeSet=_cellExposeSet;
@property(retain, nonatomic) WCFinderMagicAnimationLogic *magicAnimationLogic; // @synthesize magicAnimationLogic=_magicAnimationLogic;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) WCFinderFavInfo *currentSelectFavInfo; // @synthesize currentSelectFavInfo=_currentSelectFavInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) WCFinderFeedFavListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderStreamFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
- (void)onFavListCell:(id)arg1 emitThanksMagicAnimationWithAnimStyle:(unsigned long long)arg2;
- (void)onFavListCell:(id)arg1 clickThankButtonWithThankState:(_Bool)arg2;
- (void)onFavListCellClickUser:(id)arg1;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (_Bool)canShowRewardTips;
- (void)reportCellEventWithFavInfo:(id)arg1 event:(id)arg2 clickArea:(unsigned long long)arg3;
- (void)showHalfProfileVC:(id)arg1;
- (void)onClickClose;
- (void)stateRetryGestureAction;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)feedFavListDataFavCountChange;
- (void)feedFavListDataError:(int)arg1;
- (void)feedFavListDataNoMore;
- (void)feedFavListDataChange;
- (void)showNoMoreData;
- (void)resetRefreshStateNormal;
- (void)updateTitleWithCount:(long long)arg1;
- (void)fetchNextPage;
- (void)layoutUI;
- (void)setupUI;
- (_Bool)isHideCloseButton;
- (_Bool)useTransparentNavibar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillPop:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

