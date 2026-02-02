//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMusicSettingSearchTableViewModel, MMFinderLiveMusicSettingSearchViewModel, MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUILabel, MMUISearchBar, NSArray, NSString, OrderedDictionary, UILabel, UIScrollView, UIView, WCFinderTabPageHeaderView, WCTimeLineFooterView;

@interface MMFinderLiveMusicSettingSearchPanel
{
    MMFinderLiveTaskId *_taskId;
    NSArray *_tingLists;
    UIView *_contentView;
    MMUISearchBar *_searchBar;
    UIView *_selectFromTingView;
    WCFinderTabPageHeaderView *_tabPageView;
    UIScrollView *_tabsScrollView;
    OrderedDictionary *_tabTableViewsDic;
    OrderedDictionary *_tingTableModelsDic;
    MMTableView *_searchTableView;
    WCTimeLineFooterView *_footerView;
    UILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUILabel *_emptyTipsLabel;
    MMFinderLiveMusicSettingSearchViewModel *_searchViewModel;
    MMFinderLiveMusicSettingSearchTableViewModel *_searchTableViewModel;
    NSString *_curSearchText;
}

+ (id)createSearchBar;
+ (id)showWithTaskId:(id)arg1 frame:(struct CGRect)arg2 musicLists:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *curSearchText; // @synthesize curSearchText=_curSearchText;
@property(retain, nonatomic) MMFinderLiveMusicSettingSearchTableViewModel *searchTableViewModel; // @synthesize searchTableViewModel=_searchTableViewModel;
@property(retain, nonatomic) MMFinderLiveMusicSettingSearchViewModel *searchViewModel; // @synthesize searchViewModel=_searchViewModel;
@property(retain, nonatomic) MMUILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) OrderedDictionary *tingTableModelsDic; // @synthesize tingTableModelsDic=_tingTableModelsDic;
@property(retain, nonatomic) OrderedDictionary *tabTableViewsDic; // @synthesize tabTableViewsDic=_tabTableViewsDic;
@property(retain, nonatomic) UIScrollView *tabsScrollView; // @synthesize tabsScrollView=_tabsScrollView;
@property(retain, nonatomic) WCFinderTabPageHeaderView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) UIView *selectFromTingView; // @synthesize selectFromTingView=_selectFromTingView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *tingLists; // @synthesize tingLists=_tingLists;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)adjustUIOnSelectIndexChange;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onMMFinderLiveMusicSettingSearchTableScroll;
- (void)handleAfterGetSearchResultWithContinueFlag:(unsigned int)arg1;
- (void)onGetMusicDataContinueSearchResult:(int)arg1 resultArray:(id)arg2 continueFlag:(unsigned int)arg3;
- (void)onGetMusicDataSearchResult:(int)arg1 resultArray:(id)arg2 continueFlag:(unsigned int)arg3;
- (void)musicDataSearchBarWillSearch:(id)arg1 searchText:(id)arg2;
- (void)musicDataSearchBarEndSearch:(id)arg1;
- (void)musicDataSearchBarTextDidBeginEditing:(id)arg1;
- (void)createEmptyTipsLabel;
- (id)createSearchTableFooterView;
- (id)createSearchViewModel;
- (id)createSearchTableViewModel;
- (void)initSearchTableViewAndFooter;
- (void)createTableViewWithTingItem:(id)arg1;
- (void)initTingListScrollView;
- (void)initTabsBar;
- (void)initSearchBar;
- (void)initSelectFromTingView;
- (double)contentHeight;
- (double)contentWidth;
- (void)stopLoading;
- (void)startLoading;
- (void)hideTipsLabel;
- (void)showTipsLabelWithText:(id)arg1;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)hideFooterView;
- (void)hideEmptyTips;
- (void)layoutActivityIndicatorView;
- (void)layoutTipLabel;
- (void)layoutTableView;
- (void)layoutSearchBar;
- (void)layoutContentView;
- (void)layoutEmptyTipsLabel;
- (void)layoutTingListViews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)initSubviews;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 tingLists:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

