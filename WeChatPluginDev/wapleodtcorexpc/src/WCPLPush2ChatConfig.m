//
// WCPLPush2ChatConfig.m
//

#import "WCPLPush2ChatConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLPush2ChatEnableForegroundPush = @"kWCPLPush2ChatEnableForegroundPush";
static NSString *const kWCPLPush2ChatEnableBackgroundPush = @"kWCPLPush2ChatEnableBackgroundPush";
static NSString *const kWCPLPush2ChatForegroundPushMode = @"kWCPLPush2ChatForegroundPushMode";
static NSString *const kWCPLPush2ChatBackgroundPushMode = @"kWCPLPush2ChatBackgroundPushMode";

static NSInteger wcpl_normalizePushMode(NSInteger value) {
    if (value < 0) return 0;
    if (value > 1) return 0;
    return value;
}

@implementation WCPLPush2ChatConfig

+ (instancetype)sharedConfig {
    static WCPLPush2ChatConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLPush2ChatConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

        NSNumber *fg = [defaults objectForKey:kWCPLPush2ChatEnableForegroundPush];
        NSNumber *bg = [defaults objectForKey:kWCPLPush2ChatEnableBackgroundPush];
        NSNumber *fgMode = [defaults objectForKey:kWCPLPush2ChatForegroundPushMode];
        NSNumber *bgMode = [defaults objectForKey:kWCPLPush2ChatBackgroundPushMode];

        _enableForegroundPush = fg ? fg.boolValue : YES;
        _enableBackgroundPush = bg ? bg.boolValue : YES;
        _foregroundPushMode = fgMode ? wcpl_normalizePushMode(fgMode.integerValue) : 0;
        _backgroundPushMode = bgMode ? wcpl_normalizePushMode(bgMode.integerValue) : 0;

        // 写回默认值，保持开关/模式键存在，便于灰度/迁移。
        [defaults setBool:_enableForegroundPush forKey:kWCPLPush2ChatEnableForegroundPush];
        [defaults setBool:_enableBackgroundPush forKey:kWCPLPush2ChatEnableBackgroundPush];
        [defaults setInteger:_foregroundPushMode forKey:kWCPLPush2ChatForegroundPushMode];
        [defaults setInteger:_backgroundPushMode forKey:kWCPLPush2ChatBackgroundPushMode];
    }
    return self;
}

- (void)setEnableForegroundPush:(BOOL)enableForegroundPush {
    _enableForegroundPush = enableForegroundPush;
    [[NSUserDefaults standardUserDefaults] setBool:enableForegroundPush forKey:kWCPLPush2ChatEnableForegroundPush];
}

- (void)setEnableBackgroundPush:(BOOL)enableBackgroundPush {
    _enableBackgroundPush = enableBackgroundPush;
    [[NSUserDefaults standardUserDefaults] setBool:enableBackgroundPush forKey:kWCPLPush2ChatEnableBackgroundPush];
}

- (void)setForegroundPushMode:(NSInteger)foregroundPushMode {
    NSInteger normalized = wcpl_normalizePushMode(foregroundPushMode);
    _foregroundPushMode = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLPush2ChatForegroundPushMode];
}

- (void)setBackgroundPushMode:(NSInteger)backgroundPushMode {
    NSInteger normalized = wcpl_normalizePushMode(backgroundPushMode);
    _backgroundPushMode = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLPush2ChatBackgroundPushMode];
}

@end

