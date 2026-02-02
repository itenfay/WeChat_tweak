//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, NSString, UIView, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskPushAnimatedTransitioning : NSObject
{
    _Bool _isInteracting;
    _Bool _isPresent;
    UIViewController *animatedTransitionRespondViewController;
    UIView *_backgroundView;
    MinimizeTaskData *_launchTaskData;
    id <MiniTaskTransitionAnimationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MiniTaskTransitionAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MinimizeTaskData *launchTaskData; // @synthesize launchTaskData=_launchTaskData;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

