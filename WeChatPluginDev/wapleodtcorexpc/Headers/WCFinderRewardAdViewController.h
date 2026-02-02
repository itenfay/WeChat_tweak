//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCFinderAdCountdownBannerView, WCFinderAdDislikeReasonPanelView, WCFinderAdFeedbackPanelView, WCFinderFeedFriendsLikeListViewController, WCFinderFeedListView, WCFinderNearByDescriptionTableViewCell, WCFinderRewardAdViewModel, WCFinderShareCustomTransition, WCFinderShareListReportModel;

@interface WCFinderRewardAdViewController
{
    WCFinderShareListReportModel *_reportModel;
    WCFinderShareCustomTransition *_animator;
    WCFinderFeedListView *_feedListView;
    WCFinderRewardAdViewModel *_viewModel;
    UIView *_moreRelatedView;
    WCFinderNearByDescriptionTableViewCell *_descriptionCell;
    UIView *_moreRelatedMaskView;
    WCFinderFeedFriendsLikeListViewController *_tmpLikeListVC;
    WCFinderAdCountdownBannerView *_adBannerView;
    long long _adFeedsCountdownCount;
    WCFinderAdFeedbackPanelView *_adFeedbackView;
    WCFinderAdDislikeReasonPanelView *_adDislikeReasonPanelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAdDislikeReasonPanelView *adDislikeReasonPanelView; // @synthesize adDislikeReasonPanelView=_adDislikeReasonPanelView;
@property(retain, nonatomic) WCFinderAdFeedbackPanelView *adFeedbackView; // @synthesize adFeedbackView=_adFeedbackView;
@property(nonatomic) long long adFeedsCountdownCount; // @synthesize adFeedsCountdownCount=_adFeedsCountdownCount;
@property(retain, nonatomic) WCFinderAdCountdownBannerView *adBannerView; // @synthesize adBannerView=_adBannerView;
@property(nonatomic) __weak WCFinderFeedFriendsLikeListViewController *tmpLikeListVC; // @synthesize tmpLikeListVC=_tmpLikeListVC;
@property(retain, nonatomic) UIView *moreRelatedMaskView; // @synthesize moreRelatedMaskView=_moreRelatedMaskView;
@property(retain, nonatomic) WCFinderNearByDescriptionTableViewCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
@property(retain, nonatomic) UIView *moreRelatedView; // @synthesize moreRelatedView=_moreRelatedView;
@property(retain, nonatomic) WCFinderRewardAdViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
- (id)enterSourceFeedID;
- (id)reportAdJSONString;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)onClickAdDislikeReasonPanelMaskView;
- (void)onClickAdDislikeReasonPanelBottomButton;
- (void)onClickAdDislikeReasonPanelRightButton;
- (void)onClickAdDislikeReasonPanelCenterButton;
- (void)onClickAdDislikeReasonPanelLeftButton;
- (void)onClickAdDislikeReasonPanelRightTopButton;
- (void)onClickAdFeedbackPanelMaskView;
- (void)onClickAdFeedbackPanelBottomButton;
- (void)onClickAdFeedbackPanelCenterButton;
- (void)onClickAdFeedbackPanelLeftButton;
- (void)adBannerViewClickFeedbackAction;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)didClickBack:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderFeedListViewClickBigButtonAction:(id)arg1;
- (void)finderFeedListClickAllCommentAction;
- (void)finderFeedListViewDoubleLikeAction:(id)arg1;
- (void)finderFeedListClickToolbarLikeActionWithContentVM:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)finderFeedListClickBeginFollowBtnActionWithContentVM:(id)arg1;
- (void)finderFeedListClickHeaderMoreAction;
- (void)finderFeedListViewClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)finderFeedListViewClickFollowLikeBtnWithContentVM:(id)arg1;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)doBusinessWithCompletion:(CDUnknownBlockType)arg1;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (_Bool)canShowMore;
- (void)clickRecommendUrl:(id)arg1;
- (_Bool)onMultiMediaCellIsInHotSpots:(id)arg1;
- (void)finderFeedListVideoMediaIsPause:(_Bool)arg1;
- (void)finderFeedListStartMediaPlay;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)finderShareListShouldReloadMediaWithTid:(id)arg1;
- (void)finderShareListFetchFailWithErrorCode:(int)arg1;
- (void)finderShareListOnStateOfNotExist:(id)arg1;
- (void)finderShareListStopCurrentFeedPlay;
- (void)finderShareListNoMoreData;
- (void)reportClickCard;
- (void)finderShareListReplaceFirstItemFinished:(_Bool)arg1;
- (void)finderShareListFetchDataSuc:(_Bool)arg1;
- (void)finderShareListLoadMoreFinished:(id)arg1 continueFlag:(_Bool)arg2;
- (id)specialParamsForFeedId:(id)arg1;
- (id)feedIdByIndex:(id)arg1;
- (void)changeMoreRelatedViewHidden:(_Bool)arg1 showAnim:(_Bool)arg2;
- (void)changeMoreRelatedViewHidden:(_Bool)arg1;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onClickCloseLeftItem;
- (void)configureTableView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)enableGestureBack:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2 ignoreFeedIdMatching:(_Bool)arg3;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2;
- (void)onLandScapeBtnClick:(id)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceId:(id)arg2 requestScene:(unsigned long long)arg3 reportModel:(id)arg4 functionalParams:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

