//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableDictionary, NSString, UIColor, UIView, WCFinderCreateCoordinator, WCFinderEmptyTipsView, WCFinderLivePageStayReporter, WCFinderLiveTabInfo, WCFinderNearbyMoreLiveViewModel, WCFinderTabPageView;

@interface WCFinderNearbyMoreLiveViewController
{
    _Bool _enableReddot;
    _Bool _notAuthorizedTipEnable;
    _Bool _useDarkStyle;
    _Bool _redDotMode;
    _Bool _isFirstTabReady;
    _Bool _isLocationServiceAuthrized;
    _Bool _isReloadingByLocationAuthorizationChanged;
    unsigned int _homePageJumpScene;
    NSString *_redDotModeObjectId;
    CDUnknownBlockType _scrollAnimationStartBlock;
    CDUnknownBlockType _scrollAnimationEndBlock;
    WCFinderTabPageView *_tabPageView;
    WCFinderEmptyTipsView *_emptyTipsView;
    NSMutableDictionary *_tabId2pageManagerDict;
    UIColor *_navigationBarColor;
    WCFinderNearbyMoreLiveViewModel *_viewModel;
    unsigned long long _initSelectedTabId;
    UIView *_unAuthorizedCityView;
    WCFinderLivePageStayReporter *_exposeReporter;
    UIView *_scrollEducationView;
    UIView *_scrollLabelView;
    MMUIButton *_maskView;
    UIView *_scrollLabelContainer;
    WCFinderLiveTabInfo *_currentPreloadTabInfo;
    UIView *_firstCell;
    UIView *_firstCellParent;
    UIView *_firstCellMask;
    WCFinderCreateCoordinator *_createCoordinator;
    struct CGPoint _eduAnimationOffsetBefore;
    struct CGRect _firstCellRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) _Bool isReloadingByLocationAuthorizationChanged; // @synthesize isReloadingByLocationAuthorizationChanged=_isReloadingByLocationAuthorizationChanged;
@property(nonatomic) struct CGRect firstCellRect; // @synthesize firstCellRect=_firstCellRect;
@property(retain, nonatomic) UIView *firstCellMask; // @synthesize firstCellMask=_firstCellMask;
@property(retain, nonatomic) UIView *firstCellParent; // @synthesize firstCellParent=_firstCellParent;
@property(retain, nonatomic) UIView *firstCell; // @synthesize firstCell=_firstCell;
@property(retain, nonatomic) WCFinderLiveTabInfo *currentPreloadTabInfo; // @synthesize currentPreloadTabInfo=_currentPreloadTabInfo;
@property(nonatomic) struct CGPoint eduAnimationOffsetBefore; // @synthesize eduAnimationOffsetBefore=_eduAnimationOffsetBefore;
@property(retain, nonatomic) UIView *scrollLabelContainer; // @synthesize scrollLabelContainer=_scrollLabelContainer;
@property(retain, nonatomic) MMUIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *scrollLabelView; // @synthesize scrollLabelView=_scrollLabelView;
@property(retain, nonatomic) UIView *scrollEducationView; // @synthesize scrollEducationView=_scrollEducationView;
@property(retain, nonatomic) WCFinderLivePageStayReporter *exposeReporter; // @synthesize exposeReporter=_exposeReporter;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(retain, nonatomic) UIView *unAuthorizedCityView; // @synthesize unAuthorizedCityView=_unAuthorizedCityView;
@property(nonatomic) _Bool isFirstTabReady; // @synthesize isFirstTabReady=_isFirstTabReady;
@property(nonatomic) unsigned long long initSelectedTabId; // @synthesize initSelectedTabId=_initSelectedTabId;
@property(retain, nonatomic) WCFinderNearbyMoreLiveViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(retain, nonatomic) NSMutableDictionary *tabId2pageManagerDict; // @synthesize tabId2pageManagerDict=_tabId2pageManagerDict;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(copy, nonatomic) CDUnknownBlockType scrollAnimationEndBlock; // @synthesize scrollAnimationEndBlock=_scrollAnimationEndBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollAnimationStartBlock; // @synthesize scrollAnimationStartBlock=_scrollAnimationStartBlock;
@property(nonatomic) unsigned int homePageJumpScene; // @synthesize homePageJumpScene=_homePageJumpScene;
@property(retain, nonatomic) NSString *redDotModeObjectId; // @synthesize redDotModeObjectId=_redDotModeObjectId;
@property(nonatomic) _Bool redDotMode; // @synthesize redDotMode=_redDotMode;
@property(nonatomic) _Bool useDarkStyle; // @synthesize useDarkStyle=_useDarkStyle;
@property(nonatomic) _Bool notAuthorizedTipEnable; // @synthesize notAuthorizedTipEnable=_notAuthorizedTipEnable;
@property(nonatomic) _Bool enableReddot; // @synthesize enableReddot=_enableReddot;
- (void)registerYReportSdk;
- (long long)getSdkEnterType;
- (void)onNearbyStartLiveClick:(unsigned long long)arg1;
- (id)visibleCellForLiveId:(id)arg1;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
- (void)finderMoreLiveSwitchSubTabId:(id)arg1 fromSubTabId:(unsigned long long)arg2 toSubTabId:(unsigned long long)arg3;
- (_Bool)finderMoreLivePageCanPrefetchBottom;
- (void)finderMoreLiveReportFollowFoldAction:(unsigned long long)arg1;
- (void)finderMoreLiveAutoPlayChanged:(id)arg1;
- (void)finderMoreLivePageViewBeginDrag:(id)arg1;
- (void)finderMoreLivePageReady;
- (_Bool)finderMoreLivePageAlwaysDarkStyle;
- (id)finderMoreLiveFeedViewBgColor;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)arg1 tid:(id)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4;
- (void)finderMoreLivePageViewMangerEnterLive:(id)arg1 dataItem:(id)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4 isAutoPlaying:(_Bool)arg5;
- (void)finderMoreLivePageViewManger:(id)arg1 jumpToTabInfo:(id)arg2;
- (void)firstPageRequestFinishedInFinderMoreLivePageViewManager:(id)arg1;
- (void)onGetLiveTabListError;
- (void)onGetLiveTabListSuccess;
- (void)finderTabPageViewWillSwitchPage:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (_Bool)showSearchEntry;
- (void)startLive;
- (void)showLiveHalfVC;
- (void)animateFirstCell;
- (void)stopCellAnimation;
- (void)showScrollAnimationEducation;
- (void)cleanScrollEduView:(_Bool)arg1;
- (void)scrollAnimateJumpToNextTab;
- (void)onScrollEducationClick;
- (void)onSwipeLeftOnView:(id)arg1;
- (void)onSwipeRightOnView:(id)arg1;
- (void)onMaskViewClicked;
- (void)tryCancelPerformScrollAnimation:(_Bool)arg1;
- (void)tryShowScrollAnimation;
- (void)tryStartPerformAnimation;
- (_Bool)canShowScrollAnimation;
- (void)checkStartReportFluencyInfo;
- (id)getFirstLiveCell;
- (_Bool)isShowMoreLiveScene;
- (void)checkUpdateSubTabContextId:(unsigned long long)arg1;
- (void)reloadTabPage:(unsigned long long)arg1;
- (_Bool)shouldShowUnAuthorizedView:(unsigned long long)arg1;
- (_Bool)canLocationAuthorizationViewShow:(unsigned long long)arg1;
- (void)preloadWithTabInfo:(id)arg1 pullType:(unsigned long long)arg2;
- (void)preloadTabPage:(id)arg1 loadNearbyTab:(_Bool)arg2;
- (unsigned long long)moreLiveReportEnterType;
- (id)moreLiveReportPageUdfKv:(_Bool)arg1;
- (void)reportExposeTabInfo:(id)arg1 toTabInfo:(id)arg2 isEnter:(_Bool)arg3 fromSubTabId:(unsigned long long)arg4 toSubTabId:(unsigned long long)arg5;
- (id)liveExposeReportCommentScene:(id)arg1;
- (unsigned long long)getLbsStreamScene;
- (long long)getEnterType;
- (unsigned int)getTabType;
- (id)currentStyleColor:(id)arg1;
- (unsigned long long)defaultSelectedTabIndex;
- (void)goToSettingLocationAuthorization:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (id)genScrollEducationView;
- (_Bool)shouldInteractivePop;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onStartLiveButtonClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (unsigned long long)getSelectTabId;
- (void)onSearchClicked;
- (void)viewDidLoad;
- (void)setSelectedLiveTabId:(unsigned long long)arg1;
- (void)setPrefetchTabType:(unsigned long long)arg1 preType:(unsigned long long)arg2 nextType:(unsigned long long)arg3;
- (void)setLiveTabList:(id)arg1;
- (void)dealloc;
- (id)initWithLiveTabList:(id)arg1 selectedTabId:(unsigned long long)arg2 fromScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

