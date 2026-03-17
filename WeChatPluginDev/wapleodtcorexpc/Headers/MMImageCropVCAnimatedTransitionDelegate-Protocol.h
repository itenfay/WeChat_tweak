//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImageView;
@protocol UIViewControllerAnimatedTransitioning;

@protocol MMImageCropVCAnimatedTransitionDelegate <NSObject>
- (void)onPopTransitionEnd:(id <UIViewControllerAnimatedTransitioning>)arg1 isComplete:(_Bool)arg2;
- (void)onPopTransitionInAnimateDuration:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (void)onPopTransitionBegan:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (struct CGRect)onPopTransitionGetImageFinalFrame;
- (void)onPushTransitionAnimateImageEnd:(id <UIViewControllerAnimatedTransitioning>)arg1 animatedImageView:(UIImageView *)arg2 completion:(void (^)(_Bool))arg3;
- (void)onPushTransitionEnd:(id <UIViewControllerAnimatedTransitioning>)arg1 isComplete:(_Bool)arg2;
- (void)onPushTransitionInAnimateDuration:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (void)onPushTransitionBegan:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (struct CGRect)onPushTransitionGetImageFinalFrame;
@end

