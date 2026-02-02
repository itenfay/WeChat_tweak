//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WCFinderZoomAnimator;
@protocol WCFinderTrailingAnimator;

@protocol WCFinderZoomAnimatorBehavior <NSObject>

@optional
- (id <WCFinderTrailingAnimator>)zoomAnimator:(WCFinderZoomAnimator *)arg1 chooseWithOther:(id <WCFinderTrailingAnimator> (^)(void))arg2;
- (void)onAnimatorAnimationWillStart:(WCFinderZoomAnimator *)arg1;
- (void)onAnimatorDidEndExpand:(WCFinderZoomAnimator *)arg1;
- (void)onAnimatorWillBeginExpand:(WCFinderZoomAnimator *)arg1;
- (void)onAnimatorDidEndClosure:(WCFinderZoomAnimator *)arg1;
- (void)onAnimatorWillBeginClosure:(WCFinderZoomAnimator *)arg1;
- (_Bool)zoomAnimiatorShouldCacheSnapView;
- (_Bool)zoomAnimatorUseTranSnapViewWithSnapAgain;
- (UIView *)zoomAnimatorTransitionSnapView:(WCFinderZoomAnimator *)arg1 cornerRaidus:(double *)arg2;
- (NSString *)zoomAnimatorKey;
@end

