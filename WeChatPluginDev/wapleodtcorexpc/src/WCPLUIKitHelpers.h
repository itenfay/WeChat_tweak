//
// WCPLUIKitHelpers.h
//
// UIKit 相关的轻量 helper：统一窗口选择与诊断文本口径。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *WCPLApplicationStateDescription(UIApplicationState state);
FOUNDATION_EXPORT UIWindow * _Nullable WCPLKeyWindow(void);
FOUNDATION_EXPORT CGFloat WCPLSafeAreaTopInset(void);
FOUNDATION_EXPORT CGFloat WCPLStatusBarHeight(void);
FOUNDATION_EXPORT UIViewController * _Nullable WCPLVisibleControllerFromController(UIViewController * _Nullable controller);
FOUNDATION_EXPORT UIViewController * _Nullable WCPLTopVisibleViewController(void);

NS_ASSUME_NONNULL_END
