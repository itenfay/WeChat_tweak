//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGenericPickerView, MMFinderLivePaidConnectMicAnchorInfo, MMFinderLivePaidConnectMicAnchorSetting, MMFinderLivePaidConnectMicAnchorSettingConfig, MMFinderLiveTaskId, MMTableViewInfo, MMUIButton, MMUILabel, MMUIMaskContainerView, NSString, UIButton;
@protocol MMFinderLivePaidConnectMicAnchorSettingPanelDelegate;

@interface MMFinderLivePaidConnectMicAnchorSettingPanel
{
    _Bool _isDismissedByConfirm;
    id <MMFinderLivePaidConnectMicAnchorSettingPanelDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
    MMUILabel *_titleLabel;
    MMUIButton *_ratingButton;
    MMUIButton *_historyButton;
    UIButton *_confirmButton;
    MMUIMaskContainerView *_maskContainerView;
    MMFinderLiveGenericPickerView *_pickerView;
    MMFinderLivePaidConnectMicAnchorSetting *_initialSetting;
    MMFinderLivePaidConnectMicAnchorSetting *_latestSetting;
    MMFinderLivePaidConnectMicAnchorSettingConfig *_settingConfig;
    MMFinderLivePaidConnectMicAnchorInfo *_anchorInfo;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDismissedByConfirm; // @synthesize isDismissedByConfirm=_isDismissedByConfirm;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorInfo *anchorInfo; // @synthesize anchorInfo=_anchorInfo;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorSettingConfig *settingConfig; // @synthesize settingConfig=_settingConfig;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorSetting *latestSetting; // @synthesize latestSetting=_latestSetting;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorSetting *initialSetting; // @synthesize initialSetting=_initialSetting;
@property(nonatomic) __weak MMFinderLiveGenericPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MMUIMaskContainerView *maskContainerView; // @synthesize maskContainerView=_maskContainerView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *historyButton; // @synthesize historyButton=_historyButton;
@property(retain, nonatomic) MMUIButton *ratingButton; // @synthesize ratingButton=_ratingButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) __weak id <MMFinderLivePaidConnectMicAnchorSettingPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)liveTask;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndices:(id)arg3;
- (void)livePickerView:(id)arg1 didSelectItem:(id)arg2 index:(unsigned long long)arg3;
- (void)internalSetupAndOpenLiteAppVC:(id)arg1;
- (void)pushLiteAppWithJumpInfo:(id)arg1;
- (void)reloadTableViewMask;
- (void)showGenericPickerViewWithConfig:(id)arg1 pickerType:(unsigned long long)arg2;
- (void)onTapHistory;
- (void)onConfirm;
- (void)onTapRatingButton;
- (void)onClose;
- (void)onSelectConnectMicDurationCell;
- (void)onSelectConnectMicFocusModeCell;
- (void)onSelectConnectMicCloseModeCell;
- (void)onSelectAudienceBidPriceCell;
- (void)onSelectConnectMicPriceCell;
- (void)onAudienceBidDidChange:(id)arg1;
- (void)makeTitleDetailCellWithCell:(id)arg1 title:(id)arg2 detail:(id)arg3 showLeadingLine:(_Bool)arg4 isWecoinDesc:(_Bool)arg5;
- (void)makeTitleDetailCellWithCell:(id)arg1 title:(id)arg2 detail:(id)arg3;
- (void)makeAudienceBidPriceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeAudienceBidCell:(id)arg1 cellInfo:(id)arg2;
- (double)audienceBidCellHeight;
- (void)makeConnectMicPriceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicFocusModeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicCloseModeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicDurationCell:(id)arg1 cellInfo:(id)arg2;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)onPageSheetContainerBgTapped;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)reinitTableInfo;
- (void)initUI;
- (id)initWithSetting:(id)arg1 settingConfig:(id)arg2 info:(id)arg3 taskId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

