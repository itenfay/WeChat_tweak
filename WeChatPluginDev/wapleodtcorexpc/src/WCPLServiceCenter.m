//
// WCPLServiceCenter.m
//

#import "WCPLServiceCenter.h"
#import <dispatch/dispatch.h>
#import <objc/message.h>
#import <objc/runtime.h>

static id wcpl_callClassSelectorIfExists(Class cls, SEL selector) {
    if (!cls || !selector) return nil;
    if (![cls respondsToSelector:selector]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(cls, selector);
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
    id center = wcpl_getServiceCenterForClass(objc_getClass("MMServiceCenter"));
    if (center) return center;
    return wcpl_getServiceCenterForClass(objc_getClass("ServiceCenter"));
}

id WCPLGetService(Class serviceClass) {
    if (!serviceClass) return nil;

    id mmCenter = wcpl_getServiceCenterForClass(objc_getClass("MMServiceCenter"));
    id service = wcpl_getServiceFromCenter(mmCenter, serviceClass);
    if (service) return service;

    id legacyCenter = wcpl_getServiceCenterForClass(objc_getClass("ServiceCenter"));
    service = wcpl_getServiceFromCenter(legacyCenter, serviceClass);
    return service;
}
