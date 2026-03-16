//
// WCPLAVConfig.m
//

#import "WCPLAVConfig.h"

static NSString *const kWCPLAVTPOn = @"kWCPLAVTPOn";

@implementation WCPLAVConfig

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
    _thirdPartyPlaybackEnabled = [self.defaults boolForKey:kWCPLAVTPOn];
}

- (void)setThirdPartyPlaybackEnabled:(BOOL)thirdPartyPlaybackEnabled {
    _thirdPartyPlaybackEnabled = thirdPartyPlaybackEnabled;
    [self.defaults setBool:thirdPartyPlaybackEnabled forKey:kWCPLAVTPOn];
}

- (BOOL)TPOn {
    return self.thirdPartyPlaybackEnabled;
}

- (void)setTPOn:(BOOL)TPOn {
    self.thirdPartyPlaybackEnabled = TPOn;
}

@end
