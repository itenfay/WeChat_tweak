//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, MMTableView, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, UILabel, WCMomentsContactTagEditView, WCSearchBar;
@protocol WCMomentsContactTagListViewControllerDelegate;

@interface WCMomentsContactTagListViewController
{
    _Bool _canEditTagLabel;
    id <WCMomentsContactTagListViewControllerDelegate> _delegate;
    NSString *_viewControllerTitle;
    NSString *_rightBarTitle;
    NSMutableOrderedSet *_selectedTagIdSet;
    long long _privacy;
    long long _enterScene;
    unsigned long long _sourceScene;
    MMPageSheetAdapter *_pageSheetAdapter;
    MMTableView *_tableView;
    NSMutableDictionary *_tagDataCache;
    NSMutableArray *_arrAllTagID;
    UILabel *_noTagTips;
    WCSearchBar *_searchBar;
    WCMomentsContactTagEditView *_tagEditView;
    NSMutableDictionary *_searchResultsDataCache;
    NSMutableSet *_searchSelectedTagIDSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *searchSelectedTagIDSet; // @synthesize searchSelectedTagIDSet=_searchSelectedTagIDSet;
@property(retain, nonatomic) NSMutableDictionary *searchResultsDataCache; // @synthesize searchResultsDataCache=_searchResultsDataCache;
@property(retain, nonatomic) WCMomentsContactTagEditView *tagEditView; // @synthesize tagEditView=_tagEditView;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UILabel *noTagTips; // @synthesize noTagTips=_noTagTips;
@property(retain, nonatomic) NSMutableArray *arrAllTagID; // @synthesize arrAllTagID=_arrAllTagID;
@property(retain, nonatomic) NSMutableDictionary *tagDataCache; // @synthesize tagDataCache=_tagDataCache;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(nonatomic) _Bool canEditTagLabel; // @synthesize canEditTagLabel=_canEditTagLabel;
@property(retain, nonatomic) NSMutableOrderedSet *selectedTagIdSet; // @synthesize selectedTagIdSet=_selectedTagIdSet;
@property(retain, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
@property(retain, nonatomic) NSString *viewControllerTitle; // @synthesize viewControllerTitle=_viewControllerTitle;
@property(nonatomic) __weak id <WCMomentsContactTagListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactTagEditViewDidClickSearch:(id)arg1;
- (void)contactTagEditView:(id)arg1 deleteTagData:(id)arg2;
- (void)onSearchViewControllerDidCancelItemClick;
- (_Bool)isTagName:(id)arg1 containsQuery:(id)arg2;
- (id)searchViewController:(id)arg1 searchWithQuery:(id)arg2;
- (void)searchViewController:(id)arg1 didSelectTagDataSet:(id)arg2 multiSelectedFlag:(_Bool)arg3;
- (void)onTagDetailDismissedWithAddContactLabel;
- (void)reloadContactTagListView;
- (void)onSaveBarButtonPress:(id)arg1;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)clearCache;
- (void)reloadTableView;
- (void)reloadData;
- (_Bool)canShowTopBar;
- (void)deleteSelectedTagData:(id)arg1;
- (void)addSelectedTagData:(id)arg1;
- (void)addSelectedTagDatas:(id)arg1;
- (id)tagDatasWithTagIDs:(id)arg1;
- (id)tagDataWithTagID:(id)arg1;
- (id)tagDataAtIndexPath:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)showContactTagDetailViewWithContactTagData:(id)arg1;
- (void)showSearchVC;
- (void)updateRightBarButtonItemIfNeeded;
- (id)rightBarButtonItemWithTitle:(id)arg1;
- (id)rightBarButtonItemWithSelectTagCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)getRightBarButtonItem;
- (id)getLeftBarButtonItem;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)createSearchVC;
- (double)getContentViewY;
- (void)updateNoTagTipsFrame;
- (void)updateViewDisplayStateWithTagData:(id)arg1;
- (void)initNoTagTips;
- (void)switchTopBarIfNeeded;
- (void)updateTopBar;
- (void)initTableView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

