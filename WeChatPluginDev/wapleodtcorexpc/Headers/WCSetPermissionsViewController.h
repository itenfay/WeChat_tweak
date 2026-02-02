//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableViewInfo, NSDate, NSString, WCOpLog;
@protocol WCSetPermissionsViewControllerDelegate;

@interface WCSetPermissionsViewController
{
    NSDate *m_pushInDate;
    unsigned int m_permissionOpCode;
    _Bool m_showPermissionsCell;
    id <WCSetPermissionsViewControllerDelegate> _delegate;
    CContact *m_contact;
    long long _scene;
    NSString *_publishId;
    NSString *_userName;
    WCOpLog *_wcOpLog;
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) WCOpLog *wcOpLog; // @synthesize wcOpLog=_wcOpLog;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)setM_contact:(id)arg1;
- (id)m_contact;
@property(nonatomic) __weak id <WCSetPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportPermissions;
- (unsigned int)getContactVerifyPermissionOpCode;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)becomeWCBlacklist:(_Bool)arg1;
- (void)becomeOutsider:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)opWCBlacklist:(id)arg1;
- (void)opOutsider:(id)arg1;
- (void)showPermissionsCell;
- (void)addPermissionSectionWithClicfgSetDefaultChatonly;
- (void)addPermissionSection;
- (void)reloadTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)onDissmiss;
- (id)initWithUserName:(id)arg1;

@end

