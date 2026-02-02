//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class NSString, UIPanGestureRecognizer;

@interface MMModalTransitionAnimator : UIPercentDrivenInteractiveTransition
{
    _Bool _isTransitionFromPanGesture;
    _Bool _canceled;
    unsigned long long _transitionType;
    double _velocityThreshold;
    CDUnknownBlockType _transitionComplete;
    UIPanGestureRecognizer *_panGesture;
    unsigned long long _panGestureType;
    struct CGRect _presentedFinianFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long panGestureType; // @synthesize panGestureType=_panGestureType;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool isTransitionFromPanGesture; // @synthesize isTransitionFromPanGesture=_isTransitionFromPanGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType transitionComplete; // @synthesize transitionComplete=_transitionComplete;
@property(nonatomic) struct CGRect presentedFinianFrame; // @synthesize presentedFinianFrame=_presentedFinianFrame;
@property(nonatomic) double velocityThreshold; // @synthesize velocityThreshold=_velocityThreshold;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
- (void)handlePanGesture:(id)arg1;
- (void)setPanGesture:(id)arg1 forType:(unsigned long long)arg2;
- (_Bool)wantsInteractiveStart;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (struct CGRect)finalFrameForPresentedView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

