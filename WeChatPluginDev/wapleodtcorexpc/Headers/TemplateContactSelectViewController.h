//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, MMTableView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NewContactsSearchPanelView, SearchHelpDataItem, UILabel, WCColorProxy, WCSearcher;
@protocol TemplateContactSelectDelegate;

@interface TemplateContactSelectViewController
{
    MMTableView *m_tableView;
    NSMutableArray *m_arrRoomMembers;
    NSMutableArray *m_arrKeys;
    NSMutableDictionary *m_dicRoomMembers;
    CBaseContact *m_roomContact;
    NSMutableArray *m_arrFilterdFriends;
    NSMutableSet *m_setFilteredFriends;
    NSMutableDictionary *m_dicMatchTips;
    id <TemplateContactSelectDelegate> m_delegate;
    NewContactsSearchPanelView *m_panelView;
    unsigned long long m_commonSearchScene;
    NSIndexPath *m_oSelectIndexPath;
    SearchHelpDataItem *m_searchHelpDataItem;
    UILabel *m_groupTipLabel;
    _Bool _m_bHideSearchBar;
    _Bool _m_bSortByTime;
    _Bool _m_bSortByNameWithoutIndex;
    _Bool _m_bCustomMakeCell;
    _Bool _m_bEnableEdit;
    _Bool _useBarButtonStyleBack;
    WCSearcher *_searcher;
    WCColorProxy *_colorProxy;
    NSString *_beginSearchText;
    struct CGPoint m_bContentOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *beginSearchText; // @synthesize beginSearchText=_beginSearchText;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) _Bool useBarButtonStyleBack; // @synthesize useBarButtonStyleBack=_useBarButtonStyleBack;
@property(nonatomic) _Bool m_bEnableEdit; // @synthesize m_bEnableEdit=_m_bEnableEdit;
@property(nonatomic) _Bool m_bCustomMakeCell; // @synthesize m_bCustomMakeCell=_m_bCustomMakeCell;
@property(nonatomic) _Bool m_bSortByNameWithoutIndex; // @synthesize m_bSortByNameWithoutIndex=_m_bSortByNameWithoutIndex;
@property(nonatomic) _Bool m_bSortByTime; // @synthesize m_bSortByTime=_m_bSortByTime;
@property(nonatomic) _Bool m_bHideSearchBar; // @synthesize m_bHideSearchBar=_m_bHideSearchBar;
@property(nonatomic) struct CGPoint m_bContentOffset; // @synthesize m_bContentOffset;
@property(retain, nonatomic) NewContactsSearchPanelView *m_panelView; // @synthesize m_panelView;
@property(nonatomic) __weak id <TemplateContactSelectDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CBaseContact *m_roomContact; // @synthesize m_roomContact;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectContact:(id)arg1;
- (id)getViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDone;
- (void)onCancel:(id)arg1;
- (void)OnDataChange;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)getArrKeys;
- (id)getTableView;
- (_Bool)hasNoSearchResult;
- (id)getCachedSearchHelpDataItem;
- (id)getSearchMatchTip:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (Class)getNewContactsSearchPanelViewClass;
- (void)initSearchBar;
- (void)initTableView;
- (id)getMemberList;
- (void)reloadMemberListAndView;
- (void)reloadView;
- (void)initData;
- (id)getContactWith:(id)arg1;
- (void)addContact:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (id)GetCompareStrByContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

