//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, RingToneRecommendReporter_23604, RingToneSearchHistoryListView, RingToneSearchLayout, RingToneVideoSearchViewModel, WCFinderFeedFlowView;

@interface RingToneVideoSearchViewController
{
    _Bool _shouldNotShowFriendSettings;
    _Bool _isViewAppearing;
    _Bool _isJumpToOtherPage;
    _Bool _isFirstAppear;
    _Bool _isPreFetchDone;
    _Bool _needRefreshTable;
    unsigned int _exposeIndex;
    unsigned long long _setType;
    CContact *_exclusiveContact;
    WCFinderFeedFlowView *_feedFlowView;
    double _prevOffsetY;
    double _dragOffsetY;
    RingToneRecommendReporter_23604 *_reporter;
    NSString *_searchText;
    RingToneVideoSearchViewModel *_model;
    unsigned long long _state;
    long long _constructIndex;
    long long _vmsIndex;
    long long _reportIndex;
    NSString *_friendName;
    RingToneSearchLayout *_layout;
    long long _currentShowCount;
    unsigned long long _searchRequestID;
    RingToneSearchHistoryListView *_historyListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneSearchHistoryListView *historyListView; // @synthesize historyListView=_historyListView;
@property(nonatomic) _Bool needRefreshTable; // @synthesize needRefreshTable=_needRefreshTable;
@property(nonatomic) _Bool isPreFetchDone; // @synthesize isPreFetchDone=_isPreFetchDone;
@property(nonatomic) unsigned long long searchRequestID; // @synthesize searchRequestID=_searchRequestID;
@property(nonatomic) long long currentShowCount; // @synthesize currentShowCount=_currentShowCount;
@property(retain, nonatomic) RingToneSearchLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSString *friendName; // @synthesize friendName=_friendName;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) long long vmsIndex; // @synthesize vmsIndex=_vmsIndex;
@property(nonatomic) long long constructIndex; // @synthesize constructIndex=_constructIndex;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) RingToneVideoSearchViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isJumpToOtherPage; // @synthesize isJumpToOtherPage=_isJumpToOtherPage;
@property(nonatomic) double dragOffsetY; // @synthesize dragOffsetY=_dragOffsetY;
@property(nonatomic) double prevOffsetY; // @synthesize prevOffsetY=_prevOffsetY;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(retain, nonatomic) CContact *exclusiveContact; // @synthesize exclusiveContact=_exclusiveContact;
@property(nonatomic) _Bool shouldNotShowFriendSettings; // @synthesize shouldNotShowFriendSettings=_shouldNotShowFriendSettings;
@property(nonatomic) unsigned long long setType; // @synthesize setType=_setType;
- (void)onDeleteSearchRecord:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)onSelectSearchRecord:(id)arg1 location:(long long)arg2 dataType:(unsigned long long)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onJumpToTingInfoPage:(id)arg1;
- (_Bool)getIfNoNeedToPlay;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (void)reportRingEvent:(unsigned long long)arg1 ring:(id)arg2 cell:(id)arg3;
- (id)getSettingsName;
- (unsigned long long)getRingSheetViewFlag;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)changeVideoFeedPlay;
- (_Bool)finderFeedFlowViewForbidenOpenFeedAutoAnimation:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)jumpToPlayerPage:(id)arg1 index:(id)arg2 searchID:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
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
- (id)getContentVMByIndex:(unsigned long long)arg1;
- (void)reportPlayingRingAtIndex:(unsigned long long)arg1;
- (void)clearData;
- (void)clearDataAfterQuit;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkAutoPlayWhenDataReload;
- (void)refreshTableForPrefetchData;
- (void)tryReloadData:(_Bool)arg1 recordTime:(unsigned long long)arg2 status:(unsigned long long)arg3 needSetVM:(_Bool)arg4 count:(unsigned long long)arg5 searchText:(id)arg6;
- (void)searchWithFirstPage:(_Bool)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)preloadVideoItemsWithCurrentFeedNextIndex:(unsigned long long)arg1;
- (_Bool)isFetchingStateError;
- (void)initData;
- (unsigned long long)getTotalNumOfShowVM;
- (void)viewWillLayoutSubviews;
- (void)setupHistoryListView;
- (void)initWCFinderScrollView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)preInitJob;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

