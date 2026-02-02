//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, UIImage, UIView, WCDataItem, WCMomentsPlayerViewContainer, WCPlayerFullScreenConfigControlView, WCPlayerPlayArgs, WCPlayerView, WCWidgetPlayer, WXFullScreenGestureRecognizer;
@protocol WCPlayerConfigFullScreenViewControllerPostDelegate, WCPlayerConfigViewControllerDelegate, WCPlayerMediaExt;

@interface WCPlayerConfigFullScreenViewController
{
    _Bool m_isPresented;
    _Bool _bDismissSelfOnPresentOther;
    _Bool _isNeedChangeContentModeAtExist;
    _Bool _forceDisableProgressBar;
    _Bool _isShareVideoForbidden;
    _Bool _isShareButtonVisible;
    _Bool _isAnimatingToShowFullScreen;
    _Bool _bPreventRotate;
    _Bool _m_toolViewHidden;
    _Bool _isBufferingViewLoading;
    _Bool _isAnimatingToCloseFullScreen;
    _Bool _isShowingFullScreen;
    _Bool _needsResetPlayerViewFrameWhenAnimationEnd;
    _Bool _shouldResumeAtApear;
    WCPlayerView *_playerView;
    unsigned long long _playerScene;
    long long _browseScene;
    UIImage *_thumbImage;
    WCPlayerPlayArgs *_playerInfo;
    NSString *_attachTitle;
    NSObject<WCPlayerMediaExt> *_mediaWrap;
    WCDataItem *_dataItem;
    NSObject<WCPlayerConfigViewControllerDelegate> *_delegate;
    id <WCPlayerConfigFullScreenViewControllerPostDelegate> _postDelegate;
    WCWidgetPlayer *_customWidgetPlayer;
    UIView *_fullScreenContent;
    WCMomentsPlayerViewContainer *_playerViewContainer;
    WCPlayerFullScreenConfigControlView *_controlView;
    WXFullScreenGestureRecognizer *_gestureReconizer;
    UIView *_gestureView;
    SEL _completeSelector;
    id _context;
    UIView *_accessibilityView;
    long long _videoProgressBarType;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(nonatomic) long long videoProgressBarType; // @synthesize videoProgressBarType=_videoProgressBarType;
@property(nonatomic) _Bool shouldResumeAtApear; // @synthesize shouldResumeAtApear=_shouldResumeAtApear;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(nonatomic) _Bool needsResetPlayerViewFrameWhenAnimationEnd; // @synthesize needsResetPlayerViewFrameWhenAnimationEnd=_needsResetPlayerViewFrameWhenAnimationEnd;
@property(nonatomic) _Bool isShowingFullScreen; // @synthesize isShowingFullScreen=_isShowingFullScreen;
@property(nonatomic) _Bool isAnimatingToCloseFullScreen; // @synthesize isAnimatingToCloseFullScreen=_isAnimatingToCloseFullScreen;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(nonatomic) _Bool m_toolViewHidden; // @synthesize m_toolViewHidden=_m_toolViewHidden;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) SEL completeSelector; // @synthesize completeSelector=_completeSelector;
@property(nonatomic) _Bool bPreventRotate; // @synthesize bPreventRotate=_bPreventRotate;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *gestureReconizer; // @synthesize gestureReconizer=_gestureReconizer;
@property(retain, nonatomic) WCPlayerFullScreenConfigControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) _Bool isAnimatingToShowFullScreen; // @synthesize isAnimatingToShowFullScreen=_isAnimatingToShowFullScreen;
@property(retain, nonatomic) WCMomentsPlayerViewContainer *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(retain, nonatomic) UIView *fullScreenContent; // @synthesize fullScreenContent=_fullScreenContent;
@property(nonatomic) _Bool isShareButtonVisible; // @synthesize isShareButtonVisible=_isShareButtonVisible;
@property(nonatomic) _Bool isShareVideoForbidden; // @synthesize isShareVideoForbidden=_isShareVideoForbidden;
@property(retain, nonatomic) WCWidgetPlayer *customWidgetPlayer; // @synthesize customWidgetPlayer=_customWidgetPlayer;
@property(nonatomic) _Bool forceDisableProgressBar; // @synthesize forceDisableProgressBar=_forceDisableProgressBar;
@property(nonatomic) _Bool isNeedChangeContentModeAtExist; // @synthesize isNeedChangeContentModeAtExist=_isNeedChangeContentModeAtExist;
@property(nonatomic) __weak id <WCPlayerConfigFullScreenViewControllerPostDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) __weak NSObject<WCPlayerConfigViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSObject<WCPlayerMediaExt> *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(nonatomic) _Bool bDismissSelfOnPresentOther; // @synthesize bDismissSelfOnPresentOther=_bDismissSelfOnPresentOther;
@property(retain, nonatomic) NSString *attachTitle; // @synthesize attachTitle=_attachTitle;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)playerViewContainerDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)playerViewContainerWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)playerViewContainerDidZoom:(id)arg1;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(_Bool)arg2;
- (void)onTimeLineVcWillPop;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)_stopCustomWidgetPlayer;
- (void)_stopVideo;
- (void)_seekCustomWidgetPlayerToTimeSec:(double)arg1;
- (void)_seekVideoToTimeSec:(double)arg1;
- (void)_pauseCustomWidgetPlayer;
- (void)_pauseVideo;
- (void)_playCustomWidgetPlayer;
- (void)_playVideo;
- (void)onClickShareButton:(id)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onToolViewAutoClose;
- (void)onSeekToTime:(double)arg1;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onVideoPlay;
- (void)onTapAttachButton:(id)arg1;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
- (id)forwardVideoOpGetPlayerView:(id)arg1;
- (void)onForwardOpDidCancel:(id)arg1;
- (void)onForwardOpDidSend:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenClose;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (_Bool)isChatPlayerMode;
- (void)fetchAllVideoDataWithCompleteSelector:(SEL)arg1 context:(id)arg2;
- (void)_saveVideoOnGetAllData;
- (void)saveVideo;
- (void)_favoriteVideoOnGetAllData;
- (void)favoriteVideo;
- (void)_forwardVideoToFriend:(id)arg1;
- (void)forwardVideoToFriend:(id)arg1;
- (_Bool)autoShowProgressBarWithThreshold;
- (_Bool)shouldShowProgressBarWithoutThreshold;
- (_Bool)shouldShowProgressBar;
- (void)clearSubviews;
- (void)changePresentedState:(_Bool)arg1;
- (void)stopAndCloseFullScreenWindowAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stopAndCloseFullScreenWindow;
- (void)updateGestureContainerFrame;
- (void)checkNeedsResetPlayerViewFrameWhenAnimationEnd;
- (void)showVCAnimation;
- (id)generateConfig;
- (void)prepareForAccessibility;
- (void)applyPlayerViewSafeAreaRule;
- (struct CGRect)adjustShowAreaForDisplayFrame:(struct CGRect)arg1 viewHeight:(double)arg2;
- (void)_relayoutPlayerViewWithFrame:(struct CGRect)arg1;
- (void)_cleanCustomWidgetPlayer;
- (void)_relayoutCustomWidgetPlayerWithVideoFrame:(struct CGRect)arg1;
- (void)_initCustomWidgetPlayer;
- (void)initPlayerViewContainer;
- (struct CGSize)playerViewVideoSize;
- (struct CGSize)suitablePlayerViewSizeForVideoSize:(struct CGSize)arg1;
- (struct CGRect)suitablePlayerViewFrameForVideoSize:(struct CGSize)arg1;
- (void)resetPlayerViewFrameForSize:(struct CGSize)arg1;
- (void)resetPlayerViewFrame;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldFixParentAppearEventWhenPresented;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMeidaWrap:(id)arg1 dataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

