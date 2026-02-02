//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMTableViewInfo, MMUILabel, MMUITextField, NSString, RichTextView, UIButton;

@interface ChatRoomRemarkEditViewController
{
    MMTableViewInfo *m_tableViewInfo;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    RichTextView *m_operateRichTextView;
    MMUILabel *m_nickNameLabel;
    MMHeadImageView *m_headImageView;
    MMUITextField *m_tfRemark;
    CContact *_chatRoomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
@property(retain, nonatomic) MMUITextField *m_tfRemark; // @synthesize m_tfRemark;
- (id)navigationBarBackgroundColor;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)executeOpLog;
- (void)didAccept;
- (_Bool)checkEdit;
- (void)checkAcceptBtnBottomLocal;
- (double)getkeyboardShowAcceptBtnBottom;
- (double)getkeyboardHideAcceptBtnBottom;
- (void)initFooterView;
- (void)initAcceptBtn;
- (void)onRemarkHideKeyBoard;
- (void)onRemarkShowKeyBoard;
- (void)initHeadImageView;
- (void)initRemarkEdit;
- (void)makeRemarkEdit:(id)arg1;
- (id)getChatRoomInfoHeadView;
- (void)reloadTableViewInfo;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
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

