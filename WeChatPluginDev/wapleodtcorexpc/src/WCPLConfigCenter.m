//
// WCPLConfigCenter.m
//

#import "WCPLConfigCenter.h"
#import <dispatch/dispatch.h>

@implementation WCPLConfigCenter

+ (instancetype)shared {
    static WCPLConfigCenter *center = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        center = [[WCPLConfigCenter alloc] init];
    });
    return center;
}

- (instancetype)init {
    if (self = [super init]) {
        _redEnvelop = [WCPLRedEnvelopConfig sharedConfig];
        _gesture = [WCPLGestureConfig sharedConfig];
        _location = [WCPLLocationConfig sharedConfig];
        _ignore = [WCPLIgnoreConfig sharedConfig];
        _login = [WCPLLoginConfig sharedConfig];
        _av = [WCPLAVConfig sharedConfig];
        _revoke = [WCPLRevokeConfig sharedConfig];
    }
    return self;
}

@end
