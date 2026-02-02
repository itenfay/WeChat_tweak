//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveSdkInfo, MMFinderLiveContentVM, MMFinderLiveTask, MMFinderPivotLiveViewController, MMLivePivotViewController, NSString, UINavigationController, UIView, WCFinderDataItem;

@interface MMLivePivotItemViewController
{
    _Bool _isWatchHistoryLive;
    _Bool _isPlaying;
    _Bool _isInPreview;
    _Bool _isPreviewMuted;
    _Bool _isMutedByAdVideo;
    _Bool _hasPlayedOpenScreenAd;
    UINavigationController *_presentingNavCon;
    MMLivePivotViewController *_pivotViewController;
    MMFinderPivotLiveViewController *_controller;
    MMFinderLiveTask *_liveTask;
    MMFinderLiveContentVM *_contentVM;
    UINavigationController *_navControl;
    UIView *_scrollFxMaskView;
    UIView *_scrollFxBlurCoverView;
    UIView *_backgroundBlurView;
    LiveSdkInfo *_currentLiveSdkInfo;
    unsigned long long _audienceStartLiveMs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPlayedOpenScreenAd; // @synthesize hasPlayedOpenScreenAd=_hasPlayedOpenScreenAd;
@property(nonatomic) unsigned long long audienceStartLiveMs; // @synthesize audienceStartLiveMs=_audienceStartLiveMs;
@property(retain, nonatomic) LiveSdkInfo *currentLiveSdkInfo; // @synthesize currentLiveSdkInfo=_currentLiveSdkInfo;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIView *scrollFxBlurCoverView; // @synthesize scrollFxBlurCoverView=_scrollFxBlurCoverView;
@property(retain, nonatomic) UIView *scrollFxMaskView; // @synthesize scrollFxMaskView=_scrollFxMaskView;
@property(nonatomic) _Bool isMutedByAdVideo; // @synthesize isMutedByAdVideo=_isMutedByAdVideo;
@property(nonatomic) _Bool isPreviewMuted; // @synthesize isPreviewMuted=_isPreviewMuted;
@property(nonatomic) __weak UINavigationController *navControl; // @synthesize navControl=_navControl;
@property(retain, nonatomic) MMFinderLiveContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool isInPreview; // @synthesize isInPreview=_isInPreview;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isWatchHistoryLive; // @synthesize isWatchHistoryLive=_isWatchHistoryLive;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderPivotLiveViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak MMLivePivotViewController *pivotViewController; // @synthesize pivotViewController=_pivotViewController;
@property(nonatomic) __weak UINavigationController *presentingNavCon; // @synthesize presentingNavCon=_presentingNavCon;
- (void)onFinderPivotLiveViewController:(id)arg1 requestReplacementWithReplayForTaskId:(id)arg2;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomIn;
- (void)preJoinLive;
- (void)preInitialTaskAndController;
@property(readonly) WCFinderDataItem *dataItem;
- (void)checkAndFinishCurrentOpenScreenAdAfterTimeout;
- (_Bool)tryShowOpenScreenAdvertisement;
- (void)updateAudienceStartLiveTime;
- (_Bool)isFollowState;
- (struct CGRect)getWindowBounds;
- (double)blurCoverViewAlphaForIntensity:(double)arg1;
- (void)clearPivotScrollingFx;
- (void)setPivotScrollingFxWithIntensity:(double)arg1;
- (void)checkAndResumeLive;
- (void)updateSafeAreaInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onLiveComplete;
- (void)layoutController;
- (id)liveController;
- (void)endLive;
- (_Bool)startLiveWithIsRejoin:(_Bool)arg1 fromSrc:(unsigned long long)arg2;
- (void)startRejoinLive;
- (void)startLive:(unsigned long long)arg1;
- (void)stopPreview;
- (void)startPreviewMuted:(_Bool)arg1 isInScroll:(_Bool)arg2;
- (void)startPreview;
- (void)clearController;
- (void)checkController;
- (void)prepareController;
- (void)prepareLiveTask;
- (void)updateLiveSdkInfo:(id)arg1 finderUserName:(id)arg2;
- (void)initControllerViewSettings;
- (void)loadView;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

