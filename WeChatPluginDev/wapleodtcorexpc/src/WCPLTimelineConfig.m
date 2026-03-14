//
// WCPLTimelineConfig.m
//

#import "WCPLTimelineConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLBlockTimelineBrandAdsEnable = @"kWCPLBlockTimelineBrandAdsEnable";

@interface WCPLTimelineConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLTimelineConfig

+ (instancetype)sharedConfig {
    static WCPLTimelineConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLTimelineConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
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
        _blockTimelineBrandAdsEnable = [_defaults boolForKey:kWCPLBlockTimelineBrandAdsEnable];
    }
    return self;
}

- (void)setBlockTimelineBrandAdsEnable:(BOOL)blockTimelineBrandAdsEnable {
    _blockTimelineBrandAdsEnable = blockTimelineBrandAdsEnable;
    [self.defaults setBool:blockTimelineBrandAdsEnable forKey:kWCPLBlockTimelineBrandAdsEnable];
}

@end
