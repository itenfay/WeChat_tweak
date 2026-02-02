//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavSightInfo, FavSightView, MMScrollActionSheet, MMUIWindow, NSString, UIButton, WXFullScreenGestureRecognizer;
@protocol FavSightFullScreenViewControllerDelegate;

@interface FavSightFullScreenViewController
{
    FavSightInfo *m_sightInfo;
    FavSightView *m_sightView;
    UIButton *m_playAttachVideoButton;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    struct CGRect m_originalRect;
    MMUIWindow *m_fullScreenWindow;
    id <FavSightFullScreenViewControllerDelegate> m_delegate;
    MMScrollActionSheet *_scrollActionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(nonatomic) __weak id <FavSightFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTapSightIconView;
- (void)onToolViewAutoClose;
- (void)onTapCloseButton:(id)arg1;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)exitFullScreen:(id)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenSingleTap;
- (void)onClickDetailButton;
- (id)createWCNetworkMediaPlayer;
- (void)onClickPlayAttachVideoBtn;
- (void)saveSight:(id)arg1;
- (void)forwardSight:(id)arg1 contact:(id)arg2;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (_Bool)shouldAutorotate;
- (id)getFavForawrdViewController;
- (void)setPlayAttachVideoButtonFrame;
- (void)viewDidLayoutSubviews;
- (struct CGSize)sightVideoSize;
- (void)internalInitWithSightInfo:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithSightInfo:(id)arg1 withOriginalRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

