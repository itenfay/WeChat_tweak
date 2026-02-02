//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString;
@protocol H5GameViewControllerDelegate;

@interface H5GameViewController
{
    MMUIButton *menuButton;
    _Bool m_bFullscreen;
    long long m_orientation;
    _Bool m_bPaying;
    _Bool m_bResetPayingPwd;
    struct CGSize m_ButtonSize;
    double m_ButtonInset;
    _Bool m_bShouldUseCustomH5GameMenu;
    _Bool m_bViewWillDisappear;
    _Bool m_hasSetFullScreen;
    id <H5GameViewControllerDelegate> _delegate;
    NSString *_gameAppId;
    unsigned long long _lockedOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(retain, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;
@property(retain, nonatomic) id <H5GameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unlockOrientation;
- (void)lockOrientation:(long long)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)setFullScreen:(_Bool)arg1;
- (void)delaySetFullScreen:(_Bool)arg1;
- (_Bool)isOrientationLocked;
- (_Bool)shouldUseH5GameCustomMenu;
- (_Bool)isFullScreen;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)enterForeground;
- (void)enterBackground;
- (void)viewDidTransitionToNewSize;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)onWCPayJSApiEnd:(_Bool)arg1;
- (void)onWCPayJSApiBegin:(_Bool)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)onDeviceInfoClose;
- (void)onDeviceInfoOpen;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)restoreViewStatus;
- (void)gameDidSelecteItem:(id)arg1;
- (void)scrollActionSheet:(id)arg1 MenuItem:(id)arg2;
- (id)navigationBarBackgroundColor;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(_Bool)arg4 IsFloatLayer:(_Bool)arg5 GameAppId:(id)arg6;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(_Bool)arg4 IsFloatLayer:(_Bool)arg5;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 GameAppId:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

