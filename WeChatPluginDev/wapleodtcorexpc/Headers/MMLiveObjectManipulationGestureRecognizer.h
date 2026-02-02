//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@class NSString;

@interface MMLiveObjectManipulationGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _currentTouchPosition;
    struct CGAffineTransformComponents _transformComponents;
    struct CGAffineTransformComponents _transformComponentsAtGesetureBeginning;
}

@property(nonatomic) struct CGPoint currentTouchPosition; // @synthesize currentTouchPosition=_currentTouchPosition;
@property(nonatomic) struct CGAffineTransformComponents transformComponentsAtGesetureBeginning; // @synthesize transformComponentsAtGesetureBeginning=_transformComponentsAtGesetureBeginning;
@property(nonatomic) struct CGAffineTransformComponents transformComponents; // @synthesize transformComponents=_transformComponents;
- (struct CGAffineTransformComponents)decomposeManipulationTransform:(struct CGAffineTransform)arg1;
- (void)resetState;
- (void)updateTransformWithTouchA:(id)arg1 andTouchB:(id)arg2;
- (void)updateTransformWithTouch:(id)arg1;
- (void)updateTransformAndTouchPositionWithTouches:(id)arg1;
- (void)updateTouchPositionWithTouches:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)overrideCurrentTransformComponents:(struct CGAffineTransformComponents)arg1;
@property(readonly, nonatomic) struct CGAffineTransform transformAtGesetureBeginning;
@property(readonly, nonatomic) struct CGAffineTransform transform;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

