//
// WCPLGestureActionHelpers.h
//
// 手势动作枚举与归一化/显示名收口，避免 UI 与运行时口径漂移。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, WCPLGestureAction) {
    WCPLGestureActionQuote = 0,
    WCPLGestureActionDisabled = 1,
    WCPLGestureActionDelete = 2,
    WCPLGestureActionRevoke = 3,
    WCPLGestureActionRepeat = 4,
    WCPLGestureActionForward = 5,
};

FOUNDATION_EXPORT NSInteger WCPLNormalizeGestureActionValue(NSInteger action, BOOL isSelfAction);
FOUNDATION_EXPORT NSString *WCPLGestureActionName(NSInteger action, BOOL isSelfAction);

NS_ASSUME_NONNULL_END

