//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIView, WCFinderFeedListView, WCFinderNearByDescriptionTableViewCell, WCFinderShareListReportModel, WCFinderSnSAdListViewModel;

@interface WCFinderSnSAdViewController
{
    WCFinderShareListReportModel *_reportModel;
    WCFinderFeedListView *_feedListView;
    WCFinderSnSAdListViewModel *_viewModel;
    UIView *_moreRelatedView;
    WCFinderNearByDescriptionTableViewCell *_descriptionCell;
    UIButton *_rightFollowBtn;
    UIView *_moreRelatedMaskView;
    NSString *_adParamInofStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adParamInofStr; // @synthesize adParamInofStr=_adParamInofStr;
@property(retain, nonatomic) UIView *moreRelatedMaskView; // @synthesize moreRelatedMaskView=_moreRelatedMaskView;
@property(retain, nonatomic) UIButton *rightFollowBtn; // @synthesize rightFollowBtn=_rightFollowBtn;
@property(retain, nonatomic) WCFinderNearByDescriptionTableViewCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
@property(retain, nonatomic) UIView *moreRelatedView; // @synthesize moreRelatedView=_moreRelatedView;
@property(retain, nonatomic) WCFinderSnSAdListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
- (void)registerYReportSdk;
- (id)enterSourceFeedID;
- (id)reportAdJSONString;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)didClickBack:(id)arg1;
- (void)reportClickCard;
- (void)finderSnSAdListFollowStatusChanged:(_Bool)arg1 followState:(unsigned long long)arg2;
- (void)finderSnSAdListFetchFailWithErrorCode:(int)arg1;
- (void)finderSnSAdListOnStateOfNotExist:(id)arg1;
- (void)finderSnSAdListEmpty;
- (void)finderSnSAdListDeleteDataItemVM:(id)arg1;
- (void)finderSnSAdListShouldReloadMediaWithTid:(id)arg1;
- (void)finderSnSAdListNoMoreData;
- (void)finderSnSAdListLoadMoreFinished:(id)arg1;
- (void)finderSnSAdListFetchDataSuc;
- (void)changeMoreRelatedViewHidden:(_Bool)arg1;
- (id)specialParamsForFeedId:(id)arg1;
- (_Bool)isInSubScene;
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
- (void)onClickFollowRightItem;
- (void)onClickCloseLeftItem;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureTableView;
- (void)dealloc;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateRightBarItem;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 userName:(id)arg3 reportModel:(id)arg4 encryptedlastTid:(id)arg5 adParamInofStr:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

