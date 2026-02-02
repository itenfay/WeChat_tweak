//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniRecTransitionController, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIScreenEdgePanGestureRecognizer, UIScrollView, UITableView, UIViewController, WCFinderLongVideoPlayerViewModel, WCFinderMegaVideoViewModel;
@protocol WCFinderCommentBaseViewProtocol;

@interface WCFinderLongVideoPlayViewController
{
    _Bool _fromInPicture;
    _Bool _isRotating;
    _Bool _hadAppeared;
    unsigned long long _enterScene;
    unsigned long long _viewerScene;
    unsigned long long _entryScene;
    NSString *_minimizeKey;
    unsigned long long _minimizeIndex;
    CDUnknownBlockType _appender;
    UIScreenEdgePanGestureRecognizer *_leftEdgePanGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_rightEdgePanGestureRecognizer;
    MiniRecTransitionController *_minimizationTransitionController;
    UIScrollView *_contentScroll;
    UITableView *_tableView;
    long long _orientation;
    NSIndexPath *_currentIndexPath;
    NSMutableDictionary *_bullets;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    WCFinderLongVideoPlayerViewModel *_viewModel;
    WCFinderMegaVideoViewModel *_megaVideoViewModel;
    NSMutableArray *_items;
    NSString *_videoId;
    NSString *_videoNonceId;
    NSString *_encryptedVideoId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *encryptedVideoId; // @synthesize encryptedVideoId=_encryptedVideoId;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool hadAppeared; // @synthesize hadAppeared=_hadAppeared;
@property(retain, nonatomic) WCFinderMegaVideoViewModel *megaVideoViewModel; // @synthesize megaVideoViewModel=_megaVideoViewModel;
@property(retain, nonatomic) WCFinderLongVideoPlayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) NSMutableDictionary *bullets; // @synthesize bullets=_bullets;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIScrollView *contentScroll; // @synthesize contentScroll=_contentScroll;
@property(retain, nonatomic) MiniRecTransitionController *minimizationTransitionController; // @synthesize minimizationTransitionController=_minimizationTransitionController;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *rightEdgePanGestureRecognizer; // @synthesize rightEdgePanGestureRecognizer=_rightEdgePanGestureRecognizer;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *leftEdgePanGestureRecognizer; // @synthesize leftEdgePanGestureRecognizer=_leftEdgePanGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType appender; // @synthesize appender=_appender;
@property(nonatomic) _Bool fromInPicture; // @synthesize fromInPicture=_fromInPicture;
@property(nonatomic) unsigned long long minimizeIndex; // @synthesize minimizeIndex=_minimizeIndex;
@property(copy, nonatomic) NSString *minimizeKey; // @synthesize minimizeKey=_minimizeKey;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) unsigned long long viewerScene; // @synthesize viewerScene=_viewerScene;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (_Bool)shouldInteractivePop;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setPanGesturePriority;
- (void)panToExit;
- (void)enablePanToPop;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)clickAuthorCommentAvatarWhenInProfile:(id)arg1;
- (int)relatedScene;
- (struct CGRect)fullRectForMedia;
- (_Bool)isPlaying;
- (void)showPlayRate;
- (_Bool)setVideoMute:(_Bool)arg1;
- (void)unstashPlayer;
- (void)stashPlayer;
- (void)willInPicture;
- (void)inPicture:(_Bool)arg1;
- (void)minimize;
- (_Bool)canMinimize;
- (_Bool)isAuthorViewForMoreOptions;
- (void)showErrorToastWithText:(id)arg1;
- (void)showToastWithText:(id)arg1;
- (void)showLoadingWithText:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)fetchNextPage;
- (void)fetchNextRecommends;
- (void)fetchVideoDetail;
- (void)setupUI;
- (void)onKeyboardFrameChange:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)playCellShowComment:(id)arg1 forContentVM:(id)arg2 fromComment:(_Bool)arg3;
- (void)playCellBulletTooLong:(id)arg1;
- (void)playCellOnPlayEnd:(id)arg1;
- (void)playCellInPicture:(id)arg1;
- (void)playCellMinimize:(id)arg1;
- (void)playCellProtrait:(id)arg1;
- (void)playCellLandScape:(id)arg1;
- (void)playCellDismiss:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reportExposeForVideo:(id)arg1;
- (void)reportFullStatsImmediately:(unsigned long long)arg1;
- (void)pourStatsIntoPool;
- (id)getTableViewCurrentCell;
- (void)preloadVideos;
- (void)updateCurrentVideoInfo;
- (unsigned long long)commentScene;
- (void)closeInPicture;
- (void)maxmizeFromInPicture;
- (id)viewForCapture;
- (id)playingVideo;
@property(copy, nonatomic) NSString *toUserName;
@property(copy, nonatomic) NSString *fromUserName;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (_Bool)useTransparentNavibar;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)willDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithItems:(id)arg1 chooseIndex:(unsigned long long)arg2;
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

