//
// WCPLAppContextInfo.m
//

#import "WCPLAppContextInfo.h"

#import <UIKit/UIKit.h>

NSString *WCPLBuildAppContextInfoString(void) {
    UIDevice *device = [UIDevice currentDevice];
    NSBundle *bundle = [NSBundle mainBundle];
    NSDictionary *info = [bundle infoDictionary] ?: @{};

    NSString *bundleId = [bundle bundleIdentifier] ?: @"";
    NSString *version = info[@"CFBundleShortVersionString"] ?: @"";
    NSString *build = info[@"CFBundleVersion"] ?: @"";
    NSString *process = [NSProcessInfo processInfo].processName ?: @"";
    NSString *systemName = device.systemName ?: @"iOS";
    NSString *systemVersion = device.systemVersion ?: @"";

    return [NSString stringWithFormat:@"进程: %@\n设备: %@ (%@)\n系统: %@ %@\nApp: %@ %@(%@)",
                                      process,
                                      device.model ?: @"",
                                      device.name ?: @"",
                                      systemName,
                                      systemVersion,
                                      bundleId,
                                      version,
                                      build];
}

