//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatRoomInvitationContactProfileLogic, MMTableView, NSMutableArray, NSString, UILabel, UIView;

@interface ChatRoomInvitationListViewController
{
    unsigned int _unReadCount;
    CContact *_roomContact;
    long long _source;
    NSMutableArray *_arrInvitations;
    MMTableView *_tableView;
    UIView *_hasReadSectionHeaderView;
    ChatRoomInvitationContactProfileLogic *_contactProfileLogic;
    UILabel *_emptyTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) ChatRoomInvitationContactProfileLogic *contactProfileLogic; // @synthesize contactProfileLogic=_contactProfileLogic;
@property(retain, nonatomic) UIView *hasReadSectionHeaderView; // @synthesize hasReadSectionHeaderView=_hasReadSectionHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int unReadCount; // @synthesize unReadCount=_unReadCount;
@property(retain, nonatomic) NSMutableArray *arrInvitations; // @synthesize arrInvitations=_arrInvitations;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) CContact *roomContact; // @synthesize roomContact=_roomContact;
- (double)hasReadSectionHeaderHeight;
- (id)getCircleButtonImage:(id)arg1 coler:(id)arg2;
- (void)onApproveChatRoomInvitation:(id)arg1 success:(_Bool)arg2 errInfo:(id)arg3;
- (void)onReplaceOldChatRoomInvitation:(id)arg1 withNewInvitation:(id)arg2;
- (void)onChatRoomInvitationStatusUpdated:(id)arg1;
- (void)onReceiveNewChatRoomInvitation:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onOpenMsgHistoryOfContact:(id)arg1;
- (void)onOpenContactProfile:(id)arg1 invitationWrap:(id)arg2;
- (void)onTapApproveForChatRoomInvitation:(id)arg1;
- (void)makeHasReadSectionHeaderView;
- (_Bool)shouldShowHasReadSectionHeaderViewForSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)makeCell:(id)arg1 invitationWrap:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldRestrictContentViewSize;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateContacts:(id)arg1;
- (void)reloadData;
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

