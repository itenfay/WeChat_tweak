//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UICollectionView, UICollectionViewFlowLayout, UITapGestureRecognizer, WCFinderBulletGroupView, WCFinderFeedContentVM, WCFinderFeedDetailVideoPlayerView, WCFinderPageControl;
@protocol WCFinderFeedDetailContentViewDelegate;

@interface WCFinderFeedDetailContentView : UIView
{
    _Bool _videoPlayerFullScreen;
    id <WCFinderFeedDetailContentViewDelegate> _delegate;
    UICollectionView *_collectionView;
    RichTextView *_innerReccommendReasonLabel;
    UICollectionViewFlowLayout *_flowLayout;
    WCFinderPageControl *_pageCtrl;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _currentPage;
    UITapGestureRecognizer *_doubleTapGesture;
    WCFinderFeedDetailVideoPlayerView *_playerView;
    unsigned long long _mediaPlayState;
    WCFinderBulletGroupView *_bulletAnimationView;
    struct CGSize _layoutSize;
}

+ (double)contentViewExtraHeightWithContentVM:(id)arg1;
+ (id)pageControlConfig;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) _Bool videoPlayerFullScreen; // @synthesize videoPlayerFullScreen=_videoPlayerFullScreen;
@property(retain, nonatomic) WCFinderBulletGroupView *bulletAnimationView; // @synthesize bulletAnimationView=_bulletAnimationView;
@property(nonatomic) unsigned long long mediaPlayState; // @synthesize mediaPlayState=_mediaPlayState;
@property(retain, nonatomic) WCFinderFeedDetailVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) RichTextView *innerReccommendReasonLabel; // @synthesize innerReccommendReasonLabel=_innerReccommendReasonLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderFeedDetailContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAirPlayAction:(int)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)listenHalfScreenFrameChanged:(struct CGRect)arg1;
- (void)onBulletCommentViewControllerClosed;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(_Bool)arg1;
- (void)onBulletCommentViewControllerDidComment:(id)arg1;
- (int)finderDetailVideoPlayerGetCommentScene;
- (void)showPlayRatePanel;
- (void)onFinderDetailVideoPlayerClickPlayRateButton;
- (void)onFinderDetailVideoPlayerExitIPhoneLandscape;
- (void)onFinderDetailVideoPlayerExitFullScreen;
- (void)onFinderDetailVideoPlayerClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderDetailVideoPlayerClickBulletInputBtn;
- (void)onFinderDetailVideoPlayerClickFullScreenBtn;
- (void)onFinderDetailVideoPlayerClickPauseBtn:(_Bool)arg1;
- (double)getPlayVideoTotalTime;
- (void)onFinderDetailVideoPlayer:(id)arg1 updateVideoPosition:(double)arg2 videoDuration:(double)arg3 maxPlayVideoTime:(double)arg4;
- (void)onTapBulletGroupViewDidSelectedItem:(_Bool)arg1;
- (void)onImageViewTapAction;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateBulletContentVM:(id)arg1 width:(double)arg2;
- (void)updateBulletCommentLayout:(_Bool)arg1;
- (void)bulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)postBulletWithText:(id)arg1 followBulletCommentId:(unsigned long long)arg2;
- (void)onReportBulletComment:(id)arg1;
- (void)onDeleteBulletComment:(id)arg1 result:(_Bool)arg2;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onDeleteBulletComment:(id)arg1;
- (void)onCopyBulletComment:(id)arg1;
- (void)onMoreBulletComment:(id)arg1;
- (void)onFollowBulletComment:(id)arg1;
- (void)showBulletMenuItems:(id)arg1 targetRect:(struct CGRect)arg2;
- (void)fetchBulletCommentWithTimestamp:(double)arg1;
- (_Bool)pointAtPanableArea:(struct CGPoint)arg1;
- (void)playerReportIfNeeded;
- (double)getCurrentPlayVideoPercent;
- (double)totalVideoPlayTimeInMs;
- (void)syncVidepPlayInfoIfNeeded;
- (void)showProgressPanelIfNeeded;
- (void)setVideoProgressPanelHidden:(_Bool)arg1 autoHide:(_Bool)arg2;
- (void)setVideoPauseByManual:(_Bool)arg1;
- (_Bool)videoIsPlaying;
- (void)autoInterruptVideoPlay;
- (void)autoStartVideoPlay;
- (void)autoInterruptMediaPlay;
- (void)autoStartMediaPlay;
- (void)scrollToPage:(unsigned long long)arg1;
- (long long)currentImagePageIndex;
- (void)onPageCtrlValueChange;
- (void)startLikeAnimationWithTouchPoint:(struct CGPoint)arg1;
- (void)onDoubleTap:(id)arg1;
- (_Bool)showInnerReasonStateWithContentVM:(id)arg1;
- (void)layoutInnerReason;
- (id)getPlayMediaInfoWithDataItem:(id)arg1 currentIndex:(unsigned long long)arg2;
- (_Bool)currentRotating;
- (_Bool)currentSceneIsLandscape;
- (_Bool)isVideoMedia;
- (id)dataItem;
- (_Bool)isAuthor;
- (id)currentViewController;
- (id)getCurrentFeedImageViewForImageBrowserTransition;
- (void)hideVideoContent:(_Bool)arg1;
- (void)hideImageContent:(_Bool)arg1;
- (void)updateFullScreenState:(_Bool)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutViews;
- (void)layoutSubviews;
- (id)photoBGColor;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

