//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, MMTableView, NSDictionary, NSMutableDictionary, NSNumber, NSString, WCDataSearcher;
@protocol GroupSelectContactsViewControllerDelegate;

@interface GroupSelectContactsViewController
{
    id <GroupSelectContactsViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    ContactsDataLogic *m_contactsDataLogic;
    _Bool m_bShowSearchBar;
    unsigned int m_uiDataScene;
    NSMutableDictionary *m_dicMultiSelect;
    NSDictionary *m_dicExistContact;
    WCDataSearcher *_searcher;
    double m_CurrentScreenWidth;
    _Bool _isInPageSheetMode;
    NSString *_m_viewControllerTitle;
    NSString *_m_rightBarButtonTitle;
    NSNumber *_m_leftBarButtonStyle;
}

- (void).cxx_destruct;
@property(nonatomic) NSNumber *m_leftBarButtonStyle; // @synthesize m_leftBarButtonStyle=_m_leftBarButtonStyle;
@property(retain, nonatomic) NSString *m_rightBarButtonTitle; // @synthesize m_rightBarButtonTitle=_m_rightBarButtonTitle;
@property(nonatomic) _Bool isInPageSheetMode; // @synthesize isInPageSheetMode=_isInPageSheetMode;
@property(retain, nonatomic) NSString *m_viewControllerTitle; // @synthesize m_viewControllerTitle=_m_viewControllerTitle;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) unsigned int m_uiDataScene; // @synthesize m_uiDataScene;
@property(nonatomic) _Bool m_bShowSearchBar; // @synthesize m_bShowSearchBar;
@property(nonatomic) __weak id <GroupSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)getCellImage:(id)arg1;
- (void)selectContact:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)isSeachActive;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)updateRightBarBtn;
- (id)createInitRightBarItem;
- (id)createInitLeftBarItem;
- (void)initTitleArea;
- (void)actionDone;
- (void)onDone;
- (void)initData;
- (void)onCancelBack:(id)arg1;
- (id)init;
- (void)onDoneInPageSheetMode;
- (void)onCancelBackInPageSheetMode:(id)arg1;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

