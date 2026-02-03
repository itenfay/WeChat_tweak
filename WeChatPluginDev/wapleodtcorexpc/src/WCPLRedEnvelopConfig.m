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
static NSString *const kWCPLReceiveSelfRedEnvelop   = @"kWCPLReceiveSelfRedEnvelop";
static NSString *const kWCPLSerialReceive           = @"kWCPLSerialReceive";
static NSString *const kWCPLBlackList               = @"kWCPLBlackList";
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
static NSString *const kWCPLSwipeGestureEnable      = @"kWCPLSwipeGestureEnable";
static NSString *const kWCPLSwipeQuoteEnable        = @"kWCPLSwipeQuoteEnable";
static NSString *const kWCPLTapReferJumpEnable      = @"kWCPLTapReferJumpEnable";
static NSString *const kWCPLSwipeSensitivityLevel   = @"kWCPLSwipeSensitivityLevel";
static NSString *const kWCPLSwipeLeftOtherAction    = @"kWCPLSwipeLeftOtherAction";
static NSString *const kWCPLSwipeLeftSelfAction     = @"kWCPLSwipeLeftSelfAction";
static NSString *const kWCPLSwipeRightEnable        = @"kWCPLSwipeRightEnable";
static NSString *const kWCPLSwipeRightOtherAction   = @"kWCPLSwipeRightOtherAction";
static NSString *const kWCPLSwipeRightSelfAction    = @"kWCPLSwipeRightSelfAction";

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
        _delaySeconds            = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLDelaySeconds];
        _autoReceiveEnable       = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLAutoReceiveRedEnvelop];
        _serialReceive           = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSerialReceive];
        _blackList               = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLBlackList];
        _receiveSelfRedEnvelop   = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLReceiveSelfRedEnvelop];
        _revokeEnable            = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLRevokeEnable];
        _chatIgnoreInfo          = [self getChatIgnoreNameList];
        _userIgnoreEnable        = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLUserIgnoreEnable];
        _userIgnoreInfo          = [self getUserIgnoreNameList];
        _lat                     = [[NSUserDefaults standardUserDefaults] doubleForKey:kWCPLFakeLocLat];
        _lng                     = [[NSUserDefaults standardUserDefaults] doubleForKey:kWCPLFakeLocLng];
        _fakeLocEnable           = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLFakeLocEnable];
        _TPOn                    = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLAVTPOn];
        _messageReplyEnable      = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLMessageReplyEnable];
        _repeatButtonHapticEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLRepeatButtonHapticEnable];
        _repeatButtonStyle       = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLRepeatButtonStyle];
        _repeatButtonIconIndex   = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLRepeatButtonIconIndex];
        _repeatButtonCustomImagePath = [[NSUserDefaults standardUserDefaults] stringForKey:kWCPLRepeatButtonCustomImage];
        _swipeGestureEnable      = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSwipeGestureEnable];
        _swipeQuoteEnable        = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSwipeQuoteEnable];
        _tapReferJumpEnable      = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLTapReferJumpEnable];
        NSNumber *swipeSensitivity = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLSwipeSensitivityLevel];
        _swipeSensitivityLevel   = swipeSensitivity ? swipeSensitivity.integerValue : 1;
        _swipeLeftOtherAction    = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeLeftOtherAction];
        _swipeLeftSelfAction     = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeLeftSelfAction];
        _swipeRightEnable        = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction   = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeRightOtherAction];
        _swipeRightSelfAction    = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeRightSelfAction];
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

- (void)setReceiveSelfRedEnvelop:(BOOL)receiveSelfRedEnvelop {
    _receiveSelfRedEnvelop = receiveSelfRedEnvelop;
    [self wcpl_setBool:receiveSelfRedEnvelop forKey:kWCPLReceiveSelfRedEnvelop];
}

- (void)setSerialReceive:(BOOL)serialReceive {
    _serialReceive = serialReceive;
    [self wcpl_setBool:serialReceive forKey:kWCPLSerialReceive];
}

- (void)setBlackList:(NSArray *)blackList {
    _blackList = blackList;
    [self wcpl_setObject:blackList forKey:kWCPLBlackList];
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    [self wcpl_setBool:revokeEnable forKey:kWCPLRevokeEnable];
}

- (NSMutableDictionary *)getChatIgnoreNameList {
    NSDictionary *igDict = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLChatIgnoreInfo];
    if (!igDict) {
        igDict = [NSDictionary dictionary];
    }
    return [self wcpl_threadSafeDictionaryFromDictionary:igDict];
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
    if (!igDict) {
        igDict = [NSDictionary dictionary];
    }
    return [self wcpl_threadSafeDictionaryFromDictionary:igDict];
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
    _chatIgnoreInfo = [self wcpl_threadSafeDictionaryFromDictionary:chatIgnoreInfo];
}

- (void)setUserIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)userIgnoreInfo {
    _userIgnoreInfo = [self wcpl_threadSafeDictionaryFromDictionary:userIgnoreInfo];
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
