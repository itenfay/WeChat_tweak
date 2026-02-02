//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIViewController, WCFinderCommentDetailViewController, WCFinderCreateCoordinator, WCFinderFeedListView, WCFinderMentionDetailVCParams, WCFinderShareCustomTransition, WCFinderShareListReportModel;
@protocol WCFinderCommentBaseViewProtocol;

@interface WCFinderMentionDetailViewController
{
    _Bool _showFromSystemMsg;
    _Bool _supportMinimize;
    _Bool _hasShowTopComment;
    _Bool _isSilencePlay;
    _Bool _hasShowComment;
    _Bool _needsResumeTimelineVideo;
    _Bool _isClickCloseBtn;
    unsigned long long _scene;
    NSString *_navigationTitle;
    WCFinderShareListReportModel *_reportModel;
    WCFinderMentionDetailVCParams *_params;
    WCFinderFeedListView *_feedListView;
    double _startExposureTime;
    WCFinderCommentDetailViewController *_commentVC;
    WCFinderCreateCoordinator *_createCoordinator;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    double _currentVideoPlayProgress;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClickCloseBtn; // @synthesize isClickCloseBtn=_isClickCloseBtn;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(nonatomic) double currentVideoPlayProgress; // @synthesize currentVideoPlayProgress=_currentVideoPlayProgress;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) __weak WCFinderCommentDetailViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(nonatomic) _Bool hasShowComment; // @synthesize hasShowComment=_hasShowComment;
@property(nonatomic) double startExposureTime; // @synthesize startExposureTime=_startExposureTime;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(nonatomic) _Bool hasShowTopComment; // @synthesize hasShowTopComment=_hasShowTopComment;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderMentionDetailVCParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool supportMinimize; // @synthesize supportMinimize=_supportMinimize;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool showFromSystemMsg; // @synthesize showFromSystemMsg=_showFromSystemMsg;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)minimizeDisplayContentView;
- (id)minimizeDelegate;
- (void)registerYReportSdk;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)doShareAnimation;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onRingToneSheetDisappear;
- (id)getCurMediaListObject;
- (_Bool)isAuthor;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)deleteFeedWithContenVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (_Bool)finderFeedListViewFriendsLikeListShouldShowFirstLikeLabel:(id)arg1;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)isMemberShipFeedWithVisitorStatusVisitant;
- (void)profileViewDidClickFullTextWithTid:(id)arg1;
- (void)showDetialCommentListVCOnlyList:(_Bool)arg1;
- (void)showCommentListWithContentVM:(id)arg1 showEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3;
- (void)showAllThumbsUpList;
- (void)showAllLikeList;
- (void)onFinderDataItemBeSetPrivateWithTid:(id)arg1;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (id)finderFeedListViewTLFollowUdfKv:(id)arg1;
- (unsigned int)finderFeedListViewTLFollowEnterType:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (_Bool)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tryShowEnterShowJumpInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)onClickCloseLeftItem;
- (void)onLimitedClicked;
- (void)tryFetchDiagnosisData;
- (void)updateRightBarButtonItems;
- (void)updateNaviLeftCloseItem;
- (void)viewDidLoad;
- (id)contentVM;
- (id)initWithParams:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

