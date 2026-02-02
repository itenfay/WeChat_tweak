//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIPercentDrivenInteractiveTransition, UISearchBar, UIView, UIViewController, WAAppItemData, WAMainListMenuLogic, WAMainListNearByLogic, WAMainListNewTipsLogic, WAMainListPageLogic, WAMainListReporter, WAMainListStarLogic, WAOrderInfoLogic, WAPackageSweeperLogic, WeToast;

@interface WAMainListViewController
{
    NSMutableArray *m_unStarHistoryItemMenuArray;
    NSMutableArray *m_staredHistoryItemMenuArray;
    NSMutableDictionary *m_contactViewCache;
    WAAppItemData *m_appItemToDelete;
    WAAppItemData *m_starItemToDelete;
    WAPackageSweeperLogic *m_sweepLogic;
    NSString *m_showSessionId;
    _Bool _isShowSearchBar;
    _Bool _isViewHasLayout;
    _Bool _hasClickHistoryItem;
    _Bool _hasClickNearBySection;
    _Bool _isViewAppeared;
    UIView *_movingFakeCell;
    _Bool _lastSearchBarStatus;
    _Bool _isDuringSearch;
    _Bool _tmpUseForMainFrameSearch;
    _Bool _needTargetToHistory;
    int _m_searchScene;
    unsigned long long m_scene;
    NSString *m_relatedUserName;
    NSString *m_sceneNote;
    NSString *_openSession;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    UIViewController *_animatedTransitionRespondViewController;
    UISearchBar *_searchBar;
    WeToast *_toastView;
    UIView *_emptyView;
    NSDictionary *_searchResult;
    WAMainListPageLogic *_pageLogic;
    WAMainListNearByLogic *_nearByLogic;
    WAMainListStarLogic *_starLogic;
    WAMainListMenuLogic *_menuLogic;
    UIButton *_entryForSearchApp;
    UIImageView *_entryImageViewForSearchApp;
    WAOrderInfoLogic *_orderLogic;
    WAMainListNewTipsLogic *_tipsLogic;
    long long _reportSessionId;
    WAMainListReporter *_exposureReporter;
    WAMainListReporter *_stayDurationReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMainListReporter *stayDurationReporter; // @synthesize stayDurationReporter=_stayDurationReporter;
@property(retain, nonatomic) WAMainListReporter *exposureReporter; // @synthesize exposureReporter=_exposureReporter;
@property(nonatomic) long long reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(retain, nonatomic) WAMainListNewTipsLogic *tipsLogic; // @synthesize tipsLogic=_tipsLogic;
@property(retain, nonatomic) WAOrderInfoLogic *orderLogic; // @synthesize orderLogic=_orderLogic;
@property(retain, nonatomic) UIImageView *entryImageViewForSearchApp; // @synthesize entryImageViewForSearchApp=_entryImageViewForSearchApp;
@property(retain, nonatomic) UIButton *entryForSearchApp; // @synthesize entryForSearchApp=_entryForSearchApp;
@property(retain, nonatomic) WAMainListMenuLogic *menuLogic; // @synthesize menuLogic=_menuLogic;
@property(retain, nonatomic) WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
@property(retain, nonatomic) WAMainListNearByLogic *nearByLogic; // @synthesize nearByLogic=_nearByLogic;
@property(retain, nonatomic) WAMainListPageLogic *pageLogic; // @synthesize pageLogic=_pageLogic;
@property(retain, nonatomic) NSDictionary *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) WeToast *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene=_m_searchScene;
@property(nonatomic) _Bool needTargetToHistory; // @synthesize needTargetToHistory=_needTargetToHistory;
@property(nonatomic) _Bool tmpUseForMainFrameSearch; // @synthesize tmpUseForMainFrameSearch=_tmpUseForMainFrameSearch;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(copy, nonatomic) NSString *openSession; // @synthesize openSession=_openSession;
@property(copy, nonatomic) NSString *m_sceneNote; // @synthesize m_sceneNote;
@property(copy, nonatomic) NSString *m_relatedUserName; // @synthesize m_relatedUserName;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene;
- (void)registerYReportSdk;
- (void)onNewTipsInfoUpdatedWithPathKey:(id)arg1;
- (void)onTextFieldMarkedTextChanged:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onLaunchPermissionUpdateHistoryList:(id)arg1;
- (id)getBottomView;
- (void)fixTableViewAndSearchBarPos;
- (void)fixTableViewOffset;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)reportDestopStateWhenViewAppear;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)onWeAppItemOpened:(id)arg1;
- (id)genStaredHistoryItemMenuArray;
- (id)genUnStarHistoryItemMenuArray;
- (_Bool)hasRunningAppTask;
- (id)getContactByUserName:(id)arg1;
- (void)reloadTableViewNonAnimated;
- (void)reloadTableView;
- (void)showTipsViewController:(id)arg1;
- (void)showToast:(id)arg1;
- (void)deleteHistoryItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)unstarAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)starAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onDeleteAppListItemAtIndexPath:(id)arg1 appItem:(id)arg2;
- (void)requestMainListMenuInfo;
- (void)requestOrderInfo;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)checkAndUpdateContactForUsernameInList:(id)arg1;
- (void)checkAndUpdateContactInList:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onOpenNearWeApps;
- (void)onClickHistoryItem:(id)arg1;
- (id)historyViewModelArrayByItems:(id)arg1;
- (void)onClickShoppingCartCell;
- (void)onClickMyAppCell;
- (void)onOpenNear;
- (void)doClickNearbyCellAfterCheckAuthorization;
- (void)onClickNearbyCell;
- (void)onClickFriendsLikeAppCell;
- (void)onClickLiveAppCell;
- (void)onGetNearByInfoFailedWithLocationInvalid;
- (void)onGetNearByInfoFailedWithErrCode:(int)arg1;
- (void)onNearByInfoTriggerUpdated;
- (void)onFirstTimeGetNearByInfo;
- (void)onWeAppItemBatchMoved:(id)arg1;
- (void)onWeAppItemUnStared:(id)arg1;
- (void)onWeAppItemStared:(id)arg1;
- (void)starDataDidUpdated;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidStaredFailedWithCountLimit:(id)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)didFinishFetchNextPageItems:(id)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateViewStates;
- (void)loadMoreIfNeeded;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMoreOperate;
- (void)onReturn;
- (void)reloadNearBySection;
- (void)reloadStarSection;
- (void)initEmptyView;
- (void)onEntryForSearchAppBtnClicked:(id)arg1;
- (void)initRefreshControl;
- (void)onTapSearchArea;
- (id)genSearchHeaderView;
- (void)initTableView;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)setNavigationBarViewsHidden:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateFooterNoMoreDataState;
- (void)updateRefreshFooterHiddenState;
- (void)updateEmptyViewState;
- (void)updateListData;
- (void)viewDidTransitionToNewSize;
- (void)willChangeToSplitMode;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

