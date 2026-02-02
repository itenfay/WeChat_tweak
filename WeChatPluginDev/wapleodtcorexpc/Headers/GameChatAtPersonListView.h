//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameChatAtPersonListViewModel, MMTableView, MMTimer, MMUISearchBar, NSArray, NSString, UIView;
@protocol GameChatAtPersonListViewDelegate;

@interface GameChatAtPersonListView
{
    _Bool _isSearching;
    GameChatAtPersonListViewModel *_viewModel;
    id <GameChatAtPersonListViewDelegate> _delegate;
    NSString *_chatroomName;
    UIView *_contentView;
    MMTableView *_tableView;
    MMUISearchBar *_searchBar;
    UIView *_searchBarContainer;
    NSArray *_searchResultArray;
    MMTimer *_atAllCheckTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *atAllCheckTimer; // @synthesize atAllCheckTimer=_atAllCheckTimer;
@property(copy, nonatomic) NSArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *chatroomName; // @synthesize chatroomName=_chatroomName;
@property(nonatomic) __weak id <GameChatAtPersonListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GameChatAtPersonListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)reloadWhenSearchChange;
- (void)reloadWhenCancelSearch;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)atModelAtIndexPath:(id)arg1;
- (id)createContactsItemViewInCell:(id)arg1;
- (void)onAtAllTimerCheck;
- (void)makeAtAllCell:(id)arg1 byModel:(id)arg2;
- (void)makeMoreMemberCell:(id)arg1;
- (void)makeGroupCell:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void)makeGroupCell:(id)arg1 byModel:(id)arg2;
- (void)reportCell:(id)arg1 withAction:(unsigned long long)arg2;
- (void)reportDataWithPositionId:(unsigned long long)arg1 op:(unsigned long long)arg2 userName:(id)arg3;
- (void)showWithAnimation;
- (unsigned long long)getSectionType:(long long)arg1;
- (void)didClickAtLeftNavButton;
- (void)initSearchBar;
- (void)initTableView;
- (void)reloadListView;
- (void)dealloc;
- (void)setupUI;
- (id)makeBackButton;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

