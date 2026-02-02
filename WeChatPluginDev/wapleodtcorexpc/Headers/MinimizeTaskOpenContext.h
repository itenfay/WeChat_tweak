//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiniTaskNavigationController, MiniTaskTransitionContext, UINavigationController;

@interface MinimizeTaskOpenContext : NSObject
{
    UINavigationController *_presentingNavController;
    MiniTaskNavigationController *_containerNavController;
    MiniTaskTransitionContext *_transitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) MiniTaskNavigationController *containerNavController; // @synthesize containerNavController=_containerNavController;
@property(retain, nonatomic) UINavigationController *presentingNavController; // @synthesize presentingNavController=_presentingNavController;
- (id)rightEdgePanGestureRecognizer;
- (id)leftEdgePanGestureRecognizer;

@end

