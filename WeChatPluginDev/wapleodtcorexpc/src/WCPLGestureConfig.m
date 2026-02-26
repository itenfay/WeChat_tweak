//
// WCPLGestureConfig.m
//

#import "WCPLGestureConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLSwipeGestureEnable      = @"kWCPLSwipeGestureEnable";
static NSString *const kWCPLSwipeQuoteEnable        = @"kWCPLSwipeQuoteEnable";
static NSString *const kWCPLTapReferJumpEnable      = @"kWCPLTapReferJumpEnable";
static NSString *const kWCPLSwipeQuoteAtUserEnable  = @"kWCPLSwipeQuoteAtUserEnable";
static NSString *const kWCPLRepeatButtonEnable      = @"kWCPLRepeatButtonEnable";
static NSString *const kWCPLRepeatButtonHapticEnable = @"kWCPLRepeatButtonHapticEnable";
static NSString *const kWCPLRepeatButtonSize        = @"kWCPLRepeatButtonSize";
static NSString *const kWCPLRepeatButtonCustomImageEnable = @"kWCPLRepeatButtonCustomImageEnable";
static NSString *const kWCPLRepeatButtonCustomImageRelativePath = @"kWCPLRepeatButtonCustomImageRelativePath";
static NSString *const kWCPLRepeatButtonCustomImageRevision = @"kWCPLRepeatButtonCustomImageRevision";
static NSString *const kWCPLRepeatButtonCustomImageSchemaVersion = @"kWCPLRepeatButtonCustomImageSchemaVersion";
static NSString *const kWCPLRepeatSupportEmoticonEnable = @"kWCPLRepeatSupportEmoticonEnable";
static NSString *const kWCPLRepeatSupportVoiceEnable = @"kWCPLRepeatSupportVoiceEnable";
static NSString *const kWCPLRepeatSupportImageEnable = @"kWCPLRepeatSupportImageEnable";
static NSString *const kWCPLRepeatSupportVideoEnable = @"kWCPLRepeatSupportVideoEnable";
static NSString *const kWCPLRepeatImmediateRenderEnable = @"kWCPLRepeatImmediateRenderEnable";
static NSString *const kWCPLRepeatLongPressMenuEnable = @"kWCPLRepeatLongPressMenuEnable";
static NSString *const kWCPLClownFeatureEnable = @"kWCPLClownFeatureEnable";
static NSString *const kWCPLVoiceForwardFeatureEnable = @"kWCPLVoiceForwardFeatureEnable";
static NSString *const kWCPLSwipeSensitivityLevel   = @"kWCPLSwipeSensitivityLevel";
static NSString *const kWCPLSwipeLeftOtherAction    = @"kWCPLSwipeLeftOtherAction";
static NSString *const kWCPLSwipeLeftSelfAction     = @"kWCPLSwipeLeftSelfAction";
static NSString *const kWCPLSwipeRightEnable        = @"kWCPLSwipeRightEnable";
static NSString *const kWCPLSwipeRightOtherAction   = @"kWCPLSwipeRightOtherAction";
static NSString *const kWCPLSwipeRightSelfAction    = @"kWCPLSwipeRightSelfAction";
static NSString *const kWCPLDoubleTapGestureEnable  = @"kWCPLDoubleTapGestureEnable";
static NSString *const kWCPLDoubleTapOtherAction    = @"kWCPLDoubleTapOtherAction";
static NSString *const kWCPLDoubleTapSelfAction     = @"kWCPLDoubleTapSelfAction";
static NSString *const kWCPLMessageTimeEnable       = @"kWCPLMessageTimeEnable";

// 统一归一化：0=引用，1=关闭，2=删除，3=撤回(仅己方)，4=复读，5=转发
static NSInteger wcpl_normalizeSwipeActionValue(NSInteger action, BOOL isSelfAction) {
    if (action < 0) {
        return 0;
    }

    if (action == 3 && !isSelfAction) {
        return 0;
    }

    if (action > 5) {
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
        NSNumber *swipeQuoteAtUserEnabled = [defaults objectForKey:kWCPLSwipeQuoteAtUserEnable];
        _swipeQuoteAtUserEnable = swipeQuoteAtUserEnabled ? swipeQuoteAtUserEnabled.boolValue : YES;
        _repeatButtonEnable = [defaults boolForKey:kWCPLRepeatButtonEnable];

        NSNumber *repeatButtonHapticEnabled = [defaults objectForKey:kWCPLRepeatButtonHapticEnable];
        NSNumber *repeatButtonSize = [defaults objectForKey:kWCPLRepeatButtonSize];
        NSNumber *repeatButtonCustomImageEnabled = [defaults objectForKey:kWCPLRepeatButtonCustomImageEnable];
        NSString *repeatButtonCustomImageRelativePath = [defaults stringForKey:kWCPLRepeatButtonCustomImageRelativePath];
        NSNumber *repeatButtonCustomImageRevision = [defaults objectForKey:kWCPLRepeatButtonCustomImageRevision];
        NSNumber *repeatButtonCustomImageSchemaVersion = [defaults objectForKey:kWCPLRepeatButtonCustomImageSchemaVersion];
        _repeatButtonHapticEnable = repeatButtonHapticEnabled ? repeatButtonHapticEnabled.boolValue : YES;
        CGFloat configuredButtonSize = repeatButtonSize ? repeatButtonSize.doubleValue : 20.0f;
        if (configuredButtonSize < 16.0f) {
            configuredButtonSize = 16.0f;
        } else if (configuredButtonSize > 30.0f) {
            configuredButtonSize = 30.0f;
        }
        _repeatButtonSize = configuredButtonSize;
        _repeatButtonCustomImageEnable = repeatButtonCustomImageEnabled ? repeatButtonCustomImageEnabled.boolValue : NO;
        _repeatButtonCustomImageRelativePath = repeatButtonCustomImageRelativePath.length > 0 ? [repeatButtonCustomImageRelativePath copy] : nil;
        _repeatButtonCustomImageRevision = repeatButtonCustomImageRevision ? MAX((NSInteger)0, repeatButtonCustomImageRevision.integerValue) : 0;
        _repeatButtonCustomImageSchemaVersion = repeatButtonCustomImageSchemaVersion ? MAX((NSInteger)0, repeatButtonCustomImageSchemaVersion.integerValue) : 0;
        if (_repeatButtonCustomImageRelativePath.length == 0) {
            _repeatButtonCustomImageEnable = NO;
        }

        NSNumber *repeatEmoticonEnabled = [defaults objectForKey:kWCPLRepeatSupportEmoticonEnable];
        NSNumber *repeatVoiceEnabled = [defaults objectForKey:kWCPLRepeatSupportVoiceEnable];
        NSNumber *repeatImageEnabled = [defaults objectForKey:kWCPLRepeatSupportImageEnable];
        NSNumber *repeatVideoEnabled = [defaults objectForKey:kWCPLRepeatSupportVideoEnable];
        NSNumber *repeatImmediateRenderEnabled = [defaults objectForKey:kWCPLRepeatImmediateRenderEnable];
        NSNumber *repeatLongPressMenuEnabled = [defaults objectForKey:kWCPLRepeatLongPressMenuEnable];
        NSNumber *clownFeatureEnabled = [defaults objectForKey:kWCPLClownFeatureEnable];
        NSNumber *voiceForwardFeatureEnabled = [defaults objectForKey:kWCPLVoiceForwardFeatureEnable];

        _repeatSupportEmoticonEnable = repeatEmoticonEnabled ? repeatEmoticonEnabled.boolValue : YES;
        _repeatSupportVoiceEnable = repeatVoiceEnabled ? repeatVoiceEnabled.boolValue : YES;
        _repeatSupportImageEnable = repeatImageEnabled ? repeatImageEnabled.boolValue : YES;
        _repeatSupportVideoEnable = repeatVideoEnabled ? repeatVideoEnabled.boolValue : YES;
        _repeatImmediateRenderEnable = repeatImmediateRenderEnabled ? repeatImmediateRenderEnabled.boolValue : YES;
        _repeatLongPressMenuEnable = repeatLongPressMenuEnabled ? repeatLongPressMenuEnabled.boolValue : YES;
        _clownFeatureEnable = clownFeatureEnabled ? clownFeatureEnabled.boolValue : YES;
        _voiceForwardFeatureEnable = voiceForwardFeatureEnabled ? voiceForwardFeatureEnabled.boolValue : YES;

        NSNumber *sensitivity = [defaults objectForKey:kWCPLSwipeSensitivityLevel];
        _swipeSensitivityLevel = sensitivity ? sensitivity.integerValue : 1;

        _swipeLeftOtherAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeLeftOtherAction], NO);
        _swipeLeftSelfAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeLeftSelfAction], YES);
        _swipeRightEnable = [defaults boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeRightOtherAction], NO);
        _swipeRightSelfAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLSwipeRightSelfAction], YES);
        _doubleTapGestureEnable = [defaults boolForKey:kWCPLDoubleTapGestureEnable];
        _doubleTapOtherAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLDoubleTapOtherAction], NO);
        _doubleTapSelfAction = wcpl_normalizeSwipeActionValue([defaults integerForKey:kWCPLDoubleTapSelfAction], YES);
        NSNumber *messageTimeEnabled = [defaults objectForKey:kWCPLMessageTimeEnable];
        _messageTimeEnable = messageTimeEnabled ? messageTimeEnabled.boolValue : YES;

        [defaults setInteger:_swipeLeftOtherAction forKey:kWCPLSwipeLeftOtherAction];
        [defaults setInteger:_swipeLeftSelfAction forKey:kWCPLSwipeLeftSelfAction];
        [defaults setInteger:_swipeRightOtherAction forKey:kWCPLSwipeRightOtherAction];
        [defaults setInteger:_swipeRightSelfAction forKey:kWCPLSwipeRightSelfAction];
        [defaults setInteger:_doubleTapOtherAction forKey:kWCPLDoubleTapOtherAction];
        [defaults setInteger:_doubleTapSelfAction forKey:kWCPLDoubleTapSelfAction];
        [defaults setBool:_messageTimeEnable forKey:kWCPLMessageTimeEnable];
        [defaults setBool:_repeatButtonHapticEnable forKey:kWCPLRepeatButtonHapticEnable];
        [defaults setDouble:_repeatButtonSize forKey:kWCPLRepeatButtonSize];
        [defaults setBool:_repeatButtonCustomImageEnable forKey:kWCPLRepeatButtonCustomImageEnable];
        if (_repeatButtonCustomImageRelativePath.length > 0) {
            [defaults setObject:_repeatButtonCustomImageRelativePath forKey:kWCPLRepeatButtonCustomImageRelativePath];
        } else {
            [defaults removeObjectForKey:kWCPLRepeatButtonCustomImageRelativePath];
        }
        [defaults setInteger:_repeatButtonCustomImageRevision forKey:kWCPLRepeatButtonCustomImageRevision];
        [defaults setInteger:_repeatButtonCustomImageSchemaVersion forKey:kWCPLRepeatButtonCustomImageSchemaVersion];
        [defaults setBool:_repeatImmediateRenderEnable forKey:kWCPLRepeatImmediateRenderEnable];
        [defaults setBool:_repeatLongPressMenuEnable forKey:kWCPLRepeatLongPressMenuEnable];
        [defaults setBool:_clownFeatureEnable forKey:kWCPLClownFeatureEnable];
        [defaults setBool:_voiceForwardFeatureEnable forKey:kWCPLVoiceForwardFeatureEnable];
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

- (void)setSwipeQuoteAtUserEnable:(BOOL)swipeQuoteAtUserEnable {
    _swipeQuoteAtUserEnable = swipeQuoteAtUserEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeQuoteAtUserEnable forKey:kWCPLSwipeQuoteAtUserEnable];
}

- (void)setRepeatButtonEnable:(BOOL)repeatButtonEnable {
    _repeatButtonEnable = repeatButtonEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatButtonEnable forKey:kWCPLRepeatButtonEnable];
}

- (void)setRepeatButtonHapticEnable:(BOOL)repeatButtonHapticEnable {
    _repeatButtonHapticEnable = repeatButtonHapticEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatButtonHapticEnable forKey:kWCPLRepeatButtonHapticEnable];
}

- (void)setRepeatButtonSize:(CGFloat)repeatButtonSize {
    CGFloat normalized = repeatButtonSize;
    if (normalized < 16.0f) {
        normalized = 16.0f;
    } else if (normalized > 30.0f) {
        normalized = 30.0f;
    }
    _repeatButtonSize = normalized;
    [[NSUserDefaults standardUserDefaults] setDouble:normalized forKey:kWCPLRepeatButtonSize];
}

- (void)setRepeatButtonCustomImageEnable:(BOOL)repeatButtonCustomImageEnable {
    _repeatButtonCustomImageEnable = repeatButtonCustomImageEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatButtonCustomImageEnable forKey:kWCPLRepeatButtonCustomImageEnable];
}

- (void)setRepeatButtonCustomImageRelativePath:(NSString * _Nullable)repeatButtonCustomImageRelativePath {
    NSString *normalized = repeatButtonCustomImageRelativePath.length > 0 ? [repeatButtonCustomImageRelativePath copy] : nil;
    _repeatButtonCustomImageRelativePath = normalized;

    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if (normalized.length > 0) {
        [defaults setObject:normalized forKey:kWCPLRepeatButtonCustomImageRelativePath];
    } else {
        [defaults removeObjectForKey:kWCPLRepeatButtonCustomImageRelativePath];
        _repeatButtonCustomImageEnable = NO;
        [defaults setBool:NO forKey:kWCPLRepeatButtonCustomImageEnable];
    }
}

- (void)setRepeatButtonCustomImageRevision:(NSInteger)repeatButtonCustomImageRevision {
    NSInteger normalized = MAX((NSInteger)0, repeatButtonCustomImageRevision);
    _repeatButtonCustomImageRevision = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLRepeatButtonCustomImageRevision];
}

- (void)setRepeatButtonCustomImageSchemaVersion:(NSInteger)repeatButtonCustomImageSchemaVersion {
    NSInteger normalized = MAX((NSInteger)0, repeatButtonCustomImageSchemaVersion);
    _repeatButtonCustomImageSchemaVersion = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLRepeatButtonCustomImageSchemaVersion];
}

- (void)setRepeatSupportEmoticonEnable:(BOOL)repeatSupportEmoticonEnable {
    _repeatSupportEmoticonEnable = repeatSupportEmoticonEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatSupportEmoticonEnable forKey:kWCPLRepeatSupportEmoticonEnable];
}

- (void)setRepeatSupportVoiceEnable:(BOOL)repeatSupportVoiceEnable {
    _repeatSupportVoiceEnable = repeatSupportVoiceEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatSupportVoiceEnable forKey:kWCPLRepeatSupportVoiceEnable];
}

- (void)setRepeatSupportImageEnable:(BOOL)repeatSupportImageEnable {
    _repeatSupportImageEnable = repeatSupportImageEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatSupportImageEnable forKey:kWCPLRepeatSupportImageEnable];
}

- (void)setRepeatSupportVideoEnable:(BOOL)repeatSupportVideoEnable {
    _repeatSupportVideoEnable = repeatSupportVideoEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatSupportVideoEnable forKey:kWCPLRepeatSupportVideoEnable];
}

- (void)setRepeatImmediateRenderEnable:(BOOL)repeatImmediateRenderEnable {
    _repeatImmediateRenderEnable = repeatImmediateRenderEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatImmediateRenderEnable forKey:kWCPLRepeatImmediateRenderEnable];
}

- (void)setRepeatLongPressMenuEnable:(BOOL)repeatLongPressMenuEnable {
    _repeatLongPressMenuEnable = repeatLongPressMenuEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatLongPressMenuEnable forKey:kWCPLRepeatLongPressMenuEnable];
}

- (void)setClownFeatureEnable:(BOOL)clownFeatureEnable {
    _clownFeatureEnable = clownFeatureEnable;
    [[NSUserDefaults standardUserDefaults] setBool:clownFeatureEnable forKey:kWCPLClownFeatureEnable];
}

- (void)setVoiceForwardFeatureEnable:(BOOL)voiceForwardFeatureEnable {
    _voiceForwardFeatureEnable = voiceForwardFeatureEnable;
    [[NSUserDefaults standardUserDefaults] setBool:voiceForwardFeatureEnable forKey:kWCPLVoiceForwardFeatureEnable];
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

- (void)setDoubleTapGestureEnable:(BOOL)doubleTapGestureEnable {
    _doubleTapGestureEnable = doubleTapGestureEnable;
    [[NSUserDefaults standardUserDefaults] setBool:doubleTapGestureEnable forKey:kWCPLDoubleTapGestureEnable];
}

- (void)setDoubleTapOtherAction:(NSInteger)doubleTapOtherAction {
    NSInteger normalized = wcpl_normalizeSwipeActionValue(doubleTapOtherAction, NO);
    _doubleTapOtherAction = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLDoubleTapOtherAction];
}

- (void)setDoubleTapSelfAction:(NSInteger)doubleTapSelfAction {
    NSInteger normalized = wcpl_normalizeSwipeActionValue(doubleTapSelfAction, YES);
    _doubleTapSelfAction = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLDoubleTapSelfAction];
}

- (void)setMessageTimeEnable:(BOOL)messageTimeEnable {
    _messageTimeEnable = messageTimeEnable;
    [[NSUserDefaults standardUserDefaults] setBool:messageTimeEnable forKey:kWCPLMessageTimeEnable];
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
