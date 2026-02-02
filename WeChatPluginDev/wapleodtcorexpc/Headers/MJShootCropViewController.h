//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootCropGuidelineMaskView, MJShootCropToolBar, MMUIImageView, MMUIView, NSString, OMJCamSpatialDesc, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISelectionFeedbackGenerator;
@protocol MJShootCropViewControllerDelegate;

@interface MJShootCropViewController
{
    _Bool _isStandardCanvas;
    id <MJShootCropViewControllerDelegate> _delegate;
    double _scaleFactor;
    double _scaleFactorRotationImplicit;
    unsigned long long _prevsSnapType;
    OMJCamSpatialDesc *_spatialDesc;
    OMJCamSpatialDesc *_spatialDescOriginal;
    MMUIImageView *_imageView;
    MJShootCropGuidelineMaskView *_cropGuidelineMaskView;
    MMUIView *_displayContainerView;
    MJShootCropToolBar *_toolBar;
    MMUIView *_bottomBar;
    UIPanGestureRecognizer *_panGR;
    UIPinchGestureRecognizer *_pinchGR;
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

+ (id)createButtonWithIconName:(id)arg1;
+ (struct CGPoint)scaleFactorWithFlipMode:(unsigned long long)arg1;
+ (double)rotationRadiansWithRotationMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGR; // @synthesize pinchGR=_pinchGR;
@property(retain, nonatomic) UIPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(retain, nonatomic) MMUIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MJShootCropToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) MMUIView *displayContainerView; // @synthesize displayContainerView=_displayContainerView;
@property(retain, nonatomic) MJShootCropGuidelineMaskView *cropGuidelineMaskView; // @synthesize cropGuidelineMaskView=_cropGuidelineMaskView;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) OMJCamSpatialDesc *spatialDescOriginal; // @synthesize spatialDescOriginal=_spatialDescOriginal;
@property(retain, nonatomic) OMJCamSpatialDesc *spatialDesc; // @synthesize spatialDesc=_spatialDesc;
@property(nonatomic) unsigned long long prevsSnapType; // @synthesize prevsSnapType=_prevsSnapType;
@property(nonatomic) double scaleFactorRotationImplicit; // @synthesize scaleFactorRotationImplicit=_scaleFactorRotationImplicit;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool isStandardCanvas; // @synthesize isStandardCanvas=_isStandardCanvas;
@property(nonatomic) __weak id <MJShootCropViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)confirmButtonDidTouchUpInside:(id)arg1;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)updateResetButtonEnabledState;
- (void)updateSpatialDescWithResetAction;
- (void)cropToolBarDidTapOnReset:(id)arg1;
- (void)updateSpatialDescWithFlipAction;
- (void)cropToolBarDidTapOnFlip:(id)arg1;
- (void)updateScaleFactorRotationImplicit;
- (void)updateSpatialDescWithRotationAction;
- (void)cropToolBarDidTapOnRotate:(id)arg1;
- (void)updateSpatialDescWithScale:(double)arg1;
- (void)updateSpatialDescWithTranslation:(struct CGPoint)arg1;
- (struct CGAffineTransform)createTranformWithSpatialDesc:(id)arg1;
- (void)updateImageViewWithSpatialDesc;
- (_Bool)checkAlignmentAndSnapIfNeededForView:(id)arg1 boundingView:(id)arg2 translation:(struct CGPoint *)arg3;
- (_Bool)checkBorderAndSnapIfNeededForView:(id)arg1 boundingView:(id)arg2 translation:(struct CGPoint *)arg3;
- (void)handleScaleForView:(id)arg1 boundingView:(id)arg2 pinchGR:(id)arg3;
- (void)handleTranslationForView:(id)arg1 boundingView:(id)arg2 panGR:(id)arg3;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)guidelineMaskView:(id)arg1 didUpdateGuidelineFrameBounds:(struct CGRect)arg2;
- (void)layoutImageView:(id)arg1 inContainerView:(id)arg2 scaleMode:(unsigned long long)arg3;
- (void)setupViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 spatialDesc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

