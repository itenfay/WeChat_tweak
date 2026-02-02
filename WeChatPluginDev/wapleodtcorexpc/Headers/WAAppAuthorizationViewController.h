//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSArray, NSMutableArray, NSString, UIView, WAAppAuthRespData, WAContact;
@protocol WAAppAuthorizationDelegate;

@interface WAAppAuthorizationViewController
{
    NSString *m_appid;
    NSMutableArray *m_authorationList;
    _Bool m_isAuthInfoChanged;
    _Bool m_isBluetoothInfoChanged;
    UIView *m_emptyView;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_userChangedLocationOptionState;
    unsigned int m_userSelectedLocationOptionState;
    _Bool m_userChangedFuzzyLocationOptionState;
    unsigned int m_userSelectedFuzzyLocationOptionState;
    _Bool m_userChangedBluetoothOptionState;
    unsigned int m_userSelectedBluetoothOptionState;
    _Bool _hasTemplateMsgAuthCell;
    NSArray *_deviceVoipAuthDeviceList;
    id <WAAppAuthorizationDelegate> _delegate;
    WAContact *_contact;
    WAAppAuthRespData *_authData;
}

+ (id)transferScopeCacheToSubscriptionModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAppAuthRespData *authData; // @synthesize authData=_authData;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WAAppAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFetchVoipDeviceList:(id)arg1;
- (void)onUpdateScopeGlobalRecv:(_Bool)arg1 forUser:(id)arg2;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(_Bool)arg3;
- (void)didSelectAuthorizationOptionItem:(id)arg1 forAuthType:(unsigned long long)arg2;
- (id)getBluetoothPermissionString;
- (_Bool)isAppRegisteredBackgroundModeForKey:(id)arg1;
- (void)onGetAppAuthInfo:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (void)onAppAuthInfoListModifyFailedWithRiskControlInfo:(id)arg1;
- (void)onAppAuthInfoListModifyEnd:(_Bool)arg1 AuthDataList:(id)arg2;
- (void)syncSetAuthState:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onAuthInfoChangeed:(id)arg1 CellInfo:(id)arg2;
- (void)onClickAccountCell:(id)arg1;
- (void)onFuzzyLocationAuthInfoChanged;
- (void)onThreeStateAuthInfoChanged:(id)arg1 backgroundScope:(id)arg2;
- (void)requestAuthorazitionInfo;
- (double)cellLeftDetailMaxWidth;
- (void)initEmptyView;
- (id)makeHeaderView;
- (void)onDeviceVoipAuthCell:(id)arg1;
- (void)onPrivacyUsageDetailCell:(id)arg1;
- (void)onDeviceSyncAuthCell:(id)arg1;
- (void)onMangerAuthCell:(id)arg1;
- (void)onSubscriptionMessageSettingsCell:(id)arg1;
- (void)onBluetoothCell:(id)arg1;
- (void)onFuzzyLocationCell:(id)arg1;
- (void)onLocationCell:(id)arg1;
- (void)onPayCell:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)getLocationDisplayStringForUserSelectedOptionState:(unsigned int)arg1;
- (id)getFuzzyLocationAuthDisplayStringWithAllow:(_Bool)arg1;
- (id)getThreeStateAuthDisplayStringWithForegroundAllow:(_Bool)arg1 backgroundAllow:(_Bool)arg2;
- (id)getAlwaysAllowOptionItem;
- (id)getWhenInUseOptionItem;
- (id)getDenyOptionItem;
- (id)getTemplateMsgAuthCellTips;
- (void)reloadTableViewInfo;
- (void)initTableViewInfo;
- (void)onReturn;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

