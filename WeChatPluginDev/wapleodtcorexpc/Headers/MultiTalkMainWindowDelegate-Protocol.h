//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage, UIView;

@protocol MultiTalkMainWindowDelegate <NSObject>
- (long long)onMultiTalkMainWindowRequestPreviousOrientation;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;

@optional
- (UIImage *)onMultiTalkMainWindowGetCustomSnapshot;
- (UIImage *)onMultiTalkMainWindowGetMinimizeImage;
- (UIView *)onMultiTalkMainWindowGetMainRootView;
@end

