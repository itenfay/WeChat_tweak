//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WAAppOpenSheetModeParameter, WAWebViewController;

@protocol WAAppTansitionControllerDelegate <NSObject>

@optional
- (_Bool)shouldForbidShadowInTransition;
- (WAAppOpenSheetModeParameter *)sheetModeParameter;
- (unsigned long long)sheetLaunchMode;
- (void)sheetFrameDidChange:(struct CGRect)arg1;
- (void)sheetDismissalTransitionDidEnd:(_Bool)arg1;
- (void)sheetDismissalTransitionWillBegin;
- (void)sheetPresentationTransitionDidEnd:(_Bool)arg1;
- (void)sheetPresentationTransitionWillBegin;
- (_Bool)sheetShouldUseDraggingBarHeaderView;
- (UIView *)sheetHeaderViewInSheetLaunchMode;
- (_Bool)sheetBackgroundShouldBlurInSheetLaunchMode;
- (_Bool)sheetBackgroundUserInteractionEnabledInSheetLaunchMode;
- (UIColor *)sheetBackgroundColorInSheetLaunchMode;
- (void)sheetDragGestureInSheetLaunchModeDidEnd:(UIPanGestureRecognizer *)arg1;
- (void)sheetDragGestureInSheetLaunchModeDidBegin:(UIPanGestureRecognizer *)arg1;
- (void)sheetContentYDidChangeInSheetLaunchMode:(double)arg1;
- (_Bool)sheetCanRecoverAfterExpand;
- (_Bool)sheetShouldForbidDragDownGestureAfterExpand;
- (_Bool)sheetCanExpandToStatusBarAreaInSheetLaunchMode;
- (_Bool)sheetCanDragToExpandInSheetLaunchMode;
- (_Bool)sheetShouldRespondsToTapGestureInSheetLaunchMode:(UITapGestureRecognizer *)arg1;
- (_Bool)sheetShouldForbidDragDownGestureInSheetLaunchMode:(UIPanGestureRecognizer *)arg1;
- (_Bool)sheetShouldForbidDragUpGestureInSheetLaunchMode:(UIPanGestureRecognizer *)arg1;
- (_Bool)sheetShouldRespondsToDragGestureInSheetLaunchMode:(UIPanGestureRecognizer *)arg1;
- (unsigned long long)dismissType;
- (double)sheetCornerRadiusInSheetLaunchMode;
- (unsigned long long)sheetRectCornerInSheetLaunchMode;
- (double)sheetExpandedHeightInSheetLaunchMode;
- (struct CGSize)landscapeSheetSizeInSheetLaunchMode;
- (struct CGSize)sheetSizeInSheetLaunchMode;
- (void)onPresentationControllerDragToNormalAfterExpand;
- (void)onPresentationControllerDragToExpand:(_Bool)arg1;
- (void)onPresentationControllerWillDragToExpand:(_Bool)arg1;
- (void)onPresentationControllerDragToDismiss;
- (void)onTapPresentationControllerContainerBackground;
- (_Bool)dismissControllerNeedMask;
- (_Bool)dismissControllerNeedZoom;
- (_Bool)presentationControllerNeedMask;
- (_Bool)presentationControllerNeedZoom;
- (WAWebViewController *)currentTaskWebView;
- (WAWebViewController *)currentTaskNavigationStackFirstWebView;
- (WAWebViewController *)currentTaskFirstWebView;
@end

