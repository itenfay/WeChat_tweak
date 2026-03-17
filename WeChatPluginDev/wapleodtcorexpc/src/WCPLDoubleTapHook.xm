// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLObjcSafeCall.h"

%hook CommonMessageCellView

- (void)handleTapForReferMsg:(id)sender {
    if ([WCPLConfigCenter shared].gesture.tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (void)onLongTouch {
    if (wcpl_shouldSuppressLongPressForCell(self, @"onLongTouch")) {
        return;
    }
    %orig;
}

- (void)onLongTouch:(CGPoint)point {
    if (wcpl_shouldSuppressLongPressForCell(self, @"onLongTouch:")) {
        return;
    }
    %orig(point);
}

- (void)LongPressEvents {
    if (wcpl_shouldSuppressLongPressForCell(self, @"LongPressEvents")) {
        return;
    }
    %orig;
}

- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)location inCoordinateView:(id)coordinateView {
    if (wcpl_shouldSuppressLongPressForCell(self, @"triggerLongPressFor3DTouch")) {
        return;
    }
    %orig(location, coordinateView);
}

- (void)onShowOperationMenu {
    if (wcpl_shouldSuppressLongPressForCell(self, @"onShowOperationMenu")) {
        return;
    }
    %orig;
}

- (void)showOperationMenu {
    if (wcpl_shouldSuppressLongPressForCell(self, @"showOperationMenu")) {
        return;
    }
    %orig;
}

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForCell(self, @"onTouchUpInside")) {
        return;
    }
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if (wcpl_shouldSuppressTapForCell(self, @"onTouchEnded")) {
        return;
    }
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([self wchook_tryHandleDoubleTapFromTouches:touches event:event]) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"touchesEnded:withEvent:")) {
        return;
    }
    %orig(touches, event);
}

- (void)onDelayedTouchUpInside {
    if (wcpl_shouldSuppressTapForCell(self, @"onDelayedTouchUpInside")) {
        return;
    }
    %orig;
}

- (void)handleTapReferMessage {
    if ([WCPLConfigCenter shared].gesture.tapReferJumpEnable) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        // 检查总开关和是否有任何滑动功能启用
        if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
            WCPLLogDebug(@"Swipe begin blocked: feature disabled cell=%p", self);
            return NO;
        }
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        // 使用双向速度检测
        if (![WCHookSwipeUtilities isVelocityEligibleBidirectional:velocity]) {
            WCPLLogDebug(@"Swipe begin blocked: velocity ineligible cell=%p vx=%.2f vy=%.2f",
                         self,
                         velocity.x,
                         velocity.y);
            return NO;
        }
        // 检查滑动方向是否启用
        if (velocity.x < 0 && !config.swipeQuoteEnable) {
            // 左滑但左滑功能未启用
            WCPLLogDebug(@"Swipe begin blocked: left disabled cell=%p vx=%.2f vy=%.2f",
                         self,
                         velocity.x,
                         velocity.y);
            return NO;
        }
        if (velocity.x > 0 && !config.swipeRightEnable) {
            // 右滑但右滑功能未启用
            WCPLLogDebug(@"Swipe begin blocked: right disabled cell=%p vx=%.2f vy=%.2f",
                         self,
                         velocity.x,
                         velocity.y);
            return NO;
        }
        WCPLLogDebug(@"Swipe begin candidate: cell=%p vx=%.2f vy=%.2f", self, velocity.x, velocity.y);
    } else if (gestureRecognizer == self.wchook_doubleTapGesture) {
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        if (!config.doubleTapGestureEnable) {
            WCPLLogDebug(@"Double tap begin blocked: feature disabled cell=%p", self);
            return NO;
        }
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        if (!msgWrap) {
            WCPLLogDebug(@"Double tap begin blocked: message wrap unavailable cell=%p", self);
            return NO;
        }
        WCPLLogDebug(@"Double tap begin forced allow: cell=%p msg=%@", self, wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }

    BOOL result = %orig;
    if (gestureRecognizer == self.wchook_swipeGesture) {
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        WCPLLogDebug(@"Swipe begin result: cell=%p allow=%d vx=%.2f vy=%.2f",
                     self,
                     result ? 1 : 0,
                     velocity.x,
                     velocity.y);
    } else if (gestureRecognizer == self.wchook_doubleTapGesture) {
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        WCPLLogDebug(@"Double tap begin result: cell=%p allow=%d msg=%@",
                     self,
                     result ? 1 : 0,
                     wcpl_repeatMessageDebugInfo(msgWrap));
    }
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch {
    if (gestureRecognizer == self.wchook_doubleTapGesture) {
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        if (!config.doubleTapGestureEnable) {
            WCPLLogDebug(@"Double tap receive blocked: feature disabled cell=%p", self);
            return NO;
        }
        if (wcpl_viewIsReferJumpArea(touch.view)) {
            WCPLLogDebug(@"Double tap receive blocked: refer jump area cell=%p touchClass=%@",
                         self,
                         NSStringFromClass([touch.view class]));
            return NO;
        }
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        if (!msgWrap) {
            WCPLLogDebug(@"Double tap receive blocked: message wrap unavailable cell=%p touchClass=%@",
                         self,
                         NSStringFromClass([touch.view class]));
            return NO;
        }
        CGPoint pointInCell = [touch locationInView:(UIView *)self];
        WCPLTapHitZone zone = wcpl_tapGestureHitZoneForPoint(self, pointInCell, @"gesture_shouldReceive_scope");
        if (!wcpl_shouldAllowCustomTapForZone(self, msgWrap, zone)) {
            WCPLLogDebug(@"Double tap receive blocked: zone=%@ cell=%p touchClass=%@ point=(%.1f,%.1f)",
                         wcpl_tapHitZoneName(zone),
                         self,
                         NSStringFromClass([touch.view class]),
                         pointInCell.x,
                         pointInCell.y);
            return NO;
        }
        WCPLLogDebug(@"Double tap receive allow: cell=%p zone=%@ touchClass=%@ tapCount=%ld msg=%@",
                     self,
                     wcpl_tapHitZoneName(zone),
                     NSStringFromClass([touch.view class]),
                     (long)touch.tapCount,
                     wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }
    return YES;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        return NO;
    }
    if (gestureRecognizer == self.wchook_doubleTapGesture) {
        return YES;
    }
    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture && [otherGestureRecognizer isKindOfClass:[UIScreenEdgePanGestureRecognizer class]]) {
        return YES;
    }
    BOOL result = %orig;
    return result;
}

- (void)handleDoubleTapFrom:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"CommonMessageCellView.handleDoubleTapFrom")) {
        return;
    }
    %orig(sender);
}

- (void)onHeadImageDoubleClick:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"CommonMessageCellView.onHeadImageDoubleClick")) {
        return;
    }
    %orig(sender);
}

%end

%hook BaseMessageCellView

- (BOOL)supportDoubleTap {
    BOOL original = %orig;
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (config.doubleTapGestureEnable && wcpl_messageUsesTripleTapPolicy(self, msgWrap)) {
        return NO;
    }
    return original;
}

- (void)handleDoubleTapFrom:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"BaseMessageCellView.handleDoubleTapFrom")) {
        return;
    }
    %orig(sender);
}

- (void)onTouchUpInside {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(touches, event);
}

%end

%hook SystemMessageCellView

- (void)onTouchUpInside {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(touches, event);
}

- (void)onTap {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onClick {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onLinkClicked:(id)linkInfo withRect:(CGRect)rect {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(linkInfo, rect);
}

- (void)onWeAppLinkClicked:(id)linkInfo withRect:(CGRect)rect {
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(linkInfo, rect);
}

%end

%hook TextMessageCellView

- (BOOL)supportDoubleTap {
    BOOL original = %orig;
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (config.doubleTapGestureEnable && wcpl_messageUsesTripleTapPolicy(self, msgWrap)) {
        return NO;
    }
    return original;
}

- (void)showFloatPreviewForContentText {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (config.doubleTapGestureEnable && wcpl_messageUsesTripleTapPolicy(self, msgWrap)) {
        WCPLLogInfo(@"Native double tap blocked: scope=TextMessageCellView.showFloatPreviewForContentText class=%@",
                    NSStringFromClass([(id)self class]));
        return;
    }
    %orig;
}

- (void)showFloatPreviewWithForceUseOriginText:(BOOL)forceUseOriginText {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (config.doubleTapGestureEnable && wcpl_messageUsesTripleTapPolicy(self, msgWrap)) {
        WCPLLogInfo(@"Native double tap blocked: scope=TextMessageCellView.showFloatPreviewWithForce class=%@ force=%d",
                    NSStringFromClass([(id)self class]),
                    forceUseOriginText ? 1 : 0);
        return;
    }
    %orig(forceUseOriginText);
}

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"TextMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"TextMessageCellView.onTouchUpInside")) {
        return;
    }
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"TextMessageCellView.onTouchEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"TextMessageCellView.onTouchEnded")) {
        return;
    }
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if (WCPLObjcCallBool2(self, @selector(wchook_tryHandleDoubleTapFromTouches:event:), touches, event)) {
        return;
    }
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"TextMessageCellView.touchesEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"TextMessageCellView.touchesEnded")) {
        return;
    }
    if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(touches, event);
}

- (void)onDoubleTapTranslateView:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"TextMessageCellView.onDoubleTapTranslateView")) {
        return;
    }
    %orig(sender);
}

%end

%hook VoiceMessageCellView

- (BOOL)supportDoubleTap {
    BOOL original = %orig;
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (config.doubleTapGestureEnable && wcpl_messageUsesTripleTapPolicy(self, msgWrap)) {
        return NO;
    }
    return original;
}

- (void)onDoubleTapTranslateView:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"VoiceMessageCellView.onDoubleTapTranslateView")) {
        return;
    }
    %orig(sender);
}

- (void)onDoubleTapTextTranslateView:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"VoiceMessageCellView.onDoubleTapTextTranslateView")) {
        return;
    }
    %orig(sender);
}

%end

%hook WCPayBaseMessageCellView

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayBaseMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayBaseMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if (WCPLObjcCallBool2(self, @selector(wchook_tryHandleDoubleTapFromTouches:event:), touches, event)) {
        return;
    }
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayBaseMessageCellView.touchesEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayBaseMessageCellView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

%end

%hook WCPayC2CMessageCellView

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayC2CMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayC2CMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

%end

%hook WCPayThirdC2CMessageCellView

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayThirdC2CMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayThirdC2CMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

%end

%hook MMRichTextCoverView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMRichTextCoverView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

- (void)onSingleTap:(id)sender {
    if (wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"MMRichTextCoverView.onSingleTap")) {
        return;
    }
    %orig(sender);
}

- (BOOL)onClickPreViewWithPoint:(CGPoint)point DoubleClick:(BOOL)doubleClick {
    if (!doubleClick && wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"MMRichTextCoverView.onClickPreView")) {
        return YES;
    }
    if (doubleClick && wcpl_shouldBlockNativeDoubleTapForView(self, nil, @"MMRichTextCoverView.onClickPreView")) {
        return NO;
    }
    return %orig(point, doubleClick);
}

%end

%hook RichTextView

- (void)clickOnTextEvent:(id)event {
    if (wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"RichTextView.clickOnTextEvent")) {
        return;
    }
    %orig(event);
}

- (void)clickOnLinkEvent:(id)event {
    if (wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"RichTextView.clickOnLinkEvent")) {
        return;
    }
    %orig(event);
}

- (void)clickOnWeAppLinkEvent:(id)event {
    if (wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"RichTextView.clickOnWeAppLinkEvent")) {
        return;
    }
    %orig(event);
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if (wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"RichTextView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

%end

%hook CTRichTextView

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if (wcpl_tryOpenQuitMemberProfileByRichTextObject(self, @"CTRichTextView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

%end

%hook MMContentScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMContentScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook WCImageScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"WCImageScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook ImageScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"ImageScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MultiImageScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MultiImageScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MsgImgFullScreenContainer

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MsgImgFullScreenContainer.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook WCBizMultiImageBrowseViewContainer

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"WCBizMultiImageBrowseViewContainer.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MMImageBrowseView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMImageBrowseView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MMImageScrollViewHelper

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMImageScrollViewHelper.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MMUILongPressImageView

- (void)handleDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMUILongPressImageView.handleDoubleTap")) {
        return;
    }
    %orig(sender);
}

- (void)tapGestureRecognizerBegan:(id)recognizer tapCount:(unsigned long long)tapCount {
    if (tapCount >= 2 && wcpl_shouldBlockNativeDoubleTapForView(self, recognizer, @"MMUILongPressImageView.tapGestureRecognizerBegan")) {
        return;
    }
    %orig(recognizer, tapCount);
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    UIView *cellView = wcpl_findMessageCellAncestorView((UIView *)self);
    if (WCPLObjcCallBool2(cellView, @selector(wchook_tryHandleDoubleTapFromTouches:event:), touches, event)) {
        return;
    }
    %orig(touches, event);
}

%end

%hook ImageMessageCellView

- (void)onTouchEnded {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.onTouchEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.onTouchEnded")) {
        return;
    }
    %orig;
}

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if (WCPLObjcCallBool2(self, @selector(wchook_tryHandleDoubleTapFromTouches:event:), touches, event)) {
        return;
    }
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.touchesEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

- (void)showImage {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.showImage.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.showImage")) {
        return;
    }
    %orig;
}

- (void)showImageNeedEdit:(BOOL)needEdit {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.showImageNeedEdit.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.showImageNeedEdit")) {
        return;
    }
    %orig(needEdit);
}

%end

// ==================== 左滑引用 Hook MMInputToolView ====================

%hook MMInputToolView

- (void)onTapMsgReplyView:(id)sender {
    if ([WCPLConfigCenter shared].gesture.tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromInputTool:self]) {
            return;
        }
    }
    %orig;
}

%end
