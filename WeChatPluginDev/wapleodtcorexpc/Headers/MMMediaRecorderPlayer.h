//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMProgressViewEx, MMTimer, MMUILabel, NSString, UIButton, UINavigationController, UIView, WCNetworkMediaCore, WCNetworkMediaSlider;
@protocol MMMediaRecorderPlayerDelegate;

@interface MMMediaRecorderPlayer
{
    UINavigationController *_shareToUserNavController;
    UINavigationController *_shareToTimelineNavController;
    _Bool m_bIsFromTimeLine;
    _Bool m_bShouldBeFirstFrame;
    ForwardMessageLogicController *m_forwardLogic;
    int retryCount;
    _Bool m_inited;
    _Bool m_loop;
    _Bool m_hideStatusBar;
    _Bool m_hideMoreMenu;
    id <MMMediaRecorderPlayerDelegate> m_delegate;
    NSString *m_videoUrl;
    NSString *m_thumbUrl;
    NSString *m_title;
    NSString *m_desc;
    NSString *m_btText;
    WCNetworkMediaCore *m_mediaCore;
    UIView *m_bottomView;
    UIButton *m_hideBtn;
    MMUILabel *m_directLabel;
    UIView *m_directBg;
    MMUILabel *m_durationLabel;
    MMUILabel *m_currentLabel;
    MMUILabel *m_descLabel;
    UIButton *m_playBtn;
    UIButton *m_backBtn;
    UIButton *m_moreBtn;
    WCNetworkMediaSlider *m_progressSlider;
    MMProgressViewEx *m_loadingView;
    MMTimer *m_timer;
    struct CGSize m_videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) MMProgressViewEx *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) WCNetworkMediaSlider *m_progressSlider; // @synthesize m_progressSlider;
@property(retain, nonatomic) UIButton *m_moreBtn; // @synthesize m_moreBtn;
@property(retain, nonatomic) UIButton *m_backBtn; // @synthesize m_backBtn;
@property(retain, nonatomic) UIButton *m_playBtn; // @synthesize m_playBtn;
@property(retain, nonatomic) MMUILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) MMUILabel *m_currentLabel; // @synthesize m_currentLabel;
@property(retain, nonatomic) MMUILabel *m_durationLabel; // @synthesize m_durationLabel;
@property(retain, nonatomic) UIView *m_directBg; // @synthesize m_directBg;
@property(retain, nonatomic) MMUILabel *m_directLabel; // @synthesize m_directLabel;
@property(retain, nonatomic) UIButton *m_hideBtn; // @synthesize m_hideBtn;
@property(retain, nonatomic) UIView *m_bottomView; // @synthesize m_bottomView;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize;
@property(retain, nonatomic) WCNetworkMediaCore *m_mediaCore; // @synthesize m_mediaCore;
@property(retain, nonatomic) NSString *m_btText; // @synthesize m_btText;
@property(retain, nonatomic) NSString *m_desc; // @synthesize m_desc;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(retain, nonatomic) NSString *m_thumbUrl; // @synthesize m_thumbUrl;
@property(retain, nonatomic) NSString *m_videoUrl; // @synthesize m_videoUrl;
@property(nonatomic) _Bool m_hideMoreMenu; // @synthesize m_hideMoreMenu;
@property(nonatomic) _Bool m_hideStatusBar; // @synthesize m_hideStatusBar;
@property(nonatomic) _Bool m_loop; // @synthesize m_loop;
@property(nonatomic) _Bool m_inited; // @synthesize m_inited;
@property(nonatomic) __weak id <MMMediaRecorderPlayerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onForward;
- (void)onDirect;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldInteractivePop;
- (void)refreshCurrentTime;
- (id)stringFromTimeInterval:(double)arg1;
- (_Bool)isCanvasSightScene;
- (void)hideControlViews;
- (void)showControlViewsWithAutoHide;
- (void)showControlViews;
- (_Bool)isControlViewsHidden;
- (void)retryToLoadVideo;
- (void)onSliderChange;
- (void)onHideClick;
- (void)onPlayClick;
- (void)onBackClick;
- (void)updateVideoFrame:(long long)arg1;
- (void)updateAutoFrame;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)initMediaCore;
- (void)initView;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (double)getMediaCurrentPosition;
- (double)getMediaDuration;
- (_Bool)isInited;
- (id)initWithDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

