//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagCreateTagHalfScreenViewController, ContactTagListBottomBar, ContactTagSearchPanel, MMTableView, MMTableViewMultipleReorder, NSArray, NSMutableArray, NSMutableSet, NSString, UIBarButtonItem, UIButton, UILabel, UIView, WCDataSearcher;

@interface ContactTagListViewController
{
    ContactTagCreateTagHalfScreenViewController *m_tagHalfScreenviewController;
    _Bool _needReload;
    _Bool _isEditing;
    _Bool _isMultipleReordering;
    unsigned int _m_uiFromScene;
    UILabel *_noContactTagTipLabel;
    ContactTagListBottomBar *_bottomBar;
    MMTableView *_tableView;
    NSMutableArray *_arrContactTagData;
    NSArray *_previousTagData;
    UIBarButtonItem *_backButtonItem;
    NSMutableSet *_selectedTags;
    NSMutableArray *_selectedIndexPaths;
    ContactTagSearchPanel *_searchPanel;
    UIView *_searchPanelView;
    NSArray *_tagsToDelete;
    WCDataSearcher *_searcher;
    MMTableViewMultipleReorder *_tableViewMultipleReorder;
    NSArray *_recentMoveToIndexPaths;
    UIButton *_addButton;
    double _cellHeightWithDetailLine;
    double _cellHeightWithOutDetailLine;
    NSArray *_noTagMembers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *noTagMembers; // @synthesize noTagMembers=_noTagMembers;
@property(nonatomic) double cellHeightWithOutDetailLine; // @synthesize cellHeightWithOutDetailLine=_cellHeightWithOutDetailLine;
@property(nonatomic) double cellHeightWithDetailLine; // @synthesize cellHeightWithDetailLine=_cellHeightWithDetailLine;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSArray *recentMoveToIndexPaths; // @synthesize recentMoveToIndexPaths=_recentMoveToIndexPaths;
@property(nonatomic) _Bool isMultipleReordering; // @synthesize isMultipleReordering=_isMultipleReordering;
@property(retain, nonatomic) MMTableViewMultipleReorder *tableViewMultipleReorder; // @synthesize tableViewMultipleReorder=_tableViewMultipleReorder;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) NSArray *tagsToDelete; // @synthesize tagsToDelete=_tagsToDelete;
@property(retain, nonatomic) UIView *searchPanelView; // @synthesize searchPanelView=_searchPanelView;
@property(retain, nonatomic) ContactTagSearchPanel *searchPanel; // @synthesize searchPanel=_searchPanel;
@property(retain, nonatomic) NSMutableArray *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(retain, nonatomic) NSMutableSet *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) NSArray *previousTagData; // @synthesize previousTagData=_previousTagData;
@property(retain, nonatomic) NSMutableArray *arrContactTagData; // @synthesize arrContactTagData=_arrContactTagData;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ContactTagListBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UILabel *noContactTagTipLabel; // @synthesize noContactTagTipLabel=_noContactTagTipLabel;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
- (void)registerYReportSdk;
- (id)tableView:(id)arg1 multipleReorderAccessibilityLabelForRowAtIndexPath:(id)arg2;
- (_Bool)accessibilityPerformEscape;
- (id)attributedTextForTagName:(id)arg1 searchText:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)doFlashAnimationForCells:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)tableViewEstimatedRowHeightForMultipleReorder:(id)arg1;
- (void)quitMultipleReorderMode;
- (void)tableViewDidCancelMultipleReorder:(id)arg1;
- (void)tableViewDidEndMultipleReorder:(id)arg1;
- (void)tableViewDidBeginMultipleReorder:(id)arg1;
- (void)tableViewWillBeginMultipleReorder:(id)arg1;
- (void)tableViewWillEndMultipleReorder:(id)arg1;
- (void)tableView:(id)arg1 moveRowsAtIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (id)tableView:(id)arg1 cellSnapshotImageForIndexPath:(id)arg2;
- (void)cancelMultipleReorder;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onContactTagListBottomBarDelete;
- (void)onContactTagListBottomBarMoveTo;
- (void)onContactTagListBottomBarEditTags;
- (void)onContactTagListBottomBarCreateTag;
- (void)contactTagSearchPanelDidDismissSearch:(id)arg1;
- (void)contactTagSearchPanelDidSelectTags:(id)arg1;
- (void)contactTagSearchPanelDidSelectTag:(id)arg1;
- (id)getCurrentSelectedTagsName;
- (id)getAllTags;
- (long long)getSelectTagLimit;
- (long long)getCreatTagLimit;
- (_Bool)switchSelectionOfTag:(id)arg1 indexPath:(id)arg2 select:(_Bool)arg3;
- (_Bool)deselectTag:(id)arg1 indexPath:(id)arg2;
- (_Bool)selectTag:(id)arg1 indexPath:(id)arg2;
- (_Bool)switchSelectionOfTags:(id)arg1 select:(_Bool)arg2;
- (_Bool)deselectTags:(id)arg1;
- (_Bool)selectTags:(id)arg1;
- (_Bool)deselectTag:(id)arg1;
- (_Bool)selectTag:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)updateSelectedCount;
- (void)quitEditMode;
- (void)saveEditAndQuit;
- (void)endEdit;
- (_Bool)hasReordered;
- (void)startEdit;
- (void)onTagDetailDismissedWithAddContactLabel;
- (void)reloadContactTagListView;
- (void)onUpdateLabelOrder:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeContactItemCellContent:(id)arg1 withTagData:(id)arg2 searchText:(id)arg3;
- (void)makeContactItemCellContent:(id)arg1 withTagData:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getContactTagNoTagMembers:(_Bool)arg1;
- (_Bool)checkNoTagSectionWithSection:(long long)arg1;
- (_Bool)shouldInteractivePop;
- (void)updateHadSelectTagInEdit;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(_Bool)arg2 isRename:(_Bool)arg3;
- (void)makeNewContactTag:(id)arg1;
- (void)onShowNoTagMembers;
- (void)onEditContactLabel:(id)arg1;
- (void)UpdateViewForNoContactTag;
- (void)updateNoTagMembers;
- (id)getNoTagMembers;
- (id)getMemberDesc:(id)arg1;
- (void)ResetViews;
- (void)reloadDataAndViewWithIsKeepOrder:(_Bool)arg1;
- (void)reloadDataAndView;
- (_Bool)showNavigationBarSepLine;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initBottomBar;
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

