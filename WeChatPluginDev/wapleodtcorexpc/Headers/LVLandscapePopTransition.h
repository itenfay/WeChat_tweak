//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol LVLandscapeTransitionDelegate;

@interface LVLandscapePopTransition : NSObject
{
    _Bool _isTabbarTransparent;
    id <LVLandscapeTransitionDelegate> _delegate;
    UIViewController *_animatedTransitionRespondViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTabbarTransparent; // @synthesize isTabbarTransparent=_isTabbarTransparent;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(nonatomic) __weak id <LVLandscapeTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_popAnimateTransition:(id)arg1;
- (void)_rotateAnimateTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)playerDetailVC:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

