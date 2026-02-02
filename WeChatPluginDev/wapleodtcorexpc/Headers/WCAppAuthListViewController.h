//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, MMUILabel, NSString, UIImageView, UIView, WCAppAuthLogicController, WCDataSearcher, WCTimeLineFooterView;

@interface WCAppAuthListViewController
{
    _Bool _bSearchWording;
    _Bool _isAppear;
    _Bool _isLoading;
    WCAppAuthLogicController *_logicController;
    MMTableView *_tableView;
    UIView *_tableHeaderView;
    WCTimeLineFooterView *_tableFooterView;
    MMUILabel *_emptyTipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UIImageView *_refreshIconView;
    MMUILabel *_fetchFailTipsLabel;
    UIView *_fetchFailContainerView;
    WCDataSearcher *_searcher;
    MMUILabel *_searchErrorTips;
    WCTimeLineFooterView *_searchTableFooterView;
    MMUIActivityIndicatorView *_searchActivityIndicatorView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) _Bool bSearchWording; // @synthesize bSearchWording=_bSearchWording;
@property(retain, nonatomic) MMUIActivityIndicatorView *searchActivityIndicatorView; // @synthesize searchActivityIndicatorView=_searchActivityIndicatorView;
@property(retain, nonatomic) WCTimeLineFooterView *searchTableFooterView; // @synthesize searchTableFooterView=_searchTableFooterView;
@property(retain, nonatomic) MMUILabel *searchErrorTips; // @synthesize searchErrorTips=_searchErrorTips;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) UIView *fetchFailContainerView; // @synthesize fetchFailContainerView=_fetchFailContainerView;
@property(retain, nonatomic) MMUILabel *fetchFailTipsLabel; // @synthesize fetchFailTipsLabel=_fetchFailTipsLabel;
@property(retain, nonatomic) UIImageView *refreshIconView; // @synthesize refreshIconView=_refreshIconView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) WCTimeLineFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCAppAuthLogicController *logicController; // @synthesize logicController=_logicController;
- (void)onSwipeMenuItemApppear:(id)arg1;
- (void)logicDidFinishSearch;
- (void)initSearchFooterView;
- (void)logicDidSearchMoreApps:(id)arg1;
- (void)logicDeletionAppFail:(id)arg1;
- (void)logicDidFinishDeletionApp:(id)arg1 index:(unsigned int)arg2;
- (void)logicWillStartDeletionApp:(id)arg1;
- (void)logicDidFinishLoadApps;
- (void)logicDidLoadMoreApps:(id)arg1;
- (void)logicDidFailAtCgi:(unsigned int)arg1 errcode:(int)arg2 errmsg:(id)arg3;
- (void)showAppInfoDetail:(id)arg1 fromScene:(unsigned int)arg2 fromIndex:(unsigned int)arg3;
- (void)resetSearchBarResultTableView;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcSearchViewTableDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (void)viewDidLayoutSubviews;
- (void)resetUIComponentBeforeFetch;
- (void)layoutFetchFailTipsView;
- (void)initFetchFailTipsView;
- (void)setupFetchFailTipsView;
- (void)updateSubviews:(_Bool)arg1;
- (_Bool)isEmptyPage;
- (void)layoutActivityIndicatorView;
- (void)initActivityIndicatorView;
- (void)layoutEmptyTipsLabel;
- (void)initEmptyTipsLabel;
- (void)setupEmptyTipsLabel;
- (double)tipsCenterY;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)startSearchActivityIndicatorViewLoading;
- (void)layoutSearchActivityIndicatorView;
- (void)initSearchActivityIndicatorView;
- (void)setSearchErrorTipsHidden:(_Bool)arg1;
- (void)layoutSearchErrorTips;
- (void)initSearchErrorTips;
- (void)initSearchBar;
- (void)onSearchClicked;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldInteractivePop;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)fetchList;
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

