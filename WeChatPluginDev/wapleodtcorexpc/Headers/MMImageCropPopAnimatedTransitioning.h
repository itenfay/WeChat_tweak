//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMImageCropPopTransitionContext, NSString;
@protocol MMImageCropVCAnimatedTransitionDelegate;

@interface MMImageCropPopAnimatedTransitioning : NSObject
{
    MMImageCropPopTransitionContext *_context;
    id <MMImageCropVCAnimatedTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMImageCropVCAnimatedTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMImageCropPopTransitionContext *context; // @synthesize context=_context;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

