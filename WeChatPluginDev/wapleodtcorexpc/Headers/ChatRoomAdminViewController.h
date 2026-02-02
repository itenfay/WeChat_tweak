//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddAdminLogic, CContact, ChatRoomAdminMgrLogic, DelAdminLogic, MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, NSArray, NSString;

@interface ChatRoomAdminViewController
{
    _Bool m_needReload;
    ChatRoomAdminMgrLogic *m_adminMgrLogic;
    AddAdminLogic *m_addAdminLogic;
    DelAdminLogic *m_delAdminLogic;
    NSArray *m_arrAdminUserName;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    CContact *_m_chatRoomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)onDelAdminLogicStop:(_Bool)arg1;
- (id)getViewController;
- (void)onAddAdminLogicStop:(_Bool)arg1;
- (void)didClickLeftCloseBarButton;
- (void)didRemoveOperateButton:(id)arg1;
- (void)didAddMember;
- (void)didFunctionAddMember;
- (void)reloadTableData;
- (_Bool)isShowDeleteButton;
- (id)getChatRoomContact;
- (id)getArrMemberList;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

