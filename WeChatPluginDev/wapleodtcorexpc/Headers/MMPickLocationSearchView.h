//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLocationSearchBar, MMPickLocationContentView, MMPickLocationTopView, MMUIViewController, NSString, WCTimeLineFooterView;
@protocol MMPickLocationActionDelegate;

@interface MMPickLocationSearchView
{
    _Bool _isFoldAnimating;
    _Bool _expandViewForSearchBecomeActive;
    _Bool _isExpanded;
    _Bool _isSearchTableAutoScrolling;
    _Bool _showAccuracyAuthorizationTip;
    id <MMPickLocationActionDelegate> _actionDelegate;
    MMLocationSearchBar *_searchBarLogic;
    long long _currSearchState;
    NSString *_searchKeyword;
    MMPickLocationTopView *_topView;
    MMPickLocationContentView *_contentView;
    MMUIViewController *_contentController;
    double _lastContentHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double lastContentHeight; // @synthesize lastContentHeight=_lastContentHeight;
@property(nonatomic) __weak MMUIViewController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) MMPickLocationContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMPickLocationTopView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool showAccuracyAuthorizationTip; // @synthesize showAccuracyAuthorizationTip=_showAccuracyAuthorizationTip;
@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(readonly, nonatomic) long long currSearchState; // @synthesize currSearchState=_currSearchState;
@property(readonly, nonatomic) _Bool isSearchTableAutoScrolling; // @synthesize isSearchTableAutoScrolling=_isSearchTableAutoScrolling;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) MMLocationSearchBar *searchBarLogic; // @synthesize searchBarLogic=_searchBarLogic;
@property(nonatomic) __weak id <MMPickLocationActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool expandViewForSearchBecomeActive; // @synthesize expandViewForSearchBecomeActive=_expandViewForSearchBecomeActive;
@property(nonatomic) _Bool isFoldAnimating; // @synthesize isFoldAnimating=_isFoldAnimating;
- (id)poiCorrectionKeyWord;
- (void)updateAccuracyAuthorizationTipHidden;
- (double)expandTableViewVisbleHeight;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
@property(readonly, nonatomic) _Bool isSearching;
- (id)searchResultItemAt:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectAt:(id)arg2;
- (void)didSearchViewTableEndDecelerating:(id)arg1;
- (void)didSearchViewTableEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didSearchViewTableEndScrollingAnimation:(id)arg1;
- (void)didSearchViewTableBeginDragging:(id)arg1;
- (void)didSearchViewTableScroll:(id)arg1;
- (void)searchTableViewCellWillDisplay:(id)arg1 index:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 AtIndexPath:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)mmSearchBarSearchingStateChanged;
- (void)mmsearchBarResignActive;
- (void)mmsearchBarWillBeginSearch;
- (void)mmsearchBarBecomeActive;
- (void)mmSearchBarCancelButtonClicked:(id)arg1;
- (void)mmSearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchBarTextDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) WCTimeLineFooterView *nearTableFooterView;
@property(readonly, nonatomic) WCTimeLineFooterView *searchTableFooterView;
- (void)refreshSearchTableViewDataDidFinishLoading;
- (void)refreshNearTableViewDataDidFinishLoading;
- (void)setSearchErrorTipsHidden:(_Bool)arg1;
- (void)updateFooterView:(id)arg1 WithState:(long long)arg2;
- (void)updateSearchFooterView:(long long)arg1;
- (void)updateNearbyFooterView:(long long)arg1;
- (void)reloadSearchResultTableView;
- (_Bool)isSearchCellIndexVisible:(unsigned long long)arg1;
- (void)scrollSearchTableViewToVisibleCompletely:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (_Bool)isNearbyCellIndexVisible:(unsigned long long)arg1;
- (void)scrollNearbyTableViewToVisibleCompletely:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)scrollNearbyTableViewToVisible:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)finishSearch;
- (void)reloadNearbyTableView;
- (void)setTableViewIsScrolling:(_Bool)arg1;
- (void)stopTableViewScrolling;
- (void)updateContentViewFrame;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSearchBarLogic;
- (id)initWithContentController:(id)arg1 Manager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

