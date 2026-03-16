//
// WCPLUIKitHelpers.m
//

#import "WCPLUIKitHelpers.h"

#import "WCPLTypeGuard.h"

NSString *WCPLApplicationStateDescription(UIApplicationState state) {
    switch (state) {
        case UIApplicationStateActive: return @"active";
        case UIApplicationStateInactive: return @"inactive";
        case UIApplicationStateBackground: return @"background";
    }
    return [NSString stringWithFormat:@"unknown(%ld)", (long)state];
}

UIWindow *WCPLKeyWindow(void) {
    UIApplication *application = [UIApplication sharedApplication];
    UIWindow *keyWindow = nil;

    if ([application respondsToSelector:@selector(connectedScenes)]) {
        NSSet *scenes = application.connectedScenes;
        for (id scene in scenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            for (UIWindow *window in windowScene.windows) {
                if (![window isKindOfClass:[UIWindow class]]) {
                    continue;
                }
                if (window.isKeyWindow) {
                    return window;
                }
                if (!keyWindow && !window.hidden && window.alpha > 0.01) {
                    keyWindow = window;
                }
            }
        }
    }

    NSArray<UIWindow *> *windows = WCPLArrayOrNil(application.windows);
    for (UIWindow *window in windows) {
        if (![window isKindOfClass:[UIWindow class]]) {
            continue;
        }
        if (window.isKeyWindow) {
            return window;
        }
        if (!keyWindow && !window.hidden && window.alpha > 0.01) {
            keyWindow = window;
        }
    }
    return keyWindow;
}

CGFloat WCPLSafeAreaTopInset(void) {
    UIWindow *window = WCPLKeyWindow();
    if ([window isKindOfClass:[UIWindow class]]) {
        if (@available(iOS 11.0, *)) {
            CGFloat inset = window.safeAreaInsets.top;
            if (inset > 0.0f) {
                return inset;
            }
        }
    }
    return 20.0f;
}

CGFloat WCPLStatusBarHeight(void) {
    UIWindow *window = WCPLKeyWindow();
    if (@available(iOS 13.0, *)) {
        UIWindowScene *scene = window.windowScene;
        UIStatusBarManager *manager = scene.statusBarManager;
        if ([manager isKindOfClass:[UIStatusBarManager class]]) {
            CGFloat height = CGRectGetHeight(manager.statusBarFrame);
            if (height > 0.0f) {
                return height;
            }
        }
    }
    return WCPLSafeAreaTopInset();
}

UIViewController *WCPLVisibleControllerFromController(UIViewController *controller) {
    UIViewController *cursor = [controller isKindOfClass:[UIViewController class]] ? controller : nil;
    if (!cursor) {
        return nil;
    }

    for (NSUInteger i = 0; i < 12; i++) {
        UIViewController *presented = cursor.presentedViewController;
        if ([presented isKindOfClass:[UIViewController class]] && !presented.isBeingDismissed) {
            cursor = presented;
            continue;
        }

        if ([cursor isKindOfClass:[UINavigationController class]]) {
            UIViewController *top = ((UINavigationController *)cursor).topViewController;
            if ([top isKindOfClass:[UIViewController class]] && top != cursor) {
                cursor = top;
                continue;
            }
        }

        if ([cursor isKindOfClass:[UITabBarController class]]) {
            UIViewController *selected = ((UITabBarController *)cursor).selectedViewController;
            if ([selected isKindOfClass:[UIViewController class]] && selected != cursor) {
                cursor = selected;
                continue;
            }
        }

        break;
    }

    return cursor;
}

UIViewController *WCPLTopVisibleViewController(void) {
    UIWindow *window = WCPLKeyWindow();
    UIViewController *root = [window.rootViewController isKindOfClass:[UIViewController class]]
        ? (UIViewController *)window.rootViewController
        : nil;
    return WCPLVisibleControllerFromController(root);
}
