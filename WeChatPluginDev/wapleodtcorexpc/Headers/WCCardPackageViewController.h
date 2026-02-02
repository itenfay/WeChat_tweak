//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUISearchBar, NSString, UIButton, UIScrollView, UISegmentedControl, UIView, WCCardDataController, WCCardPackageTableView;
@protocol WCCardPackageViewControllerDelegate;

@interface WCCardPackageViewController
{
    double _headViewHeight;
    UIButton *_messageTipView;
    UIButton *_messageTipViewForShare;
    WCCardDataController *_myCardDataController;
    WCCardPackageTableView *_myCardTableView;
    UIView *_myCardFooterView;
    UIScrollView *_myCardLoadingView;
    MMUIActivityIndicatorView *_mgCardActivityView;
    UIButton *_myCardHeadView;
    unsigned int _myCardMinUpdateTime;
    MMUISearchBar *_searchBar;
    UISegmentedControl *_segmentedControl;
    double _enterTimeForState;
    _Bool fromAddEntrance;
    _Bool hasAlreadyGetCardLayout;
    _Bool fromShareCardList;
    _Bool _fromMoreViewController;
    id <WCCardPackageViewControllerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fromMoreViewController; // @synthesize fromMoreViewController=_fromMoreViewController;
@property(nonatomic) __weak id <WCCardPackageViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool fromShareCardList; // @synthesize fromShareCardList;
@property(nonatomic) _Bool hasAlreadyGetCardLayout; // @synthesize hasAlreadyGetCardLayout;
@property(nonatomic) _Bool fromAddEntrance; // @synthesize fromAddEntrance;
- (void)showMessageListByNewMsg;
- (id)getCardMsgTipWording;
- (id)genNewMessageTipView:(id)arg1;
- (void)initHeaderViewWithLastMsg:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)hasUnreadMessage;
- (void)setHasEnterCardListBefore;
- (_Bool)hasEnterCardListBefore;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMessageListByMore;
- (void)gotoMsgCenterViewControllerForNewMsg:(_Bool)arg1;
- (void)onCancel;
- (void)onRightButtonOP;
- (_Bool)shouldInteractiveDismiss;
- (void)layoutTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onShowAllMessage;
- (void)initNavigationBar;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)stopActivityLoading;
- (void)scrollToShareCard;
- (void)stopLoadMoreAnimation;
- (void)onLoadMoreMyCardData;
- (id)getMyCardTableView;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (double)getViewHeight;
- (_Bool)isFromAddEntrance;
- (void)showLoadingView;
- (void)showTableView;
- (id)getViewController;
- (void)onWCCardTips;
- (void)onGetCardLayoutStop;
- (void)onGetCardLayout;
- (void)onWCCardUpdate:(id)arg1;
- (void)onGetNextPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onGetFirstPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onSyncEnd:(_Bool)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)loadMoreMyCard;
- (void)initMyCardLoadingView;
- (void)initMyCardTableView;
- (void)initMyCardData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

