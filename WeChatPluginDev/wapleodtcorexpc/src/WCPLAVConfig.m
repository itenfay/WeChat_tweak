//
// WCPLAVConfig.m
//

#import "WCPLAVConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLAVTPOn = @"kWCPLAVTPOn";

@interface WCPLAVConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLAVConfig

+ (instancetype)sharedConfig {
    static WCPLAVConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLAVConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
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
        _thirdPartyPlaybackEnabled = [_defaults boolForKey:kWCPLAVTPOn];
    }
    return self;
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
