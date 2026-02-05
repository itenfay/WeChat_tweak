//
// WCPLRepeatButtonConfig.m
//

#import "WCPLRepeatButtonConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLMessageReplyEnable      = @"kWCPLMessageReplyEnable";
static NSString *const kWCPLRepeatButtonHapticEnable = @"kWCPLRepeatButtonHapticEnable";
static NSString *const kWCPLRepeatButtonStyle       = @"kWCPLRepeatButtonStyle";
static NSString *const kWCPLRepeatButtonIconIndex   = @"kWCPLRepeatButtonIconIndex";
static NSString *const kWCPLRepeatButtonCustomImage = @"kWCPLRepeatButtonCustomImage";
static NSString *const kWCPLRepeatButtonBackgroundAlpha = @"kWCPLRepeatButtonBackgroundAlpha";
static NSString *const kWCPLRepeatButtonSize        = @"kWCPLRepeatButtonSize";
static NSString *const kWCPLRepeatButtonTextColorMode = @"kWCPLRepeatButtonTextColorMode";
static NSString *const kWCPLRepeatButtonTextColorDefault = @"kWCPLRepeatButtonTextColorDefault";
static NSString *const kWCPLRepeatButtonTextColorText = @"kWCPLRepeatButtonTextColorText";
static NSString *const kWCPLRepeatButtonTextColorVoice = @"kWCPLRepeatButtonTextColorVoice";
static NSString *const kWCPLRepeatButtonTextColorEmoticon = @"kWCPLRepeatButtonTextColorEmoticon";
static NSString *const kWCPLRepeatButtonTextColorQuote = @"kWCPLRepeatButtonTextColorQuote";

static const CGFloat kWCPLRepeatButtonBackgroundAlphaDefault = 1.0;
static const CGFloat kWCPLRepeatButtonBackgroundAlphaMin = 0.1;
static const CGFloat kWCPLRepeatButtonBackgroundAlphaMax = 1.0;
static const CGFloat kWCPLRepeatButtonSizeDefault = 24.0;
static const CGFloat kWCPLRepeatButtonSizeMin = 18.0;
static const CGFloat kWCPLRepeatButtonSizeMax = 36.0;
static NSString *const kWCPLRepeatButtonTextColorDefaultValue = @"#07C160";

@implementation WCPLRepeatButtonConfig

+ (instancetype)sharedConfig {
    static WCPLRepeatButtonConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLRepeatButtonConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        _messageReplyEnable = [defaults boolForKey:kWCPLMessageReplyEnable];
        _repeatButtonHapticEnable = [defaults boolForKey:kWCPLRepeatButtonHapticEnable];
        _repeatButtonStyle = [defaults integerForKey:kWCPLRepeatButtonStyle];
        _repeatButtonIconIndex = [defaults integerForKey:kWCPLRepeatButtonIconIndex];
        _repeatButtonCustomImagePath = [defaults stringForKey:kWCPLRepeatButtonCustomImage];

        NSNumber *backgroundAlphaValue = [defaults objectForKey:kWCPLRepeatButtonBackgroundAlpha];
        _repeatButtonBackgroundAlpha = backgroundAlphaValue ? backgroundAlphaValue.doubleValue : kWCPLRepeatButtonBackgroundAlphaDefault;
        if (_repeatButtonBackgroundAlpha < kWCPLRepeatButtonBackgroundAlphaMin ||
            _repeatButtonBackgroundAlpha > kWCPLRepeatButtonBackgroundAlphaMax) {
            _repeatButtonBackgroundAlpha = kWCPLRepeatButtonBackgroundAlphaDefault;
        }

        NSNumber *sizeValue = [defaults objectForKey:kWCPLRepeatButtonSize];
        _repeatButtonSize = sizeValue ? sizeValue.doubleValue : kWCPLRepeatButtonSizeDefault;
        if (_repeatButtonSize < kWCPLRepeatButtonSizeMin ||
            _repeatButtonSize > kWCPLRepeatButtonSizeMax) {
            _repeatButtonSize = kWCPLRepeatButtonSizeDefault;
        }

        NSNumber *textColorModeValue = [defaults objectForKey:kWCPLRepeatButtonTextColorMode];
        _repeatButtonTextColorMode = textColorModeValue ? textColorModeValue.integerValue : 0;
        _repeatButtonTextColorDefault = [defaults stringForKey:kWCPLRepeatButtonTextColorDefault] ?: kWCPLRepeatButtonTextColorDefaultValue;
        _repeatButtonTextColorText = [defaults stringForKey:kWCPLRepeatButtonTextColorText] ?: kWCPLRepeatButtonTextColorDefaultValue;
        _repeatButtonTextColorVoice = [defaults stringForKey:kWCPLRepeatButtonTextColorVoice] ?: kWCPLRepeatButtonTextColorDefaultValue;
        _repeatButtonTextColorEmoticon = [defaults stringForKey:kWCPLRepeatButtonTextColorEmoticon] ?: kWCPLRepeatButtonTextColorDefaultValue;
        _repeatButtonTextColorQuote = [defaults stringForKey:kWCPLRepeatButtonTextColorQuote] ?: kWCPLRepeatButtonTextColorDefaultValue;
    }
    return self;
}

- (void)setMessageReplyEnable:(BOOL)messageReplyEnable {
    _messageReplyEnable = messageReplyEnable;
    [[NSUserDefaults standardUserDefaults] setBool:messageReplyEnable forKey:kWCPLMessageReplyEnable];
}

- (void)setRepeatButtonHapticEnable:(BOOL)repeatButtonHapticEnable {
    _repeatButtonHapticEnable = repeatButtonHapticEnable;
    [[NSUserDefaults standardUserDefaults] setBool:repeatButtonHapticEnable forKey:kWCPLRepeatButtonHapticEnable];
}

- (void)setRepeatButtonStyle:(NSInteger)repeatButtonStyle {
    _repeatButtonStyle = repeatButtonStyle;
    [[NSUserDefaults standardUserDefaults] setInteger:repeatButtonStyle forKey:kWCPLRepeatButtonStyle];
}

- (void)setRepeatButtonIconIndex:(NSInteger)repeatButtonIconIndex {
    _repeatButtonIconIndex = repeatButtonIconIndex;
    [[NSUserDefaults standardUserDefaults] setInteger:repeatButtonIconIndex forKey:kWCPLRepeatButtonIconIndex];
}

- (void)setRepeatButtonCustomImagePath:(NSString *)repeatButtonCustomImagePath {
    _repeatButtonCustomImagePath = [repeatButtonCustomImagePath copy];
    [[NSUserDefaults standardUserDefaults] setObject:repeatButtonCustomImagePath forKey:kWCPLRepeatButtonCustomImage];
}

- (void)setRepeatButtonBackgroundAlpha:(CGFloat)repeatButtonBackgroundAlpha {
    CGFloat normalized = repeatButtonBackgroundAlpha;
    if (normalized < kWCPLRepeatButtonBackgroundAlphaMin) {
        normalized = kWCPLRepeatButtonBackgroundAlphaMin;
    } else if (normalized > kWCPLRepeatButtonBackgroundAlphaMax) {
        normalized = kWCPLRepeatButtonBackgroundAlphaMax;
    }
    _repeatButtonBackgroundAlpha = normalized;
    [[NSUserDefaults standardUserDefaults] setDouble:normalized forKey:kWCPLRepeatButtonBackgroundAlpha];
}

- (void)setRepeatButtonSize:(CGFloat)repeatButtonSize {
    CGFloat normalized = repeatButtonSize;
    if (normalized < kWCPLRepeatButtonSizeMin) {
        normalized = kWCPLRepeatButtonSizeMin;
    } else if (normalized > kWCPLRepeatButtonSizeMax) {
        normalized = kWCPLRepeatButtonSizeMax;
    }
    _repeatButtonSize = normalized;
    [[NSUserDefaults standardUserDefaults] setDouble:normalized forKey:kWCPLRepeatButtonSize];
}

- (void)setRepeatButtonTextColorMode:(NSInteger)repeatButtonTextColorMode {
    _repeatButtonTextColorMode = repeatButtonTextColorMode;
    [[NSUserDefaults standardUserDefaults] setInteger:repeatButtonTextColorMode forKey:kWCPLRepeatButtonTextColorMode];
}

- (void)setRepeatButtonTextColorDefault:(NSString *)repeatButtonTextColorDefault {
    NSString *value = (repeatButtonTextColorDefault.length > 0) ? repeatButtonTextColorDefault : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorDefault = [value copy];
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:kWCPLRepeatButtonTextColorDefault];
}

- (void)setRepeatButtonTextColorText:(NSString *)repeatButtonTextColorText {
    NSString *value = (repeatButtonTextColorText.length > 0) ? repeatButtonTextColorText : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorText = [value copy];
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:kWCPLRepeatButtonTextColorText];
}

- (void)setRepeatButtonTextColorVoice:(NSString *)repeatButtonTextColorVoice {
    NSString *value = (repeatButtonTextColorVoice.length > 0) ? repeatButtonTextColorVoice : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorVoice = [value copy];
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:kWCPLRepeatButtonTextColorVoice];
}

- (void)setRepeatButtonTextColorEmoticon:(NSString *)repeatButtonTextColorEmoticon {
    NSString *value = (repeatButtonTextColorEmoticon.length > 0) ? repeatButtonTextColorEmoticon : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorEmoticon = [value copy];
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:kWCPLRepeatButtonTextColorEmoticon];
}

- (void)setRepeatButtonTextColorQuote:(NSString *)repeatButtonTextColorQuote {
    NSString *value = (repeatButtonTextColorQuote.length > 0) ? repeatButtonTextColorQuote : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorQuote = [value copy];
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:kWCPLRepeatButtonTextColorQuote];
}

@end
