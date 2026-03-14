//
// WCPLServiceCenterAdapter.m
//

#import "WCPLServiceCenterAdapter.h"

#import "WCPLServiceCenter.h"
#import "WCPLTypeGuard.h"
#import <objc/runtime.h>

id WCPLServiceCenterAdapterGetServiceCenter(void) {
    return WCPLGetServiceCenter();
}

id WCPLServiceCenterAdapterGetService(Class serviceClass) {
    if (!serviceClass) {
        return nil;
    }
    return WCPLGetService(serviceClass);
}

id WCPLServiceCenterAdapterGetServiceNamed(NSString *serviceClassName) {
    NSString *className = WCPLNonEmptyStringOrNil(serviceClassName);
    if (className.length == 0) {
        return nil;
    }
    return WCPLServiceCenterAdapterGetService(objc_getClass(className.UTF8String));
}
