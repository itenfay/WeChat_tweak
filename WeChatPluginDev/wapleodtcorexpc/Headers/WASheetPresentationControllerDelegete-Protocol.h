//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WAAppOpenSheetModeParameter, WASheetPresentationController, WAWebViewController;

@protocol WASheetPresentationControllerDelegete <NSObject>
- (WAAppOpenSheetModeParameter *)sheetModeParameter;
- (unsigned long long)sheetLaunchMode;
- (WAWebViewController *)currentTaskWebView;
- (void)sheetFrameDidChange:(struct CGRect)arg1;
- (void)sheetPresentationController:(WASheetPresentationController *)arg1 dismissalTransitionDidEnd:(_Bool)arg2;
- (void)sheetDismissalTransitionWillBegin:(WASheetPresentationController *)arg1;
- (void)sheetPresentationController:(WASheetPresentationController *)arg1 presentTransitionDidEnd:(_Bool)arg2;
- (void)sheetPresentationTransitionWillBegin:(WASheetPresentationController *)arg1;
- (_Bool)sheetShouldUseDraggingBarHeaderView;
- (UIView *)headerViewForSheetPresentationController:(WASheetPresentationController *)arg1;
- (_Bool)sheetBackgroundUserInteractionEnabled;
- (_Bool)sheetBackgroundShouldBlur;
- (UIColor *)sheetBackgroundColor;
- (void)sheetDragGestureDidEnd:(UIPanGestureRecognizer *)arg1;
- (void)sheetDragGestureDidBegin:(UIPanGestureRecognizer *)arg1;
- (void)sheetContentYDidChangeTo:(double)arg1;
- (_Bool)sheetCanExpandToStatusBarArea;
- (_Bool)sheetCanDragToExpand;
- (_Bool)sheetCanRecoverAfterExpand;
- (_Bool)sheetShouldForbidDragDownGestureAfterExpand;
- (_Bool)sheetShouldRespondsToTapGesture:(UITapGestureRecognizer *)arg1;
- (_Bool)sheetShouldForbidDragDownGesture:(UIPanGestureRecognizer *)arg1;
- (_Bool)sheetShouldForbidDragUpGesture:(UIPanGestureRecognizer *)arg1;
- (_Bool)sheetShouldRespondsToDragGesture:(UIPanGestureRecognizer *)arg1;
- (double)sheetExpandedHeight;
- (double)sheetCornerRadius;
- (unsigned long long)sheetRectCorner;
- (void)onDragToNormalAfterExpand;
- (void)onWillDragToExpand:(_Bool)arg1;
- (void)onDragToExpand:(_Bool)arg1;
- (void)onDragToDismiss;
- (void)onTapBackground;
- (struct CGSize)landscapeSheetSize;
- (struct CGSize)sheetSize;
@end

