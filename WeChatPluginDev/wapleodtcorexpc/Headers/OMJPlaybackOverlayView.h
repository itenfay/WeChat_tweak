//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, OMJHandleBoxShadowView, OMJOverlayGuideLine, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer;
@protocol OMJPlaybackOverlayViewDelegate;

@interface OMJPlaybackOverlayView : UIView
{
    double _pinchOriginalScale;
    double _transformOriginalDistance;
    double _transformOriginalScale;
    struct CGPoint _transformPreviousPoint;
    vector_0e047154 _rotationSnapValues;
    vector_0e047154 _scaleSnapValues;
    vector_0e047154 _positionXSnapValues;
    vector_0e047154 _positionYSnapValues;
    UISelectionFeedbackGenerator *_snapFeedbackGenerator;
    UISelectionFeedbackGenerator *_rotationSnapFeedbackGenerator;
    UISelectionFeedbackGenerator *_scaleSnapFeedbackGenerator;
    UISelectionFeedbackGenerator *_positionSnapFeedbackGenerator;
    NSArray *_canvasViewConstrains;
    struct map<MJRectCorner, UIView *, std::less<MJRectCorner>, std::allocator<std::pair<const MJRectCorner, UIView *>>> _handlesByCorner;
    UIView *_transformHandle;
    long long _transformHandleCorner;
    _Bool _isDragging;
    _Bool _isGuideLineEnabled;
    OMJHandleBoxShadowView *_handleBox;
    id <OMJPlaybackOverlayViewDelegate> _delegate;
    double _canvasAspectRatio;
    double _maxScaleFactor;
    double _scaleSnapDistance;
    double _rotationSnapDistance;
    double _positionSnapDistance;
    UIView *_canvasView;
    UITapGestureRecognizer *_tapGR;
    UITapGestureRecognizer *_doubleTapGR;
    UIPinchGestureRecognizer *_pinchGR;
    UIRotationGestureRecognizer *_rotationGR;
    UIPanGestureRecognizer *_panGR;
    UIPanGestureRecognizer *_transformPanGR;
    OMJOverlayGuideLine *_horizontalGuideLine;
    OMJOverlayGuideLine *_verticalGuideLine;
    NSLayoutConstraint *_verticalGuideLineWidthConstraint;
    struct CGRect _canvasFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *verticalGuideLineWidthConstraint; // @synthesize verticalGuideLineWidthConstraint=_verticalGuideLineWidthConstraint;
@property(retain, nonatomic) OMJOverlayGuideLine *verticalGuideLine; // @synthesize verticalGuideLine=_verticalGuideLine;
@property(retain, nonatomic) OMJOverlayGuideLine *horizontalGuideLine; // @synthesize horizontalGuideLine=_horizontalGuideLine;
@property(readonly, nonatomic) UIPanGestureRecognizer *transformPanGR; // @synthesize transformPanGR=_transformPanGR;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGR; // @synthesize rotationGR=_rotationGR;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGR; // @synthesize pinchGR=_pinchGR;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGR; // @synthesize doubleTapGR=_doubleTapGR;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(readonly, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) double positionSnapDistance; // @synthesize positionSnapDistance=_positionSnapDistance;
@property(nonatomic) double rotationSnapDistance; // @synthesize rotationSnapDistance=_rotationSnapDistance;
@property(nonatomic) double scaleSnapDistance; // @synthesize scaleSnapDistance=_scaleSnapDistance;
@property(nonatomic) double maxScaleFactor; // @synthesize maxScaleFactor=_maxScaleFactor;
@property(nonatomic) _Bool isGuideLineEnabled; // @synthesize isGuideLineEnabled=_isGuideLineEnabled;
@property(nonatomic) struct CGRect canvasFrame; // @synthesize canvasFrame=_canvasFrame;
@property(nonatomic) double canvasAspectRatio; // @synthesize canvasAspectRatio=_canvasAspectRatio;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) __weak id <OMJPlaybackOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OMJHandleBoxShadowView *handleBox; // @synthesize handleBox=_handleBox;
- (void)configGuideLineWithStyle:(id)arg1;
- (void)hapticFeedback;
- (void)releasePositionSnapFeedbackGenerator;
- (void)releaseScaleSnapFeedbackGenerator;
- (void)releaseRotationSnapFeedbackGenerator;
- (void)instantiatePositionSnapFeedbackGenerator;
- (void)instantiateScaleSnapFeedbackGenerator;
- (void)instantiateRotationSnapFeedbackGenerator;
- (tuple_4c565a4a)snapPositionValue:(struct CGPoint)arg1;
- (tuple_1f478d1c)snapScaleValue:(double)arg1;
- (tuple_1f478d1c)snapRotationValue:(double)arg1;
- (void)notifyDidEndUpdatingPosition;
- (void)notifyDidUpdatePosition:(struct CGPoint)arg1;
- (void)notifyWillUpdatePosition;
- (void)notifyDidEndUpdatingRotationByControlHandle;
- (void)notifyDidEndUpdatingRotationByGesture;
- (void)notifyDidEndUpdatingRotation;
- (void)notifyDidUpdateRotation:(double)arg1;
- (void)notifyWillUpdateRotationByControlHandle;
- (void)notifyWillUpdateRotationByGesture;
- (void)notifyWillUpdateRotation;
- (void)notifyDidEndUpdatingScaleByControlHandle;
- (void)notifyDidEndUpdatingScaleByGesture;
- (void)notifyDidEndUpdatingScale;
- (void)notifyDidUpdateScale:(double)arg1;
- (void)notifyWillUpdateScaleByControlHandle;
- (void)notifyWillUpdateScaleByGesture;
- (void)notifyWillUpdateScale;
- (void)notifyDidDoubleTapWidgetAtPoint:(struct CGPoint)arg1;
- (void)notifyDidTapCanvasAtPoint:(struct CGPoint)arg1;
- (void)internalFinishRotation;
- (_Bool)internalUpdateRotation:(double)arg1;
- (void)internalPrepareForRotation;
- (void)internalFinishScale;
- (_Bool)internalUpdateScale:(double)arg1;
- (void)internalPrepareForScale;
- (void)handleRotationGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTransformPanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleBoxFlipButtonDidTouchUpInside:(id)arg1;
- (void)handleBoxDeleteButtonDidTouchUpInside:(id)arg1;
- (void)layoutHandle:(id)arg1 atCorner:(long long)arg2;
- (void)removeAllControlHandles;
- (void)removeControlHandleAtCorner:(long long)arg1;
- (void)addTransformHandle:(id)arg1 atCorner:(long long)arg2;
- (void)addControlHandle:(id)arg1 atCorner:(long long)arg2;
- (void)addHandleBoxItem:(id)arg1;
- (void)updateHandleBoxPresentationWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 scale:(double)arg3 rotation:(double)arg4 edgeInsets:(struct UIEdgeInsets)arg5 enabledRectCornerBits:(unsigned int)arg6;
- (void)updateHandleBoxModelWithPosition:(struct CGPoint)arg1 scale:(double)arg2 rotation:(double)arg3;
- (void)removeHandleBox;
- (void)addHandleBox;
- (void)addHandleBoxIfNeeded;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setupTransformPanGesture;
- (void)setupGestures;
- (void)layoutViews;
- (void)setupCanvasView;
- (void)setupGuideLines;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

