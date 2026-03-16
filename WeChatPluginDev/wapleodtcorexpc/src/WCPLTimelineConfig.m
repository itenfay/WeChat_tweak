//
// WCPLTimelineConfig.m
//

#import "WCPLTimelineConfig.h"

static NSString *const kWCPLBlockTimelineBrandAdsEnable = @"kWCPLBlockTimelineBrandAdsEnable";

@implementation WCPLTimelineConfig

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
    _blockTimelineBrandAdsEnable = [self.defaults boolForKey:kWCPLBlockTimelineBrandAdsEnable];
}

- (void)setBlockTimelineBrandAdsEnable:(BOOL)blockTimelineBrandAdsEnable {
    _blockTimelineBrandAdsEnable = blockTimelineBrandAdsEnable;
    [self.defaults setBool:blockTimelineBrandAdsEnable forKey:kWCPLBlockTimelineBrandAdsEnable];
}

@end
