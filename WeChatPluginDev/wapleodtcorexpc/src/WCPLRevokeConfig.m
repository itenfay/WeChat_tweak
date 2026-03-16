//
// WCPLRevokeConfig.m
//

#import "WCPLRevokeConfig.h"

static NSString *const kWCPLRevokeEnable = @"kWCPLRevokeEnable";

@implementation WCPLRevokeConfig

+ (instancetype)sharedConfig {
    return [super sharedConfig];
}

+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults {
    return [super configWithDefaults:defaults];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    return [super initWithDefaults:defaults];
}

- (void)wcpl_loadFromDefaults {
    _revokeEnable = [self.defaults boolForKey:kWCPLRevokeEnable];
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    [self.defaults setBool:revokeEnable forKey:kWCPLRevokeEnable];
}

@end
