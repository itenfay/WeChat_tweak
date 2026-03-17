//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, WCFinderTransitionUserInfo;

@protocol WCFinderFeedListTransitionHelperBehavior <NSObject>

@optional
- (NSString *)transitionHelperFetchCurrentPlayTid;
- (_Bool)pushSwipeGestureShouldBeginWithLocation:(struct CGPoint)arg1;
- (UIViewController *)pushSwipeGestureDestinationForViewController:(UIViewController *)arg1;
- (_Bool)enablePushSwipeGestureForViewController:(UIViewController *)arg1;
- (_Bool)shouldStartEdgeSwipeGestureWithPoint:(struct CGPoint)arg1;
- (_Bool)shouldStartNoneEdgeSwipeGestureWithPoint:(struct CGPoint)arg1;
- (_Bool)shouldSupportNonEdgeSwipeGestureForVC:(UIViewController *)arg1;
- (_Bool)shouldDragDownCloseInvokeForVC:(UIViewController *)arg1;
- (_Bool)enableDragDownToCloseForVC:(UIViewController *)arg1;
- (_Bool)shouldShowMinimizeQuickSwapeEntranceForVC:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (_Bool)shouldUseMinimizeAnimationFromVC:(UIViewController *)arg1 toVC:(UIViewController *)arg2 isClosure:(_Bool)arg3;
@end

