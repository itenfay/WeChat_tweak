//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonActionSheetPicker, MMFinderLivePaymentSettingView, MMFinderLivePaymentTrialModeSettingView, MMFinderLivePaymentVisivilitySettingInfo, NSString;

@interface MMFinderLivePaymentVisivilityShareSettingView
{
    MMFinderLivePaymentVisivilitySettingInfo *_paymentSettingInfo;
    MMFinderLivePaymentSettingView *_paymentSettingPanel;
    MMFinderLivePaymentTrialModeSettingView *_paymentTrialModeSettingView;
    MMCommonActionSheetPicker *_startTimePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCommonActionSheetPicker *startTimePicker; // @synthesize startTimePicker=_startTimePicker;
@property(retain, nonatomic) MMFinderLivePaymentTrialModeSettingView *paymentTrialModeSettingView; // @synthesize paymentTrialModeSettingView=_paymentTrialModeSettingView;
@property(retain, nonatomic) MMFinderLivePaymentSettingView *paymentSettingPanel; // @synthesize paymentSettingPanel=_paymentSettingPanel;
@property(retain, nonatomic) MMFinderLivePaymentVisivilitySettingInfo *paymentSettingInfo; // @synthesize paymentSettingInfo=_paymentSettingInfo;
- (void)commonPickerDismissed:(id)arg1;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)onPaymentTrialModeSettingViewClosed:(id)arg1;
- (void)onUpdatePurchaseLivePreviewType:(long long)arg1;
- (void)onMMFinderLivePaymentSettingViewClosed:(id)arg1;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
- (void)onLiveMemberFreeSwitchValueChange:(id)arg1;
- (void)selectFreeFileListFromAllVisibilityFileLists;
- (void)selectFreeContactsFromRecentSessions;
- (void)showStartTimePicker;
- (void)showPaymentPreviewModeView;
- (void)showPaymentPriceSettingView;
- (long long)getNearestIndexWithTarggetItem:(id)arg1 itemList:(id)arg2;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getDatePickerData;
- (id)getFormatTrialTimeString;
- (id)getCustomViewForCreateFreeFileList;
- (id)getRightViewForFreeUserFileListCell:(double)arg1;
- (id)getRightViewByCurrentFreeUsers:(double)arg1;
- (id)getRightViewByCurrentTrialTime;
- (id)getRightViewByCurrentTrialMode;
- (id)getRightViewByCurrentPayPrice;
- (void)layoutConfirmButton;
- (double)getSettingTableHeight;
- (void)layoutSettingTableView;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)updateConfirmButtonEnabled;
- (void)updateSettingInfo:(id)arg1;
- (void)reloadTableData;
- (double)getActualContentHeight;
- (double)getContentHeight;
- (id)navTitle;
- (void)initSettingInfo:(id)arg1;
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(_Bool)arg3 rootVC:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

