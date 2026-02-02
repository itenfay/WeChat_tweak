//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTemplateCompositeTask, MJTemplateFullScreenControlView, MJTemplateFullScreenViewControllerParams, NSString, UIImageView, WCMomentsPlayerViewContainer, WCMomentsScrollActionSheet, WXFullScreenGestureRecognizer;
@protocol MJTemplateFullScreenViewControllerDelegate, MJTemplateFullScreenViewControllerPostDelegate;

@interface MJTemplateFullScreenViewController
{
    _Bool m_isPresented;
    id <MJTemplateFullScreenViewControllerDelegate> _delegate;
    id <MJTemplateFullScreenViewControllerPostDelegate> _postDelegate;
    MJTemplateFullScreenViewControllerParams *_params;
    MJTemplateCompositeTask *_compositeTask;
    WCMomentsPlayerViewContainer *_containerView;
    UIImageView *_thumbImageView;
    MJTemplateFullScreenControlView *_controlView;
    WXFullScreenGestureRecognizer *_fullScreenGesture;
    WCMomentsScrollActionSheet *_actionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture; // @synthesize fullScreenGesture=_fullScreenGesture;
@property(retain, nonatomic) MJTemplateFullScreenControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCMomentsPlayerViewContainer *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MJTemplateCompositeTask *compositeTask; // @synthesize compositeTask=_compositeTask;
@property(retain, nonatomic) MJTemplateFullScreenViewControllerParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <MJTemplateFullScreenViewControllerPostDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) __weak id <MJTemplateFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)compositeTaskDidStop:(id)arg1 withResult:(id)arg2 compositeSession:(id)arg3;
- (void)updateGestureContainerFrame;
- (void)playerViewContainerDidZoom:(id)arg1;
- (void)templateMoviePlayerWillStopPlaying:(id)arg1;
- (void)templateMoviePlayer:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)templateFullScreenControlViewDidBeginScrub:(id)arg1;
- (void)templateFullScreenControlViewDidClickShareButton:(id)arg1;
- (CDStruct_1b6d18a9)templateFullScreenControlViewGetCurrentPlaybackTime:(id)arg1;
- (id)forwardUserInfo;
- (id)thumbImageViewWithImageView:(id)arg1;
- (_Bool)shouldFixParentAppearEventWhenPresented;
- (void)onForwardOpDidCancel:(id)arg1;
- (void)onForwardOpDidSend:(id)arg1;
- (id)forwardVideoOpGetPlayerView:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)onActionSheetEventEnd;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteDisableItem:(id)arg2;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)saveVideo;
- (void)favoriteVideo;
- (void)forwardToContact:(id)arg1;
- (id)createRecentForwardView;
- (void)closeActionSheet;
- (void)updateActionSheetIfNeeded;
- (void)setupActionSheetItem;
- (void)setupActionSheet;
- (void)showActionSheet;
- (void)stopVideo;
- (void)playVideo;
- (void)closeFullScreen;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (struct CGRect)suitableThumbImageViewFrameForVideoSize:(struct CGSize)arg1;
- (struct CGSize)originVideoSize;
- (void)resetThumbImageViewFrame;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (void)changePresentedState:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)initFullScreenGesture;
- (void)initControlView;
- (void)addThumbImageView;
- (void)initContainerView;
- (void)viewDidLoad;
- (id)initWithCompositeTask:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

