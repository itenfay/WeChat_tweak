//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUISearchBar, NSString, UILabel, UITableView, WCFinderProfilePOISearchViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderProfilePOISearchViewController
{
    MMUIButton *_arrowButton;
    UILabel *_titleLabel;
    MMUISearchBar *_searchBar;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    NSString *_currentText;
    WCFinderProfilePOISearchViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfilePOISearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *currentText; // @synthesize currentText=_currentText;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
- (void)updateSearchBarAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onFetchResultError;
- (void)onFetchResultNoMore;
- (void)onFetchResultChanged;
- (void)onPOISearchResultError;
- (void)onPOISearchResultChanged;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)didClickClose;
- (void)updateSearchBar;
- (void)initViews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1 viewScene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

