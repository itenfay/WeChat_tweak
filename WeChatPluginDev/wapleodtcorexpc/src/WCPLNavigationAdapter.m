//
// WCPLNavigationAdapter.m
//

#import "WCPLNavigationAdapter.h"

#import "WCPLUIKitHelpers.h"
#import "WCPLLogger.h"

#import <objc/message.h>
#import <objc/runtime.h>

UIView *WCPLNavigationAdapterLoadedView(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIViewController *controller = (UIViewController *)viewController;
    if ([controller respondsToSelector:@selector(isViewLoaded)] &&
        !((BOOL (*)(id, SEL))objc_msgSend)(controller, @selector(isViewLoaded))) {
        return nil;
    }

    UIView *view = controller.view;
    return [view isKindOfClass:[UIView class]] ? view : nil;
}

UINavigationController *WCPLNavigationAdapterNavigationController(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UINavigationController *navigationController = ((UIViewController *)viewController).navigationController;
    return [navigationController isKindOfClass:[UINavigationController class]] ? navigationController : nil;
}

NSUInteger WCPLNavigationAdapterNavigationDepth(id viewController) {
    UINavigationController *navigationController = WCPLNavigationAdapterNavigationController(viewController);
    NSArray<UIViewController *> *viewControllers = [navigationController.viewControllers isKindOfClass:[NSArray class]]
        ? navigationController.viewControllers
        : nil;
    return viewControllers.count;
}

BOOL WCPLNavigationAdapterIsOnNavigationStack(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UINavigationController *navigationController = WCPLNavigationAdapterNavigationController(viewController);
    if (![navigationController isKindOfClass:[UINavigationController class]]) {
        return YES;
    }

    return [navigationController.viewControllers containsObject:(UIViewController *)viewController];
}

UIViewController *WCPLNavigationAdapterTopVisibleViewController(void) {
    Class mgrClass = objc_getClass("CAppViewControllerManager");
    if (mgrClass && [mgrClass respondsToSelector:@selector(topMostController)]) {
        @try {
            id vc = ((id (*)(id, SEL))objc_msgSend)(mgrClass, @selector(topMostController));
            if ([vc isKindOfClass:[UIViewController class]]) {
                return (UIViewController *)vc;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return WCPLTopVisibleViewController();
}
