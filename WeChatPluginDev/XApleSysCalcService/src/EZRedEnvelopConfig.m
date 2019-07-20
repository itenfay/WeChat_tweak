//
//  EZRedEnvelopConfig.m
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import "EZRedEnvelopConfig.h"

static NSString *const kEZDelaySeconds = @"EZDelaySecondsKey";
static NSString *const kEZAutoReceiveRedEnvelop = @"EZWCRedEnvelopSwitchKey";
static NSString *const kEZReceiveSelfRedEnvelop = @"EZReceiveSelfRedEnvelopKey";
static NSString *const kEZSerialReceive = @"EZSerialReceiveKey";
static NSString *const kEZBlackList = @"EZBlackListKey";
static NSString *const kEZRevokeEnable = @"EZRevokeEnableKey";
static NSString *const kEZStepCount = @"EZStepCountKey";
static NSString *const EZLastChangeStepCountDate = @"EZLastChangeSCDateKey";
static NSString *const kEZChatIgnoreInfo = @"EZChatIgnoreInfoKey";
static NSString *const kEZFakeLocLat = @"EZFakeLocLatKey";
static NSString *const kEZFakeLocLng = @"EZFakeLocLngKey";
static NSString *const kEZFakeLocEnable = @"EZFakeLocEnableKey";
static NSString *const kEZAVTPOn = @"EZAVTPOnKey";

@interface EZRedEnvelopConfig ()

@end

@implementation EZRedEnvelopConfig

+ (instancetype)sharedConfig {
    static EZRedEnvelopConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [EZRedEnvelopConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        _delaySeconds = [[NSUserDefaults standardUserDefaults] integerForKey:kEZDelaySeconds];
        _autoReceiveEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kEZAutoReceiveRedEnvelop];
        _serialReceive = [[NSUserDefaults standardUserDefaults] boolForKey:kEZSerialReceive];
        _blackList = [[NSUserDefaults standardUserDefaults] objectForKey:kEZBlackList];
        _receiveSelfRedEnvelop = [[NSUserDefaults standardUserDefaults] boolForKey:kEZReceiveSelfRedEnvelop];
        _revokeEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kEZRevokeEnable];
        _stepCount = [[NSUserDefaults standardUserDefaults] integerForKey:kEZStepCount];
        _lastChangeStepCountDate = [self getLastChangeStepCountDate];
        _chatIgnoreInfo = [self getChatIgnoreNameList];
        _lat = [[NSUserDefaults standardUserDefaults] doubleForKey:kEZFakeLocLat];
        _lng = [[NSUserDefaults standardUserDefaults] doubleForKey:kEZFakeLocLng];
        _fakeLocEnable = [[NSUserDefaults standardUserDefaults] boolForKey:kEZFakeLocEnable];
        _TPOn = [[NSUserDefaults standardUserDefaults] boolForKey:kEZAVTPOn];
        
    }
    return self;
}

- (void)setDelaySeconds:(NSInteger)delaySeconds {
    _delaySeconds = delaySeconds;
    
    [[NSUserDefaults standardUserDefaults] setInteger:delaySeconds forKey:kEZDelaySeconds];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setAutoReceiveEnable:(BOOL)autoReceiveEnable {
    _autoReceiveEnable = autoReceiveEnable;
    
    [[NSUserDefaults standardUserDefaults] setBool:autoReceiveEnable forKey:kEZAutoReceiveRedEnvelop];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setReceiveSelfRedEnvelop:(BOOL)receiveSelfRedEnvelop {
    _receiveSelfRedEnvelop = receiveSelfRedEnvelop;
    
    [[NSUserDefaults standardUserDefaults] setBool:receiveSelfRedEnvelop forKey:kEZReceiveSelfRedEnvelop];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setSerialReceive:(BOOL)serialReceive {
    _serialReceive = serialReceive;
    
    [[NSUserDefaults standardUserDefaults] setBool:serialReceive forKey:kEZSerialReceive];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setBlackList:(NSArray *)blackList {
    _blackList = blackList;
    
    [[NSUserDefaults standardUserDefaults] setObject:blackList forKey:kEZBlackList];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setRevokeEnable:(BOOL)revokeEnable {
    _revokeEnable = revokeEnable;
    
    [[NSUserDefaults standardUserDefaults] setBool:revokeEnable forKey:kEZRevokeEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setStepCount:(NSInteger)stepCount {
    _stepCount = stepCount;
    
    [[NSUserDefaults standardUserDefaults] setInteger:stepCount forKey:kEZStepCount];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (NSDate *)getLastChangeStepCountDate {
    NSDate *date = [[NSUserDefaults standardUserDefaults] objectForKey:EZLastChangeStepCountDate];
    return date;
}

- (void)saveLastChangeStepCountDateToLocalFile {
    [[NSUserDefaults standardUserDefaults] setObject:_lastChangeStepCountDate forKey:EZLastChangeStepCountDate];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (NSMutableDictionary *)getChatIgnoreNameList {
    NSDictionary *igDict = [[NSUserDefaults standardUserDefaults] objectForKey:kEZChatIgnoreInfo];
    if (!igDict) {
        igDict = [NSDictionary dictionary];
    }
    return [igDict mutableCopy];
}

- (void)saveChatIgnoreNameListToLocalFile {
    [[NSUserDefaults standardUserDefaults] setObject:_chatIgnoreInfo forKey:kEZChatIgnoreInfo];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setLat:(double)lat {
    _lat = lat;
    
    [[NSUserDefaults standardUserDefaults] setDouble:lat forKey:kEZFakeLocLat];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setLng:(double)lng {
    _lng = lng;
    
    [[NSUserDefaults standardUserDefaults] setDouble:lng forKey:kEZFakeLocLng];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setFakeLocEnable:(BOOL)fakeLocEnable {
    _fakeLocEnable = fakeLocEnable;
    
    [[NSUserDefaults standardUserDefaults] setBool:fakeLocEnable forKey:kEZFakeLocEnable];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setTPOn:(BOOL)TPOn {
    _TPOn = TPOn;
    
    [[NSUserDefaults standardUserDefaults] setBool:TPOn forKey:kEZAVTPOn];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
