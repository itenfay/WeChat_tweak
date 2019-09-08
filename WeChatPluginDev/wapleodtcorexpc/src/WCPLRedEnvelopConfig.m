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

@end
