//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol MMUIHalfScreenViewDismissInteractiveTransitionDelegate;

@interface MMUIHalfScreenViewDismissInteractiveTransition : NSObject
{
    UIPercentDrivenInteractiveTransition *m_interactivePopTransition;
    double _interactivePopProgress;
    id <MMUIHalfScreenViewDismissInteractiveTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMUIHalfScreenViewDismissInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double interactivePopProgress; // @synthesize interactivePopProgress=_interactivePopProgress;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=m_interactivePopTransition;
- (void)handlePopGesWithState:(long long)arg1 progress:(double)arg2 isSweepFastBlock:(CDUnknownBlockType)arg3;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
@property(readonly, nonatomic) _Bool isInteracting;

@end

