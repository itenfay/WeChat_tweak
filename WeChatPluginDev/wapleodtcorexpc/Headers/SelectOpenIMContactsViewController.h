//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsSearchController, MMPageSheetAdapter, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, OpenIMContactSelectView, WCSearchBar;
@protocol SelectOpenIMContactsViewControllerDelegate;

@interface SelectOpenIMContactsViewController
{
    OpenIMContactSelectView *m_selectView;
    _Bool _m_bMultiSelect;
    _Bool _isInPageSheetMode;
    NSDictionary *m_dicExistContact;
    NSDictionary *m_dicIgnoreContact;
    NSMutableDictionary *m_dicMultiSelect;
    id <SelectOpenIMContactsViewControllerDelegate> m_delegate;
    MMPageSheetAdapter *_pageSheetAdapter;
    NSString *_rightBarTitle;
    NSNumber *_leftBarButtonStyle;
    WCSearchBar *_searchBar;
    ContactsSearchController *_searchController;
    NSMutableArray *_searchControllerSelectedContacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *searchControllerSelectedContacts; // @synthesize searchControllerSelectedContacts=_searchControllerSelectedContacts;
@property(nonatomic) __weak ContactsSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) NSNumber *leftBarButtonStyle; // @synthesize leftBarButtonStyle=_leftBarButtonStyle;
@property(retain, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
@property(nonatomic) _Bool isInPageSheetMode; // @synthesize isInPageSheetMode=_isInPageSheetMode;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect=_m_bMultiSelect;
@property(nonatomic) __weak id <SelectOpenIMContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) NSDictionary *m_dicIgnoreContact; // @synthesize m_dicIgnoreContact;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
- (void)onContactSearchControllerDidCancelItemClick;
- (void)onContactSearchControllerDidSwitchMultiSelectMode:(_Bool)arg1;
- (void)onContactSearchControllerDidFinishMultiSelect;
- (void)didSearchControllerSelectContact:(id)arg1 indexPath:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)onContactSelectSearchSections:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (id)getSafeSearchViewController;
- (void)onSelectOpenIMContact:(id)arg1;
- (_Bool)onShouldSelectOpenIMContact:(id)arg1;
- (_Bool)onFilterOpenIMContactCandidate:(id)arg1;
- (void)updateRightBarButtonItemIfNeeded;
- (id)rightBarButtonItemWithTitle:(id)arg1;
- (id)rightBarButtonItemWithSelectTagCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)getRightBarButtonItem;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isIgnore:(id)arg1;
- (unsigned long long)getTotalSelectCount;
- (void)selectOpenIMContactCancel;
- (void)selectOpenIMContactReturn;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (double)getContentViewY;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)createInitRightBarItem;
- (id)createInitLeftBarItem;
- (void)initTitleArea;
- (void)initView;
- (id)init;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)onDoneInPageSheetMode:(id)arg1;
- (double)getVisibleHeight;
- (double)getContentViewYInPageSheetMode;
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

