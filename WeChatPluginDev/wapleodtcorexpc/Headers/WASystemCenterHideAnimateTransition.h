//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WAWebViewController;

@interface WASystemCenterHideAnimateTransition : NSObject
{
    _Bool _isInteracting;
    UIViewController *animatedTransitionRespondViewController;
    WAWebViewController *_currentWebviewController;
    struct CGRect _simulatedNativeAnimationScreenRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect simulatedNativeAnimationScreenRect; // @synthesize simulatedNativeAnimationScreenRect=_simulatedNativeAnimationScreenRect;
@property(nonatomic) __weak WAWebViewController *currentWebviewController; // @synthesize currentWebviewController=_currentWebviewController;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

