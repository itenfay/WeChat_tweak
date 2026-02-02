//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol MiniTaskPanGestureHandlerDelegate;

@interface MiniTaskPanGestureHandler : NSObject
{
    unsigned int _panGestureType;
    UIPanGestureRecognizer *_panGesture;
    id <MiniTaskPanGestureHandlerDelegate> _delegate;
    UIViewController *_toVC;
    double _resistanceParam;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) unsigned int panGestureType; // @synthesize panGestureType=_panGestureType;
@property(nonatomic) double resistanceParam; // @synthesize resistanceParam=_resistanceParam;
@property(nonatomic) __weak UIViewController *toVC; // @synthesize toVC=_toVC;
@property(nonatomic) __weak id <MiniTaskPanGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (_Bool)isSweepFastInVelocity:(struct CGPoint)arg1;
- (double)progressFromPanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (_Bool)isInteracting;
- (void)internalInit;
- (id)initWithPanGestureType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

