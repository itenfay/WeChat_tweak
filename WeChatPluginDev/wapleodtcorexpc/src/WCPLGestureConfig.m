//
// WCPLGestureConfig.m
//

#import "WCPLGestureConfig.h"

#import "WCPLGestureActionHelpers.h"
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

@interface WCPLGestureConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLGestureConfig

+ (instancetype)sharedConfig {
    static WCPLGestureConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLGestureConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
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
        _swipeGestureEnable = [_defaults boolForKey:kWCPLSwipeGestureEnable];
        _swipeQuoteEnable = [_defaults boolForKey:kWCPLSwipeQuoteEnable];
        _tapReferJumpEnable = [_defaults boolForKey:kWCPLTapReferJumpEnable];
        NSNumber *swipeQuoteAtUserEnabled = [_defaults objectForKey:kWCPLSwipeQuoteAtUserEnable];
        _swipeQuoteAtUserEnable = swipeQuoteAtUserEnabled ? swipeQuoteAtUserEnabled.boolValue : YES;
        _repeatButtonEnable = [_defaults boolForKey:kWCPLRepeatButtonEnable];

        NSNumber *repeatButtonHapticEnabled = [_defaults objectForKey:kWCPLRepeatButtonHapticEnable];
        NSNumber *repeatButtonSize = [_defaults objectForKey:kWCPLRepeatButtonSize];
        NSNumber *repeatButtonCustomImageEnabled = [_defaults objectForKey:kWCPLRepeatButtonCustomImageEnable];
        NSString *repeatButtonCustomImageRelativePath = [_defaults stringForKey:kWCPLRepeatButtonCustomImageRelativePath];
        NSNumber *repeatButtonCustomImageRevision = [_defaults objectForKey:kWCPLRepeatButtonCustomImageRevision];
        NSNumber *repeatButtonCustomImageSchemaVersion = [_defaults objectForKey:kWCPLRepeatButtonCustomImageSchemaVersion];
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

        NSNumber *repeatEmoticonEnabled = [_defaults objectForKey:kWCPLRepeatSupportEmoticonEnable];
        NSNumber *repeatVoiceEnabled = [_defaults objectForKey:kWCPLRepeatSupportVoiceEnable];
        NSNumber *repeatImageEnabled = [_defaults objectForKey:kWCPLRepeatSupportImageEnable];
        NSNumber *repeatVideoEnabled = [_defaults objectForKey:kWCPLRepeatSupportVideoEnable];
        NSNumber *repeatImmediateRenderEnabled = [_defaults objectForKey:kWCPLRepeatImmediateRenderEnable];
        NSNumber *repeatLongPressMenuEnabled = [_defaults objectForKey:kWCPLRepeatLongPressMenuEnable];
        NSNumber *clownFeatureEnabled = [_defaults objectForKey:kWCPLClownFeatureEnable];
        NSNumber *voiceForwardFeatureEnabled = [_defaults objectForKey:kWCPLVoiceForwardFeatureEnable];

        _repeatSupportEmoticonEnable = repeatEmoticonEnabled ? repeatEmoticonEnabled.boolValue : YES;
        _repeatSupportVoiceEnable = repeatVoiceEnabled ? repeatVoiceEnabled.boolValue : YES;
        _repeatSupportImageEnable = repeatImageEnabled ? repeatImageEnabled.boolValue : YES;
        _repeatSupportVideoEnable = repeatVideoEnabled ? repeatVideoEnabled.boolValue : YES;
        _repeatImmediateRenderEnable = repeatImmediateRenderEnabled ? repeatImmediateRenderEnabled.boolValue : YES;
        _repeatLongPressMenuEnable = repeatLongPressMenuEnabled ? repeatLongPressMenuEnabled.boolValue : YES;
        _clownFeatureEnable = clownFeatureEnabled ? clownFeatureEnabled.boolValue : YES;
        _voiceForwardFeatureEnable = voiceForwardFeatureEnabled ? voiceForwardFeatureEnabled.boolValue : YES;

        NSNumber *sensitivity = [_defaults objectForKey:kWCPLSwipeSensitivityLevel];
        _swipeSensitivityLevel = sensitivity ? sensitivity.integerValue : 1;

        _swipeLeftOtherAction = WCPLNormalizeGestureActionValue([_defaults integerForKey:kWCPLSwipeLeftOtherAction], NO);
        _swipeLeftSelfAction = WCPLNormalizeGestureActionValue([_defaults integerForKey:kWCPLSwipeLeftSelfAction], YES);
        _swipeRightEnable = [_defaults boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction = WCPLNormalizeGestureActionValue([_defaults integerForKey:kWCPLSwipeRightOtherAction], NO);
        _swipeRightSelfAction = WCPLNormalizeGestureActionValue([_defaults integerForKey:kWCPLSwipeRightSelfAction], YES);
        _doubleTapGestureEnable = [_defaults boolForKey:kWCPLDoubleTapGestureEnable];
        _doubleTapOtherAction = WCPLNormalizeGestureActionValue([_defaults integerForKey:kWCPLDoubleTapOtherAction], NO);
        _doubleTapSelfAction = WCPLNormalizeGestureActionValue([_defaults integerForKey:kWCPLDoubleTapSelfAction], YES);
        NSNumber *messageTimeEnabled = [_defaults objectForKey:kWCPLMessageTimeEnable];
        _messageTimeEnable = messageTimeEnabled ? messageTimeEnabled.boolValue : YES;

        [_defaults setInteger:_swipeLeftOtherAction forKey:kWCPLSwipeLeftOtherAction];
        [_defaults setInteger:_swipeLeftSelfAction forKey:kWCPLSwipeLeftSelfAction];
        [_defaults setInteger:_swipeRightOtherAction forKey:kWCPLSwipeRightOtherAction];
        [_defaults setInteger:_swipeRightSelfAction forKey:kWCPLSwipeRightSelfAction];
        [_defaults setInteger:_doubleTapOtherAction forKey:kWCPLDoubleTapOtherAction];
        [_defaults setInteger:_doubleTapSelfAction forKey:kWCPLDoubleTapSelfAction];
        [_defaults setBool:_messageTimeEnable forKey:kWCPLMessageTimeEnable];
        [_defaults setBool:_repeatButtonHapticEnable forKey:kWCPLRepeatButtonHapticEnable];
        [_defaults setDouble:_repeatButtonSize forKey:kWCPLRepeatButtonSize];
        [_defaults setBool:_repeatButtonCustomImageEnable forKey:kWCPLRepeatButtonCustomImageEnable];
        if (_repeatButtonCustomImageRelativePath.length > 0) {
            [_defaults setObject:_repeatButtonCustomImageRelativePath forKey:kWCPLRepeatButtonCustomImageRelativePath];
        } else {
            [_defaults removeObjectForKey:kWCPLRepeatButtonCustomImageRelativePath];
        }
        [_defaults setInteger:_repeatButtonCustomImageRevision forKey:kWCPLRepeatButtonCustomImageRevision];
        [_defaults setInteger:_repeatButtonCustomImageSchemaVersion forKey:kWCPLRepeatButtonCustomImageSchemaVersion];
        [_defaults setBool:_repeatImmediateRenderEnable forKey:kWCPLRepeatImmediateRenderEnable];
        [_defaults setBool:_repeatLongPressMenuEnable forKey:kWCPLRepeatLongPressMenuEnable];
        [_defaults setBool:_clownFeatureEnable forKey:kWCPLClownFeatureEnable];
        [_defaults setBool:_voiceForwardFeatureEnable forKey:kWCPLVoiceForwardFeatureEnable];
    }
    return self;
}

- (void)setSwipeGestureEnable:(BOOL)swipeGestureEnable {
    _swipeGestureEnable = swipeGestureEnable;
    [self.defaults setBool:swipeGestureEnable forKey:kWCPLSwipeGestureEnable];
}

- (void)setSwipeQuoteEnable:(BOOL)swipeQuoteEnable {
    _swipeQuoteEnable = swipeQuoteEnable;
    [self.defaults setBool:swipeQuoteEnable forKey:kWCPLSwipeQuoteEnable];
}

- (void)setTapReferJumpEnable:(BOOL)tapReferJumpEnable {
    _tapReferJumpEnable = tapReferJumpEnable;
    [self.defaults setBool:tapReferJumpEnable forKey:kWCPLTapReferJumpEnable];
}

- (void)setSwipeQuoteAtUserEnable:(BOOL)swipeQuoteAtUserEnable {
    _swipeQuoteAtUserEnable = swipeQuoteAtUserEnable;
    [self.defaults setBool:swipeQuoteAtUserEnable forKey:kWCPLSwipeQuoteAtUserEnable];
}

- (void)setRepeatButtonEnable:(BOOL)repeatButtonEnable {
    _repeatButtonEnable = repeatButtonEnable;
    [self.defaults setBool:repeatButtonEnable forKey:kWCPLRepeatButtonEnable];
}

- (void)setRepeatButtonHapticEnable:(BOOL)repeatButtonHapticEnable {
    _repeatButtonHapticEnable = repeatButtonHapticEnable;
    [self.defaults setBool:repeatButtonHapticEnable forKey:kWCPLRepeatButtonHapticEnable];
}

- (void)setRepeatButtonSize:(CGFloat)repeatButtonSize {
    CGFloat normalized = repeatButtonSize;
    if (normalized < 16.0f) {
        normalized = 16.0f;
    } else if (normalized > 30.0f) {
        normalized = 30.0f;
    }
    _repeatButtonSize = normalized;
    [self.defaults setDouble:normalized forKey:kWCPLRepeatButtonSize];
}

- (void)setRepeatButtonCustomImageEnable:(BOOL)repeatButtonCustomImageEnable {
    _repeatButtonCustomImageEnable = repeatButtonCustomImageEnable;
    [self.defaults setBool:repeatButtonCustomImageEnable forKey:kWCPLRepeatButtonCustomImageEnable];
}

- (void)setRepeatButtonCustomImageRelativePath:(NSString * _Nullable)repeatButtonCustomImageRelativePath {
    NSString *normalized = repeatButtonCustomImageRelativePath.length > 0 ? [repeatButtonCustomImageRelativePath copy] : nil;
    _repeatButtonCustomImageRelativePath = normalized;

    if (normalized.length > 0) {
        [self.defaults setObject:normalized forKey:kWCPLRepeatButtonCustomImageRelativePath];
    } else {
        [self.defaults removeObjectForKey:kWCPLRepeatButtonCustomImageRelativePath];
        _repeatButtonCustomImageEnable = NO;
        [self.defaults setBool:NO forKey:kWCPLRepeatButtonCustomImageEnable];
    }
}

- (void)setRepeatButtonCustomImageRevision:(NSInteger)repeatButtonCustomImageRevision {
    NSInteger normalized = MAX((NSInteger)0, repeatButtonCustomImageRevision);
    _repeatButtonCustomImageRevision = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLRepeatButtonCustomImageRevision];
}

- (void)setRepeatButtonCustomImageSchemaVersion:(NSInteger)repeatButtonCustomImageSchemaVersion {
    NSInteger normalized = MAX((NSInteger)0, repeatButtonCustomImageSchemaVersion);
    _repeatButtonCustomImageSchemaVersion = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLRepeatButtonCustomImageSchemaVersion];
}

- (void)setRepeatSupportEmoticonEnable:(BOOL)repeatSupportEmoticonEnable {
    _repeatSupportEmoticonEnable = repeatSupportEmoticonEnable;
    [self.defaults setBool:repeatSupportEmoticonEnable forKey:kWCPLRepeatSupportEmoticonEnable];
}

- (void)setRepeatSupportVoiceEnable:(BOOL)repeatSupportVoiceEnable {
    _repeatSupportVoiceEnable = repeatSupportVoiceEnable;
    [self.defaults setBool:repeatSupportVoiceEnable forKey:kWCPLRepeatSupportVoiceEnable];
}

- (void)setRepeatSupportImageEnable:(BOOL)repeatSupportImageEnable {
    _repeatSupportImageEnable = repeatSupportImageEnable;
    [self.defaults setBool:repeatSupportImageEnable forKey:kWCPLRepeatSupportImageEnable];
}

- (void)setRepeatSupportVideoEnable:(BOOL)repeatSupportVideoEnable {
    _repeatSupportVideoEnable = repeatSupportVideoEnable;
    [self.defaults setBool:repeatSupportVideoEnable forKey:kWCPLRepeatSupportVideoEnable];
}

- (void)setRepeatImmediateRenderEnable:(BOOL)repeatImmediateRenderEnable {
    _repeatImmediateRenderEnable = repeatImmediateRenderEnable;
    [self.defaults setBool:repeatImmediateRenderEnable forKey:kWCPLRepeatImmediateRenderEnable];
}

- (void)setRepeatLongPressMenuEnable:(BOOL)repeatLongPressMenuEnable {
    _repeatLongPressMenuEnable = repeatLongPressMenuEnable;
    [self.defaults setBool:repeatLongPressMenuEnable forKey:kWCPLRepeatLongPressMenuEnable];
}

- (void)setClownFeatureEnable:(BOOL)clownFeatureEnable {
    _clownFeatureEnable = clownFeatureEnable;
    [self.defaults setBool:clownFeatureEnable forKey:kWCPLClownFeatureEnable];
}

- (void)setVoiceForwardFeatureEnable:(BOOL)voiceForwardFeatureEnable {
    _voiceForwardFeatureEnable = voiceForwardFeatureEnable;
    [self.defaults setBool:voiceForwardFeatureEnable forKey:kWCPLVoiceForwardFeatureEnable];
}

- (void)setSwipeSensitivityLevel:(NSInteger)swipeSensitivityLevel {
    _swipeSensitivityLevel = swipeSensitivityLevel;
    [self.defaults setInteger:swipeSensitivityLevel forKey:kWCPLSwipeSensitivityLevel];
}

- (void)setSwipeLeftOtherAction:(NSInteger)swipeLeftOtherAction {
    NSInteger normalized = WCPLNormalizeGestureActionValue(swipeLeftOtherAction, NO);
    _swipeLeftOtherAction = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLSwipeLeftOtherAction];
}

- (void)setSwipeLeftSelfAction:(NSInteger)swipeLeftSelfAction {
    NSInteger normalized = WCPLNormalizeGestureActionValue(swipeLeftSelfAction, YES);
    _swipeLeftSelfAction = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLSwipeLeftSelfAction];
}

- (void)setSwipeRightEnable:(BOOL)swipeRightEnable {
    _swipeRightEnable = swipeRightEnable;
    [self.defaults setBool:swipeRightEnable forKey:kWCPLSwipeRightEnable];
}

- (void)setSwipeRightOtherAction:(NSInteger)swipeRightOtherAction {
    NSInteger normalized = WCPLNormalizeGestureActionValue(swipeRightOtherAction, NO);
    _swipeRightOtherAction = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLSwipeRightOtherAction];
}

- (void)setSwipeRightSelfAction:(NSInteger)swipeRightSelfAction {
    NSInteger normalized = WCPLNormalizeGestureActionValue(swipeRightSelfAction, YES);
    _swipeRightSelfAction = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLSwipeRightSelfAction];
}

- (void)setDoubleTapGestureEnable:(BOOL)doubleTapGestureEnable {
    _doubleTapGestureEnable = doubleTapGestureEnable;
    [self.defaults setBool:doubleTapGestureEnable forKey:kWCPLDoubleTapGestureEnable];
}

- (void)setDoubleTapOtherAction:(NSInteger)doubleTapOtherAction {
    NSInteger normalized = WCPLNormalizeGestureActionValue(doubleTapOtherAction, NO);
    _doubleTapOtherAction = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLDoubleTapOtherAction];
}

- (void)setDoubleTapSelfAction:(NSInteger)doubleTapSelfAction {
    NSInteger normalized = WCPLNormalizeGestureActionValue(doubleTapSelfAction, YES);
    _doubleTapSelfAction = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLDoubleTapSelfAction];
}

- (void)setMessageTimeEnable:(BOOL)messageTimeEnable {
    _messageTimeEnable = messageTimeEnable;
    [self.defaults setBool:messageTimeEnable forKey:kWCPLMessageTimeEnable];
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
