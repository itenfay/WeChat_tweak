//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIPercentDrivenInteractiveTransition, WCFinderMegaVideo, WCFinderPlayBar, WCPlayerView;

@interface WCFinderVideoFullScreenViewController
{
    WCFinderMegaVideo *_videoSource;
    WCPlayerView *_playerView;
    WCFinderPlayBar *_playBar;
    UIPercentDrivenInteractiveTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderPlayBar *playBar; // @synthesize playBar=_playBar;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCFinderMegaVideo *videoSource; // @synthesize videoSource=_videoSource;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)dragPanGesture:(id)arg1;
- (void)tapToExit:(id)arg1;
- (void)setUpBottomView;
- (void)setupClose;
- (_Bool)isLocalMedia:(id)arg1;
- (id)createPlayArgsForMedia:(id)arg1;
- (struct CGSize)videoSizeFromWCFinderMegaVideoMedia:(id)arg1;
- (void)setupUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

