//
// WCPLGestureActionHelpers.m
//

#import "WCPLGestureActionHelpers.h"

NSInteger WCPLNormalizeGestureActionValue(NSInteger action, BOOL isSelfAction) {
    if (action < 0) {
        return WCPLGestureActionQuote;
    }

    if (action == WCPLGestureActionRevoke && !isSelfAction) {
        return WCPLGestureActionQuote;
    }

    if (action > WCPLGestureActionForward) {
        return WCPLGestureActionQuote;
    }

    return action;
}

NSString *WCPLGestureActionName(NSInteger action, BOOL isSelfAction) {
    NSInteger normalized = WCPLNormalizeGestureActionValue(action, isSelfAction);
    switch (normalized) {
        case WCPLGestureActionQuote: return @"引用";
        case WCPLGestureActionDisabled: return @"关闭";
        case WCPLGestureActionDelete: return @"删除";
        case WCPLGestureActionRevoke: return @"撤回";
        case WCPLGestureActionRepeat: return @"复读";
        case WCPLGestureActionForward: return @"转发";
    }
    return @"引用";
}

