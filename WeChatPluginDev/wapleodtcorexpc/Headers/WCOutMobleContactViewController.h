//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UITableView, WCSearcher;

@interface WCOutMobleContactViewController
{
    _Bool _isSearching;
    NSArray *_fliterContacts;
    WCSearcher *_searcher;
    NSString *_searchText;
    NSMutableArray *_sectionKeyArray;
    NSMutableDictionary *_allContactsDic;
    UITableView *_tableview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) NSMutableDictionary *allContactsDic; // @synthesize allContactsDic=_allContactsDic;
@property(retain, nonatomic) NSMutableArray *sectionKeyArray; // @synthesize sectionKeyArray=_sectionKeyArray;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) NSArray *fliterContacts; // @synthesize fliterContacts=_fliterContacts;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(_Bool)arg2;
- (void)wcsWillPresentSearch:(id)arg1;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)search:(id)arg1;
- (id)allContacts;
- (void)updateWCOutContactsInfo;
- (void)updateWCOutContacts:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)contactCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 filtercontactCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configSearchDisplayController;
- (void)configData;
- (void)configTableView;
- (void)configureBackBarButtomItem;
- (void)configView;
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

