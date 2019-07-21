//
// WCPRedEnvelopConfig.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017年 dyf. All rights reserved.
//

#import "WCPRedEnvelopConfig.h"

static NSString *const kWCPDelaySeconds           = @"kWCPDelaySeconds";
static NSString *const kWCPAutoReceiveRedEnvelop  = @"kWCPAutoReceiveRedEnvelop";
static NSString *const kWCPReceiveSelfRedEnvelop  = @"kWCPReceiveSelfRedEnvelop";
static NSString *const kWCPSerialReceive          = @"kWCPSerialReceive";
static NSString *const kWCPBlackList              = @"kWCPBlackList";
static NSString *const kWCPRevokeEnable           = @"kWCPRevokeEnable";
static NSString *const kWCPStepCount              = @"kWCPStepCount";
static NSString *const WCPLastChangeStepCountDate = @"WCPLastChangeStepCountDate";
static NSString *const kWCPChatIgnoreInfo         = @"kWCPChatIgnoreInfo";
static NSString *const kWCPFakeLocLat             = @"kWCPFakeLocLat";
static NSString *const kWCPFakeLocLng             = @"kWCPFakeLocLng";
static NSString *const kWCPFakeLocEnable          = @"kWCPFakeLocEnable";
static NSString *const kWCPAVTPOn                 = @"kWCPAVTPOn";

@interface WCPRedEnvelopConfig ()

@end

@implementation WCPRedEnvelopConfig

+ (instancetype)sharedConfig {
    static WCPRedEnvelopConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPRedEnvelopConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        _delaySeconds            = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPDelaySeconds];
        _autoReceiveEnable       = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPAutoReceiveRedEnvelop];
        _serialReceive           = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPSerialReceive];
        _blackList               = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPBlackList];
        _receiveSelfRedEnvelop   = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPReceiveSelfRedEnvelop];
        _revokeEnable            = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPRevokeEnable];
        _stepCount               = [[NSUserDefaults standardUserDefaults] integerForKey:kWCPStepCount];
        _lastChangeStepCountDate = [self getLastChangeStepCountDate];
        _chatIgnoreInfo          = [self getChatIgnoreNameList];
        _lat                     = [[NSUserDefaults standardUserDefaults] doubleForKey:kWCPFakeLocLat];
        _lng                     = [[NSUserDefaults standardUserDefaults] doubleForKey:kWCPFakeLocLng];
        _fakeLocEnable           = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPFakeLocEnable];
        _TPOn                    = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPAVTPOn];
    }
    return self;
}

- (void)setDelaySeconds:(NSInteger)delaySeconds {
    _delaySeconds = delaySeconds;
    
    [[NSUserDefaults standardUserDefaults] setInteger:delaySeconds forKey:kWCPDelaySeconds];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setAutoReceiveEnable:(BOOL)autoReceiveEnable {
    _autoReceiveEnable = autoReceiveEnable;
    
    [[NSUserDefaults standardUserDefaults] setBool:autoReceiveEnable forKey:kWCPAutoReceiveRedEnvelop];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setReceiveSelfRedEnvelop:(BOOL)receiveSelfRedEnvelop {
    _receiveSelfRedEnvelop = receiveSelfRedEnvelop;
    
    [[NSUserDefaults standardUserDefaults] setBool:receiveSelfRedEnvelop forKey:kWCPReceiveSelfRedEnvelop];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSerialReceive:(BOOL)serialReceive {
    _serialReceive = serialReceive;
    
    [[NSUserDefaults standardUserDefaults] setBool:serialReceive forKey:kWCPSerialReceive];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setBlackList:(NSArray *)blackList {
    _blackList = blackList;
    
    [[NSUserDefaults standardUserDefaults] setObject:blackList forKey:kWCPBlackList];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    
    [[NSUserDefaults standardUserDefaults] setBool:revokeEnable forKey:kWCPRevokeEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setStepCount:(NSInteger)stepCount {
    _stepCount = stepCount;
    
    [[NSUserDefaults standardUserDefaults] setInteger:stepCount forKey:kWCPStepCount];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (NSDate *)getLastChangeStepCountDate {
    NSDate *date = [[NSUserDefaults standardUserDefaults] objectForKey:WCPLastChangeStepCountDate];
    return date;
}

- (void)saveLastChangeStepCountDateToLocalFile {
    [[NSUserDefaults standardUserDefaults] setObject:_lastChangeStepCountDate forKey:WCPLastChangeStepCountDate];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (NSMutableDictionary *)getChatIgnoreNameList {
    NSDictionary *igDict = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPChatIgnoreInfo];
    if (!igDict) {
        igDict = [NSDictionary dictionary];
    }
    return [igDict mutableCopy];
}

- (void)saveChatIgnoreNameListToLocalFile {
    [[NSUserDefaults standardUserDefaults] setObject:_chatIgnoreInfo forKey:kWCPChatIgnoreInfo];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setLat:(double)lat {
    _lat = lat;
    
    [[NSUserDefaults standardUserDefaults] setDouble:lat forKey:kWCPFakeLocLat];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setLng:(double)lng {
    _lng = lng;
    
    [[NSUserDefaults standardUserDefaults] setDouble:lng forKey:kWCPFakeLocLng];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setFakeLocEnable:(BOOL)fakeLocEnable {
    _fakeLocEnable = fakeLocEnable;
    
    [[NSUserDefaults standardUserDefaults] setBool:fakeLocEnable forKey:kWCPFakeLocEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setTPOn:(BOOL)TPOn {
    _TPOn = TPOn;
    
    [[NSUserDefaults standardUserDefaults] setBool:TPOn forKey:kWCPAVTPOn];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
