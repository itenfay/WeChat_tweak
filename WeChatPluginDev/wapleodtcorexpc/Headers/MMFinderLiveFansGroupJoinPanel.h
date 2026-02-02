//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupInterestsCell, MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIButton, MMUILabel, MMUIMaskContainerView, NSString, UIImageView, UIScrollView, UIView, WCFinderHeadImageView;

@interface MMFinderLiveFansGroupJoinPanel
{
    _Bool _needPurchase;
    CDUnknownBlockType _joinCallback;
    unsigned long long _openScene;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_joinFansGroupGiftItem;
    UIScrollView *_contentScrollView;
    UIView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUIButton *_introductionButton;
    WCFinderHeadImageView *_fansGroupCoverView;
    MMUILabel *_fansGroupTitleLabel;
    MMUILabel *_fansCountInGroupLabel;
    MMUIButton *_joinFansGroupButton;
    MMFinderLiveFansGroupInterestsCell *_specialRankInterestsCell;
    MMFinderLiveFansGroupInterestsCell *_specialGiftInterestsCell;
    MMUILabel *_payWecoinLabel;
    MMUILabel *_payWecoinCountLabel;
    UIImageView *_payWecoinIcon;
    MMUIMaskContainerView *_scrollViewContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needPurchase; // @synthesize needPurchase=_needPurchase;
@property(retain, nonatomic) MMUIMaskContainerView *scrollViewContainerView; // @synthesize scrollViewContainerView=_scrollViewContainerView;
@property(retain, nonatomic) UIImageView *payWecoinIcon; // @synthesize payWecoinIcon=_payWecoinIcon;
@property(retain, nonatomic) MMUILabel *payWecoinCountLabel; // @synthesize payWecoinCountLabel=_payWecoinCountLabel;
@property(retain, nonatomic) MMUILabel *payWecoinLabel; // @synthesize payWecoinLabel=_payWecoinLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupInterestsCell *specialGiftInterestsCell; // @synthesize specialGiftInterestsCell=_specialGiftInterestsCell;
@property(retain, nonatomic) MMFinderLiveFansGroupInterestsCell *specialRankInterestsCell; // @synthesize specialRankInterestsCell=_specialRankInterestsCell;
@property(retain, nonatomic) MMUIButton *joinFansGroupButton; // @synthesize joinFansGroupButton=_joinFansGroupButton;
@property(retain, nonatomic) MMUILabel *fansCountInGroupLabel; // @synthesize fansCountInGroupLabel=_fansCountInGroupLabel;
@property(retain, nonatomic) MMUILabel *fansGroupTitleLabel; // @synthesize fansGroupTitleLabel=_fansGroupTitleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *fansGroupCoverView; // @synthesize fansGroupCoverView=_fansGroupCoverView;
@property(retain, nonatomic) MMUIButton *introductionButton; // @synthesize introductionButton=_introductionButton;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *joinFansGroupGiftItem; // @synthesize joinFansGroupGiftItem=_joinFansGroupGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(copy, nonatomic) CDUnknownBlockType joinCallback; // @synthesize joinCallback=_joinCallback;
- (id)audienceLogReporter;
- (void)reportForOpenFansGroupDetailPage;
- (void)reportForJoinButtonClick;
- (void)reportForPanelExpose;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)joinFansGroupWithCompletion:(CDUnknownBlockType)arg1;
- (void)joinFansGroupAfterFollowed;
- (void)onJoinFansGroupButtonClicked;
- (void)onIntroductionButtonClicked;
- (_Bool)isFollowAnchor;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutJoinButton;
- (void)layPayWecoinInfo;
- (void)layoutFansGroupInterestsContent;
- (void)layoutFansContentView;
- (void)updateScrollViewContentSize;
- (void)layoutContentScrollView;
- (void)createContentScrollView;
- (void)layoutTitleBarView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (void)refreshFansGroupInfo;
- (void)setupPageSheetConfig;
- (_Bool)shouldAdaptToDarkLight;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)initView;
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2 openScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

