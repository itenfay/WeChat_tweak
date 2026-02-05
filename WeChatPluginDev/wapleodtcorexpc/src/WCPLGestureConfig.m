//
// WCPLGestureConfig.m
//

#import "WCPLGestureConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLSwipeGestureEnable      = @"kWCPLSwipeGestureEnable";
static NSString *const kWCPLSwipeQuoteEnable        = @"kWCPLSwipeQuoteEnable";
static NSString *const kWCPLTapReferJumpEnable      = @"kWCPLTapReferJumpEnable";
static NSString *const kWCPLSwipeSensitivityLevel   = @"kWCPLSwipeSensitivityLevel";
static NSString *const kWCPLSwipeLeftOtherAction    = @"kWCPLSwipeLeftOtherAction";
static NSString *const kWCPLSwipeLeftSelfAction     = @"kWCPLSwipeLeftSelfAction";
static NSString *const kWCPLSwipeRightEnable        = @"kWCPLSwipeRightEnable";
static NSString *const kWCPLSwipeRightOtherAction   = @"kWCPLSwipeRightOtherAction";
static NSString *const kWCPLSwipeRightSelfAction    = @"kWCPLSwipeRightSelfAction";

@implementation WCPLGestureConfig

+ (instancetype)sharedConfig {
    static WCPLGestureConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLGestureConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        _swipeGestureEnable = [defaults boolForKey:kWCPLSwipeGestureEnable];
        _swipeQuoteEnable = [defaults boolForKey:kWCPLSwipeQuoteEnable];
        _tapReferJumpEnable = [defaults boolForKey:kWCPLTapReferJumpEnable];

        NSNumber *sensitivity = [defaults objectForKey:kWCPLSwipeSensitivityLevel];
        _swipeSensitivityLevel = sensitivity ? sensitivity.integerValue : 1;

        _swipeLeftOtherAction = [defaults integerForKey:kWCPLSwipeLeftOtherAction];
        _swipeLeftSelfAction = [defaults integerForKey:kWCPLSwipeLeftSelfAction];
        _swipeRightEnable = [defaults boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction = [defaults integerForKey:kWCPLSwipeRightOtherAction];
        _swipeRightSelfAction = [defaults integerForKey:kWCPLSwipeRightSelfAction];
    }
    return self;
}

- (void)setSwipeGestureEnable:(BOOL)swipeGestureEnable {
    _swipeGestureEnable = swipeGestureEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeGestureEnable forKey:kWCPLSwipeGestureEnable];
}

- (void)setSwipeQuoteEnable:(BOOL)swipeQuoteEnable {
    _swipeQuoteEnable = swipeQuoteEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeQuoteEnable forKey:kWCPLSwipeQuoteEnable];
}

- (void)setTapReferJumpEnable:(BOOL)tapReferJumpEnable {
    _tapReferJumpEnable = tapReferJumpEnable;
    [[NSUserDefaults standardUserDefaults] setBool:tapReferJumpEnable forKey:kWCPLTapReferJumpEnable];
}

- (void)setSwipeSensitivityLevel:(NSInteger)swipeSensitivityLevel {
    _swipeSensitivityLevel = swipeSensitivityLevel;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeSensitivityLevel forKey:kWCPLSwipeSensitivityLevel];
}

- (void)setSwipeLeftOtherAction:(NSInteger)swipeLeftOtherAction {
    _swipeLeftOtherAction = swipeLeftOtherAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeLeftOtherAction forKey:kWCPLSwipeLeftOtherAction];
}

- (void)setSwipeLeftSelfAction:(NSInteger)swipeLeftSelfAction {
    _swipeLeftSelfAction = swipeLeftSelfAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeLeftSelfAction forKey:kWCPLSwipeLeftSelfAction];
}

- (void)setSwipeRightEnable:(BOOL)swipeRightEnable {
    _swipeRightEnable = swipeRightEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeRightEnable forKey:kWCPLSwipeRightEnable];
}

- (void)setSwipeRightOtherAction:(NSInteger)swipeRightOtherAction {
    _swipeRightOtherAction = swipeRightOtherAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeRightOtherAction forKey:kWCPLSwipeRightOtherAction];
}

- (void)setSwipeRightSelfAction:(NSInteger)swipeRightSelfAction {
    _swipeRightSelfAction = swipeRightSelfAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeRightSelfAction forKey:kWCPLSwipeRightSelfAction];
}

- (CGFloat)swipeDistanceScale {
    switch (self.swipeSensitivityLevel) {
        case 0: return 1.25f; // 低灵敏度：更难触发
        case 2: return 0.80f; // 高灵敏度：更易触发
        case 1:
        default: return 1.00f;
    }
}

- (CGFloat)swipeVelocityTrigger {
    switch (self.swipeSensitivityLevel) {
        case 0: return 800.0f; // 低灵敏度：更难通过甩动触发
        case 2: return 450.0f; // 高灵敏度：更易通过甩动触发
        case 1:
        default: return 600.0f;
    }
}

- (CGFloat)swipeLightTriggerRatio {
    return 0.60f;
}

@end
