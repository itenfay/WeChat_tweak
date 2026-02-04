//
// WCPLRedEnvelopConfig.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017年 dyf. All rights reserved.
//

#import "WCPLRedEnvelopConfig.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLDelaySeconds            = @"kWCPLDelaySeconds";
static NSString *const kWCPLAutoReceiveRedEnvelop   = @"kWCPLAutoReceiveRedEnvelop";
static NSString *const kWCPLPrivateRedEnvelopEnable = @"kWCPLPrivateRedEnvelopEnable";
static NSString *const kWCPLGroupRedEnvelopEnable   = @"kWCPLGroupRedEnvelopEnable";
static NSString *const kWCPLReceiveSelfRedEnvelop   = @"kWCPLReceiveSelfRedEnvelop";
static NSString *const kWCPLSerialReceive           = @"kWCPLSerialReceive";
static NSString *const kWCPLGroupRedEnvelopScope    = @"kWCPLGroupRedEnvelopScope";
static NSString *const kWCPLBlackList               = @"kWCPLBlackList";
static NSString *const kWCPLGroupDenyList           = @"kWCPLGroupDenyList";
static NSString *const kWCPLPrivateRedEnvelopAutoReplyText = @"kWCPLPrivateRedEnvelopAutoReplyText";
static NSString *const kWCPLGroupRedEnvelopAutoReplyText   = @"kWCPLGroupRedEnvelopAutoReplyText";
static NSString *const kWCPLRedEnvelopResultNotify  = @"kWCPLRedEnvelopResultNotify";
static NSString *const kWCPLRevokeEnable            = @"kWCPLRevokeEnable";
static NSString *const kWCPLChatIgnoreInfo          = @"kWCPLChatIgnoreInfo";
static NSString *const kWCPLUserIgnoreEnable        = @"kWCPLUserIgnoreEnable";
static NSString *const kWCPLUserIgnoreInfo          = @"kWCPLUserIgnoreInfo";
static NSString *const kWCPLFakeLocLat              = @"kWCPLFakeLocLat";
static NSString *const kWCPLFakeLocLng              = @"kWCPLFakeLocLng";
static NSString *const kWCPLFakeLocEnable           = @"kWCPLFakeLocEnable";
static NSString *const kWCPLAVTPOn                  = @"kWCPLAVTPOn";
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
static NSString *const kWCPLSwipeGestureEnable      = @"kWCPLSwipeGestureEnable";
static NSString *const kWCPLSwipeQuoteEnable        = @"kWCPLSwipeQuoteEnable";
static NSString *const kWCPLTapReferJumpEnable      = @"kWCPLTapReferJumpEnable";
static NSString *const kWCPLSwipeSensitivityLevel   = @"kWCPLSwipeSensitivityLevel";
static NSString *const kWCPLSwipeLeftOtherAction    = @"kWCPLSwipeLeftOtherAction";
static NSString *const kWCPLSwipeLeftSelfAction     = @"kWCPLSwipeLeftSelfAction";
static NSString *const kWCPLSwipeRightEnable        = @"kWCPLSwipeRightEnable";
static NSString *const kWCPLSwipeRightOtherAction   = @"kWCPLSwipeRightOtherAction";
static NSString *const kWCPLSwipeRightSelfAction    = @"kWCPLSwipeRightSelfAction";

static const CGFloat kWCPLRepeatButtonBackgroundAlphaDefault = 1.0;
static const CGFloat kWCPLRepeatButtonBackgroundAlphaMin = 0.1;
static const CGFloat kWCPLRepeatButtonBackgroundAlphaMax = 1.0;
static const CGFloat kWCPLRepeatButtonSizeDefault = 24.0;
static const CGFloat kWCPLRepeatButtonSizeMin = 18.0;
static const CGFloat kWCPLRepeatButtonSizeMax = 36.0;
static NSString *const kWCPLRepeatButtonTextColorDefaultValue = @"#07C160";

static NSArray<NSString *> *wcpl_sanitizeUserNameArray(id value) {
    if (![value isKindOfClass:[NSArray class]]) {
        return @[];
    }
    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSet];
    for (id obj in (NSArray *)value) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *name = [(NSString *)obj stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (name.length > 0) {
            [results addObject:name];
        }
    }
    return results.array;
}

static NSDictionary<NSString *, NSNumber *> *wcpl_sanitizeIgnoreDictionary(id value) {
    if (![value isKindOfClass:[NSDictionary class]]) {
        return @{};
    }
    NSMutableDictionary<NSString *, NSNumber *> *result = [NSMutableDictionary dictionary];
    [(NSDictionary *)value enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        if (![key isKindOfClass:[NSString class]]) {
            return;
        }
        NSString *name = [(NSString *)key stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (name.length == 0) {
            return;
        }
        BOOL enabled = NO;
        if ([obj respondsToSelector:@selector(boolValue)]) {
            enabled = [obj boolValue];
        }
        if (enabled) {
            result[name] = @(YES);
        }
    }];
    return result;
}

@interface WCPLThreadSafeMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@property (nonatomic, strong) NSMutableDictionary<KeyType, ObjectType> *backing;
@property (nonatomic) dispatch_queue_t queue;
@end

@implementation WCPLThreadSafeMutableDictionary

- (void)wcpl_setupWithDictionary:(NSDictionary *)dictionary {
    _backing = dictionary ? [dictionary mutableCopy] : [NSMutableDictionary dictionary];
    _queue = dispatch_queue_create("com.wcpl.config.threadsafe.dict", DISPATCH_QUEUE_SERIAL);
}

- (instancetype)init {
    self = [super init];
    if (self) {
        [self wcpl_setupWithDictionary:nil];
    }
    return self;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary {
    self = [super init];
    if (self) {
        [self wcpl_setupWithDictionary:dictionary];
    }
    return self;
}

- (NSUInteger)count {
    __block NSUInteger count = 0;
    dispatch_sync(self.queue, ^{
        count = self.backing.count;
    });
    return count;
}

- (id)objectForKey:(id)aKey {
    if (!aKey) return nil;
    __block id value = nil;
    dispatch_sync(self.queue, ^{
        value = self.backing[aKey];
    });
    return value;
}

- (NSEnumerator *)keyEnumerator {
    return [[self dictionaryRepresentation] keyEnumerator];
}

- (void)setObject:(id)anObject forKey:(id<NSCopying>)aKey {
    if (!aKey) return;
    dispatch_sync(self.queue, ^{
        if (anObject) {
            self.backing[aKey] = anObject;
        } else {
            [self.backing removeObjectForKey:aKey];
        }
    });
}

- (void)removeObjectForKey:(id)aKey {
    if (!aKey) return;
    dispatch_sync(self.queue, ^{
        [self.backing removeObjectForKey:aKey];
    });
}

- (id)objectForKeyedSubscript:(id)key {
    return [self objectForKey:key];
}

- (void)setObject:(id)obj forKeyedSubscript:(id<NSCopying>)key {
    [self setObject:obj forKey:key];
}

- (NSArray *)allKeys {
    return [[self dictionaryRepresentation] allKeys];
}

- (NSArray *)allValues {
    return [[self dictionaryRepresentation] allValues];
}

- (void)enumerateKeysAndObjectsUsingBlock:(void (NS_NOESCAPE ^)(id key, id obj, BOOL *stop))block {
    if (!block) return;
    [[self dictionaryRepresentation] enumerateKeysAndObjectsUsingBlock:block];
}

- (NSDictionary *)dictionaryRepresentation {
    __block NSDictionary *snapshot = nil;
    dispatch_sync(self.queue, ^{
        snapshot = [self.backing copy];
    });
    return snapshot ?: @{};
}

- (id)copyWithZone:(NSZone *)zone {
    (void)zone;
    return [self dictionaryRepresentation];
}

- (id)mutableCopyWithZone:(NSZone *)zone {
    (void)zone;
    return [[self dictionaryRepresentation] mutableCopy];
}

@end

@interface WCPLRedEnvelopConfig ()

@end

@implementation WCPLRedEnvelopConfig

+ (instancetype)sharedConfig {
    static WCPLRedEnvelopConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLRedEnvelopConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        _delaySeconds            = [defaults integerForKey:kWCPLDelaySeconds];
        _autoReceiveEnable       = [defaults boolForKey:kWCPLAutoReceiveRedEnvelop];

        id privateEnable = [defaults objectForKey:kWCPLPrivateRedEnvelopEnable];
        _privateRedEnvelopEnable = privateEnable ? [privateEnable boolValue] : NO;

        id groupEnable = [defaults objectForKey:kWCPLGroupRedEnvelopEnable];
        _groupRedEnvelopEnable   = groupEnable ? [groupEnable boolValue] : YES;

        _serialReceive           = [defaults boolForKey:kWCPLSerialReceive];

        _blackList               = wcpl_sanitizeUserNameArray([defaults objectForKey:kWCPLBlackList]);
        _groupDenyList           = wcpl_sanitizeUserNameArray([defaults objectForKey:kWCPLGroupDenyList]);

        id scopeValue = [defaults objectForKey:kWCPLGroupRedEnvelopScope];
        NSInteger defaultScope = (_blackList.count > 0) ? 1 : 0; // 迁移：旧版仅白名单，空名单默认全部群聊
        _groupRedEnvelopScope    = scopeValue ? [scopeValue integerValue] : defaultScope;
        if (_groupRedEnvelopScope < 0 || _groupRedEnvelopScope > 2) {
            _groupRedEnvelopScope = defaultScope;
        }

        _privateRedEnvelopAutoReplyText = [defaults stringForKey:kWCPLPrivateRedEnvelopAutoReplyText];
        _groupRedEnvelopAutoReplyText   = [defaults stringForKey:kWCPLGroupRedEnvelopAutoReplyText];

        id notifyValue = [defaults objectForKey:kWCPLRedEnvelopResultNotify];
        _redEnvelopResultNotify  = notifyValue ? [notifyValue integerValue] : 0;
        if (_redEnvelopResultNotify < 0 || _redEnvelopResultNotify > 2) {
            _redEnvelopResultNotify = 0;
        }

        _receiveSelfRedEnvelop   = [defaults boolForKey:kWCPLReceiveSelfRedEnvelop];
        _revokeEnable            = [defaults boolForKey:kWCPLRevokeEnable];
        _chatIgnoreInfo          = [self getChatIgnoreNameList];
        _userIgnoreEnable        = [defaults boolForKey:kWCPLUserIgnoreEnable];
        _userIgnoreInfo          = [self getUserIgnoreNameList];
        _lat                     = [defaults doubleForKey:kWCPLFakeLocLat];
        _lng                     = [defaults doubleForKey:kWCPLFakeLocLng];
        _fakeLocEnable           = [defaults boolForKey:kWCPLFakeLocEnable];
        _TPOn                    = [defaults boolForKey:kWCPLAVTPOn];
        _messageReplyEnable      = [defaults boolForKey:kWCPLMessageReplyEnable];
        _repeatButtonHapticEnable = [defaults boolForKey:kWCPLRepeatButtonHapticEnable];
        _repeatButtonStyle       = [defaults integerForKey:kWCPLRepeatButtonStyle];
        _repeatButtonIconIndex   = [defaults integerForKey:kWCPLRepeatButtonIconIndex];
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
        _swipeGestureEnable      = [defaults boolForKey:kWCPLSwipeGestureEnable];
        _swipeQuoteEnable        = [defaults boolForKey:kWCPLSwipeQuoteEnable];
        _tapReferJumpEnable      = [defaults boolForKey:kWCPLTapReferJumpEnable];
        NSNumber *swipeSensitivity = [defaults objectForKey:kWCPLSwipeSensitivityLevel];
        _swipeSensitivityLevel   = swipeSensitivity ? swipeSensitivity.integerValue : 1;
        _swipeLeftOtherAction    = [defaults integerForKey:kWCPLSwipeLeftOtherAction];
        _swipeLeftSelfAction     = [defaults integerForKey:kWCPLSwipeLeftSelfAction];
        _swipeRightEnable        = [defaults boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction   = [defaults integerForKey:kWCPLSwipeRightOtherAction];
        _swipeRightSelfAction    = [defaults integerForKey:kWCPLSwipeRightSelfAction];
    }
    return self;
}

- (void)wcpl_setBool:(BOOL)value forKey:(NSString *)key {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setBool:value forKey:key];
    [defaults synchronize];
}

- (void)wcpl_setInteger:(NSInteger)value forKey:(NSString *)key {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setInteger:value forKey:key];
    [defaults synchronize];
}

- (void)wcpl_setDouble:(double)value forKey:(NSString *)key {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setDouble:value forKey:key];
    [defaults synchronize];
}

- (void)wcpl_setObject:(id)value forKey:(NSString *)key {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if (value) {
        [defaults setObject:value forKey:key];
    } else {
        [defaults removeObjectForKey:key];
    }
    [defaults synchronize];
}

- (NSMutableDictionary<NSString *,NSNumber *> *)wcpl_threadSafeDictionaryFromDictionary:(NSDictionary *)dict {
    if ([dict isKindOfClass:[WCPLThreadSafeMutableDictionary class]]) {
        return (NSMutableDictionary<NSString *,NSNumber *> *)dict;
    }
    return [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:dict];
}

- (void)setDelaySeconds:(NSInteger)delaySeconds {
    _delaySeconds = delaySeconds;
    [self wcpl_setInteger:delaySeconds forKey:kWCPLDelaySeconds];
}

- (void)setAutoReceiveEnable:(BOOL)autoReceiveEnable {
    _autoReceiveEnable = autoReceiveEnable;
    [self wcpl_setBool:autoReceiveEnable forKey:kWCPLAutoReceiveRedEnvelop];
}

- (void)setPrivateRedEnvelopEnable:(BOOL)privateRedEnvelopEnable {
    _privateRedEnvelopEnable = privateRedEnvelopEnable;
    [self wcpl_setBool:privateRedEnvelopEnable forKey:kWCPLPrivateRedEnvelopEnable];
}

- (void)setGroupRedEnvelopEnable:(BOOL)groupRedEnvelopEnable {
    _groupRedEnvelopEnable = groupRedEnvelopEnable;
    [self wcpl_setBool:groupRedEnvelopEnable forKey:kWCPLGroupRedEnvelopEnable];
}

- (void)setReceiveSelfRedEnvelop:(BOOL)receiveSelfRedEnvelop {
    _receiveSelfRedEnvelop = receiveSelfRedEnvelop;
    [self wcpl_setBool:receiveSelfRedEnvelop forKey:kWCPLReceiveSelfRedEnvelop];
}

- (void)setSerialReceive:(BOOL)serialReceive {
    _serialReceive = serialReceive;
    [self wcpl_setBool:serialReceive forKey:kWCPLSerialReceive];
}

- (void)setGroupRedEnvelopScope:(NSInteger)groupRedEnvelopScope {
    NSInteger normalized = groupRedEnvelopScope;
    if (normalized < 0 || normalized > 2) {
        normalized = 1;
    }
    _groupRedEnvelopScope = normalized;
    [self wcpl_setInteger:normalized forKey:kWCPLGroupRedEnvelopScope];
}

- (void)setBlackList:(NSArray *)blackList {
    _blackList = wcpl_sanitizeUserNameArray(blackList);
    [self wcpl_setObject:_blackList forKey:kWCPLBlackList];
}

- (void)setGroupDenyList:(NSArray *)groupDenyList {
    _groupDenyList = wcpl_sanitizeUserNameArray(groupDenyList);
    [self wcpl_setObject:_groupDenyList forKey:kWCPLGroupDenyList];
}

- (void)setPrivateRedEnvelopAutoReplyText:(NSString *)privateRedEnvelopAutoReplyText {
    _privateRedEnvelopAutoReplyText = [privateRedEnvelopAutoReplyText copy];
    [self wcpl_setObject:_privateRedEnvelopAutoReplyText forKey:kWCPLPrivateRedEnvelopAutoReplyText];
}

- (void)setGroupRedEnvelopAutoReplyText:(NSString *)groupRedEnvelopAutoReplyText {
    _groupRedEnvelopAutoReplyText = [groupRedEnvelopAutoReplyText copy];
    [self wcpl_setObject:_groupRedEnvelopAutoReplyText forKey:kWCPLGroupRedEnvelopAutoReplyText];
}

- (void)setRedEnvelopResultNotify:(NSInteger)redEnvelopResultNotify {
    NSInteger normalized = redEnvelopResultNotify;
    if (normalized < 0 || normalized > 2) {
        normalized = 0;
    }
    _redEnvelopResultNotify = normalized;
    [self wcpl_setInteger:normalized forKey:kWCPLRedEnvelopResultNotify];
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    [self wcpl_setBool:revokeEnable forKey:kWCPLRevokeEnable];
}

- (NSMutableDictionary *)getChatIgnoreNameList {
    NSDictionary *igDict = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLChatIgnoreInfo];
    NSDictionary *sanitized = wcpl_sanitizeIgnoreDictionary(igDict);
    return [self wcpl_threadSafeDictionaryFromDictionary:sanitized];
}

- (void)saveChatIgnoreNameListToLocalFile {
    NSDictionary *snapshot = [_chatIgnoreInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_chatIgnoreInfo dictionaryRepresentation]
        : [_chatIgnoreInfo copy];
    [self wcpl_setObject:snapshot forKey:kWCPLChatIgnoreInfo];
}

- (void)setUserIgnoreEnable:(BOOL)userIgnoreEnable {
    _userIgnoreEnable = userIgnoreEnable;
    [self wcpl_setBool:userIgnoreEnable forKey:kWCPLUserIgnoreEnable];
}

- (NSMutableDictionary *)getUserIgnoreNameList {
    NSDictionary *igDict = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLUserIgnoreInfo];
    NSDictionary *sanitized = wcpl_sanitizeIgnoreDictionary(igDict);
    return [self wcpl_threadSafeDictionaryFromDictionary:sanitized];
}

- (void)saveUserIgnoreNameListToLocalFile {
    NSDictionary *snapshot = [_userIgnoreInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_userIgnoreInfo dictionaryRepresentation]
        : [_userIgnoreInfo copy];
    [self wcpl_setObject:snapshot forKey:kWCPLUserIgnoreInfo];
}

- (void)setLat:(double)lat {
    _lat = lat;
    [self wcpl_setDouble:lat forKey:kWCPLFakeLocLat];
}

- (void)setLng:(double)lng {
    _lng = lng;
    [self wcpl_setDouble:lng forKey:kWCPLFakeLocLng];
}

- (void)setFakeLocEnable:(BOOL)fakeLocEnable {
    _fakeLocEnable = fakeLocEnable;
    [self wcpl_setBool:fakeLocEnable forKey:kWCPLFakeLocEnable];
}

- (void)setTPOn:(BOOL)TPOn {
    _TPOn = TPOn;
    [self wcpl_setBool:TPOn forKey:kWCPLAVTPOn];
}

- (void)setMessageReplyEnable:(BOOL)messageReplyEnable {
    _messageReplyEnable = messageReplyEnable;
    [self wcpl_setBool:messageReplyEnable forKey:kWCPLMessageReplyEnable];
}

- (void)setRepeatButtonHapticEnable:(BOOL)repeatButtonHapticEnable {
    _repeatButtonHapticEnable = repeatButtonHapticEnable;
    [self wcpl_setBool:repeatButtonHapticEnable forKey:kWCPLRepeatButtonHapticEnable];
}

- (void)setRepeatButtonStyle:(NSInteger)repeatButtonStyle {
    _repeatButtonStyle = repeatButtonStyle;
    [self wcpl_setInteger:repeatButtonStyle forKey:kWCPLRepeatButtonStyle];
}

- (void)setRepeatButtonIconIndex:(NSInteger)repeatButtonIconIndex {
    _repeatButtonIconIndex = repeatButtonIconIndex;
    [self wcpl_setInteger:repeatButtonIconIndex forKey:kWCPLRepeatButtonIconIndex];
}

- (void)setRepeatButtonCustomImagePath:(NSString *)repeatButtonCustomImagePath {
    _repeatButtonCustomImagePath = repeatButtonCustomImagePath;
    [self wcpl_setObject:repeatButtonCustomImagePath forKey:kWCPLRepeatButtonCustomImage];
}

- (void)setRepeatButtonBackgroundAlpha:(CGFloat)repeatButtonBackgroundAlpha {
    CGFloat normalized = repeatButtonBackgroundAlpha;
    if (normalized < kWCPLRepeatButtonBackgroundAlphaMin) {
        normalized = kWCPLRepeatButtonBackgroundAlphaMin;
    } else if (normalized > kWCPLRepeatButtonBackgroundAlphaMax) {
        normalized = kWCPLRepeatButtonBackgroundAlphaMax;
    }
    _repeatButtonBackgroundAlpha = normalized;
    [self wcpl_setDouble:normalized forKey:kWCPLRepeatButtonBackgroundAlpha];
}

- (void)setRepeatButtonSize:(CGFloat)repeatButtonSize {
    CGFloat normalized = repeatButtonSize;
    if (normalized < kWCPLRepeatButtonSizeMin) {
        normalized = kWCPLRepeatButtonSizeMin;
    } else if (normalized > kWCPLRepeatButtonSizeMax) {
        normalized = kWCPLRepeatButtonSizeMax;
    }
    _repeatButtonSize = normalized;
    [self wcpl_setDouble:normalized forKey:kWCPLRepeatButtonSize];
}

- (void)setRepeatButtonTextColorMode:(NSInteger)repeatButtonTextColorMode {
    _repeatButtonTextColorMode = repeatButtonTextColorMode;
    [self wcpl_setInteger:repeatButtonTextColorMode forKey:kWCPLRepeatButtonTextColorMode];
}

- (void)setRepeatButtonTextColorDefault:(NSString *)repeatButtonTextColorDefault {
    NSString *value = (repeatButtonTextColorDefault.length > 0) ? repeatButtonTextColorDefault : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorDefault = [value copy];
    [self wcpl_setObject:value forKey:kWCPLRepeatButtonTextColorDefault];
}

- (void)setRepeatButtonTextColorText:(NSString *)repeatButtonTextColorText {
    NSString *value = (repeatButtonTextColorText.length > 0) ? repeatButtonTextColorText : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorText = [value copy];
    [self wcpl_setObject:value forKey:kWCPLRepeatButtonTextColorText];
}

- (void)setRepeatButtonTextColorVoice:(NSString *)repeatButtonTextColorVoice {
    NSString *value = (repeatButtonTextColorVoice.length > 0) ? repeatButtonTextColorVoice : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorVoice = [value copy];
    [self wcpl_setObject:value forKey:kWCPLRepeatButtonTextColorVoice];
}

- (void)setRepeatButtonTextColorEmoticon:(NSString *)repeatButtonTextColorEmoticon {
    NSString *value = (repeatButtonTextColorEmoticon.length > 0) ? repeatButtonTextColorEmoticon : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorEmoticon = [value copy];
    [self wcpl_setObject:value forKey:kWCPLRepeatButtonTextColorEmoticon];
}

- (void)setRepeatButtonTextColorQuote:(NSString *)repeatButtonTextColorQuote {
    NSString *value = (repeatButtonTextColorQuote.length > 0) ? repeatButtonTextColorQuote : kWCPLRepeatButtonTextColorDefaultValue;
    _repeatButtonTextColorQuote = [value copy];
    [self wcpl_setObject:value forKey:kWCPLRepeatButtonTextColorQuote];
}

- (void)setSwipeGestureEnable:(BOOL)swipeGestureEnable {
    _swipeGestureEnable = swipeGestureEnable;
    [self wcpl_setBool:swipeGestureEnable forKey:kWCPLSwipeGestureEnable];
}

- (void)setSwipeQuoteEnable:(BOOL)swipeQuoteEnable {
    _swipeQuoteEnable = swipeQuoteEnable;
    [self wcpl_setBool:swipeQuoteEnable forKey:kWCPLSwipeQuoteEnable];
}

- (void)setTapReferJumpEnable:(BOOL)tapReferJumpEnable {
    _tapReferJumpEnable = tapReferJumpEnable;
    [self wcpl_setBool:tapReferJumpEnable forKey:kWCPLTapReferJumpEnable];
}

- (void)setSwipeSensitivityLevel:(NSInteger)swipeSensitivityLevel {
    _swipeSensitivityLevel = swipeSensitivityLevel;
    [self wcpl_setInteger:swipeSensitivityLevel forKey:kWCPLSwipeSensitivityLevel];
}

- (void)setSwipeLeftOtherAction:(NSInteger)swipeLeftOtherAction {
    _swipeLeftOtherAction = swipeLeftOtherAction;
    [self wcpl_setInteger:swipeLeftOtherAction forKey:kWCPLSwipeLeftOtherAction];
}

- (void)setSwipeLeftSelfAction:(NSInteger)swipeLeftSelfAction {
    _swipeLeftSelfAction = swipeLeftSelfAction;
    [self wcpl_setInteger:swipeLeftSelfAction forKey:kWCPLSwipeLeftSelfAction];
}

- (void)setSwipeRightEnable:(BOOL)swipeRightEnable {
    _swipeRightEnable = swipeRightEnable;
    [self wcpl_setBool:swipeRightEnable forKey:kWCPLSwipeRightEnable];
}

- (void)setSwipeRightOtherAction:(NSInteger)swipeRightOtherAction {
    _swipeRightOtherAction = swipeRightOtherAction;
    [self wcpl_setInteger:swipeRightOtherAction forKey:kWCPLSwipeRightOtherAction];
}

- (void)setSwipeRightSelfAction:(NSInteger)swipeRightSelfAction {
    _swipeRightSelfAction = swipeRightSelfAction;
    [self wcpl_setInteger:swipeRightSelfAction forKey:kWCPLSwipeRightSelfAction];
}

- (void)setChatIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)chatIgnoreInfo {
    NSDictionary *sanitized = wcpl_sanitizeIgnoreDictionary(chatIgnoreInfo);
    _chatIgnoreInfo = [self wcpl_threadSafeDictionaryFromDictionary:sanitized];
}

- (void)setUserIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)userIgnoreInfo {
    NSDictionary *sanitized = wcpl_sanitizeIgnoreDictionary(userIgnoreInfo);
    _userIgnoreInfo = [self wcpl_threadSafeDictionaryFromDictionary:sanitized];
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
    // 轻触发阈值占重触发阈值的比例（仅用于距离判断）
    return 0.60f;
}

@end
