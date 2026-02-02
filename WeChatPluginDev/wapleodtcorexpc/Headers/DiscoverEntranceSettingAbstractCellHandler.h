//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DiscoverEntranceSettingReporter, DiscoverEntranceSettingSheetView, NSString, WCTableViewNormalCellManager;
@protocol DiscoverEntranceSettingHandlerDelegate;

@interface DiscoverEntranceSettingAbstractCellHandler
{
    _Bool _enabledEntrace;
    _Bool _enabledReddot;
    unsigned long long _rowType;
    DiscoverEntranceSettingReporter *_reporter;
    id <DiscoverEntranceSettingHandlerDelegate> _delegate;
    WCTableViewNormalCellManager *_cellMgr;
    DiscoverEntranceSettingSheetView *_sheetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverEntranceSettingSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak WCTableViewNormalCellManager *cellMgr; // @synthesize cellMgr=_cellMgr;
@property(nonatomic) _Bool enabledReddot; // @synthesize enabledReddot=_enabledReddot;
@property(nonatomic) _Bool enabledEntrace; // @synthesize enabledEntrace=_enabledEntrace;
@property(nonatomic) __weak id <DiscoverEntranceSettingHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DiscoverEntranceSettingReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long rowType; // @synthesize rowType=_rowType;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)cancelWeChatServiceAuth:(id)arg1;
- (void)showCloseViewWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2 titile:(id)arg3 description:(id)arg4 confirmTitle:(id)arg5;
- (void)showCloseViewWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2 titile:(id)arg3 description:(id)arg4;
- (void)showAuthViewWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2;
- (void)sendEntranceValueToServer:(_Bool)arg1;
- (void)saveNewEntranceValue:(_Bool)arg1;
- (void)saveNewReddotEnableValue:(_Bool)arg1;
- (void)onEntranceSwitchChanged:(id)arg1;
- (void)onSheetDisppearWithSwitchChanged:(id)arg1;
- (void)onSwitchChanged:(id)arg1 switchType:(unsigned long long)arg2 sheetView:(id)arg3;
- (unsigned long long)reddotCtrlFlagMask;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)settingEntrancePluginType;
- (_Bool)willShowWeChatAuthorization;
- (_Bool)isWeixinServiceForOversea;
- (unsigned long long)serviceAuthType;
- (void)updateRightDescription;
- (id)statusDesc;
- (struct CGSize)iconSize;
- (_Bool)originalReddotSwitchOn;
- (_Bool)hasReddotAbility;
- (id)iconImage;
- (_Bool)originalEntraceSwitchOn;
- (id)title;
- (id)makeSettingSheetView;
- (void)showSettingSheetView;
- (id)genCellManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

