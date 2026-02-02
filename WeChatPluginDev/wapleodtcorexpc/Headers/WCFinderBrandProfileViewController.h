//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderBrandProfileViewModel, WCFinderFeedListView, WCFinderShareCustomTransition;

@interface WCFinderBrandProfileViewController
{
    WCFinderBrandProfileViewModel *_viewModel;
    WCFinderFeedListView *_feedListView;
    unsigned long long _firstOffset;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(nonatomic) unsigned long long firstOffset; // @synthesize firstOffset=_firstOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderBrandProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderBrandProfileRequestFailWithErrorCode:(int)arg1;
- (void)finderBrandProfileNoMoreData;
- (void)finderBrandProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandProfileReloadAllData;
- (_Bool)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)arg1;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 avatarType:(unsigned long long)arg3 contentVM:(id)arg4;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (_Bool)finderFeedListViewControllerShuldUseAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(_Bool)arg3;
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
- (id)currentFeedMediaCell;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (id)initWithViewModel:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

