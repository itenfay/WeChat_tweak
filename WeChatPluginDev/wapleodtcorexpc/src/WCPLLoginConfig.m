//
// WCPLLoginConfig.m
//

#import "WCPLLoginConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLEmulateIPadLoginEnable = @"kWCPLEmulateIPadLoginEnable";

@interface WCPLLoginConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLLoginConfig

+ (instancetype)sharedConfig {
    static WCPLLoginConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLLoginConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
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
        _emulateIPadLoginEnable = [_defaults boolForKey:kWCPLEmulateIPadLoginEnable];
    }
    return self;
}

- (void)setEmulateIPadLoginEnable:(BOOL)emulateIPadLoginEnable {
    _emulateIPadLoginEnable = emulateIPadLoginEnable;
    [self.defaults setBool:emulateIPadLoginEnable forKey:kWCPLEmulateIPadLoginEnable];
}

@end
