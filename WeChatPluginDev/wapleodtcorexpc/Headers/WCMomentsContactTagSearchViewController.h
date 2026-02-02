//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSMutableOrderedSet, NSMutableSet, NSString, WCMomentsContactTagSearchBottomBar;
@protocol WCMomentsContactTagSearchViewControllerDelegate;

@interface WCMomentsContactTagSearchViewController
{
    _Bool _isMultiSelectEnabled;
    id <WCMomentsContactTagSearchViewControllerDelegate> _delegate;
    NSMutableOrderedSet *_selectedTagIdSet;
    MMTableView *_tableView;
    WCMomentsContactTagSearchBottomBar *_bottomBar;
    NSArray *_searchResult;
    NSString *_lastQuery;
    NSMutableSet *_selecedTagDataSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *selecedTagDataSet; // @synthesize selecedTagDataSet=_selecedTagDataSet;
@property(nonatomic) _Bool isMultiSelectEnabled; // @synthesize isMultiSelectEnabled=_isMultiSelectEnabled;
@property(retain, nonatomic) NSString *lastQuery; // @synthesize lastQuery=_lastQuery;
@property(retain, nonatomic) NSArray *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) WCMomentsContactTagSearchBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableOrderedSet *selectedTagIdSet; // @synthesize selectedTagIdSet=_selectedTagIdSet;
@property(nonatomic) __weak id <WCMomentsContactTagSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onKeyboardNotification:(id)arg1;
- (void)onKeyboardNotificationWithoutAnimation:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)searchSelectCellCheckTypeWithTagData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onNavigationCancelItemClick;
- (void)onClickDone;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTagDataSelected:(id)arg1;
- (id)tagDataAtIndexPath:(id)arg1;
- (id)searchResultWithQuery:(id)arg1;
- (void)reloadData;
- (void)initBottomBar;
- (void)initTableView;
- (void)viewDidLoad;
- (void)initNotification;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

