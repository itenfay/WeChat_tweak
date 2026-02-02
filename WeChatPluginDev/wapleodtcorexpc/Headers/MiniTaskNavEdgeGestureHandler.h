//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol MiniTaskEdgeGestureHandlerDelegate;

@interface MiniTaskNavEdgeGestureHandler : NSObject
{
    _Bool _shouldAutoComplete;
    unsigned int _edgeGestureType;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    id <MiniTaskEdgeGestureHandlerDelegate> _delegate;
    UIViewController *_toVC;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) unsigned int edgeGestureType; // @synthesize edgeGestureType=_edgeGestureType;
@property(nonatomic) _Bool shouldAutoComplete; // @synthesize shouldAutoComplete=_shouldAutoComplete;
@property(nonatomic) __weak UIViewController *toVC; // @synthesize toVC=_toVC;
@property(nonatomic) __weak id <MiniTaskEdgeGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
- (_Bool)isSweepFastInVelocity:(struct CGPoint)arg1;
- (double)progressFromCurGesturer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handlerScreenEdgeGesture:(id)arg1;
- (id)screenEdgeGesture;
- (_Bool)isInteracting;
- (void)initEdgeGestureWithEdgeGestureType:(unsigned int)arg1;
- (id)initWithEdgeGestureType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

