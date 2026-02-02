//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveShopSettingAskForPromotingAdapter, MMFinderLiveTaskId, WCTableViewManager;
@protocol MMFinderLiveShopSettingsViewDelegate;

@interface MMFinderLiveShopSettingsView
{
    id <MMFinderLiveShopSettingsViewDelegate> _delegate;
    MMFinderLiveShopSettingAskForPromotingAdapter *_askForPromotingAdapter;
    MMFinderLiveTaskId *_taskId;
    WCTableViewManager *_tableViewManager;
    long long _disappearReason;
}

+ (_Bool)shouldShowSettingViewForTaskID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long disappearReason; // @synthesize disappearReason=_disappearReason;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveShopSettingAskForPromotingAdapter *askForPromotingAdapter; // @synthesize askForPromotingAdapter=_askForPromotingAdapter;
@property(nonatomic) __weak id <MMFinderLiveShopSettingsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (int)replaySwitch;
- (int)replayType;
- (id)liveTask;
- (id)currentOrderSetting;
- (double)fixedHeight;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)reportAnchorAction:(long long)arg1 replaySwitch:(int)arg2 replayType:(int)arg3;
- (void)onAskForPromotingClick:(id)arg1;
- (void)updateReplaySwitch:(int)arg1 replayType:(int)arg2;
- (void)updateOrderEndInsertFlagTo:(int)arg1;
- (void)updateOrderAscFlagTo:(int)arg1;
- (void)onClickAddFromTop;
- (void)onClickAddFromBottom;
- (void)onClickRankFromTop;
- (void)onClickRankFromBottom;
- (void)onFlashSaleOrderClicked;
- (void)onFlashSaleSwitchClick:(id)arg1;
- (void)onPreHotSwitchClick:(id)arg1;
- (void)onReplayTypeValueChangedTo:(int)arg1;
- (void)onReplaySwitchValueChangedTo:(_Bool)arg1;
- (void)onReplaySwitchClick:(id)arg1;
- (void)pageSheetDidDisappear;
- (id)commonSelectIcon;
- (void)addNewGoodsPositionSection;
- (void)addGoodsRankWaySection;
- (void)addFlashSaleSectionIfNeed;
- (void)addRecordCellsToSection:(id)arg1;
- (id)createSwitchCellForSEL:(SEL)arg1 title:(id)arg2 value:(_Bool)arg3;
- (void)addAskForPromotingCellToSection:(id)arg1;
- (void)addPreHotToSection:(id)arg1;
- (void)addRecordReplayToSection:(id)arg1;
- (void)addSettingSections;
- (void)configureOptionTableView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)reportForItemsExpose;
- (void)initViews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

@end

