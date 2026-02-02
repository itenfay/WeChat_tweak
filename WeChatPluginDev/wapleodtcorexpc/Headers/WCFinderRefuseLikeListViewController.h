//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, RichTextView, UILabel, UITableView, UITapGestureRecognizer, WCFinderRefuseLikeListModel, WCStoryDismissInteractiveTransition, WCStoryFriendsCollectionDismissTransition;
@protocol WCFinderRefuseLikeListViewControllerDelegate;

@interface WCFinderRefuseLikeListViewController
{
    int _scene;
    id <WCFinderRefuseLikeListViewControllerDelegate> _delegate;
    NSString *_objectId;
    UITableView *_tableView;
    WCFinderRefuseLikeListModel *_viewModel;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    NSMutableArray *_deleteUsernameArray;
    RichTextView *_richTextView;
    WCStoryDismissInteractiveTransition *_transition;
    WCStoryFriendsCollectionDismissTransition *_dismissAnimateTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryFriendsCollectionDismissTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) NSMutableArray *deleteUsernameArray; // @synthesize deleteUsernameArray=_deleteUsernameArray;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefuseLikeListModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) __weak id <WCFinderRefuseLikeListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (void)finderRefuseLikeListFetchFailWithErrorCode:(int)arg1;
- (void)finderRefuseLikeListCGISuc;
- (void)finderRefuseLikeListFetchSuccess;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)updateMenuItemCell:(id)arg1 contact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)clickRightAddButton;
- (void)configureRightButton;
- (void)updateNavTitle;
- (id)getTitleViewText;
- (void)setupNavBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithObjectId:(id)arg1 commentScene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

