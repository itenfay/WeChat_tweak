//
// WCPLServiceCenter.m
//

#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import <dispatch/dispatch.h>
#import <objc/message.h>
#import <objc/runtime.h>

static id wcpl_callClassSelectorIfExists(Class cls, SEL selector) {
    if (!cls || !selector) return nil;
    if (![cls respondsToSelector:selector]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(cls, selector);
}

static id wcpl_getServiceCenterFromMMContext(void) {
    // WeChat 新版（例如 8.0.68）可通过 MMContext.currentContext 获取 getService:。
    Class ctxClass = objc_getClass("MMContext");
    if (!ctxClass) return nil;

    id ctx = wcpl_callClassSelectorIfExists(ctxClass, @selector(currentContext));
    if (!ctx) return nil;

    // 直接使用 MMContext 作为 ServiceCenter。
    if ([ctx respondsToSelector:@selector(getService:)]) {
        return ctx;
    }

    // 少数版本将 ServiceCenter 挂在 context.serviceCenter 上。
    if ([ctx respondsToSelector:@selector(serviceCenter)]) {
        @try {
            id center = ((id (*)(id, SEL))objc_msgSend)(ctx, @selector(serviceCenter));
            if (center && [center respondsToSelector:@selector(getService:)]) {
                return center;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static id wcpl_getServiceCenterForClass(Class cls) {
    if (!cls) return nil;

    const SEL selectors[] = {
        @selector(defaultCenter),
        @selector(defaultServiceCenter),
        @selector(sharedCenter),
        @selector(sharedInstance),
        @selector(sharedServiceCenter),
    };

    for (NSUInteger i = 0; i < sizeof(selectors) / sizeof(selectors[0]); i++) {
        id center = wcpl_callClassSelectorIfExists(cls, selectors[i]);
        if (center) {
            return center;
        }
    }

    return nil;
}

static id wcpl_getServiceFromCenter(id center, Class serviceClass) {
    if (!center || !serviceClass) return nil;
    if (![center respondsToSelector:@selector(getService:)]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, @selector(getService:), serviceClass);
}

id WCPLGetServiceCenter(void) {
    // 兼容：部分版本存在 MMServiceCenter 与 ServiceCenter 两套中心，且不同服务可能分布在不同中心内。
    id ctxCenter = wcpl_getServiceCenterFromMMContext();
    if (ctxCenter) return ctxCenter;

    id center = wcpl_getServiceCenterForClass(objc_getClass("MMServiceCenter"));
    if (center) return center;
    return wcpl_getServiceCenterForClass(objc_getClass("ServiceCenter"));
}

id WCPLGetService(Class serviceClass) {
    if (!serviceClass) return nil;

    id ctxCenter = wcpl_getServiceCenterFromMMContext();
    id service = wcpl_getServiceFromCenter(ctxCenter, serviceClass);
    if (service) return service;

    id mmCenter = wcpl_getServiceCenterForClass(objc_getClass("MMServiceCenter"));
    service = wcpl_getServiceFromCenter(mmCenter, serviceClass);
    if (service) return service;

    id legacyCenter = wcpl_getServiceCenterForClass(objc_getClass("ServiceCenter"));
    service = wcpl_getServiceFromCenter(legacyCenter, serviceClass);
    return service;
}
