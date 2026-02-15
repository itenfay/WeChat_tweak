//
// WCPLTimelineConfig.m
//

#import "WCPLTimelineConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLBlockTimelineBrandAdsEnable = @"kWCPLBlockTimelineBrandAdsEnable";

@implementation WCPLTimelineConfig

+ (instancetype)sharedConfig {
    static WCPLTimelineConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLTimelineConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        _blockTimelineBrandAdsEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLBlockTimelineBrandAdsEnable];
    }
    return self;
}

- (void)setBlockTimelineBrandAdsEnable:(BOOL)blockTimelineBrandAdsEnable {
    _blockTimelineBrandAdsEnable = blockTimelineBrandAdsEnable;
    [[NSUserDefaults standardUserDefaults] setBool:blockTimelineBrandAdsEnable forKey:kWCPLBlockTimelineBrandAdsEnable];
}

@end
