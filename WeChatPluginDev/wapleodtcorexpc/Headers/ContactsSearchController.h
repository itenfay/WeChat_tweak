//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsViewTagListCollectionView, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITextField, UIView, WCColorProxy, WCSTokenPickLogic;
@protocol ContactsSearchControllerDelegate;

@interface ContactsSearchController
{
    id <ContactsSearchControllerDelegate> m_delegate;
    _Bool _isShowAllTags;
    _Bool _bShouldFilterSearchResults;
    _Bool _bDisplaySectionResults;
    _Bool _m_bMultiSelect;
    unsigned int _expandBitSet;
    WCSTokenPickLogic *_tokenPickLogic;
    WCColorProxy *_colorProxy;
    unsigned long long _selectedCount;
    UIButton *_multiSelectButton;
    unsigned long long _overrideOrientationMask;
    ContactsViewTagListCollectionView *_tagView;
    NSMutableArray *_tagList;
    MMTableView *_tableView;
    UIView *_bottomBar;
    UIButton *_doneButton;
    NSMutableArray *_arrSectionKeys;
    NSMutableDictionary *_dicSectionTitles;
    NSMutableDictionary *_dicSectionResults;
    NSMutableArray *_arrFilteredObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFilteredObject; // @synthesize arrFilteredObject=_arrFilteredObject;
@property(nonatomic) unsigned int expandBitSet; // @synthesize expandBitSet=_expandBitSet;
@property(retain, nonatomic) NSMutableDictionary *dicSectionResults; // @synthesize dicSectionResults=_dicSectionResults;
@property(retain, nonatomic) NSMutableDictionary *dicSectionTitles; // @synthesize dicSectionTitles=_dicSectionTitles;
@property(retain, nonatomic) NSMutableArray *arrSectionKeys; // @synthesize arrSectionKeys=_arrSectionKeys;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) ContactsViewTagListCollectionView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(retain, nonatomic) UIButton *multiSelectButton; // @synthesize multiSelectButton=_multiSelectButton;
@property(nonatomic) unsigned long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect=_m_bMultiSelect;
@property(nonatomic) _Bool bDisplaySectionResults; // @synthesize bDisplaySectionResults=_bDisplaySectionResults;
@property(nonatomic) _Bool bShouldFilterSearchResults; // @synthesize bShouldFilterSearchResults=_bShouldFilterSearchResults;
@property(nonatomic, setter=SetIsShowAllTags:) _Bool isShowAllTags; // @synthesize isShowAllTags=_isShowAllTags;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(retain, nonatomic) WCSTokenPickLogic *tokenPickLogic; // @synthesize tokenPickLogic=_tokenPickLogic;
@property(nonatomic) __weak id <ContactsSearchControllerDelegate> delegate; // @synthesize delegate=m_delegate;
- (void)tryReorderContactAtSection:(long long)arg1;
- (void)removePickDataForUsername:(id)arg1;
- (void)removeTokenSelectedContact:(id)arg1;
- (void)refreshPickDataRecommendSection:(long long)arg1 added:(_Bool)arg2 deleted:(_Bool)arg3;
- (void)asyncRecommend;
- (void)pickDataDeSelected:(id)arg1 indexPath:(id)arg2;
- (void)pickDataSelected:(id)arg1 indexPath:(id)arg2;
- (void)onDeselectContact:(id)arg1 forIndexPath:(id)arg2;
- (void)tryDeselectOtherContactForIndexPath:(id)arg1;
- (_Bool)isMultiSelectContactSection:(long long)arg1;
- (void)onSelectContact:(id)arg1 forIndexPath:(id)arg2;
- (void)handleResultTokenPick:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(_Bool)arg3;
- (id)getViewController;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isM_bMultiSelect;
@property(readonly, nonatomic) UITextField *m_SearchTextField;
- (void)setSearchText:(id)arg1;
- (id)getSearchText;
- (id)getSearchResultTable;
- (_Bool)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (_Bool)isJumpable:(id)arg1;
- (_Bool)isExpandingForSection:(long long)arg1;
- (void)setExpandStatus:(_Bool)arg1 forSection:(long long)arg2;
- (id)getSectionKeyAtSection:(long long)arg1;
- (unsigned long long)getMoreCellStatusAtSection:(long long)arg1;
- (void)clickMoreCellAtIndexPath:(id)arg1;
- (id)getMoreCellImageAtSection:(long long)arg1;
- (id)getMoreCellDescriptionAtSection:(long long)arg1;
- (_Bool)isCollapseAtSection:(long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (void)prepareRefreshingAnimated:(_Bool)arg1;
- (void)prepareRefreshing;
- (void)setFilterdSectionResults:(id)arg1;
- (void)setSectionTitleMaps:(id)arg1;
- (void)setFilterdSectionKeys:(id)arg1;
- (id)getFilteredObjects;
- (void)tryFilterSearchResult;
- (void)clearFilteredObjects;
- (void)addFilteredObject:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)setFilteredObjects:(id)arg1;
- (unsigned int)getObjectRow:(id)arg1;
- (id)getObjectForIndexPath:(id)arg1;
- (id)getObjectFor:(unsigned long long)arg1;
- (long long)numberofRowsInSection:(long long)arg1;
- (void)onKeyboardNotification:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateBottomDoneButton;
- (void)updateBottomBar;
- (void)onFinishMultiSelect;
- (void)onSwitchMultiSelect;
- (_Bool)isSearchMultiKey;
- (void)updateTagView;
- (void)doSearch;
- (void)cancelSearch;
- (void)onTextFieldChanged:(id)arg1;
- (void)initBottomBar;
- (void)initTableView;
- (void)initTagView;
- (void)initView;
- (void)initData;
- (_Bool)shouldInteractivePop;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onNavigationCancelItemClick;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (double)getContentViewY;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

