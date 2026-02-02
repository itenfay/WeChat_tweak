//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCommentSensitiveSearchTableViewModel, MMFinderLiveTask, MMFinderLiveTaskId, MMTableView, NSMutableArray, NSString;

@interface MMFinderLiveSensitiveSearchViewController
{
    _Bool _isSearching;
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _onSensitiveSearchDataItemDeleteCallback;
    unsigned long long _overrideOrientationMask;
    MMTableView *_tableView;
    MMFinderLiveCommentSensitiveSearchTableViewModel *_tableViewModel;
    NSMutableArray *_sourceDataItemList;
    NSString *_lastSearchQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastSearchQuery; // @synthesize lastSearchQuery=_lastSearchQuery;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSMutableArray *sourceDataItemList; // @synthesize sourceDataItemList=_sourceDataItemList;
@property(retain, nonatomic) MMFinderLiveCommentSensitiveSearchTableViewModel *tableViewModel; // @synthesize tableViewModel=_tableViewModel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(copy, nonatomic) CDUnknownBlockType onSensitiveSearchDataItemDeleteCallback; // @synthesize onSensitiveSearchDataItemDeleteCallback=_onSensitiveSearchDataItemDeleteCallback;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)toggleLandscapeNavBarHidden:(_Bool)arg1;
- (void)didAppearFromSearchController;
- (void)didAskSearchControllerShouldBeginWithResult:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldOverrideMethods;
- (void)commonInit;
- (void)reportForSearchTextFieldClick;
- (void)reportForSearchTextFieldExp;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)onSearchResultSensitiveDataItemDelete:(id)arg1;
- (void)searchTableViewDidScroll:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)updateSourceDataItems:(id)arg1;
- (void)searchWithQuery:(id)arg1;
- (void)resignSearchBar;
- (void)loadTableView;
- (_Bool)isHalfPage;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSourceDataItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

