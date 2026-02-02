//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupIntroView, MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIButton, MMUILabel, MMUIMaskContainerView, NSArray, NSString, UIScrollView, UIView, WCFinderAnimationLoadingView;

@interface MMFinderLiveNewFansGroupJoinPanel
{
    _Bool _needPurchase;
    _Bool _needPurchaseSuperfan;
    _Bool _defaultSelectSuperfan;
    CDUnknownBlockType _joinNormalFanGroupCallback;
    CDUnknownBlockType _joinSuperfanCallback;
    unsigned long long _openScene;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_joinFansGroupGiftItem;
    UIScrollView *_contentScrollView;
    MMUIMaskContainerView *_scrollViewContainerView;
    UIView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUIButton *_introductionButton;
    MMUILabel *_fansGroupTitleLabel;
    MMUILabel *_fansCountInGroupLabel;
    MMUIButton *_joinFansGroupButton;
    MMFinderLiveFansGroupIntroView *_superFanIntroView;
    MMFinderLiveFansGroupIntroView *_normalFanIntroView;
    NSArray *_interestCells;
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool defaultSelectSuperfan; // @synthesize defaultSelectSuperfan=_defaultSelectSuperfan;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSArray *interestCells; // @synthesize interestCells=_interestCells;
@property(retain, nonatomic) MMFinderLiveFansGroupIntroView *normalFanIntroView; // @synthesize normalFanIntroView=_normalFanIntroView;
@property(retain, nonatomic) MMFinderLiveFansGroupIntroView *superFanIntroView; // @synthesize superFanIntroView=_superFanIntroView;
@property(nonatomic) _Bool needPurchaseSuperfan; // @synthesize needPurchaseSuperfan=_needPurchaseSuperfan;
@property(nonatomic) _Bool needPurchase; // @synthesize needPurchase=_needPurchase;
@property(retain, nonatomic) MMUIButton *joinFansGroupButton; // @synthesize joinFansGroupButton=_joinFansGroupButton;
@property(retain, nonatomic) MMUILabel *fansCountInGroupLabel; // @synthesize fansCountInGroupLabel=_fansCountInGroupLabel;
@property(retain, nonatomic) MMUILabel *fansGroupTitleLabel; // @synthesize fansGroupTitleLabel=_fansGroupTitleLabel;
@property(retain, nonatomic) MMUIButton *introductionButton; // @synthesize introductionButton=_introductionButton;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIMaskContainerView *scrollViewContainerView; // @synthesize scrollViewContainerView=_scrollViewContainerView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *joinFansGroupGiftItem; // @synthesize joinFansGroupGiftItem=_joinFansGroupGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(copy, nonatomic) CDUnknownBlockType joinSuperfanCallback; // @synthesize joinSuperfanCallback=_joinSuperfanCallback;
@property(copy, nonatomic) CDUnknownBlockType joinNormalFanGroupCallback; // @synthesize joinNormalFanGroupCallback=_joinNormalFanGroupCallback;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (_Bool)isFollowAnchor;
- (id)audienceLogReporter;
- (void)reportForJoinButtonClick;
- (void)reportForPanelExpose;
- (void)reportForOpenFansGroupDetailPage;
- (void)joinFansGroupWithCompletion:(CDUnknownBlockType)arg1;
- (void)joinFansGroupAfterFollowed;
- (void)_joinNormalFansGroup;
- (void)_followAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_joinSuperfanGroup;
- (void)onFangroupIntroViewTapped:(id)arg1;
- (void)onJoinFansGroupButtonClicked;
- (void)gotoDetailPage;
- (void)onIntroductionButtonClicked;
- (void)layoutSubviews;
- (void)updateJoinButtonTitle;
- (void)updateScrollViewContentSize;
- (void)layoutContentScrollView;
- (void)createContentScrollView;
- (void)refreshFansGroupInfo;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (double)contentHeight;
- (double)contentWidth;
- (void)setupPageSheetConfig;
- (_Bool)shouldAdaptToDarkLight;
- (id)buildInterestCellWithIconName:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (void)initInterestViews;
- (void)initIntroViews;
- (void)initView;
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2 openScene:(unsigned long long)arg3 defaultSelectSuperfanIfCan:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

