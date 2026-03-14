//
// WCPLLocationConfig.m
//

#import "WCPLLocationConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLFakeLocLat              = @"kWCPLFakeLocLat";
static NSString *const kWCPLFakeLocLng              = @"kWCPLFakeLocLng";
static NSString *const kWCPLFakeLocEnable           = @"kWCPLFakeLocEnable";

@interface WCPLLocationConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLLocationConfig

+ (instancetype)sharedConfig {
    static WCPLLocationConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLLocationConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
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
        _fakeLatitude = [_defaults doubleForKey:kWCPLFakeLocLat];
        _fakeLongitude = [_defaults doubleForKey:kWCPLFakeLocLng];
        _fakeLocEnable = [_defaults boolForKey:kWCPLFakeLocEnable];
    }
    return self;
}

- (void)setFakeLatitude:(double)fakeLatitude {
    _fakeLatitude = fakeLatitude;
    [self.defaults setDouble:fakeLatitude forKey:kWCPLFakeLocLat];
}

- (void)setFakeLongitude:(double)fakeLongitude {
    _fakeLongitude = fakeLongitude;
    [self.defaults setDouble:fakeLongitude forKey:kWCPLFakeLocLng];
}

- (void)setFakeLocEnable:(BOOL)fakeLocEnable {
    _fakeLocEnable = fakeLocEnable;
    [self.defaults setBool:fakeLocEnable forKey:kWCPLFakeLocEnable];
}

- (double)lat {
    return self.fakeLatitude;
}

- (void)setLat:(double)lat {
    self.fakeLatitude = lat;
}

- (double)lng {
    return self.fakeLongitude;
}

- (void)setLng:(double)lng {
    self.fakeLongitude = lng;
}

@end
