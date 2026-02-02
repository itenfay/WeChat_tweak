//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiniTaskInteractionGuideTransitionContext, MiniTaskTransitionContext;
@protocol UIViewControllerInteractiveTransitioning;

@interface MiniTaskViewControllerContext : NSObject
{
    id <UIViewControllerInteractiveTransitioning> _pushInteractionController;
    MiniTaskTransitionContext *_taskTransitionContext;
    MiniTaskInteractionGuideTransitionContext *_guideTransitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskInteractionGuideTransitionContext *guideTransitionContext; // @synthesize guideTransitionContext=_guideTransitionContext;
@property(retain, nonatomic) MiniTaskTransitionContext *taskTransitionContext; // @synthesize taskTransitionContext=_taskTransitionContext;
@property(retain, nonatomic) id <UIViewControllerInteractiveTransitioning> pushInteractionController; // @synthesize pushInteractionController=_pushInteractionController;

@end

