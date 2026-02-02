//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFeedExtraInfoFetchLogic, MMUIButton, NSMutableDictionary, NSString, UIView, WCFinderCreateCoordinator, WCFinderEmptyTipsView, WCFinderLiveEntertainmentChannelsViewModel, WCFinderLivePageStayReporter, WCFinderTabPageView;

@interface WCFinderLiveEntertainmentChannelsViewController
{
    _Bool _isBottomButtonFold;
    CDUnknownBlockType _onPageReturnBlock;
    WCFinderLiveEntertainmentChannelsViewModel *_vm;
    WCFinderTabPageView *_tabPageView;
    NSMutableDictionary *_pageAdapterDict;
    WCFinderEmptyTipsView *_emptyTipsView;
    MMFinderLiveFeedExtraInfoFetchLogic *_extraFetchLogic;
    UIView *_bottomButtonContainer;
    MMUIButton *_randomLiveButton;
    MMUIButton *_createLiveButton;
    unsigned long long _playTogetherLiveType;
    WCFinderCreateCoordinator *_createCoordinator;
    WCFinderLivePageStayReporter *_stayReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLivePageStayReporter *stayReporter; // @synthesize stayReporter=_stayReporter;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) unsigned long long playTogetherLiveType; // @synthesize playTogetherLiveType=_playTogetherLiveType;
@property(nonatomic) _Bool isBottomButtonFold; // @synthesize isBottomButtonFold=_isBottomButtonFold;
@property(retain, nonatomic) MMUIButton *createLiveButton; // @synthesize createLiveButton=_createLiveButton;
@property(retain, nonatomic) MMUIButton *randomLiveButton; // @synthesize randomLiveButton=_randomLiveButton;
@property(retain, nonatomic) UIView *bottomButtonContainer; // @synthesize bottomButtonContainer=_bottomButtonContainer;
@property(retain, nonatomic) MMFinderLiveFeedExtraInfoFetchLogic *extraFetchLogic; // @synthesize extraFetchLogic=_extraFetchLogic;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) NSMutableDictionary *pageAdapterDict; // @synthesize pageAdapterDict=_pageAdapterDict;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderLiveEntertainmentChannelsViewModel *vm; // @synthesize vm=_vm;
@property(copy, nonatomic) CDUnknownBlockType onPageReturnBlock; // @synthesize onPageReturnBlock=_onPageReturnBlock;
- (id)visibleCellForDismissCustomKey:(id)arg1;
- (id)liveMorphDismissTargetCustomTransitionSnapshotViewForCustomKey:(id)arg1;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)onLiveEntertainmentChannelsTagStreamAudioRoomClickUnoccupiedSeat:(id)arg1;
- (void)openLiveRoomWithElementModels:(id)arg1 selectIndex:(unsigned long long)arg2;
- (void)checkBottomButtonAnimation;
- (void)onLiveEntertainmentChannelsTagStreamDidScroll:(id)arg1;
- (void)onLiveEntertainmentChannelsTagStreamDidEndScrolling:(id)arg1;
- (void)onLiveEntertainmentChannelsTagStream:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3 indexPath:(id)arg4;
- (void)onLiveEntertainmentChannelsTagStream:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onEntertainmentChannelsViewModelLoadDataSuccess;
- (void)onEntertainmentChannelsViewModelLoadDataFailed:(long long)arg1;
- (id)currentSelectTag;
- (id)curFeedFlowView;
- (id)curPageAdapter;
- (id)indexPathsForVisibleItems;
- (id)collectionView;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
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
- (void)reportStartLiveExpose;
- (id)entertainmentCardsShouldRefresh;
- (id)visibleElementModels;
- (void)initExtraFetch;
- (_Bool)shouldInteractivePop;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)onBackButtonClicked:(id)arg1;
- (void)scrollToTop;
- (void)selectTag:(id)arg1;
- (void)startLive;
- (void)showLiveHalfVC;
- (void)goToCreateLive;
- (void)goToRandomLive;
- (void)animateBottomButton:(_Bool)arg1;
- (void)layoutBottomButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithThemeId:(id)arg1 appearance:(id)arg2 playTogetherLiveType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

