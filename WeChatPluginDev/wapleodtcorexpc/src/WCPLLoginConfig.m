//
// WCPLLoginConfig.m
//

#import "WCPLLoginConfig.h"

static NSString *const kWCPLEmulateIPadLoginEnable = @"kWCPLEmulateIPadLoginEnable";

@implementation WCPLLoginConfig

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
    _emulateIPadLoginEnable = [self.defaults boolForKey:kWCPLEmulateIPadLoginEnable];
}

- (void)setEmulateIPadLoginEnable:(BOOL)emulateIPadLoginEnable {
    _emulateIPadLoginEnable = emulateIPadLoginEnable;
    [self.defaults setBool:emulateIPadLoginEnable forKey:kWCPLEmulateIPadLoginEnable];
}

@end
