//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, ChatRoomInvitationContactProfileLogic, MMHeadImageView, MMTableView, MMTableViewInfo, MMUILabel, NSString, UILabel, UIView;
@protocol ChatRoomInvitationDetailDelegate;

@interface ChatRoomInvitationDetailViewController
{
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    MMHeadImageView *m_headImageView;
    UILabel *m_nickNameView;
    MMUILabel *m_labelSubDesc;
    UILabel *m_inviteNumberView;
    UILabel *m_inviteReasonView;
    UIView *m_seperateLineView;
    CContact *m_inviterContact;
    double _lastScreenWidth;
    CContact *m_chatRoomContact;
    CMessageWrap *m_messageWrap;
    id <ChatRoomInvitationDetailDelegate> m_delegate;
    ChatRoomInvitationContactProfileLogic *_contactProfileLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatRoomInvitationContactProfileLogic *contactProfileLogic; // @synthesize contactProfileLogic=_contactProfileLogic;
@property(nonatomic) __weak id <ChatRoomInvitationDetailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CMessageWrap *m_messageWrap; // @synthesize m_messageWrap;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)reportApproveChatRoomInvitationWithActionType:(long long)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)approveInvitation;
- (void)OnApproveChatRoomInvitation:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3 withUserData:(id)arg4;
- (void)approveMemberFromOwner;
- (void)OnClickHeadImage;
- (void)onModifyContact:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (double)getMemListCellHeight;
- (void)makeMemListSection:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genFooterView;
- (id)genHeaderView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initView;
- (void)reloadData;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

