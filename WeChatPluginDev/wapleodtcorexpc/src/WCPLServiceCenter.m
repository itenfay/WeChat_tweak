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

id WCPLGetServiceCenter(void) {
    static Class cachedCenterClass = Nil;
    static SEL cachedCenterSelector = NULL;
    static dispatch_once_t onceToken;

    dispatch_once(&onceToken, ^{
        NSArray<NSString *> *centerClassNames = @[@"MMServiceCenter", @"ServiceCenter"];
        NSArray<NSString *> *centerSelectors = @[
            @"defaultCenter",
            @"defaultServiceCenter",
            @"sharedCenter",
            @"sharedInstance",
            @"sharedServiceCenter"
        ];

        for (NSString *className in centerClassNames) {
            Class cls = objc_getClass(className.UTF8String);
            if (!cls) continue;
            for (NSString *selectorName in centerSelectors) {
                SEL selector = NSSelectorFromString(selectorName);
                if ([cls respondsToSelector:selector]) {
                    cachedCenterClass = cls;
                    cachedCenterSelector = selector;
                    return;
                }
            }
        }
    });

    return wcpl_callClassSelectorIfExists(cachedCenterClass, cachedCenterSelector);
}

id WCPLGetService(Class serviceClass) {
    if (!serviceClass) return nil;
    id center = WCPLGetServiceCenter();
    if (!center || ![center respondsToSelector:@selector(getService:)]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, @selector(getService:), serviceClass);
}

