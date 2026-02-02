//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonActionSheetPicker, MMFinderLivePaymentSettingView, MMFinderLivePaymentTrialModeSettingView, MMTableViewInfo, NSArray, NSMutableArray, NSString;
@protocol MMFinderLivePaymentSettingViewControllerDelegate;

@interface MMFinderLivePaymentSettingViewController
{
    _Bool _forceDarkMode;
    _Bool _isPaymentSwitchOn;
    _Bool _bindNotice;
    _Bool _hasTrialTimeManuallyModified;
    unsigned int _curPriceInWecoin;
    unsigned int _curTrialTimeHour;
    unsigned int _curTrialTimeMinute;
    int _liveMode;
    id <MMFinderLivePaymentSettingViewControllerDelegate> _actionDelegate;
    MMTableViewInfo *_tableViewInfo;
    NSMutableArray *_chooseFreeContactChatroomList;
    NSMutableArray *_chooseFreeContactUsernameList;
    NSArray *_chooseFreeContactListForDigestDisplay;
    unsigned long long _entrySource;
    NSArray *_allVisibilityFileList;
    NSMutableArray *_selectedVisibleFileLists;
    NSMutableArray *_selectedFreeFileLists;
    MMFinderLivePaymentSettingView *_paymentSettingPanel;
    MMFinderLivePaymentTrialModeSettingView *_paymentTrialModeSettingView;
    long long _purchaseLivePreviewType;
    MMCommonActionSheetPicker *_startTimePicker;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTrialTimeManuallyModified; // @synthesize hasTrialTimeManuallyModified=_hasTrialTimeManuallyModified;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) unsigned int curTrialTimeMinute; // @synthesize curTrialTimeMinute=_curTrialTimeMinute;
@property(nonatomic) unsigned int curTrialTimeHour; // @synthesize curTrialTimeHour=_curTrialTimeHour;
@property(retain, nonatomic) MMCommonActionSheetPicker *startTimePicker; // @synthesize startTimePicker=_startTimePicker;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(retain, nonatomic) MMFinderLivePaymentTrialModeSettingView *paymentTrialModeSettingView; // @synthesize paymentTrialModeSettingView=_paymentTrialModeSettingView;
@property(nonatomic) unsigned int curPriceInWecoin; // @synthesize curPriceInWecoin=_curPriceInWecoin;
@property(retain, nonatomic) MMFinderLivePaymentSettingView *paymentSettingPanel; // @synthesize paymentSettingPanel=_paymentSettingPanel;
@property(retain, nonatomic) NSMutableArray *selectedFreeFileLists; // @synthesize selectedFreeFileLists=_selectedFreeFileLists;
@property(retain, nonatomic) NSMutableArray *selectedVisibleFileLists; // @synthesize selectedVisibleFileLists=_selectedVisibleFileLists;
@property(retain, nonatomic) NSArray *allVisibilityFileList; // @synthesize allVisibilityFileList=_allVisibilityFileList;
@property(nonatomic) unsigned long long entrySource; // @synthesize entrySource=_entrySource;
@property(retain, nonatomic) NSArray *chooseFreeContactListForDigestDisplay; // @synthesize chooseFreeContactListForDigestDisplay=_chooseFreeContactListForDigestDisplay;
@property(retain, nonatomic) NSMutableArray *chooseFreeContactUsernameList; // @synthesize chooseFreeContactUsernameList=_chooseFreeContactUsernameList;
@property(retain, nonatomic) NSMutableArray *chooseFreeContactChatroomList; // @synthesize chooseFreeContactChatroomList=_chooseFreeContactChatroomList;
@property(nonatomic) _Bool bindNotice; // @synthesize bindNotice=_bindNotice;
@property(nonatomic) _Bool isPaymentSwitchOn; // @synthesize isPaymentSwitchOn=_isPaymentSwitchOn;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) __weak id <MMFinderLivePaymentSettingViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)lowerCellDigestWithAudienceLists:(id)arg1 selectedLists:(id)arg2;
- (id)lowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2;
- (void)showPaymentSettingPanelAndLegalIntro;
- (_Bool)shouldEnablePaidLive;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)onUpdatePurchaseLivePreviewType:(long long)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)onWCFinderLiveRosterSelectCancel;
- (void)selectFreeFileListFromAllVisibilityFileLists;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)selectFreeContactsFromRecentSessions;
- (void)dismissStartTimePicker;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getDatePickerData;
- (void)showStartTimePicker;
- (void)showPaymentPreviewModeView;
- (void)showPaymentPriceSettingView;
- (void)onPaymentSwitch:(id)arg1;
- (void)onTapDone;
- (void)onTapCancel;
- (id)getCustomViewForFreeUserFileListCell;
- (id)getRightViewByCurrentFreeUsers;
- (id)getRightViewByCurrentTrialMode;
- (id)getRightViewByCurrentPayPrice;
- (id)getFormatTrialTimeString;
- (id)getRightViewByCurrentTrialTime;
- (void)drawBottomCornerForCell:(id)arg1 tableView:(id)arg2;
- (void)drawTopCornerForCell:(id)arg1 tableView:(id)arg2;
- (void)reloadTableData;
- (id)getColorProxy;
- (void)clearPaySetting;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)initWithPaymentOpened:(_Bool)arg1 allVisibilityFileList:(id)arg2 freeContactChatroomList:(id)arg3 freeContactUsernameList:(id)arg4 freeContactListForDigestDisplay:(id)arg5 selectedFreeRosterList:(id)arg6 priceInWecoin:(unsigned int)arg7 purchaseLivePreviewType:(long long)arg8 trialTimeHour:(unsigned int)arg9 trialTimeMinute:(unsigned int)arg10 shareEntrySource:(unsigned long long)arg11 forceDarkMode:(_Bool)arg12 bindNotice:(_Bool)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

