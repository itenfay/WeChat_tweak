//
// WCPLMenuItemIconHelpers.h
//
// 统一 MMMenuItem 图标应用逻辑（tint/renderingMode/KVC fallback）。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void WCPLApplyMenuItemIcon(id _Nullable menuItem,
                                             UIImage * _Nullable icon,
                                             UIColor * _Nullable tintColor);

NS_ASSUME_NONNULL_END

