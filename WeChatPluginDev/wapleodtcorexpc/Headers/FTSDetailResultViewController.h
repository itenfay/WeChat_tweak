//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSBaseSectionController, FTSVoiceSearchBarController, MMTListAdapter, MMTableView, NSArray, NSString;
@protocol FTSDetailResultViewControllerDelegate;

@interface FTSDetailResultViewController
{
    FTSVoiceSearchBarController *_ftsPresenter;
    id <FTSDetailResultViewControllerDelegate> _delegate;
    MMTListAdapter *_listAdapter;
    NSArray *_dataObject;
    unsigned long long _sectionType;
    FTSBaseSectionController *_searchController;
    MMTableView *_tableView;
    NSString *_latestSearchQuery;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *latestSearchQuery; // @synthesize latestSearchQuery=_latestSearchQuery;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FTSBaseSectionController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSArray *dataObject; // @synthesize dataObject=_dataObject;
@property(retain, nonatomic) MMTListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) __weak id <FTSDetailResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FTSVoiceSearchBarController *ftsPresenter; // @synthesize ftsPresenter=_ftsPresenter;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)getNoResultView;
- (void)setEmptyFooterView;
- (void)setNoResultFooterView;
- (void)setNormalFooterView;
- (void)setLoadingFooterView;
- (id)searchTextField;
- (id)searchBarText;
- (void)reloadListWithDataUpdate:(id)arg1;
- (void)reloadList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onListWillReloadData:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)genSectionControllerFor:(unsigned long long)arg1;
- (void)__search:(id)arg1 withSlowMode:(_Bool)arg2;
- (void)cancelSearch;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)setDefaultQuery:(id)arg1;
- (void)onNavigationCancelItemClick;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSectionType:(unsigned long long)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

