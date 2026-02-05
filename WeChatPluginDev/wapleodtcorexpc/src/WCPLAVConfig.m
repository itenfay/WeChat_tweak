//
// WCPLAVConfig.m
//

#import "WCPLAVConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLAVTPOn = @"kWCPLAVTPOn";

@implementation WCPLAVConfig

+ (instancetype)sharedConfig {
    static WCPLAVConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLAVConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        _thirdPartyPlaybackEnabled = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLAVTPOn];
    }
    return self;
}

- (void)setThirdPartyPlaybackEnabled:(BOOL)thirdPartyPlaybackEnabled {
    _thirdPartyPlaybackEnabled = thirdPartyPlaybackEnabled;
    [[NSUserDefaults standardUserDefaults] setBool:thirdPartyPlaybackEnabled forKey:kWCPLAVTPOn];
}

- (BOOL)TPOn {
    return self.thirdPartyPlaybackEnabled;
}

- (void)setTPOn:(BOOL)TPOn {
    self.thirdPartyPlaybackEnabled = TPOn;
}

@end
