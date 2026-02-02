//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIView, WCFinderAnimationLoadingView, WCFinderPostMgr, WCFinderTabPageView, WCFinderTopicRouteParams, WCFinderTopicViewModel;

@interface WCFinderTopicViewController
{
    WCFinderTopicViewModel *_viewModel;
    WCFinderAnimationLoadingView *_loadingView;
    UIView *_navGradientView;
    WCFinderTabPageView *_tabPageView;
    NSMutableDictionary *_pageViewManagerDict;
    NSString *_traceId;
    unsigned long long _enterTime;
    WCFinderPostMgr *_postMgr;
    WCFinderTopicRouteParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTopicRouteParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderPostMgr *postMgr; // @synthesize postMgr=_postMgr;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSMutableDictionary *pageViewManagerDict; // @synthesize pageViewManagerDict=_pageViewManagerDict;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) UIView *navGradientView; // @synthesize navGradientView=_navGradientView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderTopicViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrAttachTextContent:(id)arg1;
- (void)registerYReportSdk;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 topicCount:(unsigned long long)arg4;
- (void)reportTab:(id)arg1 withEventType:(long long)arg2;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onFinderTopicGetReviseFeedCount:(unsigned int)arg1 filterType:(unsigned int)arg2;
- (void)onFinderTopicDidReceiveFirstPageWithPrefetched:(_Bool)arg1;
- (void)onClickMusicCard:(id)arg1;
- (void)onClickPostPhotoAction;
- (void)onClickPostVideoAction;
- (_Bool)checkContactSilent;
- (struct UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)hoverOffsetOfFinderTabPageView:(id)arg1;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (id)tabPageView:(id)arg1 filterNameArrayAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (void)updateHeaderView:(id)arg1 selectedFilterType:(unsigned int)arg2;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)onFinderTopicTabListError;
- (void)onFinderTopicHeaderViewNeedRefresh;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (int)feedViewControllerScene;
- (void)changeScrollViewForNavBarInteraction:(id)arg1;
- (void)adjustLayoutForHeaderImage;
- (id)gradientViewWithFrame:(struct CGRect)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (double)contentLeftMargin;
- (double)contentDisplayWidth;
- (id)getItemArrayConfig;
- (void)onClickRightItem:(id)arg1;
- (void)onClickBackItem;
- (void)updateNavigationBarTitle;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldInteractivePop;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

