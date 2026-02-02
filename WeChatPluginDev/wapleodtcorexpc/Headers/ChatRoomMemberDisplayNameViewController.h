//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMTableViewInfo, MMUITextField, NSString, UIButton;

@interface ChatRoomMemberDisplayNameViewController
{
    MMTableViewInfo *m_tableViewInfo;
    MMUITextField *m_tfMemberDisplayName;
    NSString *m_placeholder;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMHeadImageView *m_headImageView;
    NSString *m_initialMemberDisplay;
    CContact *_chatRoomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (id)navigationBarBackgroundColor;
- (void)handleOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)executeOplogChatRoomDisplayName:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)checkAcceptBtnBottomLocal;
- (void)OnReturn;
- (void)didAccept;
- (_Bool)checkEdit;
- (double)getkeyboardShowAcceptBtnBottom;
- (double)getkeyboardHideAcceptBtnBottom;
- (void)initAcceptBtn;
- (void)onMemberDisplayNameHideKeyBoard;
- (void)onMemberDisplayNameShowKeyBoard;
- (void)initHeadImageView;
- (void)initMemberDisplayNameEdit;
- (void)makeMemberDisplayNameEdit:(id)arg1;
- (id)getChatRoomInfoHeadView;
- (void)reloadTableViewInfo;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)initTableView;
- (void)resetRightBarButton;
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

