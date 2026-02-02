//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootComposingViewModel, MMUIButton, MMUIView, NSString, UIStackView, UIView, WCProgressMaskView;
@protocol MJShootPreviewViewControllerDelegate;

@interface MJShootPreviewViewController
{
    _Bool _isPresentingCropVC;
    MJShootComposingViewModel *_viewModel;
    id <MJShootPreviewViewControllerDelegate> _delegate;
    UIView *_renderView;
    MMUIButton *_exitButton;
    MMUIButton *_completeButton;
    MMUIButton *_clipButton;
    MMUIButton *_cropButton;
    UIStackView *_bottomButtonsContainer;
    MMUIView *_blackBGView;
    MMUIView *_bottomBar;
    WCProgressMaskView *_progressMaskView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPresentingCropVC; // @synthesize isPresentingCropVC=_isPresentingCropVC;
@property(retain, nonatomic) WCProgressMaskView *progressMaskView; // @synthesize progressMaskView=_progressMaskView;
@property(retain, nonatomic) MMUIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MMUIView *blackBGView; // @synthesize blackBGView=_blackBGView;
@property(retain, nonatomic) UIStackView *bottomButtonsContainer; // @synthesize bottomButtonsContainer=_bottomButtonsContainer;
@property(retain, nonatomic) MMUIButton *cropButton; // @synthesize cropButton=_cropButton;
@property(retain, nonatomic) MMUIButton *clipButton; // @synthesize clipButton=_clipButton;
@property(retain, nonatomic) MMUIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) MMUIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak id <MJShootPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJShootComposingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)_calculateRenderViewSize;
- (void)_removeExportProgressView;
- (void)_showExportProgressView;
- (void)_showAIGCContentFailedGeneratedToastIfNeeded;
- (void)_checkAIGCContentHasGeneratedInAssetGenerateCase;
- (void)_startExportingVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)didFailedAIGCComposingInAssetGeneration:(id)arg1;
- (void)didFinishAIGCComposingInAssetGeneration:(id)arg1;
- (void)didStartAIGCComposingInAssetGeneration:(id)arg1;
- (void)handleShootPreviewExportProgressNoti:(id)arg1;
- (void)cropViewControllerDidTapOnReset:(id)arg1;
- (void)cropViewControllerDidTapOnFlip:(id)arg1;
- (void)cropViewControllerDidTapOnRotate:(id)arg1;
- (void)cropViewControllerDidScaleContent:(id)arg1;
- (void)cropViewControllerDidMoveContent:(id)arg1;
- (void)cropViewController:(id)arg1 didFinishCroppingWithSpatialDesc:(id)arg2;
- (void)clipButtonTouchUpInside:(id)arg1;
- (void)cropButtonTouchUpInside:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)_setupViews;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

