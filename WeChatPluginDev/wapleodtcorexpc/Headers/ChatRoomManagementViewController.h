//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChangeOwnerLogic, ChatRoomAdminSettingLogic, ChatRoomUpgradeOpenIMLogic, MMTableViewInfo, NSString;
@protocol ChatRoomManagementDelegate;

@interface ChatRoomManagementViewController
{
    MMTableViewInfo *m_tableViewInfo;
    ChangeOwnerLogic *m_changeOwnerLogic;
    ChatRoomAdminSettingLogic *m_chatRoomAdminSettingLogic;
    ChatRoomUpgradeOpenIMLogic *m_chatRoomUpgradeOpenIMLogic;
    _Bool _waitingDismissGroupResp;
    CContact *m_chatRoomContact;
    id <ChatRoomManagementDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool waitingDismissGroupResp; // @synthesize waitingDismissGroupResp=_waitingDismissGroupResp;
@property(nonatomic) __weak id <ChatRoomManagementDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)reportDismissChatroomWithAction:(unsigned long long)arg1 errCode:(long long)arg2;
- (void)reportDismissChatroomWithAction:(unsigned long long)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)OnSetChatRoomAccessType:(id)arg1 Type:(unsigned int)arg2 ErrorInfo:(id)arg3 Success:(_Bool)arg4;
- (void)OnChangeGroupAdmin:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)showChatroomInvitationList;
- (void)checkAdmin;
- (id)getViewController;
- (void)didReceiveMemoryWarning;
- (void)OnReturn;
- (void)onChangeOwnerLogicStop:(_Bool)arg1;
- (void)showChangeManagerView;
- (void)showChangeOwnerView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnDismissChatRoom:(id)arg1 Success:(_Bool)arg2 ErrorMsg:(id)arg3 Ret:(long long)arg4;
- (void)dismissChatRoom;
- (void)showDismissChatRoomView;
- (void)OnSetChatRoomOnlyAdminModTopic:(id)arg1 on:(_Bool)arg2 ErrorInfo:(id)arg3 Success:(_Bool)arg4;
- (void)switchOnlyAdminModTopic:(id)arg1;
- (_Bool)shouldRestrictContentViewSize;
- (void)showChatRoomUpgradeOpenIM;
- (void)switchAllowOwnerApprove:(id)arg1;
- (void)reloadTableData;
- (void)initTableView;
- (void)initData;
- (void)checkNeedForcedUpdateForInfoDetail;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

