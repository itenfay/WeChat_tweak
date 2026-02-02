//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CPushContact, FindContactSearchViewCellInfo, MMNearByHeaderView, MMTableView, MMTableViewInfo, NSMutableSet, NSString, SayHelloDataLogic, SeePeopleNearByLogicController, SendVerifyMsgLogicController, UILabel, UIView;

@interface SayHelloViewController
{
    MMTableView *m_tableView;
    MMTableViewInfo *m_tableViewInfoNoHello;
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    unsigned int m_uiScene;
    SayHelloDataLogic *m_DataLogic;
    UILabel *m_labelTip;
    CPushContact *m_selectedContact;
    MMNearByHeaderView *m_nearByHeaderView;
    SeePeopleNearByLogicController *m_peopleNearByLogicController;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    _Bool _fromSayHelloButton;
    NSMutableSet *_expandedContacts;
}

+ (void)reportFriendAssistAction:(unsigned long long)arg1 forContact:(id)arg2;
+ (void)OnViewDetail:(id)arg1 prarentViewController:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *expandedContacts; // @synthesize expandedContacts=_expandedContacts;
@property(nonatomic) _Bool fromSayHelloButton; // @synthesize fromSayHelloButton=_fromSayHelloButton;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void)registerYReportSdk;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getCellDescLabelRightMargin;
- (void)OnSayHelloDataSendVerifyMsg:(id)arg1;
- (void)OnSayHelloDataVerifyContactOK:(id)arg1;
- (void)makeHelloCell:(id)arg1 helloMsg:(id)arg2 delegate:(id)arg3;
- (void)onContactsItemViewHeightChanged:(id)arg1;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnClear:(id)arg1;
- (id)GetClearTip;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)updateOpenImContactResource;
- (void)bindPhoneReturn;
- (id)getViewController;
- (void)OnSayHelloDataChange;
- (_Bool)shouldInteractivePop;
- (_Bool)isSeachActive;
- (void)willAppear;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)onAddContact;
- (void)updateNoHello;
- (void)addMobileFriend;
- (void)updateHeaderView;
- (id)makeNewFriendHeaderView;
- (id)makeNearByHeaderView;
- (_Bool)shouldShowNearByHeaderView;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)onClearNearHeaderClicked:(id)arg1;
- (void)initTableView;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

