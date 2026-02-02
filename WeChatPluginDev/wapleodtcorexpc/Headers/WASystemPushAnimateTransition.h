//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WASystemPushAnimateTransition : NSObject
{
    _Bool _forbidShadow;
    _Bool _animationComptible;
}

@property(nonatomic) _Bool animationComptible; // @synthesize animationComptible=_animationComptible;
@property(nonatomic) _Bool forbidShadow; // @synthesize forbidShadow=_forbidShadow;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)isPushAnimationUseNewImplementation;
- (id)initWithAnimationComptible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

