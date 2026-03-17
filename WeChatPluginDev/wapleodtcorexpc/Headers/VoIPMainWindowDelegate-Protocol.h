//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage, UIView;

@protocol VoIPMainWindowDelegate <NSObject>
- (long long)onVoIPMainWindowRequestPreviousOrientation;
- (struct CGRect)onVoIPMainWindowRequestMinimizeFrame;
- (void)onVoIPMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onVoIPMainWindowExtendFromCollapseAnimationWillStart;
- (void)onVoIPMainWindowCollapseAnimationWillStart;
- (void)onVoIPMainWindowCollapseAnimationDidEnd;
- (void)onVoIPMainWindowQuitAnimationDidEnd;
- (void)onVoIPMainWindowQuitAnimationWillStart;
- (void)onVoIPMainWindowExtendAnimationDidEnd;
- (void)onVoIPMainWindowExtendAnimationWillStart;

@optional
- (UIImage *)onVoIPMainWindowGetCustomSnapshot;
- (UIImage *)onVoIPMainWindowGetMinimizeImage;
- (UIView *)onVoIPMainWindowGetMainRootView;
@end

