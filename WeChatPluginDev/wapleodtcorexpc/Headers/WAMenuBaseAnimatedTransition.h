//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WAMenuAnimatedTransitionProtocol;

@interface WAMenuBaseAnimatedTransition : NSObject
{
    id <WAMenuAnimatedTransitionProtocol> _transitionDelegate;
    long long _operationType;
}

- (void).cxx_destruct;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(nonatomic) __weak id <WAMenuAnimatedTransitionProtocol> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
- (void)animateTransition:(id)arg1;
- (void)innerTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

