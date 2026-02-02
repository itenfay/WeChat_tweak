//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandServiceHeadImageProvider, CContact, ContactsDataLogic, FTSWebSearchLocalPageCell, MMLoadingView, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UILabel, WCDataSearcher;

@interface BrandContactsViewController
{
    MMTableView *_tableView;
    UILabel *m_countLabel;
    BrandServiceHeadImageProvider *_headImageCache;
    ContactsDataLogic *_contactsDataLogic;
    NSMutableArray *_sectionKeyArray;
    NSMutableDictionary *_allContactsDic;
    unsigned long long _contactCount;
    WCDataSearcher *_searcher;
    NSMutableDictionary *_oldSubscribeStatusDict;
    _Bool _isSearching;
    _Bool _willReportSearchBarExposed;
    unsigned int _searchScene;
    MMLoadingView *_loadingView;
    NSString *_pardusSessionId;
    FTSWebSearchLocalPageCell *_weakFTSWebSearchLocalPageCell;
    NSString *_queryText;
    NSString *_lastQueryText;
    NSString *_lastSearchBarExposedText;
    long long _i64LocalSearchId;
    CContact *_preSelectedContact;
    struct CGRect _currentKeyboardRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *preSelectedContact; // @synthesize preSelectedContact=_preSelectedContact;
@property(readonly, nonatomic) long long i64LocalSearchId; // @synthesize i64LocalSearchId=_i64LocalSearchId;
@property(nonatomic) _Bool willReportSearchBarExposed; // @synthesize willReportSearchBarExposed=_willReportSearchBarExposed;
@property(copy, nonatomic) NSString *lastSearchBarExposedText; // @synthesize lastSearchBarExposedText=_lastSearchBarExposedText;
@property(copy, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(nonatomic) struct CGRect currentKeyboardRect; // @synthesize currentKeyboardRect=_currentKeyboardRect;
@property(nonatomic) __weak FTSWebSearchLocalPageCell *weakFTSWebSearchLocalPageCell; // @synthesize weakFTSWebSearchLocalPageCell=_weakFTSWebSearchLocalPageCell;
@property(copy, nonatomic) NSString *pardusSessionId; // @synthesize pardusSessionId=_pardusSessionId;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
- (void)tableViewDidSelectRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (void)tableViewWillDisplayRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (void)registerYReportSdk;
- (void)onPardusSearchResultReturn:(id)arg1 request:(id)arg2;
- (void)onExposeSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onClickSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)cancelFocusWithContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelFoucsAtIndex:(id)arg1;
- (id)contactWithUserName:(id)arg1;
- (id)contactAtIndex:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)hidesBottomBarWhenPushed;
- (_Bool)shouldShowTabbarAfterSearchBarBecomeUnActive;
- (void)tryLogFTSWebSearchLocalPageCellShow;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)report20433WithType:(int)arg1 sugResult:(id)arg2 sugpos:(long long)arg3 isS1SItem:(_Bool)arg4;
- (id)pardusSearchGuideText;
- (id)webSearchSuffix;
- (id)localPageResult;
- (id)pardusSearchId;
- (id)pardusSearchRequestId;
- (void)triggerWebSearch:(id)arg1 withDocId:(id)arg2;
- (void)delayPardusSearchImp:(id)arg1;
- (void)delayPardusSearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)delayFinishSearch;
- (_Bool)hasNoSearchResult;
- (void)wcSearchViewTableDidScroll:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addLineView:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)onNavigationButtonMoreClicked;
- (void)onShowAuthList;
- (void)onShowSearchBrandView:(id)arg1;
- (void)makeCell:(id)arg1 ForSearchContact:(id)arg2;
- (void)makeCell:(id)arg1 section:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)updateCount;
- (void)initCountLabel:(id)arg1;
- (void)initSearchBar;
- (void)viewDidLayoutSubviews;
- (void)initLoadingView;
- (void)initTableView;
- (void)initNavbar;
- (unsigned int)searchbarScene;
- (id)bottomCountString;
- (id)vcTitle;
- (void)initView;
- (void)sort;
- (_Bool)isContactNeedExtraFiltered:(id)arg1;
- (void)initData;
- (void)reloadData;
- (_Bool)isSeachActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;
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

