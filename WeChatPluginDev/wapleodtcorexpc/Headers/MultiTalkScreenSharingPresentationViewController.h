//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDoodleController, MMDoodleToolbarItem, MultiTalkCornerContainerView, MultiTalkHDHeadView, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIView;
@protocol MultiTalkScreenSharingPresentationViewControllerDelegate;

@interface MultiTalkScreenSharingPresentationViewController
{
    _Bool _barsHidden;
    id <MultiTalkScreenSharingPresentationViewControllerDelegate> _delegate;
    UIView *_topBar;
    UIButton *_stopButton;
    MMDoodleController *_doodleController;
    MMDoodleToolbarItem *_microphoneItem;
    MMDoodleToolbarItem *_speakerItem;
    MultiTalkCornerContainerView *_cornerContainerView;
    MultiTalkHDHeadView *_talkingUserHeadView;
    UIImageView *_talkingVoiceIconView;
    NSString *_talkingUsername;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _doodleInterfaceOrientationMask;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long doodleInterfaceOrientationMask; // @synthesize doodleInterfaceOrientationMask=_doodleInterfaceOrientationMask;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool barsHidden; // @synthesize barsHidden=_barsHidden;
@property(copy, nonatomic) NSString *talkingUsername; // @synthesize talkingUsername=_talkingUsername;
@property(retain, nonatomic) UIImageView *talkingVoiceIconView; // @synthesize talkingVoiceIconView=_talkingVoiceIconView;
@property(retain, nonatomic) MultiTalkHDHeadView *talkingUserHeadView; // @synthesize talkingUserHeadView=_talkingUserHeadView;
@property(retain, nonatomic) MultiTalkCornerContainerView *cornerContainerView; // @synthesize cornerContainerView=_cornerContainerView;
@property(retain, nonatomic) MMDoodleToolbarItem *speakerItem; // @synthesize speakerItem=_speakerItem;
@property(retain, nonatomic) MMDoodleToolbarItem *microphoneItem; // @synthesize microphoneItem=_microphoneItem;
@property(retain, nonatomic) MMDoodleController *doodleController; // @synthesize doodleController=_doodleController;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak id <MultiTalkScreenSharingPresentationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)OnCameraVideoStateChange:(_Bool)arg1 CameraOn:(_Bool)arg2;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)stopSharingButtonDidClick:(id)arg1;
- (void)speakerItemDidClick:(id)arg1;
- (void)microphoneItemDidClick:(id)arg1;
- (void)doodleController:(id)arg1 requestImageWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)doodleControllerDidStopDoodling:(id)arg1;
- (void)doodleControllerWillStartDoodling:(id)arg1;
- (void)doodleController:(id)arg1 penItemDidClick:(id)arg2;
@property(readonly, nonatomic) UIView *doodleContentView;
@property(readonly, nonatomic) UIView *doodleToolsContainerView;
- (void)resumeSharing;
- (void)pauseSharing;
- (void)stopSharing;
- (void)startSharing;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)addTapGestureRecognizer;
- (void)refreshTalkingUserHeadViewWithUsername:(id)arg1;
- (void)hideTalkingViewsAnimated;
- (void)showTalkingViews;
- (_Bool)isShowingTalkingViews;
- (void)refreshTalkingViews;
- (void)updateTalkingUsernames:(id)arg1;
- (void)loadTalkingViews;
- (void)delayHideCornerViewAnimated;
- (void)loadCornerView;
- (void)showToastWhenCameraStatusChanged;
- (void)showToastWhenSpeakerStatusChanged;
- (void)refreshSpeakerToolbarItem;
- (void)loadSpeakerToolbarItems;
- (void)showToastWhenMicrophoneStatusChanged;
- (void)refreshMicrophoneToolbarItem;
- (void)loadMicrophoneToolbarItem;
- (void)loadDoodleController;
- (void)hideTopBarAnimated:(_Bool)arg1;
- (void)showTopBarAnimated:(_Bool)arg1;
- (void)loadTopBar;
- (void)dismiss;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

