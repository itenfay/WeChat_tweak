//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMicInfo, MMFinderLivePaidConnectMicAnchorSetting, MMFinderLivePaidConnectMicAnchorSettingConfig, MMFinderLiveTaskId, MMTableViewInfo, MMUIButton, MicSetting_PurchaseMicSetting, NSString;
@protocol MMFinderLiveConnectMicAnchorModeSettingPanelDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate;

@interface MMFinderLiveConnectMicAnchorModeSettingPanel
{
    _Bool _directOpenPaidMicSettingOnSelection;
    id <MMFinderLiveConnectMicAnchorModeSettingPanelDelegate> _delegate;
    id <MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    MMTableViewInfo *_tableViewInfo;
    MMUIButton *_confirmButton;
    unsigned long long _originalSelectedMode;
    unsigned long long _selectedMode;
    double _lastLayoutTableViewWidth;
    MMFinderLivePaidConnectMicAnchorSetting *_paidMicSetting;
    MMFinderLivePaidConnectMicAnchorSettingConfig *_paidMicSettingConfig;
    unsigned long long _switchFlag;
    MicSetting_PurchaseMicSetting *_purchaseMicSetting;
    FinderLiveMicInfo *_micInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool directOpenPaidMicSettingOnSelection; // @synthesize directOpenPaidMicSettingOnSelection=_directOpenPaidMicSettingOnSelection;
@property(retain, nonatomic) FinderLiveMicInfo *micInfo; // @synthesize micInfo=_micInfo;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting; // @synthesize purchaseMicSetting=_purchaseMicSetting;
@property(nonatomic) unsigned long long switchFlag; // @synthesize switchFlag=_switchFlag;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorSettingConfig *paidMicSettingConfig; // @synthesize paidMicSettingConfig=_paidMicSettingConfig;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorSetting *paidMicSetting; // @synthesize paidMicSetting=_paidMicSetting;
@property(nonatomic) double lastLayoutTableViewWidth; // @synthesize lastLayoutTableViewWidth=_lastLayoutTableViewWidth;
@property(nonatomic) unsigned long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) unsigned long long originalSelectedMode; // @synthesize originalSelectedMode=_originalSelectedMode;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAnchorModeSettingPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportWithSubElementType:(unsigned int)arg1 micSetting:(id)arg2;
- (id)liveTask;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (_Bool)paidConnectMicAnchorSettingPanelCanChangeMicLayoutMode:(id)arg1;
- (void)paidConnectMicAnchorSettingPanel:(id)arg1 didConfirmWithLatestSetting:(id)arg2;
- (_Bool)isFreeTalkingAvailable;
- (_Bool)isPaidConnectMicAvailable;
- (_Bool)isConnectMicAvailable;
- (_Bool)isDisableSelected;
- (_Bool)isFreeTalkingSelected;
- (_Bool)isPaidConnectMicSelected;
- (_Bool)isConnectMicSelected;
- (double)getDescriptionCellHeightWithTitle:(id)arg1 desc:(id)arg2;
- (struct CGSize)getDescriptionCellDescSize:(id)arg1;
- (void)makeDescriptionCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 descColor:(id)arg5;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 select:(_Bool)arg5;
- (void)makeDisableCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeFreeTalkingCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidConnectMicSettingCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidConnectMicCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeConnectMicCell:(id)arg1 cellInfo:(id)arg2;
- (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(_Bool)arg2 leftInset:(double)arg3;
- (double)getTwoLineLayoutCellHeightWithDesc:(id)arg1;
- (double)getSingleLineLayoutCellHeight;
- (void)onSelectDisable;
- (void)onSelectFreeTalking;
- (void)onSelectPaidConnectMicSetting;
- (void)_doSelectPaidConnectMic;
- (void)onSelectPaidConnectMic;
- (void)onSelectConnectMic;
- (void)onConfirm;
- (void)layoutSubviews;
- (void)updateConfirmButtonEnabled;
- (void)setupPageSheetConfig;
- (void)reinitTableViewInfoAndResetHeight:(_Bool)arg1;
- (void)reinitTableViewInfo;
- (void)initSelectedMode;
- (void)initPaidMicSettingIfNeeded;
- (id)initWithTaskId:(id)arg1 switchFlag:(unsigned long long)arg2 purchaseMicSetting:(id)arg3 micInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

