//
// WCPLRedEnvelopConfig.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017年 dyf. All rights reserved.
//

#import "WCPLRedEnvelopConfig.h"

static NSString *const kWCPLDelaySeconds            = @"kWCPLDelaySeconds";
static NSString *const kWCPLAutoReceiveRedEnvelop   = @"kWCPLAutoReceiveRedEnvelop";
static NSString *const kWCPLReceiveSelfRedEnvelop   = @"kWCPLReceiveSelfRedEnvelop";
static NSString *const kWCPLSerialReceive           = @"kWCPLSerialReceive";
static NSString *const kWCPLBlackList               = @"kWCPLBlackList";
static NSString *const kWCPLRevokeEnable            = @"kWCPLRevokeEnable";
static NSString *const kWCPLStepCount               = @"kWCPLStepCount";
static NSString *const kWCPLLastChangeStepCountDate = @"kWCPLLastChangeStepCountDate";
static NSString *const kWCPLChatIgnoreInfo          = @"kWCPLChatIgnoreInfo";
static NSString *const kWCPLFakeLocLat              = @"kWCPLFakeLocLat";
static NSString *const kWCPLFakeLocLng              = @"kWCPLFakeLocLng";
static NSString *const kWCPLFakeLocEnable           = @"kWCPLFakeLocEnable";
static NSString *const kWCPLAVTPOn                  = @"kWCPLAVTPOn";
static NSString *const kWCPLMessageReplyEnable      = @"kWCPLMessageReplyEnable";
static NSString *const kWCPLRepeatButtonStyle       = @"kWCPLRepeatButtonStyle";
static NSString *const kWCPLRepeatButtonIconIndex   = @"kWCPLRepeatButtonIconIndex";
static NSString *const kWCPLRepeatButtonCustomImage = @"kWCPLRepeatButtonCustomImage";
static NSString *const kWCPLSwipeGestureEnable      = @"kWCPLSwipeGestureEnable";
static NSString *const kWCPLSwipeQuoteEnable        = @"kWCPLSwipeQuoteEnable";
static NSString *const kWCPLTapReferJumpEnable      = @"kWCPLTapReferJumpEnable";
static NSString *const kWCPLSwipeLeftOtherAction    = @"kWCPLSwipeLeftOtherAction";
static NSString *const kWCPLSwipeLeftSelfAction     = @"kWCPLSwipeLeftSelfAction";
static NSString *const kWCPLSwipeRightEnable        = @"kWCPLSwipeRightEnable";
static NSString *const kWCPLSwipeRightOtherAction   = @"kWCPLSwipeRightOtherAction";
static NSString *const kWCPLSwipeRightSelfAction    = @"kWCPLSwipeRightSelfAction";

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
        _stepCount               = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLStepCount];
        _lastChangeStepCountDate = [self getLastChangeStepCountDate];
        _chatIgnoreInfo          = [self getChatIgnoreNameList];
        _lat                     = [[NSUserDefaults standardUserDefaults] doubleForKey:kWCPLFakeLocLat];
        _lng                     = [[NSUserDefaults standardUserDefaults] doubleForKey:kWCPLFakeLocLng];
        _fakeLocEnable           = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLFakeLocEnable];
        _TPOn                    = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLAVTPOn];
        _messageReplyEnable      = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLMessageReplyEnable];
        _repeatButtonStyle       = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLRepeatButtonStyle];
        _repeatButtonIconIndex   = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLRepeatButtonIconIndex];
        _repeatButtonCustomImagePath = [[NSUserDefaults standardUserDefaults] stringForKey:kWCPLRepeatButtonCustomImage];
        _swipeGestureEnable      = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSwipeGestureEnable];
        _swipeQuoteEnable        = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSwipeQuoteEnable];
        _tapReferJumpEnable      = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLTapReferJumpEnable];
        _swipeLeftOtherAction    = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeLeftOtherAction];
        _swipeLeftSelfAction     = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeLeftSelfAction];
        _swipeRightEnable        = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLSwipeRightEnable];
        _swipeRightOtherAction   = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeRightOtherAction];
        _swipeRightSelfAction    = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPLSwipeRightSelfAction];
    }
    return self;
}

- (void)setDelaySeconds:(NSInteger)delaySeconds {
    _delaySeconds = delaySeconds;
    [[NSUserDefaults standardUserDefaults] setInteger:delaySeconds forKey:kWCPLDelaySeconds];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setAutoReceiveEnable:(BOOL)autoReceiveEnable {
    _autoReceiveEnable = autoReceiveEnable;
    [[NSUserDefaults standardUserDefaults] setBool:autoReceiveEnable forKey:kWCPLAutoReceiveRedEnvelop];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setReceiveSelfRedEnvelop:(BOOL)receiveSelfRedEnvelop {
    _receiveSelfRedEnvelop = receiveSelfRedEnvelop;
    [[NSUserDefaults standardUserDefaults] setBool:receiveSelfRedEnvelop forKey:kWCPLReceiveSelfRedEnvelop];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSerialReceive:(BOOL)serialReceive {
    _serialReceive = serialReceive;
    [[NSUserDefaults standardUserDefaults] setBool:serialReceive forKey:kWCPLSerialReceive];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setBlackList:(NSArray *)blackList {
    _blackList = blackList;
    [[NSUserDefaults standardUserDefaults] setObject:blackList forKey:kWCPLBlackList];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    [[NSUserDefaults standardUserDefaults] setBool:revokeEnable forKey:kWCPLRevokeEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setStepCount:(NSInteger)stepCount {
    _stepCount = stepCount;
    [[NSUserDefaults standardUserDefaults] setInteger:stepCount forKey:kWCPLStepCount];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (NSDate *)getLastChangeStepCountDate {
    NSDate *date = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLLastChangeStepCountDate];
    return date;
}

- (void)saveLastChangeStepCountDateToLocalFile {
    [[NSUserDefaults standardUserDefaults] setObject:_lastChangeStepCountDate forKey:kWCPLLastChangeStepCountDate];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (NSMutableDictionary *)getChatIgnoreNameList {
    NSDictionary *igDict = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLChatIgnoreInfo];
    if (!igDict) {
        igDict = [NSDictionary dictionary];
    }
    return [igDict mutableCopy];
}

- (void)saveChatIgnoreNameListToLocalFile {
    [[NSUserDefaults standardUserDefaults] setObject:_chatIgnoreInfo forKey:kWCPLChatIgnoreInfo];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setLat:(double)lat {
    _lat = lat;
    [[NSUserDefaults standardUserDefaults] setDouble:lat forKey:kWCPLFakeLocLat];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setLng:(double)lng {
    _lng = lng;
    [[NSUserDefaults standardUserDefaults] setDouble:lng forKey:kWCPLFakeLocLng];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setFakeLocEnable:(BOOL)fakeLocEnable {
    _fakeLocEnable = fakeLocEnable;
    [[NSUserDefaults standardUserDefaults] setBool:fakeLocEnable forKey:kWCPLFakeLocEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setTPOn:(BOOL)TPOn {
    _TPOn = TPOn;
    [[NSUserDefaults standardUserDefaults] setBool:TPOn forKey:kWCPLAVTPOn];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setMessageReplyEnable:(BOOL)messageReplyEnable {
    _messageReplyEnable = messageReplyEnable;
    [[NSUserDefaults standardUserDefaults] setBool:messageReplyEnable forKey:kWCPLMessageReplyEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setRepeatButtonStyle:(NSInteger)repeatButtonStyle {
    _repeatButtonStyle = repeatButtonStyle;
    [[NSUserDefaults standardUserDefaults] setInteger:repeatButtonStyle forKey:kWCPLRepeatButtonStyle];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setRepeatButtonIconIndex:(NSInteger)repeatButtonIconIndex {
    _repeatButtonIconIndex = repeatButtonIconIndex;
    [[NSUserDefaults standardUserDefaults] setInteger:repeatButtonIconIndex forKey:kWCPLRepeatButtonIconIndex];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setRepeatButtonCustomImagePath:(NSString *)repeatButtonCustomImagePath {
    _repeatButtonCustomImagePath = repeatButtonCustomImagePath;
    [[NSUserDefaults standardUserDefaults] setObject:repeatButtonCustomImagePath forKey:kWCPLRepeatButtonCustomImage];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeGestureEnable:(BOOL)swipeGestureEnable {
    _swipeGestureEnable = swipeGestureEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeGestureEnable forKey:kWCPLSwipeGestureEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeQuoteEnable:(BOOL)swipeQuoteEnable {
    _swipeQuoteEnable = swipeQuoteEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeQuoteEnable forKey:kWCPLSwipeQuoteEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setTapReferJumpEnable:(BOOL)tapReferJumpEnable {
    _tapReferJumpEnable = tapReferJumpEnable;
    [[NSUserDefaults standardUserDefaults] setBool:tapReferJumpEnable forKey:kWCPLTapReferJumpEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeLeftOtherAction:(NSInteger)swipeLeftOtherAction {
    _swipeLeftOtherAction = swipeLeftOtherAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeLeftOtherAction forKey:kWCPLSwipeLeftOtherAction];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeLeftSelfAction:(NSInteger)swipeLeftSelfAction {
    _swipeLeftSelfAction = swipeLeftSelfAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeLeftSelfAction forKey:kWCPLSwipeLeftSelfAction];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeRightEnable:(BOOL)swipeRightEnable {
    _swipeRightEnable = swipeRightEnable;
    [[NSUserDefaults standardUserDefaults] setBool:swipeRightEnable forKey:kWCPLSwipeRightEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeRightOtherAction:(NSInteger)swipeRightOtherAction {
    _swipeRightOtherAction = swipeRightOtherAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeRightOtherAction forKey:kWCPLSwipeRightOtherAction];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSwipeRightSelfAction:(NSInteger)swipeRightSelfAction {
    _swipeRightSelfAction = swipeRightSelfAction;
    [[NSUserDefaults standardUserDefaults] setInteger:swipeRightSelfAction forKey:kWCPLSwipeRightSelfAction];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
