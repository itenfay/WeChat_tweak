//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMail, MMTableView, MMTimer, MailAttachmentControlView, MailContactFilterView, MailContentView, MailRTEToolView, MailReceiverEditView, MailSubjectEditView, NSMutableArray, NSString, NSTextStorage, RTEAttachmentViewProvider, UIView, XMailBindMailControlLogic;

@interface WriteMailViewController
{
    MMTableView *m_tableView;
    MailContactFilterView *m_filterView;
    MailContentView *m_contentView;
    MailRTEToolView *m_toolView;
    MailReceiverEditView *m_receiverView;
    MailReceiverEditView *m_ccView;
    MailReceiverEditView *m_bccView;
    MailSubjectEditView *m_topicView;
    UIView *m_ccBccView;
    NSMutableArray *m_arrShowViews;
    MailAttachmentControlView *m_attachmentControlView;
    int m_firstResponderStatus;
    int m_ccBccFlodStatus;
    CMail *m_mail;
    NSMutableArray *m_arrReceiver;
    NSMutableArray *m_arrCc;
    NSMutableArray *m_arrBcc;
    unsigned int m_uiMailType;
    double m_fKeyboardHeight;
    MMTimer *m_autoSaveTimer;
    unsigned int m_firstResponderTag;
    NSMutableArray *m_arrAllMailContacts;
    NSString *m_nsMailID;
    NSTextStorage *textStorage;
    CMail *m_oldMail;
    NSString *m_oldMailID;
    _Bool m_firstInit;
    _Bool m_disableDraft;
    RTEAttachmentViewProvider *m_attachmentViewProvider;
    _Bool _isPromptingAlert;
    double _keyboardHeight;
    NSString *_sendingMailEventId;
    XMailBindMailControlLogic *_bindMailControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMailBindMailControlLogic *bindMailControlLogic; // @synthesize bindMailControlLogic=_bindMailControlLogic;
@property(retain, nonatomic) NSString *sendingMailEventId; // @synthesize sendingMailEventId=_sendingMailEventId;
@property(nonatomic) _Bool isPromptingAlert; // @synthesize isPromptingAlert=_isPromptingAlert;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSMutableArray *m_arrAllMailContacts; // @synthesize m_arrAllMailContacts;
- (id)getCurrentViewController;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (void)onVerifyQQPwdCancel;
- (void)onMailContactChanged:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onAddMailContact:(id)arg1;
- (long long)indexForView:(id)arg1;
- (void)onFirstResponderResigned;
- (id)getViewController;
- (id)initWithMailHeader:(id)arg1 subject:(id)arg2 andMailNodeList:(id)arg3;
- (id)initWithMail:(id)arg1 mailID:(id)arg2 mailType:(unsigned int)arg3;
- (void)uploadAttachment:(id)arg1 name:(id)arg2;
- (id)initWithMail:(id)arg1 mailType:(unsigned int)arg2;
- (id)initWithNewEmptyMail:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)releaseAutoSaveTimer;
- (void)initAutoSaveTimer;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)ReleaseTextField;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)OnGetAllMailContact:(id)arg1 ErrNo:(int)arg2;
- (void)OnUploadSuccess;
- (void)contentViewDidFinishEdit;
- (void)filterViewBeginDragging;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactReturn:(id)arg1;
- (void)didStartWriteMailContent;
- (void)contentLengthChanged:(id)arg1;
- (void)contentViewNeedSetContentOffset;
- (id)getFilterName:(id)arg1;
- (void)reloadTableView;
- (void)setContentResponderStatus;
- (float)calculateTableViewHeight;
- (void)initView;
- (void)initTableItemViews;
- (void)updateRightBarButton;
- (void)OnReturn;
- (void)CheckCancel:(id)arg1;
- (void)initData;
- (_Bool)SendBtnEnable;
- (void)RealSend;
- (void)onSend;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)OnComposeSendWithEventId:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)OnGetSearchResultForInput:(id)arg1 contacts:(id)arg2;
- (void)startBind;
- (void)showErrorAlertWithErrorCode:(int)arg1 errorMsg:(id)arg2;
- (void)updateFilterViewWithContacts:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)fixFilterView;
- (void)onAutoSaveTimer;
- (void)deleteDraft;
- (void)loadDraft;
- (void)saveDraft;
- (void)setccBccFlodStatus:(int)arg1;
- (void)setNextFirstRespondStatus:(int)arg1;
- (void)setNewFirstResponse;
- (void)setFirstRespondStatus:(int)arg1;
- (int)getFirstResponderStatusForRow:(long long)arg1;
- (int)getNextResponderStautsForFirstResponderStatus:(int)arg1;
- (id)getViewForFirstResponderStatus:(int)arg1;
- (void)staticReloadTableView;
- (id)getSelfMailContact;
- (void)onLongPressSelectAttachmentView:(id)arg1;
- (_Bool)canEditNote;
- (id)constructRTEContent;
- (id)getStoredAttachments;
- (_Bool)containsAttachmentWithFilename:(id)arg1;
- (_Bool)isAllAttachmentUploadSuccess;
- (id)getAllAttachments;
- (void)onAttachmentNeedReload:(id)arg1;
- (void)onCreatAttachmentView:(id)arg1;
- (id)getAttachmentViewProvider;
- (void)initMailContentView;
- (_Bool)onShowExceedMaxObjectCountAlert;
- (void)onShowFullToolView;
- (void)onShowBasicToolView;
- (void)insertRTEAttachments:(id)arg1;
- (unsigned int)objectCount;
- (void)makeKeyboardShow;
- (void)makeKeyboardInvisible;
- (void)updateToolBarHeightWithKeyboardHeight:(double)arg1;
- (void)onTopBarFrameChanged;
- (void)tryHideToolView;
- (void)tryShowToolView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)makeTextViewFirstResponder;
- (void)initToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

