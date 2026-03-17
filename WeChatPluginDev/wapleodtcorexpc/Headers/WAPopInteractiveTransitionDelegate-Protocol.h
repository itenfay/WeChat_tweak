//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, WAMenuPopInteractiveTransition;

@protocol WAPopInteractiveTransitionDelegate <NSObject>

@optional
- (_Bool)onPopShouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)onPopBackInteractiveShouldRecognizeSimultaneously;
- (_Bool)onPopBackInteractiveRecognizeEdgeGesture;
- (void)onPopBackInteractiveTransitionDidEnd:(WAMenuPopInteractiveTransition *)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionWillEnd:(WAMenuPopInteractiveTransition *)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionChange:(WAMenuPopInteractiveTransition *)arg1 progress:(double)arg2;
- (void)onPopBackInteractiveTransitionBegin:(WAMenuPopInteractiveTransition *)arg1;
- (_Bool)onPopBackInteractiveTransitionShouldBegin:(WAMenuPopInteractiveTransition *)arg1;
@end

