//
// WCPLLocationConfig.m
//

#import "WCPLLocationConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLFakeLocLat              = @"kWCPLFakeLocLat";
static NSString *const kWCPLFakeLocLng              = @"kWCPLFakeLocLng";
static NSString *const kWCPLFakeLocEnable           = @"kWCPLFakeLocEnable";

@implementation WCPLLocationConfig

+ (instancetype)sharedConfig {
    static WCPLLocationConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLLocationConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        _fakeLatitude = [defaults doubleForKey:kWCPLFakeLocLat];
        _fakeLongitude = [defaults doubleForKey:kWCPLFakeLocLng];
        _fakeLocEnable = [defaults boolForKey:kWCPLFakeLocEnable];
    }
    return self;
}

- (void)setFakeLatitude:(double)fakeLatitude {
    _fakeLatitude = fakeLatitude;
    [[NSUserDefaults standardUserDefaults] setDouble:fakeLatitude forKey:kWCPLFakeLocLat];
}

- (void)setFakeLongitude:(double)fakeLongitude {
    _fakeLongitude = fakeLongitude;
    [[NSUserDefaults standardUserDefaults] setDouble:fakeLongitude forKey:kWCPLFakeLocLng];
}

- (void)setFakeLocEnable:(BOOL)fakeLocEnable {
    _fakeLocEnable = fakeLocEnable;
    [[NSUserDefaults standardUserDefaults] setBool:fakeLocEnable forKey:kWCPLFakeLocEnable];
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
