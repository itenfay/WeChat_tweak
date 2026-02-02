//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, MMTableView, NSString, RingToneDetail, RingToneHomePageActionReporter_23612, RingToneMixPlayer, RingTonePickerViewController, RingToneSettingHeaderView, RingToneVideoFeedViewController, VideoRingExclusiveFriendsViewModel, VideoRingMediaModel, VideoRingNetProvider, WCTimeLineFooterView;

@interface RingToneSettingViewController
{
    AnyPromise *_preload_friendsRingPromise;
    AnyPromise *_preload_globalRingPromise;
    MMTableView *_tableView;
    VideoRingExclusiveFriendsViewModel *_viewModel;
    RingToneSettingHeaderView *_tableHeaderView;
    WCTimeLineFooterView *_footerView;
    RingToneMixPlayer *_player;
    long long _activeIndex;
    VideoRingMediaModel *_cropingMedia;
    RingToneDetail *_cropingRing;
    VideoRingNetProvider *_provider;
    RingToneHomePageActionReporter_23612 *_reporter;
    RingTonePickerViewController *_pickerVC;
    RingToneVideoFeedViewController *_pickerVC2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneVideoFeedViewController *pickerVC2; // @synthesize pickerVC2=_pickerVC2;
@property(retain, nonatomic) RingTonePickerViewController *pickerVC; // @synthesize pickerVC=_pickerVC;
@property(retain, nonatomic) RingToneHomePageActionReporter_23612 *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) RingToneDetail *cropingRing; // @synthesize cropingRing=_cropingRing;
@property(retain, nonatomic) VideoRingMediaModel *cropingMedia; // @synthesize cropingMedia=_cropingMedia;
@property(nonatomic) long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(retain, nonatomic) RingToneMixPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RingToneSettingHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) VideoRingExclusiveFriendsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AnyPromise *preload_globalRingPromise; // @synthesize preload_globalRingPromise=_preload_globalRingPromise;
@property(retain, nonatomic) AnyPromise *preload_friendsRingPromise; // @synthesize preload_friendsRingPromise=_preload_friendsRingPromise;
- (void)onVoipWindowDidAppear;
- (void)checkShowRingbackSwitch;
- (void)checkFirstSetRingTone;
- (void)onExclusiveRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onExclusiveRingJumpFinder:(id)arg1;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(_Bool)arg2;
- (void)onExclusiveRingSwitch:(id)arg1;
- (void)onExistContactDidSelected:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (_Bool)hideFavourContactCandidate;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)onDataChangedForIndex:(long long)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)resetRingToDefault;
- (void)onHeaderViewJumpPlayer:(id)arg1;
- (void)onHeaderViewJumpFinder:(id)arg1;
- (void)onHeaderViewPlayButtonTap:(_Bool)arg1;
- (void)pickNewGlobalRing;
- (void)onHeaderViewSwitchButtonTap;
- (void)onHeaderViewAddExclusiveRingTap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadGlobalRingData;
- (void)reloadTableData;
- (void)fetchNextPage;
- (void)initFooterView;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)jumpToHistoryList;
- (void)initHistoryItem;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFromChennel:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

