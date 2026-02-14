//
// WCPLLoginConfig.m
//

#import "WCPLLoginConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLEmulateIPadLoginEnable = @"kWCPLEmulateIPadLoginEnable";

@implementation WCPLLoginConfig

+ (instancetype)sharedConfig {
    static WCPLLoginConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLLoginConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        _emulateIPadLoginEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLEmulateIPadLoginEnable];
    }
    return self;
}

- (void)setEmulateIPadLoginEnable:(BOOL)emulateIPadLoginEnable {
    _emulateIPadLoginEnable = emulateIPadLoginEnable;
    [[NSUserDefaults standardUserDefaults] setBool:emulateIPadLoginEnable forKey:kWCPLEmulateIPadLoginEnable];
}

@end
