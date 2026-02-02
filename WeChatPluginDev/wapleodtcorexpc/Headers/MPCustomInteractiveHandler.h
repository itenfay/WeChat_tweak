//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol MPCustomInteractiveHandlerDelegate;

@interface MPCustomInteractiveHandler : NSObject
{
    _Bool _shouldForceCancel;
    id <MPCustomInteractiveHandlerDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_transitioning;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <MPCustomInteractiveHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;
- (void)endInateractiveWithComplete:(_Bool)arg1 panGesture:(id)arg2;
- (void)updateInateractiveProgress:(double)arg1 panGesture:(id)arg2;
- (void)beginInateractive;
- (_Bool)isInteracting;
- (double)interactiveTransitioningProgress;
- (id)interactiveTransitioning;
- (id)initWithDelegate:(id)arg1;

@end

