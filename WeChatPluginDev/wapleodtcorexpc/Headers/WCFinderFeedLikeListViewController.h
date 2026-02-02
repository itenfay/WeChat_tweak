//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableSet, NSString, UICollectionReusableView, UICollectionView, UICollectionViewFlowLayout, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderDynamicRichTextView, WCFinderFeedContentVM, WCFinderFeedLikeListViewModel, WCFinderLikeInfo, WCFinderMagicAnimationLogic, WCFinderStreamFooterView;

@interface WCFinderFeedLikeListViewController
{
    _Bool _showBackgroundMask;
    _Bool _hidePrivateMessage;
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    WCFinderFeedLikeListViewModel *_viewModel;
    MMUIButton *_closeBtn;
    MMUIButton *_moreBtn;
    WCFinderDynamicRichTextView *_titleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCFinderStreamFooterView *_refreshFooterView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    unsigned long long _footerRefreshState;
    NSString *_tid;
    NSString *_nonceID;
    UICollectionReusableView *_likeGuideView;
    unsigned long long _entranceScene;
    double _likeGuideViewShowTimestamp;
    WCFinderLikeInfo *_currentSelectLikeInfo;
    WCFinderFeedContentVM *_contentVM;
    WCFinderMagicAnimationLogic *_magicAnimationLogic;
    NSMutableSet *_cellExposeSet;
    double _heightRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) NSMutableSet *cellExposeSet; // @synthesize cellExposeSet=_cellExposeSet;
@property(retain, nonatomic) WCFinderMagicAnimationLogic *magicAnimationLogic; // @synthesize magicAnimationLogic=_magicAnimationLogic;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderLikeInfo *currentSelectLikeInfo; // @synthesize currentSelectLikeInfo=_currentSelectLikeInfo;
@property(nonatomic) double likeGuideViewShowTimestamp; // @synthesize likeGuideViewShowTimestamp=_likeGuideViewShowTimestamp;
@property(nonatomic) unsigned long long entranceScene; // @synthesize entranceScene=_entranceScene;
@property(retain, nonatomic) UICollectionReusableView *likeGuideView; // @synthesize likeGuideView=_likeGuideView;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderStreamFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderDynamicRichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) _Bool hidePrivateMessage; // @synthesize hidePrivateMessage=_hidePrivateMessage;
@property(nonatomic) _Bool showBackgroundMask; // @synthesize showBackgroundMask=_showBackgroundMask;
@property(retain, nonatomic) WCFinderFeedLikeListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
- (void)onLikeListCell:(id)arg1 emitThanksMagicAnimationWithAnimStyle:(unsigned long long)arg2;
- (void)onLikeListCell:(id)arg1 clickThankButtonWithThankState:(_Bool)arg2;
- (void)onLikeListCellClickUser:(id)arg1;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)resetRefreshStateNormal;
- (void)showNoMoreData;
- (void)feedLikeListDataLikeCountChange;
- (void)feedLikeListDataError:(int)arg1;
- (void)feedLikeListDataNoMore;
- (void)feedLikeListDataAddSelfLike;
- (void)feedLikeListDataChange;
- (void)reportCellEventWithLikeInfo:(id)arg1 event:(id)arg2 clickArea:(unsigned long long)arg3;
- (void)updateTitleWithCount:(long long)arg1;
- (void)stateRetryGestureAction;
- (void)fetchNextPage;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)canShowRewardTips;
- (void)showHalfProfileVC:(id)arg1;
- (void)onClickClose;
- (void)setupSubViews;
- (_Bool)isHideCloseButton;
- (void)layoutUI;
- (void)setUpUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillPop:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (id)initWithWithContentVM:(id)arg1 entranceScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

