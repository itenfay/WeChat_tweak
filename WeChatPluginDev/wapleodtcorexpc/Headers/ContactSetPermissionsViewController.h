//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, DelaySwitchSettingLogic, MMTableViewInfo, NSString;
@protocol ContactInfoAssistDelegate;

@interface ContactSetPermissionsViewController
{
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    id <ContactInfoAssistDelegate> m_delegate;
    _Bool _bDisableAllOperation;
    unsigned int _m_uiVerify;
    CContact *m_contact;
    MMTableViewInfo *_tableViewInfo;
}

+ (_Bool)shouldShowSetPermissionsWithUserName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) unsigned int m_uiVerify; // @synthesize m_uiVerify=_m_uiVerify;
@property(nonatomic) _Bool bDisableAllOperation; // @synthesize bDisableAllOperation=_bDisableAllOperation;
- (void)setM_contact:(id)arg1;
- (id)m_contact;
- (void)opWCBlacklist:(id)arg1;
- (void)opOutsider:(id)arg1;
- (void)opAllPermission;
- (void)opSocialBlackPermission;
- (_Bool)isNeedVerify;
- (_Bool)isInMyContactList;
- (void)setDelegate:(id)arg1;
- (void)showPermissionsCell;
- (void)addPermissionSection;
- (void)addPermissionSectionWithClicfgSetDefaultChatonly;
- (void)reloadTableView;
- (void)initView;
- (_Bool)shouldRestrictContentViewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

