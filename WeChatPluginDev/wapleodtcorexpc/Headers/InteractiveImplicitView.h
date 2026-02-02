//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImpactFeedbackGenerator, UITapGestureRecognizer;
@protocol InteractiveImplicitViewDelegate;

@interface InteractiveImplicitView
{
    double _shakeDistanceBetween;
    UITapGestureRecognizer *_tapGesture;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    double _nextShakeCoordinate;
}

- (void).cxx_destruct;
@property(nonatomic) double nextShakeCoordinate; // @synthesize nextShakeCoordinate=_nextShakeCoordinate;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) double shakeDistanceBetween; // @synthesize shakeDistanceBetween=_shakeDistanceBetween;
- (void)shake;
- (void)tap;
- (void)handleTapGesture:(id)arg1;
- (void)onWillStartWithOrigin:(inout struct CGPoint *)arg1 bounds:(struct CGRect)arg2;
- (void)updateFrameWithBottomBoundaryY:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <InteractiveImplicitViewDelegate> delegate; // @dynamic delegate;

@end

