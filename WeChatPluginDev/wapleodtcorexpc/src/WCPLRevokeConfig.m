//
// WCPLRevokeConfig.m
//

#import "WCPLRevokeConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLRevokeEnable = @"kWCPLRevokeEnable";

@interface WCPLRevokeConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLRevokeConfig

+ (instancetype)sharedConfig {
    static WCPLRevokeConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLRevokeConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
    });
    return config;
}

- (instancetype)init {
    return [self initWithDefaults:[NSUserDefaults standardUserDefaults]];
}

+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults {
    return [[self alloc] initWithDefaults:defaults];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    if (self = [super init]) {
        _defaults = defaults ?: [NSUserDefaults standardUserDefaults];
        _revokeEnable = [_defaults boolForKey:kWCPLRevokeEnable];
    }
    return self;
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    [self.defaults setBool:revokeEnable forKey:kWCPLRevokeEnable];
}

@end
