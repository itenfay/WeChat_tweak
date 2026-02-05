//
// WCPLRevokeConfig.m
//

#import "WCPLRevokeConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLRevokeEnable = @"kWCPLRevokeEnable";

@implementation WCPLRevokeConfig

+ (instancetype)sharedConfig {
    static WCPLRevokeConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLRevokeConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        _revokeEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLRevokeEnable];
    }
    return self;
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    [[NSUserDefaults standardUserDefaults] setBool:revokeEnable forKey:kWCPLRevokeEnable];
}

@end
