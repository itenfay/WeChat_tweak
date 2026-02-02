//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UILabel, WCFinderAnimationLoadingView, WCFinderMJSetBriefCardView, WCFinderMJSetInitParams, WCFinderMJSetTemplateViewModel, WCFinderScrollActionSheet, WCFinderTabPageView;

@interface WCFinderMJSetViewController
{
    WCFinderMJSetTemplateViewModel *_viewModel;
    WCFinderTabPageView *_tabPageView;
    NSMutableDictionary *_feedFlowViewMap;
    NSMapTable *_feedFlowViewDataMap;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_statusLabel;
    UIBarButtonItem *_rightButtonItem;
    NSNumber *_needReportEnterTimeRecard;
    WCFinderMJSetInitParams *_params;
    WCFinderMJSetBriefCardView *_cardBriefView;
    WCFinderScrollActionSheet *_moreActionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderScrollActionSheet *moreActionSheet; // @synthesize moreActionSheet=_moreActionSheet;
@property(retain, nonatomic) WCFinderMJSetBriefCardView *cardBriefView; // @synthesize cardBriefView=_cardBriefView;
@property(retain, nonatomic) WCFinderMJSetInitParams *params; // @synthesize params=_params;
@property(nonatomic) NSNumber *needReportEnterTimeRecard; // @synthesize needReportEnterTimeRecard=_needReportEnterTimeRecard;
@property(retain, nonatomic) UIBarButtonItem *rightButtonItem; // @synthesize rightButtonItem=_rightButtonItem;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMapTable *feedFlowViewDataMap; // @synthesize feedFlowViewDataMap=_feedFlowViewDataMap;
@property(retain, nonatomic) NSMutableDictionary *feedFlowViewMap; // @synthesize feedFlowViewMap=_feedFlowViewMap;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderMJSetTemplateViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)genSessionReportDict;
- (void)registerYReportSdk;
- (int)topicType;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (unsigned long long)finderScrollActionSheet:(id)arg1 customConfigItemEnableWithItemFlag:(unsigned long long)arg2;
- (id)getCurMediaListObject;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onClickDesigner;
- (void)onClickPost;
- (void)onClickContact;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (_Bool)finderTabPageHeaderAddBlurView;
- (id)customTabContainerBackgroundColorForFinderTabPageView:(id)arg1;
- (struct UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)normalRightButton;
- (id)fadeRightButton;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)fadeTintColor;
- (void)displayStatusView:(id)arg1 action:(SEL)arg2;
- (id)getRightNaviBarStackView;
- (void)setupNavItem:(_Bool)arg1;
- (void)onMJSetTempVM:(id)arg1 fetchDataFinish:(_Bool)arg2 error:(id)arg3;
- (void)onMJSetTempVM:(id)arg1 fetchHeaderInfoFinish:(_Bool)arg2 error:(id)arg3;
- (void)adjustIpadScrollViewLayout;
- (void)_pushBecomeCreatorView;
- (id)getItemArrayConfig;
- (void)onClickMoreButton:(id)arg1;
- (void)onClickBecomeCreatorBtn;
- (void)onClickMenuBtn;
- (void)startLoadingData;
- (void)setupFadeNav;
- (void)viewWillLayoutSubviews;
- (id)enter21874UDFKV;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)reportEnter;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (id)postMgrSourceInfo;
- (void)viewDidTransitionToNewSize;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
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

