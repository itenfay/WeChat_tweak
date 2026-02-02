//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, WCFinderBrandStreamProfileViewModel, WCFinderExtStatsReporter, WCFinderFeedFlowView, WCFinderProfileJustWatchTipsView;
@protocol WCFinderBrandStreamProfileVCDelegate;

@interface WCFinderBrandStreamProfileViewController
{
    _Bool _displayThreeColumnSwitch;
    id <WCFinderBrandStreamProfileVCDelegate> _delegate;
    WCFinderBrandStreamProfileViewModel *_viewModel;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderProfileJustWatchTipsView *_justWatchTipsView;
    unsigned long long _exposeTime;
    NSIndexPath *_serviceAuthBlockedIndexPath;
    WCFinderExtStatsReporter *_extStatReporter;
    optional_865a0c94 _justWatchCellFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(retain, nonatomic) NSIndexPath *serviceAuthBlockedIndexPath; // @synthesize serviceAuthBlockedIndexPath=_serviceAuthBlockedIndexPath;
@property(nonatomic) _Bool displayThreeColumnSwitch; // @synthesize displayThreeColumnSwitch=_displayThreeColumnSwitch;
@property(nonatomic) unsigned long long exposeTime; // @synthesize exposeTime=_exposeTime;
@property(nonatomic) optional_865a0c94 justWatchCellFrame; // @synthesize justWatchCellFrame=_justWatchCellFrame;
@property(retain, nonatomic) WCFinderProfileJustWatchTipsView *justWatchTipsView; // @synthesize justWatchTipsView=_justWatchTipsView;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderBrandStreamProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderBrandStreamProfileVCDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)reportJustWatchIconWithEventCode:(long long)arg1;
- (void)fillProfileRenderInfo:(id)arg1;
- (void)reportProfileWithEventCode:(long long)arg1;
- (void)brandScrollViewDidScroll:(id)arg1;
- (void)setExternalGestureRecognizer:(id)arg1;
- (id)viewController;
- (void)updateSectionWidthInSectionDataList;
- (unsigned long long)tabType;
- (id)tabTitle;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)onProfileJustWatchTipsViewClicked:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)setJustWatchBannerDisplay:(_Bool)arg1 animated:(_Bool)arg2;
- (void)keepJustWatchBannerBottomPosition;
- (void)checkJustWatchCellIsDisplayed;
- (void)finderBrandStreamProfileViewModel:(id)arg1 justWatchBannerStatusFrom:(long long)arg2 to:(long long)arg3;
- (void)finderBrandStreamProfileViewModel:(id)arg1 onShowJustWatchTidChangeWithOldTid:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderBrandStreamProfileRequestFailWithErrorCode:(int)arg1;
- (void)finderBrandStreamProfileNoMoreData;
- (void)finderBrandStreamProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandStreamProfileReloadAllData;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)scrollToJustWatchIndex;
- (void)cleanJustWatch;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView;
- (_Bool)displayThreeColumn;
- (id)justWatchingTitle;
- (double)bottomOfJustWatchTipsView;
- (void)hiddenJustWatchTipsViewWithAnimated;
- (void)_updateContextId;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (void)exitFinderBrandStreamAction;
- (void)selectedFinderBrandStreamAction;
- (id)initWithBizUsername:(id)arg1 brandFinderJumpInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

