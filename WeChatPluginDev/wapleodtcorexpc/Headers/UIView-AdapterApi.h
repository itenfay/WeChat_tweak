//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (AdapterApi)
+ (void)universalSetAnimationTransition:(long long)arg1 forView:(id)arg2 cache:(_Bool)arg3;
+ (void)universalSetAnimationBeginsFromCurrentState:(_Bool)arg1;
+ (void)universalSetAnimationRepeatAutoreverses:(_Bool)arg1;
+ (void)universalSetAnimationRepeatCount:(float)arg1;
+ (void)universalSetAnimationCurve:(long long)arg1;
+ (void)universalSetAnimationStartDate:(id)arg1;
+ (void)universalSetAnimationDelay:(double)arg1;
+ (void)universalSetAnimationDuration:(double)arg1;
+ (void)universalSetAnimationDidStopSelector:(SEL)arg1;
+ (void)universalSetAnimationWillStartSelector:(SEL)arg1;
+ (void)universalSetAnimationDelegate:(id)arg1;
+ (void)universalCommitAnimations;
+ (void)universalBeginAnimations:(id)arg1 context:(void *)arg2;
@end

