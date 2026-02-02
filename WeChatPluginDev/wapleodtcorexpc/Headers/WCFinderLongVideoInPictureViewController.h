//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniRecTransitionController, NSString, WCFinderFeedContentVM, WCFinderFeedListView, WCPlayerView;

@interface WCFinderLongVideoInPictureViewController
{
    _Bool _hadAppeared;
    _Bool _disableResume;
    _Bool _viewWillDisappearFlag;
    unsigned long long _feedViewerScene;
    WCFinderFeedContentVM *_contentVM;
    MiniRecTransitionController *_minimizationTransitionController;
    WCPlayerView *_playerView;
    WCFinderFeedListView *_feedListView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool viewWillDisappearFlag; // @synthesize viewWillDisappearFlag=_viewWillDisappearFlag;
@property(nonatomic) _Bool disableResume; // @synthesize disableResume=_disableResume;
@property(nonatomic) _Bool hadAppeared; // @synthesize hadAppeared=_hadAppeared;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MiniRecTransitionController *minimizationTransitionController; // @synthesize minimizationTransitionController=_minimizationTransitionController;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) unsigned long long feedViewerScene; // @synthesize feedViewerScene=_feedViewerScene;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)finderFeedListViewCanInPicture:(id)arg1;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (struct CGRect)fullRectForMedia;
- (void)resumeToFullFromInPicture;
- (_Bool)setVideoMute:(_Bool)arg1;
- (void)willInPicture;
- (void)unstashPlayer;
- (void)stashPlayer;
- (void)clearPlayerOnly;
- (void)closeInPicture;
- (void)maxmizeFromInPicture;
- (id)viewForCapture;
- (_Bool)isPlaying;
- (id)playingVideo;
- (_Bool)useTransparentNavibar;
- (void)onClose;
- (void)inPicture:(_Bool)arg1;
- (id)getCurMediaListObject;
- (int)feedViewControllerScene;
- (void)configureTableView;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)willDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)cacheKey;
- (void)pauseVideo;
- (void)dealloc;
- (id)initWithContentVM:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

