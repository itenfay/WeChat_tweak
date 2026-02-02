//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMImageCropTransitionContext, MMLongImageCropResult, MMLongImageCropSliderBarView, MMLongImageCropTipsView, MMUIButton, NSString, UIImage, UIImageView, UIScrollView, UIView;
@protocol MMLongImageCropViewControllerDelelgate;

@interface MMLongImageCropViewController
{
    _Bool _hasSetupOriginCropResult;
    _Bool _isTopCropTracking;
    _Bool _isBottomCropTracking;
    MMImageCropTransitionContext *_transitionContext;
    id <MMLongImageCropViewControllerDelelgate> _delegate;
    UIImage *_originImage;
    MMLongImageCropResult *_originCropResult;
    UIView *_contentView;
    UIScrollView *_scrollView;
    UIImageView *_previewImageView;
    UIImage *_previewImage;
    MMLongImageCropSliderBarView *_sliderBar;
    UIView *_bottomBarView;
    MMUIButton *_closeBtn;
    MMUIButton *_doneBtn;
    MMUIButton *_resetBtn;
    MMLongImageCropTipsView *_topCropTipsView;
    MMLongImageCropTipsView *_bottomCropTipsView;
    CAGradientLayer *_topGradientMaskLayer;
    CAGradientLayer *_bottomGradientMaskLayer;
    double _topCroppedRatio;
    double _bottomCroppedRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBottomCropTracking; // @synthesize isBottomCropTracking=_isBottomCropTracking;
@property(nonatomic) _Bool isTopCropTracking; // @synthesize isTopCropTracking=_isTopCropTracking;
@property(nonatomic) double bottomCroppedRatio; // @synthesize bottomCroppedRatio=_bottomCroppedRatio;
@property(nonatomic) double topCroppedRatio; // @synthesize topCroppedRatio=_topCroppedRatio;
@property(retain, nonatomic) CAGradientLayer *bottomGradientMaskLayer; // @synthesize bottomGradientMaskLayer=_bottomGradientMaskLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientMaskLayer; // @synthesize topGradientMaskLayer=_topGradientMaskLayer;
@property(retain, nonatomic) MMLongImageCropTipsView *bottomCropTipsView; // @synthesize bottomCropTipsView=_bottomCropTipsView;
@property(retain, nonatomic) MMLongImageCropTipsView *topCropTipsView; // @synthesize topCropTipsView=_topCropTipsView;
@property(retain, nonatomic) MMUIButton *resetBtn; // @synthesize resetBtn=_resetBtn;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) MMLongImageCropSliderBarView *sliderBar; // @synthesize sliderBar=_sliderBar;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool hasSetupOriginCropResult; // @synthesize hasSetupOriginCropResult=_hasSetupOriginCropResult;
@property(retain, nonatomic) MMLongImageCropResult *originCropResult; // @synthesize originCropResult=_originCropResult;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(nonatomic) __weak id <MMLongImageCropViewControllerDelelgate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMImageCropTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void)onPopTransitionEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onPopTransitionInAnimateDuration:(id)arg1;
- (void)onPopTransitionBegan:(id)arg1;
- (struct CGRect)onPopTransitionGetImageFinalFrame;
- (void)onPushTransitionAnimateImageEnd:(id)arg1 animatedImageView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onPushTransitionEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onPushTransitionInAnimateDuration:(id)arg1;
- (void)onPushTransitionBegan:(id)arg1;
- (struct CGRect)onPushTransitionGetImageFinalFrame;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)layoutPreviewImage;
- (void)updatePreviewImage:(id)arg1;
- (void)cropPreviewImageWithTopCroppedRatio:(double)arg1 bottomCroppedRatio:(double)arg2;
- (void)updateCropTipsViewHidden:(_Bool)arg1;
- (void)updatePreviewWithCropFromDirection:(unsigned int)arg1 topCroppedRatio:(double)arg2 bottomCroppedRatio:(double)arg3;
- (void)setScrollViewToBottomRatio:(double)arg1;
- (void)setScrollViewToTopRatio:(double)arg1 animted:(_Bool)arg2;
- (void)onSliderBarEndTrackingCropFromDirection:(unsigned int)arg1 topCroppedRatio:(double)arg2 bottomCroppedRatio:(double)arg3;
- (void)onSliderBarContinueTrackingCropFromDirection:(unsigned int)arg1 croppedRatio:(double)arg2;
- (void)onSliderBarBeganTrackingCropFromDirection:(unsigned int)arg1;
- (void)onSliderBarMoveSliderPosWithTopOffsetRatio:(double)arg1 actionType:(unsigned int)arg2;
- (_Bool)isImageCropped;
- (void)refreshResetBtnState;
- (void)onResetBtnClick;
- (void)onDoneBtnClick;
- (void)onCloseBtnClick;
- (void)layoutContentView;
- (void)layoutBottomBarView;
- (void)viewDidLayoutSubviews;
- (void)initPreviewScrollView;
- (void)initSliderBar;
- (void)initContentView;
- (void)initBottomBarView;
- (_Bool)shouldInteractivePop;
- (_Bool)hidesStatusBar;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithOriginImage:(id)arg1 cropResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

