//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIGestureRecognizer, UIPercentDrivenInteractiveTransition;
@protocol WAPopInteractiveTransitionDelegate;

@interface WAMenuPopInteractiveTransition : NSObject
{
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    _Bool _shouldForceCancel;
    _Bool _isLeftEdge;
    _Bool _shouldAutoComplete;
    id <WAPopInteractiveTransitionDelegate> _delegate;
    NSString *_debugInfo;
    UIGestureRecognizer *_gesture;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(nonatomic) _Bool shouldAutoComplete; // @synthesize shouldAutoComplete=_shouldAutoComplete;
@property(nonatomic) _Bool isLeftEdge; // @synthesize isLeftEdge=_isLeftEdge;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;
@property(nonatomic) __weak id <WAPopInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (_Bool)isInteracting;
- (id)interactivePopTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

