//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCSplitDetailTransition;

@protocol WCSplitDetailTransitionDelegate <NSObject>
- (void)updateContentLayout;
- (_Bool)detailForceFullscreen;
- (void)onDetailViewControllerDidChangeMode:(_Bool)arg1;
- (void)onDetailViewControllerWillChangeMode:(_Bool)arg1;
- (void)onPresentingEndAppearance;
- (void)onPresentingBeginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)transitionTypeForAnimator:(WCSplitDetailTransition *)arg1;
- (_Bool)isInSplitMode;
@end

