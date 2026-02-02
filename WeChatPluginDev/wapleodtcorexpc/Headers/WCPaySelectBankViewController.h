//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UISearchController, WCPaySelectBankSearchResultViewController;
@protocol WCPaySelectBankViewControllerDelegate;

@interface WCPaySelectBankViewController
{
    MMTableView *m_tableView;
    id <WCPaySelectBankViewControllerDelegate> _m_delegate;
    UISearchController *_searchController;
    WCPaySelectBankSearchResultViewController *_resultsController;
    NSMutableArray *_m_majorBankList;
    NSMutableDictionary *_m_allBankData;
    NSMutableArray *_m_indexArray;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
    NSMutableArray *_m_allBankCardTypeList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_allBankCardTypeList; // @synthesize m_allBankCardTypeList=_m_allBankCardTypeList;
@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) NSMutableArray *m_indexArray; // @synthesize m_indexArray=_m_indexArray;
@property(retain, nonatomic) NSMutableDictionary *m_allBankData; // @synthesize m_allBankData=_m_allBankData;
@property(retain, nonatomic) NSMutableArray *m_majorBankList; // @synthesize m_majorBankList=_m_majorBankList;
@property(retain, nonatomic) WCPaySelectBankSearchResultViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <WCPaySelectBankViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (id)parseBankNameKey:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutCell:(id)arg1 bankItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnCancel;
- (void)updateNavigationBar;
- (void)updateTableView;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)didSelectBankItem:(id)arg1;
- (void)onWCPaySelectBankSearchResultViewControllerDidSelectBankItem:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSearch;
- (void)updateView;
- (void)OnGetBankListWithError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)reloadSelectBankView:(id)arg1 allBankList:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
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

