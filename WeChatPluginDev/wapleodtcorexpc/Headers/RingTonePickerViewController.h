//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTListAdapter, MMTableView, MMUIActivityIndicatorView, NSString, RingToneDetail, RingToneMixPlayer, RingTonePickerViewModel, RingToneRecommendReporter_23604, RingToneSearchProxy, WCSearcher, WCTimeLineFooterView;

@interface RingTonePickerViewController
{
    _Bool _shouldNotShowFriendSettings;
    _Bool _isFetchingData;
    _Bool _isFromOutside;
    _Bool _isShowingSelected;
    _Bool _isJumpToOtherPage;
    _Bool _isJumpToSearchPage;
    _Bool _ringRecommendSwitch;
    unsigned int _exposeIndex;
    unsigned long long _setType;
    MMTableView *_tableView;
    WCSearcher *_searcher;
    RingToneSearchProxy *_searchProxy;
    RingTonePickerViewModel *_viewModel;
    WCTimeLineFooterView *_footerView;
    CContact *_exclusiveContact;
    RingToneRecommendReporter_23604 *_reporter;
    MMTListAdapter *_listAdapter;
    long long _reportIndex;
    RingToneDetail *_ring;
    NSString *_friendName;
    MMUIActivityIndicatorView *_indicator;
    RingToneMixPlayer *_player;
}

+ (id)constructRingTonePickerViewController:(id)arg1 friendName:(id)arg2;
+ (id)constructRingDetailPickerViewController:(id)arg1 friendName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool ringRecommendSwitch; // @synthesize ringRecommendSwitch=_ringRecommendSwitch;
@property(nonatomic) _Bool isJumpToSearchPage; // @synthesize isJumpToSearchPage=_isJumpToSearchPage;
@property(nonatomic) _Bool isJumpToOtherPage; // @synthesize isJumpToOtherPage=_isJumpToOtherPage;
@property(retain, nonatomic) RingToneMixPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) NSString *friendName; // @synthesize friendName=_friendName;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(retain, nonatomic) MMTListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) CContact *exclusiveContact; // @synthesize exclusiveContact=_exclusiveContact;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RingTonePickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RingToneSearchProxy *searchProxy; // @synthesize searchProxy=_searchProxy;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool shouldNotShowFriendSettings; // @synthesize shouldNotShowFriendSettings=_shouldNotShowFriendSettings;
@property(nonatomic) unsigned long long setType; // @synthesize setType=_setType;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)ringRecommendSwitch:(_Bool)arg1;
- (void)onVoipWindowDidAppear;
- (void)setSearchState:(_Bool)arg1;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2 searchID:(long long)arg3;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)stopAllRingPlay;
- (id)getFriendName;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(_Bool)arg2;
- (void)willDisplayCellAtIndex:(long long)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onShowRecommendWarnPageSheet;
- (void)traitCollectionDidChange:(id)arg1;
- (void)highlightFirstCell;
- (void)fetchNextPage:(_Bool)arg1 pullType:(unsigned long long)arg2;
- (void)initSearchBar;
- (void)refreshForTableView;
- (void)jumpToAuthorPage:(id)arg1;
- (void)removeCellSelectedStatus;
- (void)setPopGestureForVC:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initTableView;
- (void)initFooterView;
- (void)initReporter;
- (void)initData;
- (void)onBack;
- (void)configView;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)setTypeAndCContact:(unsigned long long)arg1 contact:(id)arg2;
- (void)preInitJob;
- (void)onClickMore:(id)arg1;
- (void)initView;
- (id)init;
- (id)initFromOutside:(id)arg1;
- (void)stopAllPlay;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

