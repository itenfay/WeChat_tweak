//
// WCPLSharedConfigHelpers.m
//

#import "WCPLSharedConfigHelpers.h"

#import "WCPLConfigSanitizer.h"
#import "WCPLIgnoreConfig.h"
#import "WCPLPureHelpers.h"
#import "WCPLRedEnvelopConfig.h"

static NSString *wcpl_stringValueOrNil(id value) {
    if ([value isKindOfClass:[NSString class]]) {
        return (NSString *)value;
    }
    if ([value respondsToSelector:@selector(stringValue)]) {
        @try {
            id text = [value stringValue];
            return [text isKindOfClass:[NSString class]] ? (NSString *)text : nil;
        } @catch (__unused NSException *exception) {
            return nil;
        }
    }
    return nil;
}

NSString *WCPLSanitizeReplyText(id value) {
    return WCPLTrimText(value) ?: @"";
}

NSDictionary<NSString *, NSString *> *WCPLBuildRedEnvelopParamsFromDictionary(id rawFields) {
    NSDictionary *fields = [rawFields isKindOfClass:[NSDictionary class]] ? (NSDictionary *)rawFields : nil;
    NSMutableDictionary<NSString *, NSString *> *params = [NSMutableDictionary dictionary];
    NSArray<NSString *> *fieldNames = @[
        @"msgType",
        @"sendId",
        @"channelId",
        @"nickName",
        @"headImg",
        @"nativeUrl",
        @"sessionUserName",
        @"timingIdentifier",
        @"sign"
    ];

    for (NSString *fieldName in fieldNames) {
        NSString *value = wcpl_stringValueOrNil(fields[fieldName]);
        if (value.length > 0) {
            params[fieldName] = value;
        }
    }

    NSString *nativeUrl = wcpl_stringValueOrNil(fields[@"nativeUrl"]);
    if (nativeUrl.length > 0) {
        NSString *sendUserName = WCPLQueryValueForKeyInURL(@"sendusername", nativeUrl)
            ?: WCPLQueryValueForKeyInURL(@"sendUserName", nativeUrl)
            ?: WCPLQueryValueForKeyInURL(@"send_user_name", nativeUrl);
        if (sendUserName.length > 0) {
            params[@"sendUserName"] = sendUserName;
        }

        NSString *totalNum = WCPLQueryValueForKeyInURL(@"total_num", nativeUrl)
            ?: WCPLQueryValueForKeyInURL(@"totalNum", nativeUrl);
        if (totalNum.length > 0) {
            params[@"total_num"] = totalNum;
        }
    }

    params[@"agreeDuty"] = @"0";
    params[@"inWay"] = @"0";
    return params.copy;
}

NSInteger WCPLResolveRedEnvelopGroupScope(id rawScopeValue, id allowedGroupList) {
    NSArray<NSString *> *sanitizedAllowedGroups = WCPLSanitizeUserNameArray(allowedGroupList);
    NSInteger defaultScope = sanitizedAllowedGroups.count > 0 ? 1 : 0;
    NSInteger resolvedScope = rawScopeValue ? [rawScopeValue integerValue] : defaultScope;
    if (resolvedScope < 0 || resolvedScope > 2) {
        resolvedScope = defaultScope;
    }
    return resolvedScope;
}

NSInteger WCPLNormalizeRedEnvelopNotifyTarget(id rawNotifyTargetValue) {
    NSInteger resolvedTarget = rawNotifyTargetValue ? [rawNotifyTargetValue integerValue]
                                                    : WCPLRedEnvelopNotifyTargetDisabled;
    if (resolvedTarget < WCPLRedEnvelopNotifyTargetDisabled ||
        resolvedTarget > WCPLRedEnvelopNotifyTargetFileHelper) {
        resolvedTarget = WCPLRedEnvelopNotifyTargetDisabled;
    }
    return resolvedTarget;
}

NSInteger WCPLResolveQuitMonitorScope(id rawScopeValue, id rawWhitelistInfo) {
    NSDictionary<NSString *, NSNumber *> *sanitizedWhitelist = WCPLSanitizeIgnoreDictionary(rawWhitelistInfo);
    __block NSUInteger validChatRoomCount = 0;
    [sanitizedWhitelist enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (WCPLIsChatRoomName(key) && obj.boolValue) {
            validChatRoomCount += 1;
        }
    }];

    NSInteger defaultScope = validChatRoomCount > 0 ? WCPLQuitMonitorScopeWhitelist : WCPLQuitMonitorScopeAll;
    NSInteger resolvedScope = rawScopeValue ? [rawScopeValue integerValue] : defaultScope;
    if (resolvedScope != WCPLQuitMonitorScopeAll && resolvedScope != WCPLQuitMonitorScopeWhitelist) {
        resolvedScope = defaultScope;
    }
    return resolvedScope;
}
