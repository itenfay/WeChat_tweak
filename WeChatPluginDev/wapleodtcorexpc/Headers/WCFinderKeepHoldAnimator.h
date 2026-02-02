//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BTMinimizeAnimationView, NSString, WCFinderTransitionUserInfo;

@interface WCFinderKeepHoldAnimator : NSObject
{
    BTMinimizeAnimationView *_animationView;
    WCFinderTransitionUserInfo *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTransitionUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) BTMinimizeAnimationView *animationView; // @synthesize animationView=_animationView;
- (id)chooseAnimatorWithOther:(CDUnknownBlockType)arg1;
- (void)onAnimationCleanUp;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(id)arg2;
- (void)closeDirectlyWithAnimated:(_Bool)arg1;
- (void)onAnimationComplete:(_Bool)arg1 context:(id)arg2;
- (void)startAnimation:(id)arg1;
- (void)startAnimation:(id)arg1 withoutAnimationBlockComplete:(CDUnknownBlockType)arg2;
- (_Bool)shouldForceNotStartAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

