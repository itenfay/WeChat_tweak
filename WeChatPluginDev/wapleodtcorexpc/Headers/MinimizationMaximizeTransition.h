//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MinimizationMaximizeTransitionDelegate, MinimizeTransitionInterface;

@interface MinimizationMaximizeTransition : NSObject
{
    NSString *_taskBizName;
    NSString *_taskBizKey;
    id <MinimizeTransitionInterface> _transitionDelegate;
    id <MinimizationMaximizeTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MinimizationMaximizeTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MinimizeTransitionInterface> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(copy, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(copy, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
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

