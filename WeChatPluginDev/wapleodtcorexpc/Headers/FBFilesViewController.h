//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FBFilesSearchViewController, MMTableView, MMUILabel, NSArray, NSMutableArray, NSString, UIColor, UIImageView, WCDataSearcher;
@protocol FBFilesViewControllerDelegate;

@interface FBFilesViewController
{
    _Bool _bLoadingChatLogFile;
    _Bool _bLoadingFavFile;
    _Bool _bInSearch;
    unsigned int _maxFileCount;
    id <FBFilesViewControllerDelegate> _delegate;
    UIColor *_customNavigationBarBgColor;
    MMTableView *_mainTableView;
    UIImageView *_logoImageView;
    NSMutableArray *_selectedFileBrowseArray;
    MMUILabel *_emptyTipLabel;
    WCDataSearcher *_searcher;
    FBFilesSearchViewController *_searchViewController;
    NSArray *_itemTitleArr;
    unsigned long long _currentDataType;
    unsigned long long _type;
    NSString *_chatName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bInSearch; // @synthesize bInSearch=_bInSearch;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool bLoadingFavFile; // @synthesize bLoadingFavFile=_bLoadingFavFile;
@property(nonatomic) _Bool bLoadingChatLogFile; // @synthesize bLoadingChatLogFile=_bLoadingChatLogFile;
@property(nonatomic) unsigned long long currentDataType; // @synthesize currentDataType=_currentDataType;
@property(retain, nonatomic) NSArray *itemTitleArr; // @synthesize itemTitleArr=_itemTitleArr;
@property(retain, nonatomic) FBFilesSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) MMUILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) NSMutableArray *selectedFileBrowseArray; // @synthesize selectedFileBrowseArray=_selectedFileBrowseArray;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) UIColor *customNavigationBarBgColor; // @synthesize customNavigationBarBgColor=_customNavigationBarBgColor;
@property(nonatomic) unsigned int maxFileCount; // @synthesize maxFileCount=_maxFileCount;
@property(nonatomic) __weak id <FBFilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFileBrowseDataLoadEnd:(unsigned long long)arg1;
- (void)onFileBrowseDataLoading:(unsigned long long)arg1;
- (void)onFileBrowseCellTouchIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)whetherFileBrowseInfoSelect:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateLoadingState;
- (void)updateSelect;
- (void)unselectFile:(id)arg1;
- (void)updateSelectFileType:(unsigned long long)arg1;
- (void)initEmptyView;
- (void)initSearchBar;
- (void)addLogoImageOnTableView;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVCType:(unsigned long long)arg1;
- (id)initWithChatName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

