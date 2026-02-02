//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIButton, UITableView, WCFinderFeedContentVM, WCFinderPostSessionModel, WCFinderShareCustomTransition;
@protocol WCFinderPostFullScreenPreviewViewControllerDelegate;

@interface WCFinderPostFullScreenPreviewViewController
{
    _Bool _needsResumeTimelineVideo;
    _Bool _isAuthorPerspective;
    id <WCFinderPostFullScreenPreviewViewControllerDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    WCFinderShareCustomTransition *_animator;
    WCFinderPostSessionModel *_postSession;
    UITableView *_tableView;
    double _currentVideoPlayProgress;
    UIButton *_closeButton;
    MMUIButton *_showHalfMediaButton;
    CDUnknownBlockType _dismissBlock;
    unsigned long long _toolbarDisableConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthorPerspective; // @synthesize isAuthorPerspective=_isAuthorPerspective;
@property(nonatomic) unsigned long long toolbarDisableConfig; // @synthesize toolbarDisableConfig=_toolbarDisableConfig;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) MMUIButton *showHalfMediaButton; // @synthesize showHalfMediaButton=_showHalfMediaButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) double currentVideoPlayProgress; // @synthesize currentVideoPlayProgress=_currentVideoPlayProgress;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderPostFullScreenPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRingToneSheetDisappear;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onContentTableViewMediaTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)handleFavoriteActionWithContentVM:(id)arg1 sourceType:(int)arg2;
- (void)didFeedDoubleThumbLikeAction:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)clickRecommentUrl:(id)arg1;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 enterType:(unsigned long long)arg5;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (id)currentFeedMediaCell;
- (int)feedViewControllerScene;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)updateMetaModelWhenPositiveLogicBeTriggered:(id)arg1;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)onFinderVideoPlayerStartPlay;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (void)onRefreshContentCellUI:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (unsigned long long)feedViewerScene;
- (_Bool)onMultiMediaCellIsInHotSpots:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specialParamsForFeedId:(id)arg1;
- (void)reloadDataWrap;
- (id)getListView;
- (id)feedIdByIndex:(id)arg1;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cellEndExpose;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopCurrentMedia;
- (void)startVideoPlay;
- (void)throttleStartPlayProcess;
- (_Bool)useTransparentNavibar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configureTableView;
- (void)onCloseButtonClicked;
- (void)onClickShowHalfMediaButtonAction;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDismissBlock:(CDUnknownBlockType)arg1 toolbarDisableConfig:(unsigned long long)arg2 isAuthorPerspective:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

