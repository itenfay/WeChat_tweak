//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactsItemView, MMTableView, MMUIButton, MMUISearchBar, MultiSelectContactsInChatRoomReport, NSMutableArray, NSMutableDictionary, NSString, NewContactsSearchPanelView, OrderedDictionary, SearchHelpDataItem, UIView, WCSearchBar, _TtC6WeChat13DNDReportItem;
@protocol RoomContactSelectDelegate;

@interface RoomContactSelectForHalfScreenViewController
{
    id <RoomContactSelectDelegate> m_delegate;
    SearchHelpDataItem *m_searchHelpDataItem;
    MMUISearchBar *m_searchBar;
    UIView *m_lineView;
    UIView *m_searchBarContainer;
    NSMutableArray *m_arrRoomMembers;
    NSMutableArray *m_arrKeys;
    NSMutableDictionary *m_dicRoomMembers;
    NSMutableArray *m_arrFilterdFriends;
    NSMutableDictionary *m_dicMatchTips;
    _Bool m_hasSearch;
    int m_actionType;
    NewContactsSearchPanelView *m_panelView;
    _Bool m_bMultiSelect;
    _Bool m_updatingView;
    _Bool m_needToFixPanelViewLayout;
    _Bool m_searchPanelHidden;
    MMUIButton *m_rightMultiSelectButton;
    MMUIButton *m_leftCancelButton;
    MMUIButton *m_rightMultiSelectConfirmButton;
    ContactsItemView *m_chatRoomAllMemberView;
    UIView *m_searchResultHeaderView;
    _Bool m_hadFirstLoadView;
    MultiSelectContactsInChatRoomReport *m_multiSelectContactsInChatRoomReport;
    NSString *nsCurrentSearchText;
    NSMutableArray *m_hadSeleteContactBeforSearch;
    _Bool _m_canSupportMultiSelect;
    _Bool _showTextState;
    _Bool _isInSearchState;
    unsigned int m_showSourceType;
    int _windowLevel;
    OrderedDictionary *m_dicMultiSelect;
    MMTableView *m_tableView;
    CContact *m_referMsgContact;
    CContact *_roomContact;
    _TtC6WeChat13DNDReportItem *_dndReportItem;
    WCSearchBar *_searchBarNew;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSearchBar *searchBarNew; // @synthesize searchBarNew=_searchBarNew;
@property(retain, nonatomic) _TtC6WeChat13DNDReportItem *dndReportItem; // @synthesize dndReportItem=_dndReportItem;
@property(nonatomic) _Bool isInSearchState; // @synthesize isInSearchState=_isInSearchState;
@property(nonatomic) int windowLevel; // @synthesize windowLevel=_windowLevel;
@property(nonatomic) _Bool showTextState; // @synthesize showTextState=_showTextState;
@property(nonatomic) _Bool m_canSupportMultiSelect; // @synthesize m_canSupportMultiSelect=_m_canSupportMultiSelect;
@property(retain, nonatomic) CContact *roomContact; // @synthesize roomContact=_roomContact;
@property(nonatomic) unsigned int m_showSourceType; // @synthesize m_showSourceType;
@property(retain, nonatomic) CContact *m_referMsgContact; // @synthesize m_referMsgContact;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) OrderedDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) __weak id <RoomContactSelectDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)getRealSearchText;
- (id)searchFieldBGColor;
- (void)updateSearchBarColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)didSelectContact:(id)arg1;
- (void)updateLineViewForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isShouldDisableSelectContactCellWithContact:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reportAction:(int)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)resetNavRightButton;
- (void)onPanelViewTableViewHidden:(_Bool)arg1;
- (void)searchTextFieldWillClearText;
- (_Bool)searchTextFieldShouldBeginEditing;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)recordClkClearAllButtonCnt;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordContactSelectionWithContact:(id)arg1;
- (void)scrollViewToTopInNewSearchBar;
- (void)doMultiSelectContactsInChatRoomReportWithExitScene:(unsigned int)arg1;
- (_Bool)isMultiSelectInSearchSectionHeaderView;
- (void)onSearchSectionHeaderViewMultiSelectBtnChange;
- (id)getSearchSectionHeaderMultiSelectContactButton;
- (id)getSearchResultHeaderView;
- (void)updateMultiSelectPanelViewResultView;
- (void)handleViewDidLayoutSubviewsInNewSearchBar;
- (void)alignPanelViewToNewSearchBarView;
- (_Bool)isCanMultiSelectInDidSelectRow;
- (_Bool)checkUseNewSearchBar;
- (double)getMultiSelectTableViewTop;
- (void)makeFocusFirstResponder;
- (void)clearAllFiltered;
- (void)updateMultiSelect:(id)arg1;
- (double)getPanelViewTop;
- (double)getPanelViewWidth;
- (void)updatePanelView:(id)arg1;
- (void)onClickMultiSelectButton;
- (void)onConfirmed;
- (void)onMultiCancel;
- (void)initRightMultiSelectButton;
- (void)initRightMultiSelectConfirmButton;
- (void)initLeftCancelButton;
- (void)updatePanelBtn;
- (void)makeCell:(id)arg1;
- (void)updateMultiSelectView;
- (void)prepareUpdateMultiSelectView;
- (void)animateUpdateView;
- (void)updateView;
- (void)finishViewAnimation;
- (void)finishChatRoomAllMemberAnimation;
- (void)prepareChatRoomAllMemberAnimation;
- (void)finishHeadPanelViewAnimation;
- (void)prepareHeadPanelViewAnimation;
- (void)prepareViewAnimation;
- (void)alignPanelViewToSearchBarView;
- (void)initPanelView;
- (struct CGRect)getChatRoomAllMemberCellRect;
- (_Bool)isSupportAtAllSection:(unsigned long long)arg1;
- (_Bool)isReferMsgContactSection:(unsigned long long)arg1;
- (double)getSearchPanelCellSize;
- (double)getSearchPanelInputViewHeight;
- (double)getSearchPanelHeadImagesize;
- (double)getSearchPanelViewHeight;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (double)pageSheetContentHeight;
- (_Bool)supportAtAll;
- (_Bool)hasNoSearchResult;
- (id)getCachedSearchHelpDataItem;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)initPageSheet;
- (void)initTableView;
- (void)initSearchBar;
- (void)initChatRoomAllMemberView;
- (void)addContact:(id)arg1;
- (void)initData;
- (id)getContactWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

