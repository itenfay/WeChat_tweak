//
// WCPLRedEnvelopConfig.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017年 dyf. All rights reserved.
//

#import "WCPLRedEnvelopConfig.h"
#import "WCPLConfigSanitizer.h"
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

@interface WCPLRedEnvelopConfig ()

- (void)wcpl_setBool:(BOOL)value forKey:(NSString *)key;
- (void)wcpl_setInteger:(NSInteger)value forKey:(NSString *)key;
- (void)wcpl_setObject:(id)value forKey:(NSString *)key;

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
        _delaySeconds = [defaults integerForKey:kWCPLDelaySeconds];
        _autoReceiveEnable = [defaults boolForKey:kWCPLAutoReceiveRedEnvelop];

        id privateEnable = [defaults objectForKey:kWCPLPrivateRedEnvelopEnable];
        _privateRedEnvelopEnable = privateEnable ? [privateEnable boolValue] : NO;

        id groupEnable = [defaults objectForKey:kWCPLGroupRedEnvelopEnable];
        _groupRedEnvelopEnable = groupEnable ? [groupEnable boolValue] : YES;

        _serialReceive = [defaults boolForKey:kWCPLSerialReceive];

        _blackList = WCPLSanitizeUserNameArray([defaults objectForKey:kWCPLBlackList]);
        _groupDenyList = WCPLSanitizeUserNameArray([defaults objectForKey:kWCPLGroupDenyList]);

        id scopeValue = [defaults objectForKey:kWCPLGroupRedEnvelopScope];
        NSInteger defaultScope = (_blackList.count > 0) ? 1 : 0;
        _groupRedEnvelopScope = scopeValue ? [scopeValue integerValue] : defaultScope;
        if (_groupRedEnvelopScope < 0 || _groupRedEnvelopScope > 2) {
            _groupRedEnvelopScope = defaultScope;
        }

        _receiveSelfRedEnvelop = [defaults boolForKey:kWCPLReceiveSelfRedEnvelop];
    }
    return self;
}

#pragma mark - UserDefaults

- (void)wcpl_setBool:(BOOL)value forKey:(NSString *)key {
    [[NSUserDefaults standardUserDefaults] setBool:value forKey:key];
}

- (void)wcpl_setInteger:(NSInteger)value forKey:(NSString *)key {
    [[NSUserDefaults standardUserDefaults] setInteger:value forKey:key];
}

- (void)wcpl_setObject:(id)value forKey:(NSString *)key {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if (value) {
        [defaults setObject:value forKey:key];
    } else {
        [defaults removeObjectForKey:key];
    }
}

#pragma mark - Setters

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
    _blackList = WCPLSanitizeUserNameArray(blackList);
    [self wcpl_setObject:_blackList forKey:kWCPLBlackList];
}

- (NSArray *)allowedGroupList {
    return _blackList ?: @[];
}

- (void)setAllowedGroupList:(NSArray *)allowedGroupList {
    _blackList = WCPLSanitizeUserNameArray(allowedGroupList);
    [self wcpl_setObject:_blackList forKey:kWCPLBlackList];
}

- (void)setGroupDenyList:(NSArray *)groupDenyList {
    _groupDenyList = WCPLSanitizeUserNameArray(groupDenyList);
    [self wcpl_setObject:_groupDenyList forKey:kWCPLGroupDenyList];
}

- (NSArray *)blockedGroupList {
    return _groupDenyList ?: @[];
}

- (void)setBlockedGroupList:(NSArray *)blockedGroupList {
    _groupDenyList = WCPLSanitizeUserNameArray(blockedGroupList);
    [self wcpl_setObject:_groupDenyList forKey:kWCPLGroupDenyList];
}

@end
