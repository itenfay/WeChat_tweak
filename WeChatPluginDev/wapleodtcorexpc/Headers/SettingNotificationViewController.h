//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, MMNotificationSetting, NSString, RingToneSettingCellHandler, UISwitch, WCActionSheet, WCTableViewCellManager;
@protocol SettingNotificationViewControllerDelegate;

@interface SettingNotificationViewController
{
    WCActionSheet *m_remindSwitchActionSheet;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    UISwitch *m_msgRemindSwitch;
    UISwitch *m_voipRemindSwitch;
    UISwitch *m_pushDetailSwitch;
    UISwitch *m_finderRemindSwitch;
    _Bool _highlightMsgNotifySetting;
    _Bool _isRouted;
    _Bool _hasQuickReplyRedDot;
    _Bool _shouldHighlightNotifyRemindSwitch;
    _Bool _shouldHighlightVoipNotifyRemindSwitch;
    id <SettingNotificationViewControllerDelegate> _delegate;
    MMNotificationSetting *_notificationSetting;
    RingToneSettingCellHandler *_ringToneSettingCellHandler;
    WCTableViewCellManager *_globalUnreadMsgCellInfo;
    WCTableViewCellManager *_notifyRemindCellInfo;
    WCTableViewCellManager *_voipNotifyRemindCellInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHighlightVoipNotifyRemindSwitch; // @synthesize shouldHighlightVoipNotifyRemindSwitch=_shouldHighlightVoipNotifyRemindSwitch;
@property(nonatomic) _Bool shouldHighlightNotifyRemindSwitch; // @synthesize shouldHighlightNotifyRemindSwitch=_shouldHighlightNotifyRemindSwitch;
@property(retain, nonatomic) WCTableViewCellManager *voipNotifyRemindCellInfo; // @synthesize voipNotifyRemindCellInfo=_voipNotifyRemindCellInfo;
@property(retain, nonatomic) WCTableViewCellManager *notifyRemindCellInfo; // @synthesize notifyRemindCellInfo=_notifyRemindCellInfo;
@property(nonatomic) _Bool hasQuickReplyRedDot; // @synthesize hasQuickReplyRedDot=_hasQuickReplyRedDot;
@property(retain, nonatomic) WCTableViewCellManager *globalUnreadMsgCellInfo; // @synthesize globalUnreadMsgCellInfo=_globalUnreadMsgCellInfo;
@property(retain, nonatomic) RingToneSettingCellHandler *ringToneSettingCellHandler; // @synthesize ringToneSettingCellHandler=_ringToneSettingCellHandler;
@property(retain, nonatomic) MMNotificationSetting *notificationSetting; // @synthesize notificationSetting=_notificationSetting;
@property(nonatomic) _Bool isRouted; // @synthesize isRouted=_isRouted;
@property(nonatomic) _Bool highlightMsgNotifySetting; // @synthesize highlightMsgNotifySetting=_highlightMsgNotifySetting;
@property(nonatomic) __weak id <SettingNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)reportClickWithViewId:(id)arg1;
- (void)preLoadGlobalRing;
- (void)checkShowRingbackSwitch;
- (void)onMessageRingTypeChanged;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)titleForFooterInSection:(long long)arg1;
- (unsigned int)getUseCallKitConfigValue;
- (id)makePushDetailCellWithRow:(unsigned long long)arg1;
- (id)makeNotificationRemindCellWithRow:(unsigned long long)arg1;
- (id)makeNotificationCellWithRow:(unsigned long long)arg1;
- (void)setupSwitchReportForCell:(id)arg1 viewId:(id)arg2;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(_Bool)arg3 forbidOp:(_Bool)arg4 detailText:(id)arg5 viewId:(id)arg6;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(_Bool)arg3 forbidOp:(_Bool)arg4 viewId:(id)arg5;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)makeQuickReplyCellWithTips:(id)arg1 cellInfo:(id)arg2;
- (id)genRichTextSectionFooterView:(id)arg1;
- (id)quickReplyNotifyContentSettingCell;
- (id)quickReplyNotifySettingCell;
- (void)reloadTableData;
- (void)finderNotificationRemindSwitchSetting:(_Bool)arg1;
- (void)voipNotificationUseCallKitSwitchSetting:(_Bool)arg1;
- (void)voipNotificationRemindSwitchSetting:(_Bool)arg1;
- (void)msgNotificationRemindSwitchSetting:(_Bool)arg1;
- (void)onQuickReplyNotifyContentSetting:(id)arg1;
- (void)onQuickReplyBannerSwitchChanged:(id)arg1;
- (void)showPushDetailSwitchActionSheet:(id)arg1;
- (void)showFinderRemindSwitchActionSheet:(id)arg1;
- (void)showVoipRemindSwitchActionSheet:(id)arg1;
- (void)showMsgRemindSwitchActionSheet:(id)arg1;
- (void)finderNotificationRemindSwitchChanged:(id)arg1;
- (void)voipNotificationUseCallKitSwitchChanged:(id)arg1;
- (void)voipNotificationRemindSwitchChanged:(id)arg1;
- (void)msgNotificationRemindSwitchChanged:(id)arg1;
- (void)pushDetailSwitchChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)vibrationSwitchChanged:(id)arg1;
- (void)soundSwitchChanged:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshSysSetting;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupHighlightVoipNotifyRemindSwitch;
- (void)setupHighlightNotifyRemindSwitch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

