//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatRoomSpecialAttentionAddMemberLogic, ChatRoomSpecialAttentionDeleteMemberLogic, MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, NSMutableArray, NSString;

@interface ChatRoomSpecialAttentionMemberViewController
{
    NSMutableArray *m_attentionMemberContactList;
    NSMutableArray *m_chatRoomMemContactList;
    ChatRoomSpecialAttentionAddMemberLogic *m_addMemberSelectContactLogic;
    ChatRoomSpecialAttentionDeleteMemberLogic *m_deleteMemberSelectContactLogic;
    MMTableView *m_tableView;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    NSMutableArray *m_initialAttentionMemberUserNameList;
    NSMutableArray *m_chatRoomMemContactUserNameList;
    MMTableViewInfo *m_tableViewInfo;
    CContact *_chatRoomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 isAddMember:(_Bool)arg3;
- (void)reportChatRoomSpecialAttentionMemberLog;
- (void)didRemoveOperateButton:(id)arg1;
- (void)modifySpecialAttentionMember;
- (void)didFunctionAddMember;
- (void)reloadTableData;
- (id)getChatRoomContact;
- (void)reloadData;
- (id)getDeleteMemberSelectContactLogic;
- (id)getAddMemberSelectContactLogic;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

