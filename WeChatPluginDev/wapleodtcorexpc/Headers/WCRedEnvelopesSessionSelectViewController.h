//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CreateChatLogic, MMTableView, NSMutableArray, NSObject, NSString, WCDataSearcher, WCRedEnvelopesMultiSelectContactsViewController;
@protocol WCRedEnvelopesSessionSelectViewControllerDelegate;

@interface WCRedEnvelopesSessionSelectViewController
{
    long long m_iSessionType;
    id <WCRedEnvelopesSessionSelectViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_arrContacts;
    NSMutableArray *m_selectedContacts;
    unsigned long long m_confirmType;
    unsigned long long m_barTitleType;
    WCRedEnvelopesMultiSelectContactsViewController *m_oWCRedEnvelopesMultiSelectContactsViewController;
    WCDataSearcher *_searcher;
    NSObject *_userData;
    NSString *_taskKey;
    NSString *nsCurrentSearchText;
    NSMutableArray *arrSearchResultOfContacts;
    NSMutableArray *arrSearchResultOfGroup;
    _Bool m_bShowNewSession;
    _Bool m_bFilterMyContact;
    CreateChatLogic *m_createChatLogic;
    NSString *nsNewSessionCellTitle;
    NSString *_m_backSecondConfirmTitle;
    NSString *_m_backSecondConfirmCancel;
    NSString *_m_backSecondConfirmConfirm;
}

+ (id)getGroupDispName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_backSecondConfirmConfirm; // @synthesize m_backSecondConfirmConfirm=_m_backSecondConfirmConfirm;
@property(retain, nonatomic) NSString *m_backSecondConfirmCancel; // @synthesize m_backSecondConfirmCancel=_m_backSecondConfirmCancel;
@property(retain, nonatomic) NSString *m_backSecondConfirmTitle; // @synthesize m_backSecondConfirmTitle=_m_backSecondConfirmTitle;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *nsNewSessionCellTitle; // @synthesize nsNewSessionCellTitle;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) unsigned long long barTitleType; // @synthesize barTitleType=m_barTitleType;
@property(nonatomic) unsigned long long confirmType; // @synthesize confirmType=m_confirmType;
@property(nonatomic) __weak id <WCRedEnvelopesSessionSelectViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) _Bool m_bShowNewSession; // @synthesize m_bShowNewSession;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)removeFakeViewWhenAsynSearchIsReturn;
- (void)addFakeViewWhenAsynSearchNotReturn;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)cancelSearch;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)SearchBarBecomeActive;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (id)getGroupDispName:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)onDone:(id)arg1;
- (void)performCallback;
- (void)callbackDelegate;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2;
- (void)onConfirm;
- (void)handleSelectNewSession;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)makeNewSessionCell:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)changeToAllCantactSection:(long long)arg1;
- (long long)getSectionType:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)initTitle;
- (void)initBarItem;
- (void)cancelConfirm;
- (void)onCancel:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)initData;
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

