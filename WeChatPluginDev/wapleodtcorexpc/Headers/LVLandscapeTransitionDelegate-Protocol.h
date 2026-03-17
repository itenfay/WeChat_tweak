//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol UIViewControllerAnimatedTransitioning;

@protocol LVLandscapeTransitionDelegate <NSObject>
- (void)onLVLandscapeTransitionEnd:(id <UIViewControllerAnimatedTransitioning>)arg1 transitionType:(unsigned long long)arg2 isComplete:(_Bool)arg3;
- (void)onLVLandscapeTransitionStart:(id <UIViewControllerAnimatedTransitioning>)arg1;
@end

