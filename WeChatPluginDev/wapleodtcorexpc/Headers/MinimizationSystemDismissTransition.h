//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MinimizationNewTransitionDelegate;

@interface MinimizationSystemDismissTransition : NSObject
{
    _Bool _isInteracting;
    id <MinimizationNewTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak id <MinimizationNewTransitionDelegate> delegate; // @synthesize delegate=_delegate;
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

