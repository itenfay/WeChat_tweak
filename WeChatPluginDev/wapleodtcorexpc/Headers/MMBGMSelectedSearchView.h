//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMCategoryView, MMBGMPanelPublishContext, MMBGMSearchViewModel, MMBGMSelectedConfig, MMUIButton, NSString, UITableView, UITableViewDiffableDataSource, WCSearchBar, WCTimeLineFooterView;
@protocol MMBGMSelectedSearchViewDelegate;

@interface MMBGMSelectedSearchView
{
    id <MMBGMSelectedSearchViewDelegate> _delegate;
    long long _currentIndex;
    MMBGMPanelPublishContext *_publishContext;
    WCSearchBar *_searchBar;
    MMUIButton *_cancelButton;
    MMBGMCategoryView *_categoryView;
    UITableView *_tableView;
    UITableViewDiffableDataSource *_diffDataSource;
    WCTimeLineFooterView *_footerView;
    MMBGMSearchViewModel *_viewModel;
    MMBGMSelectedConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMBGMSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableViewDiffableDataSource *diffDataSource; // @synthesize diffDataSource=_diffDataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMBGMCategoryView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <MMBGMSelectedSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bgmCategoryView:(id)arg1 didSelectedMusicCategory:(id)arg2;
- (void)bgmCategoryViewCollectionViewWillBeginDragging;
- (void)bgmCategoryViewCollectionViewDidScroll;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)arg1;
- (void)_startSearchMusicWithKey:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)onBgmSearchViewModel:(id)arg1 didSearchWithKey:(id)arg2;
- (void)onBgmSearchViewModelDataChange:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)reportSearchBarClickEvent;
- (void)reportSearchEvent;
- (void)onTextFieldChanged:(id)arg1;
- (void)onClickCancelSearch;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)_canShowMusicCategoryPanel;
- (_Bool)shouldHihgtlightQuery;
- (_Bool)isLyricsCellType;
- (void)applyDiffSnapshot;
- (void)setupView;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (void)selectFirstMusicIfNeeded;
- (void)autoStopSelectedCellPlayingState;
- (void)autoSetSelectedCellPlayingState;
- (void)unSelectedAllItem;
- (void)setKeyBoardShow:(_Bool)arg1;
- (void)setupData;
- (void)triggerSubViewExp;
- (void)reset;
- (void)willDismiss;
- (void)willShow;
- (id)genReportDict;
- (void)setupDataReport;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

