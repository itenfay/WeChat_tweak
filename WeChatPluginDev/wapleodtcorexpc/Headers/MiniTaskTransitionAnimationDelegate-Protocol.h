//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol UIViewControllerAnimatedTransitioning;

@protocol MiniTaskTransitionAnimationDelegate <NSObject>

@optional
- (void)onTransitionEnd:(id <UIViewControllerAnimatedTransitioning>)arg1 isComplete:(_Bool)arg2 isInteracting:(_Bool)arg3;
@end

