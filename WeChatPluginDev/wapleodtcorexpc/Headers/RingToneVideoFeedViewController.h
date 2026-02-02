//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, RingToneDetail, RingToneRecommendReporter_23604, RingToneVideoFeedLayout, RingToneVideoFeedViewModel, RingToneVideoSearchViewController, WCFinderFeedFlowView, WCSearchBar;

@interface RingToneVideoFeedViewController
{
    _Bool _isViewAppearing;
    _Bool _shouldNotShowFriendSettings;
    _Bool _isFirstAppear;
    _Bool _isJumpToOtherPage;
    _Bool _isFromOutside;
    _Bool _isPreFetchDone;
    _Bool _needRefreshTable;
    _Bool _blockRecommend;
    _Bool _blockPlayByAntiAddict;
    _Bool _ringRecommendSwitch;
    _Bool _isScrollToTop;
    _Bool _hasDragTrigger;
    unsigned int _exposeIndex;
    unsigned long long _setType;
    WCFinderFeedFlowView *_feedFlowView;
    double _prevOffsetY;
    double _dragOffsetY;
    RingToneVideoFeedViewModel *_model;
    CContact *_exclusiveContact;
    unsigned long long _state;
    long long _constructIndex;
    long long _vmsIndex;
    WCSearchBar *_searchBar;
    RingToneRecommendReporter_23604 *_reporter;
    long long _reportIndex;
    NSString *_friendName;
    RingToneVideoFeedLayout *_layout;
    long long _currentShowCount;
    RingToneVideoSearchViewController *_searchVC;
    RingToneDetail *_ring;
}

+ (id)constructRingTonePickerViewController:(id)arg1 friendName:(id)arg2;
+ (id)constructRingDetailPickerViewController:(id)arg1 friendName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasDragTrigger; // @synthesize hasDragTrigger=_hasDragTrigger;
@property(nonatomic) _Bool isScrollToTop; // @synthesize isScrollToTop=_isScrollToTop;
@property(nonatomic) _Bool ringRecommendSwitch; // @synthesize ringRecommendSwitch=_ringRecommendSwitch;
@property(nonatomic) _Bool blockPlayByAntiAddict; // @synthesize blockPlayByAntiAddict=_blockPlayByAntiAddict;
@property(nonatomic) _Bool blockRecommend; // @synthesize blockRecommend=_blockRecommend;
@property(nonatomic) _Bool needRefreshTable; // @synthesize needRefreshTable=_needRefreshTable;
@property(nonatomic) _Bool isPreFetchDone; // @synthesize isPreFetchDone=_isPreFetchDone;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(nonatomic) _Bool isJumpToOtherPage; // @synthesize isJumpToOtherPage=_isJumpToOtherPage;
@property(nonatomic) __weak RingToneVideoSearchViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(nonatomic) long long currentShowCount; // @synthesize currentShowCount=_currentShowCount;
@property(retain, nonatomic) RingToneVideoFeedLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSString *friendName; // @synthesize friendName=_friendName;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) _Bool shouldNotShowFriendSettings; // @synthesize shouldNotShowFriendSettings=_shouldNotShowFriendSettings;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) long long vmsIndex; // @synthesize vmsIndex=_vmsIndex;
@property(nonatomic) long long constructIndex; // @synthesize constructIndex=_constructIndex;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) CContact *exclusiveContact; // @synthesize exclusiveContact=_exclusiveContact;
@property(retain, nonatomic) RingToneVideoFeedViewModel *model; // @synthesize model=_model;
@property(nonatomic) double dragOffsetY; // @synthesize dragOffsetY=_dragOffsetY;
@property(nonatomic) double prevOffsetY; // @synthesize prevOffsetY=_prevOffsetY;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(nonatomic) unsigned long long setType; // @synthesize setType=_setType;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)ringRecommendSwitch:(_Bool)arg1;
- (void)antiCheckExit:(_Bool)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckVerifySuc:(_Bool)arg1 scene:(unsigned long long)arg2;
- (void)onVoipWindowDidAppear;
- (void)onJumpToTingInfoPage:(id)arg1;
- (_Bool)getIfNoNeedToPlay;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (void)reportRingEvent:(unsigned long long)arg1 ring:(id)arg2 cell:(id)arg3;
- (id)getSettingsName;
- (unsigned long long)getRingSheetViewFlag;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)changeVideoFeedPlay;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)jumpToPlayerPage:(id)arg1 index:(id)arg2 searchID:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowViewForbidenOpenFeedAutoAnimation:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (_Bool)isInSubScene;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)isFetchingStateError;
- (id)getContentVMByIndex:(unsigned long long)arg1;
- (void)reportPlayingRingAtIndex:(unsigned long long)arg1;
- (void)preloadVideoItemsWithCurrentFeedNextIndex:(unsigned long long)arg1;
- (void)onShowRecommendWarnPageSheet;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkAutoPlayWhenDataReload;
- (void)refreshTableForPrefetchData;
- (void)tryReloadData:(_Bool)arg1 recordTime:(unsigned long long)arg2 status:(unsigned long long)arg3 needSetVM:(_Bool)arg4 count:(unsigned long long)arg5;
- (void)fetchNextPage:(_Bool)arg1 pullType:(unsigned long long)arg2;
- (void)loadNextPageData;
- (void)initReporter;
- (void)resetData;
- (void)initData;
- (unsigned long long)getTotalNumOfShowVM;
- (void)refreshForFlowView;
- (void)initWCFinderScrollView;
- (void)addFrontBlurView;
- (void)setTypeAndCContact:(unsigned long long)arg1 contact:(id)arg2 notShowFriendSettings:(_Bool)arg3;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)onBack;
- (void)onClickMore:(id)arg1;
- (void)onLimitedClicked;
- (void)configView;
- (void)preInitJob;
- (void)initSearchBar;
- (id)initFromOutside:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

