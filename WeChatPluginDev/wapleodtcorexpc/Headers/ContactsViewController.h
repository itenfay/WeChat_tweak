//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, FTSVoiceSearchBarController, MMMainTableView, NSArray, NSMutableArray, NSString, UILabel, WCSearchBar;

@interface ContactsViewController
{
    MMMainTableView *m_tableView;
    struct UIEdgeInsets m_tableViewInsets;
    UILabel *m_countLabel;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiHelloGroupUnreadCount;
    FTSVoiceSearchBarController *m_mmSearchBar;
    _Bool m_needResetTableViewOffset;
    _Bool m_canSearchAfterInit;
    _Bool m_hadSectionSocialBlackRowInHelloSection;
    NSMutableArray *m_brandContactGroupList;
    NSArray *_favourContactArray;
    WCSearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(copy, nonatomic) NSArray *favourContactArray; // @synthesize favourContactArray=_favourContactArray;
@property(retain, nonatomic) NSMutableArray *m_brandContactGroupList; // @synthesize m_brandContactGroupList;
- (void)registerYReportSdk;
- (void)setupDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onFTSSearchEnd;
- (void)resetViewStatus;
- (void)onFriendAssistUnreadCountChanged;
- (void)updateTabBarBadge;
- (id)getMMKVHadSectionSocialBlackKey;
- (void)updateHadSectionSocialBlackRowInHelloSection;
- (void)updateHelloGroup;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (id)getViewController;
- (void)OnSayHelloDataChange;
- (void)setSearchBarActive:(_Bool)arg1;
- (void)SearchBarBecomeUnActive;
- (_Bool)shouldShowTabbar;
- (void)SearchBarBecomeActive;
- (void)doGlobalSearchPrepareWork;
- (void)cancelSearch;
- (void)onGetOpenImResourceDone:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)internalHandleSelectdBrandServiceGroup:(long long)arg1;
- (void)handleSelectedBrandServiceGroup:(long long)arg1;
- (void)internalHandleSelectdBrandGroup:(long long)arg1;
- (void)handleSelectdBrandGroup:(long long)arg1;
- (void)handleSelectOpenIM:(unsigned long long)arg1;
- (void)handleSelectEnterpriseBrand:(unsigned long long)arg1;
- (void)handleSelectdHelloGroup:(unsigned long long)arg1;
- (void)handleSelectdContactTag;
- (void)handleSelectdContactSocialBlack;
- (void)handleSelectdChatRoom;
- (void)handleSelectdHelloGroup;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeOpenIMEntranceCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeHelloGroupCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeEnterpriseBrandCell:(id)arg1 row:(long long)arg2;
- (void)makeContactTagCell:(id)arg1;
- (void)makeChatRoomCell:(id)arg1;
- (void)makeContactSocialBlackCell:(id)arg1;
- (void)makeHelloGroupCell:(id)arg1;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeGroupCell:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void)updateEnterpriseBrandItemCell:(id)arg1 contact:(id)arg2;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (long long)numberOfCellForBrandGroup;
- (long long)numberOfCellForOpenIM;
- (long long)numberOfCellForEnterpriseBrandGroup;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)getSectionType:(long long)arg1;
- (long long)ConvertToNormalContactSection:(long long)arg1;
- (_Bool)HasServiceBrandGroup;
- (_Bool)HasBrandGroup;
- (_Bool)HasEnterpriseBrandGroup;
- (_Bool)HasOpenIMEntrance;
- (_Bool)HasHelloGroup;
- (void)updateOpenIMAcctTypeWording;
- (double)getMainTableHeight;
- (unsigned int)getHelloCellCount;
- (void)initSearchBar;
- (void)initTitleArea;
- (void)initBarItem;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeContactsTip;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;
- (void)initTableView;
- (void)initCountLabel:(id)arg1;
- (void)updateCount;
- (void)initData;
- (void)onAddContact;
- (void)onShowAddContact:(_Bool)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)openContactInfoView:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

