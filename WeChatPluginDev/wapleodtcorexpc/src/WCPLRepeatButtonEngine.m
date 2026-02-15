#import "WCPLRepeatButtonEngine.h"
#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

@interface CommonMessageCellView : UIView
@end

@interface CommonMessageCellView (WCPLRepeatButtonEngineBridge)
- (void)wchook_updateRepeatButtonByNFQPrinciple;
- (void)wchook_hideRepeatButtonByNFQPrinciple;
- (BOOL)wchook_reportRepeatAnchorIfNeeded;
- (NSDictionary *)wchook_repeatAnchorContextForV2;
- (UIButton *)wchook_repeatButtonForV2EnsureCreate:(BOOL)createIfNeeded;
- (void)wchook_bindRepeatButtonForV2:(UIButton *)button wrap:(id)wrap messageKey:(NSString *)messageKey;
- (UIView *)wchook_bubbleAnchorView;
- (void)wchook_layoutRepeatButton:(UIButton *)button withBubbleView:(UIView *)bubbleView isSelf:(BOOL)isSelf;
- (void)wchook_clearRepeatAnchorAndButtonForCurrentEngine;
@end

@implementation WCPLRepeatButtonEngine

+ (void)cleanupForCell:(UIView *)cellView {
    if (![cellView isKindOfClass:objc_getClass("CommonMessageCellView")]) {
        return;
    }

    CommonMessageCellView *cell = (CommonMessageCellView *)cellView;
    if ([cell respondsToSelector:@selector(wchook_hideRepeatButtonByNFQPrinciple)]) {
        [cell wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }
    if ([cell respondsToSelector:@selector(wchook_clearRepeatAnchorAndButtonForCurrentEngine)]) {
        [cell wchook_clearRepeatAnchorAndButtonForCurrentEngine];
    }
}

+ (void)updateForCell:(UIView *)cellView {
    if (![cellView isKindOfClass:objc_getClass("CommonMessageCellView")]) {
        return;
    }

    CommonMessageCellView *cell = (CommonMessageCellView *)cellView;
    if ([cell respondsToSelector:@selector(wchook_updateRepeatButtonByNFQPrinciple)]) {
        [cell wchook_updateRepeatButtonByNFQPrinciple];
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        [self cleanupForCell:cell];
        return;
    }

    if (![cell respondsToSelector:@selector(wchook_reportRepeatAnchorIfNeeded)] ||
        ![cell respondsToSelector:@selector(wchook_repeatAnchorContextForV2)] ||
        ![cell respondsToSelector:@selector(wchook_repeatButtonForV2EnsureCreate:)] ||
        ![cell respondsToSelector:@selector(wchook_bindRepeatButtonForV2:wrap:messageKey:)] ||
        ![cell respondsToSelector:@selector(wchook_bubbleAnchorView)] ||
        ![cell respondsToSelector:@selector(wchook_layoutRepeatButton:withBubbleView:isSelf:)]) {
        return;
    }

    [cell wchook_reportRepeatAnchorIfNeeded];
    NSDictionary *context = [cell wchook_repeatAnchorContextForV2];
    NSString *messageKey = [context objectForKey:@"messageKey"];
    id wrap = [context objectForKey:@"wrap"];
    NSNumber *isSelfObj = [context objectForKey:@"isSelf"];

    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0 || !wrap) {
        [self cleanupForCell:cell];
        return;
    }

    Class msgWrapClass = objc_getClass("CMessageWrap");
    if (msgWrapClass && ![wrap isKindOfClass:msgWrapClass]) {
        [self cleanupForCell:cell];
        return;
    }

    UIButton *button = [cell wchook_repeatButtonForV2EnsureCreate:YES];
    if (![button isKindOfClass:[UIButton class]]) {
        return;
    }

    [cell wchook_bindRepeatButtonForV2:button wrap:wrap messageKey:messageKey];

    UIView *bubbleView = [cell wchook_bubbleAnchorView];
    if (![bubbleView isKindOfClass:[UIView class]]) {
        bubbleView = (UIView *)cell;
    }
    BOOL isSelf = [isSelfObj isKindOfClass:[NSNumber class]] ? isSelfObj.boolValue : NO;

    [cell wchook_layoutRepeatButton:button withBubbleView:bubbleView isSelf:isSelf];
    button.layer.cornerRadius = CGRectGetHeight(button.bounds) * 0.5f;
    CGFloat titleSize = MIN(14.0f, MAX(10.0f, CGRectGetHeight(button.bounds) * 0.55f));
    button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];

    if (button.superview != cell) {
        [button removeFromSuperview];
        [cell addSubview:button];
    }
    [cell bringSubviewToFront:button];
}

@end
