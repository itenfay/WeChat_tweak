//
// WCPLGestureConfig.m
//

#import "WCPLGestureConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLSwipeGestureEnable      = @"kWCPLSwipeGestureEnable";
static NSString *const kWCPLSwipeQuoteEnable        = @"kWCPLSwipeQuoteEnable";
static NSString *const kWCPLTapReferJumpEnable      = @"kWCPLTapReferJumpEnable";
static NSString *const kWCPLRepeatButtonEnable      = @"kWCPLRepeatButtonEnable";
static NSString *const kWCPLSwipeSensitivityLevel   = @"kWCPLSwipeSensitivityLevel";
static NSString *const kWCPLSwipeLeftOtherAction    = @"kWCPLSwipeLeftOtherAction";
static NSString *const kWCPLSwipeLeftSelfAction     = @"kWCPLSwipeLeftSelfAction";
static NSString *const kWCPLSwipeRightEnable        = @"kWCPLSwipeRightEnable";
static NSString *const kWCPLSwipeRightOtherAction   = @"kWCPLSwipeRightOtherAction";
static NSString *const kWCPLSwipeRightSelfAction    = @"kWCPLSwipeRightSelfAction";

// 统一归一化：历史值 1 与越界值均回退为 0（引用）
static NSInteger wcpl_normalizeSwipeActionValue(NSInteger action, BOOL isSelfAction) {
    if (action == 1) {
        return 0;
    }

    if (action < 0) {
        return 0;
    }

    NSInteger maxAction = isSelfAction ? 3 : 2;
    if (action > maxAction) {
        return 0;
    }

    return action;
}

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
        _repeatButtonEnable = [defaults boolForKey:kWCPLRepeatButtonEnable];

        NSNumber *sensitivity = [defaults objectForKey:kWCPLSwipeSensitivityLevel];
        _swipeSensitivityLevel = sensitivity ? sensitivity.integerValue : 1;

        _swipeLeftOtherAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeLeftOtherAction], NO);
        _swipeLeftSelfAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeLeftSelfAction], YES);
        _swipeRightEnable = [defaults boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeRightOtherAction], NO);
        _swipeRightSelfAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeRightSelfAction], YES);

        [defaults setInteger:_swipeLeftOtherAction forKey:kWCPLSwipeLeftOtherAction];
        [defaults setInteger:_swipeLeftSelfAction forKey:kWCPLSwipeLeftSelfAction];
        [defaults setInteger:_swipeRightOtherAction forKey:kWCPLSwipeRightOtherAction];
        [defaults setInteger:_swipeRightSelfAction forKey:kWCPLSwipeRightSelfAction];
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

- (void)setRepeatButtonEnable:(BOOL)repeatButtonEnable {
    _repeatButtonEnable = repeatButtonEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatButtonEnable forKey:kWCPLRepeatButtonEnable];
}

- (void)setSwipeSensitivityLevel:(NSInteger)swipeSensitivityLevel {
    _swipeSensitivityLevel = swipeSensitivityLevel;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeSensitivityLevel forKey:kWCPLSwipeSensitivityLevel];
}

- (void)setSwipeLeftOtherAction:(NSInteger)swipeLeftOtherAction {
    NSInteger normalized = wcpl_normalizeSwipeActionValue(swipeLeftOtherAction, NO);
    _swipeLeftOtherAction = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLSwipeLeftOtherAction];
}

- (void)setSwipeLeftSelfAction:(NSInteger)swipeLeftSelfAction {
    NSInteger normalized = wcpl_normalizeSwipeActionValue(swipeLeftSelfAction, YES);
    _swipeLeftSelfAction = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLSwipeLeftSelfAction];
}

- (void)setSwipeRightEnable:(BOOL)swipeRightEnable {
    _swipeRightEnable = swipeRightEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeRightEnable forKey:kWCPLSwipeRightEnable];
}

- (void)setSwipeRightOtherAction:(NSInteger)swipeRightOtherAction {
    NSInteger normalized = wcpl_normalizeSwipeActionValue(swipeRightOtherAction, NO);
    _swipeRightOtherAction = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLSwipeRightOtherAction];
}

- (void)setSwipeRightSelfAction:(NSInteger)swipeRightSelfAction {
    NSInteger normalized = wcpl_normalizeSwipeActionValue(swipeRightSelfAction, YES);
    _swipeRightSelfAction = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLSwipeRightSelfAction];
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
