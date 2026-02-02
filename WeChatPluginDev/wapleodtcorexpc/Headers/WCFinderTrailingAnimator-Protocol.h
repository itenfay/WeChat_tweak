//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMinimizeAnimatorContext, WCFinderTransitionUserInfo;
@protocol WCFinderTrailingAnimator;

@protocol WCFinderTrailingAnimator <NSObject>

@optional
- (_Bool)shouldForceNotStartAnimation;
- (double)customAnimationDuration:(double)arg1 progress:(double)arg2;
- (void)onAnimationCleanUp:(_Bool)arg1;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (_Bool)shouldPinBackView;
- (_Bool)shouldDragDownAsCard;
- (_Bool)shouldGestureClosureAsCard;
- (_Bool)invalidWithIsClosure:(_Bool)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (id <WCFinderTrailingAnimator>)chooseAnimatorWithOther:(id <WCFinderTrailingAnimator> (^)(void))arg1;
- (void)onAnimationComplete:(_Bool)arg1 context:(WCFinderMinimizeAnimatorContext *)arg2;
- (void)beforeAnimiation:(WCFinderMinimizeAnimatorContext *)arg1;
- (void)startAnimation:(WCFinderMinimizeAnimatorContext *)arg1;
- (void)startAnimation:(WCFinderMinimizeAnimatorContext *)arg1 withoutAnimationBlockComplete:(void (^)(void))arg2;
@end

