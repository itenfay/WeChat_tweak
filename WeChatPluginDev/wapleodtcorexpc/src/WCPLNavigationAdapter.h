//
// WCPLNavigationAdapter.h
//
// 导航适配层，统一视图与导航栈访问入口。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT UIView * _Nullable WCPLNavigationAdapterLoadedView(id _Nullable viewController);
FOUNDATION_EXPORT UINavigationController * _Nullable WCPLNavigationAdapterNavigationController(id _Nullable viewController);
FOUNDATION_EXPORT NSUInteger WCPLNavigationAdapterNavigationDepth(id _Nullable viewController);
FOUNDATION_EXPORT BOOL WCPLNavigationAdapterIsOnNavigationStack(id _Nullable viewController);
FOUNDATION_EXPORT UIViewController * _Nullable WCPLNavigationAdapterTopVisibleViewController(void);

NS_ASSUME_NONNULL_END
