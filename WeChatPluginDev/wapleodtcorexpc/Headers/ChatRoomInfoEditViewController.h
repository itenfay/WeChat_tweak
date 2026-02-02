//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMTableViewInfo, MMUITextField, NSMutableDictionary, NSString, UIButton;

@interface ChatRoomInfoEditViewController
{
    CContact *m_chatRoomContact;
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsOriginChatRoomTopic;
    NSMutableDictionary *m_dicParam;
    _Bool m_becomeFirstResponder;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMHeadImageView *m_headImageView;
    MMUITextField *m_topicTextField;
    double m_tableContentHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (id)navigationBarBackgroundColor;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)updateChatRoomTopicCount:(id)arg1;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3;
- (void)checkNeedReload:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)OnDone;
- (void)OnReturn;
- (void)doDismissView;
- (_Bool)isChanged;
- (id)getChatRoomInfoHeadView;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableData;
- (void)onTopicHideKeyBoard;
- (void)onTopicShowKeyBoard;
- (void)initHeadImageView;
- (void)initTopicEditView;
- (void)initAcceptBtn;
- (void)viewDidLayoutSubviews;
- (void)resetData;
- (void)initNotificationObservers;
- (void)initTableView;
- (void)createRightBarButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

