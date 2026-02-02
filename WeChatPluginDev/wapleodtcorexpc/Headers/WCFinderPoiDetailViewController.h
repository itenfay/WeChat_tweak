//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedListView, WCFinderPoiDetailViewModel, WCFinderShareCustomTransition;

@interface WCFinderPoiDetailViewController
{
    WCFinderPoiDetailViewModel *_viewModel;
    unsigned long long _firstOffset;
    WCFinderFeedListView *_feedListView;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) unsigned long long firstOffset; // @synthesize firstOffset=_firstOffset;
@property(retain, nonatomic) WCFinderPoiDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)registerYReportSdk;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderPoiDetailRequestFailWithErrorCode:(int)arg1;
- (void)finderPoiDetailNoMoreData;
- (void)finderPoiDetailAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderPoiDetailReloadAllData;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (long long)numberOfContentVMsInTableView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 DataArray:(id)arg3 lastBuffer:(id)arg4 continueFlag:(_Bool)arg5 offset:(unsigned long long)arg6 syncKey:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

