//
// WCPLLocationConfig.m
//

#import "WCPLLocationConfig.h"

static NSString *const kWCPLFakeLocLat              = @"kWCPLFakeLocLat";
static NSString *const kWCPLFakeLocLng              = @"kWCPLFakeLocLng";
static NSString *const kWCPLFakeLocEnable           = @"kWCPLFakeLocEnable";

@implementation WCPLLocationConfig

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
    _fakeLatitude = [self.defaults doubleForKey:kWCPLFakeLocLat];
    _fakeLongitude = [self.defaults doubleForKey:kWCPLFakeLocLng];
    _fakeLocEnable = [self.defaults boolForKey:kWCPLFakeLocEnable];
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
