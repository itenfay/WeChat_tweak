//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMessageRedPointInfo, GameLifeChatEmptyView, GameLifeConversationCellDataSource, GameLifeLoadingView, MMLoadMoreTableView, NSString;

@interface GameLifeChatViewController
{
    GameLifeLoadingView *_loadingView;
    GameLifeLoadingView *_loadingMoreView;
    GameLifeChatEmptyView *_emptyView;
    _Bool _showLoadingMore;
    _Bool _loadInitialReported;
    unsigned int _sourceScene;
    GameLifeConversationCellDataSource *_cellDataSource;
    MMLoadMoreTableView *_tableView;
    GameCenterMessageRedPointInfo *_redPointInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMessageRedPointInfo *redPointInfo; // @synthesize redPointInfo=_redPointInfo;
@property(retain, nonatomic) MMLoadMoreTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) GameLifeConversationCellDataSource *cellDataSource; // @synthesize cellDataSource=_cellDataSource;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
- (id)navigationController;
- (id)navigationBarBackgroundColor;
- (unsigned int)getSourceScene;
- (void)reportLoadInitial;
- (void)reportConversationUIExposure;
- (void)reportConversationItem:(unsigned int)arg1 actionId:(int)arg2 actionStatus:(id)arg3;
- (void)reportAllVisibleConversationItem;
- (void)onPanShow:(id)arg1;
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(_Bool)arg1;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)arg1 hasMore:(_Bool)arg2;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)onConversationUpdated;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)openGameCenterMsgController:(int)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)dataIndexForTableIndex:(long long)arg1;
- (void)adjustTableViewInset:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)tableViewTop;
- (void)retry:(id)arg1;
- (float)getTabBarHeight;
- (_Bool)isParentViewControllerGameLifeTabbarVc;
- (void)onQuitSessionViewController;
- (id)init;
- (void)unregisterExtension;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

