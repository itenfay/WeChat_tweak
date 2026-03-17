#import <UIKit/UIKit.h>
#import <objc/runtime.h>

static id wcpl_presentingModalViewController(id self, SEL _cmd) {
    if (![self isKindOfClass:[UIViewController class]]) {
        return nil;
    }
    return ((UIViewController *)self).presentingViewController;
}

static id wcpl_modalViewController(id self, SEL _cmd) {
    if (![self isKindOfClass:[UIViewController class]]) {
        return nil;
    }
    return ((UIViewController *)self).presentedViewController;
}

__attribute__((constructor))
static void wcpl_installLegacyUIKitCompat(void) {
    Class viewControllerClass = [UIViewController class];
    if (!viewControllerClass) {
        return;
    }

    SEL presentingModalSel = NSSelectorFromString(@"presentingModalViewController");
    if (!class_getInstanceMethod(viewControllerClass, presentingModalSel)) {
        class_addMethod(viewControllerClass, presentingModalSel, (IMP)wcpl_presentingModalViewController, "@@:");
    }

    SEL modalSel = NSSelectorFromString(@"modalViewController");
    if (!class_getInstanceMethod(viewControllerClass, modalSel)) {
        class_addMethod(viewControllerClass, modalSel, (IMP)wcpl_modalViewController, "@@:");
    }
}
