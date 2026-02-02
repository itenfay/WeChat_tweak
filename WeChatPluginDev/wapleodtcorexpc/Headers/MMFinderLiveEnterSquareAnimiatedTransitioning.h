//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveEnterSqaureTransitionContext, NSString, UIViewController;
@protocol MMFinderLiveEnterSquareAnimiatedDelegate;

@interface MMFinderLiveEnterSquareAnimiatedTransitioning : NSObject
{
    _Bool _isInteracting;
    _Bool _isPresent;
    _Bool _isPop;
    UIViewController *animatedTransitionRespondViewController;
    id <MMFinderLiveEnterSquareAnimiatedDelegate> _delegate;
    MMFinderLiveEnterSqaureTransitionContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool isPop; // @synthesize isPop=_isPop;
@property(nonatomic) __weak id <MMFinderLiveEnterSquareAnimiatedDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (double)finderLiveSquareAnimationTransitionDuration:(id)arg1;
- (void)finderLiveSquareAnimateTransition:(id)arg1;
- (void)initailFinderLiveSquareAnimationWithViewController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionContext:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

