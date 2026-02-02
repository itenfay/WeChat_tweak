//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, NSString, UIImageView, UIView, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskPopAnimatedTransitioning : NSObject
{
    _Bool _isInteracting;
    _Bool _isDismiss;
    UIViewController *animatedTransitionRespondViewController;
    UIView *_backgroundView;
    UIImageView *_fakeSnapshot;
    MinimizeTaskData *_launchTaskData;
    id <MiniTaskTransitionAnimationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MiniTaskTransitionAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MinimizeTaskData *launchTaskData; // @synthesize launchTaskData=_launchTaskData;
@property(retain, nonatomic) UIImageView *fakeSnapshot; // @synthesize fakeSnapshot=_fakeSnapshot;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
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

