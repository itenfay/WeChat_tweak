//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderAnimationLoadingView, WCFinderFeedArray, WCFinderFeedListView, WCFinderStreamLoadingState;

@interface WCFinderFeedListViewController
{
    _Bool _allowMinimize;
    int _scene;
    WCFinderFeedArray *_feedArray;
    WCFinderStreamLoadingState *_loadingState;
    long long _enterOffset;
    CDUnknownBlockType _feedListBackBlock;
    CDUnknownBlockType _fetchMoreData;
    WCFinderAnimationLoadingView *_emptyLoadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *emptyLoadingView; // @synthesize emptyLoadingView=_emptyLoadingView;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType fetchMoreData; // @synthesize fetchMoreData=_fetchMoreData;
@property(copy, nonatomic) CDUnknownBlockType feedListBackBlock; // @synthesize feedListBackBlock=_feedListBackBlock;
@property(nonatomic) _Bool allowMinimize; // @synthesize allowMinimize=_allowMinimize;
@property(nonatomic) long long enterOffset; // @synthesize enterOffset=_enterOffset;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
- (void)layoutEmptyLoading;
- (void)onScrollViewContentOffsetChange;
- (void)showEmptyLoading:(_Bool)arg1;
- (void)_updateFooterView;
- (void)_updateLoadingState;
- (void)onLoadingStateChanged:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)getViewController;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)onFeedArrayChanged;
- (void)_requestNextPage;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)_afterViewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
@property(readonly, nonatomic) WCFinderFeedListView *feedListView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

