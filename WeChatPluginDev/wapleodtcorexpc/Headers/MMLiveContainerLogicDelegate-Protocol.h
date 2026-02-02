//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMLiveContainerLogicDelegate <NSObject>

@optional
- (_Bool)enableFinderLiveUsePIPMinimizeWindow;
- (long long)onLiveViewRequestPreviousOrientation;
- (void)onLiveContainerLogicHomePageBottomPlayerLiveViewAppearanceChanged:(_Bool)arg1;
- (void)onLiveHomePageBottomPlayerAttachLiveView;
- (void)onLiveMinimizeWindowDismissLiveView;
- (void)onLiveMinimizeWindowAttachLiveView;
- (void)onLiveViewMinimizedWindowDismiss;
- (void)onLiveViewMinimizedWindowShowed;
- (void)onLiveViewMinimizedWindowWillShow;
- (void)onLiveViewMinimizeInteractiveDidEnd;
- (void)onLiveViewMinimizeInteractiveWillEnd;
- (void)onLiveViewExtendFromCollapseAnimationDidEnd;
- (void)onLiveViewExtendFromCollapseAnimationWillStart;
- (void)onLiveViewCollapseAnimationWillStart;
- (void)onLiveViewCollapseAnimationWillStartBeforeAdjustRotation;
- (void)onLiveViewCollapseAnimationDidEnd;
- (void)onLiveViewQuitAnimationDidEndExitLive:(_Bool)arg1;
- (void)onLiveViewQuitAnimationDidEnd;
- (void)onLiveViewQuitAnimationWillStart;
- (void)onLiveViewExtendAnimationDidEnd;
@end

