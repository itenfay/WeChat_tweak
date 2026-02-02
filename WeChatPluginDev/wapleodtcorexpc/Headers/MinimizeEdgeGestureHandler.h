//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol MinimizeEdgeGestureHandlerDelegate;

@interface MinimizeEdgeGestureHandler : NSObject
{
    _Bool _shouldForceCancel;
    id <MinimizeEdgeGestureHandlerDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    double _completionSpeed;
    struct CGPoint _gestureStartPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint gestureStartPoint; // @synthesize gestureStartPoint=_gestureStartPoint;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) __weak id <MinimizeEdgeGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMinimizationEdgeGesture:(id)arg1;
- (_Bool)isInteracting;
- (void)dealloc;

@end

