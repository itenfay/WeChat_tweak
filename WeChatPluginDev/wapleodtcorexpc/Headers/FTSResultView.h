//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, MMTableView, MMUISearchBar, MMUIViewController, NSMutableArray, NSString, UIImageView, UIView, WCTimeLineFooterView, WSTagSearchLogic;
@protocol FTSResultPage, FTSResultViewDelegate;

@interface FTSResultView
{
    NSString *m_keyword;
    NSString *m_defaultKeyword;
    MMUIViewController *m_controller;
    UIView *m_bottomView;
    UIView *m_searchBarSuperView;
    UIImageView *m_searchBarWrap;
    MMUISearchBar *m_searchBar;
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    NSMutableArray *m_resultAry;
    NSString *m_emptyTipSuffix;
    AttributeLabel *m_emptyTipLabel;
    _Bool m_popForCancel;
    _Bool m_hasMoving;
    double m_moveStartOffset;
    double m_moveCurOffset;
    double m_moveContentOffsetY;
    UIImageView *m_bottomViewShadow;
    id <FTSResultViewDelegate> m_detailViewDelegate;
    unsigned long long m_searchScene;
    WSTagSearchLogic *_tagSearchLogic;
    FTSResultView *_addedResultView;
    NSString *_cachedSearchBarText;
    _Bool _isUseSectionResult;
    double _searchTextFieldNormalWidth;
    double _searchTextFieldOriginY;
    struct CGSize _searchIconDefaultSize;
    UIImageView *_searchIcon;
    _Bool _isCancelled;
    id <FTSResultPage> _searchPage;
    FTSResultView *_previousResultView;
    NSMutableArray *_arrSectionResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrSectionResult; // @synthesize arrSectionResult=_arrSectionResult;
@property(retain, nonatomic) WSTagSearchLogic *tagSearchLogic; // @synthesize tagSearchLogic=_tagSearchLogic;
@property(nonatomic) __weak FTSResultView *previousResultView; // @synthesize previousResultView=_previousResultView;
@property(retain, nonatomic) FTSResultView *addedResultView; // @synthesize addedResultView=_addedResultView;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) __weak id <FTSResultPage> searchPage; // @synthesize searchPage=_searchPage;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=m_searchScene;
@property(nonatomic) __weak id <FTSResultViewDelegate> detailViewDelegate; // @synthesize detailViewDelegate=m_detailViewDelegate;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=m_bottomView;
@property(retain, nonatomic) NSString *emptyTipSuffix; // @synthesize emptyTipSuffix=m_emptyTipSuffix;
@property(retain, nonatomic) NSMutableArray *resultAry; // @synthesize resultAry=m_resultAry;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=m_keyword;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=m_controller;
@property(retain, nonatomic) UIView *searchBarSuperView; // @synthesize searchBarSuperView=m_searchBarSuperView;
- (void)fillCommonClickReportStat:(id)arg1 matchTip:(id)arg2;
- (void)onRemoveAddedResultView;
- (void)onFTSDetailViewReturn:(_Bool)arg1;
- (id)ftsResultGetWCSearchContainerView;
- (void)setCachedSearchBarText;
- (void)cacheSearchBarText;
- (id)getTagSearchText;
- (id)getTagDisplayText;
- (_Bool)searchBarHasTagInfo;
- (long long)getRowCountForSection:(long long)arg1;
- (long long)getSectionCount;
- (id)getSeperatedFooterView;
- (id)getNoResultView:(double)arg1;
- (_Bool)needNoResultTableFooterView;
- (_Bool)needSeperatedFooterInSection:(long long)arg1;
- (_Bool)needNoResultFooterInSection:(long long)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)reloadData;
- (_Bool)isSearchRunning;
- (_Bool)hasMoreData;
- (_Bool)isSearchAll;
@property(readonly, nonatomic) _Bool isUseSectionResult;
- (_Bool)isSubResultView;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)handleTextChanged:(id)arg1 immediately:(_Bool)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)updateSearchBarPosition;
- (void)moveRight;
- (void)cancelMoveSearchBar;
- (void)setNoResultFooterView;
- (void)setEmptyFooterView;
- (void)setNormalFooterView;
- (void)setLoadingFooterView;
- (_Bool)hasSearchDone:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (void)didAddResultView:(id)arg1;
- (void)resetSearchIconFrame;
- (id)getSearchIcon;
- (void)enableButton:(id)arg1;
- (_Bool)hasAddedResultView;
- (void)recursivePopPreviousResultView;
- (void)cancelSearch;
- (void)remove;
- (void)popForSubResultView:(_Bool)arg1;
- (id)getTopAddedResultView;
- (id)getFirstResultView;
- (void)pop:(_Bool)arg1;
- (void)pop;
- (void)showWithStaticSearchBar;
- (void)setMainSearchGestureEnabled:(_Bool)arg1;
- (void)becomActiveAccessibilityElements;
- (void)show;
- (id)getRealSearchText;
- (id)getSearchText;
- (void)handleRotateEvent;
- (void)clearResource;
- (void)setDefaultKeyWord:(id)arg1;
- (void)loadTableView;
- (void)loadView;
- (void)onBackButtonClick;
- (id)searchBarText;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSearchPage:(id)arg1;
- (id)initWithSearchBar:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithViewController:(id)arg1;
- (id)init;
- (double)getSearchTextFieldWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

