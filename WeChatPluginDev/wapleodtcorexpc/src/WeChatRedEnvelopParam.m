//
// WeChatRedEnvelopParam.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WeChatRedEnvelopParam.h"

@implementation WeChatRedEnvelopParam

- (NSString *)wcpl_queryValueForKey:(NSString *)key inUrl:(NSString *)urlString {
    if (![key isKindOfClass:[NSString class]] || key.length == 0) return nil;
    if (![urlString isKindOfClass:[NSString class]] || urlString.length == 0) return nil;

    NSRange qmark = [urlString rangeOfString:@"?"];
    if (qmark.location == NSNotFound || qmark.location + 1 >= urlString.length) {
        return nil;
    }

    NSString *query = [urlString substringFromIndex:qmark.location + 1];
    if (query.length == 0) return nil;

    NSArray<NSString *> *pairs = [query componentsSeparatedByString:@"&"];
    for (NSString *pair in pairs) {
        if (![pair isKindOfClass:[NSString class]] || pair.length == 0) continue;
        NSRange eq = [pair rangeOfString:@"="];
        if (eq.location == NSNotFound) continue;

        NSString *k = [pair substringToIndex:eq.location];
        if (![k isEqualToString:key]) continue;

        NSString *v = (eq.location + 1 < pair.length) ? [pair substringFromIndex:eq.location + 1] : @"";
        NSString *decoded = [v stringByRemovingPercentEncoding] ?: v;
        decoded = [decoded stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        return decoded.length > 0 ? decoded : nil;
    }

    return nil;
}

- (NSDictionary *)toParams {
    NSString *(^stringValue)(id value) = ^NSString *(id value) {
        if ([value isKindOfClass:[NSString class]]) {
            return (NSString *)value;
        }
        if ([value respondsToSelector:@selector(stringValue)]) {
            @try {
                return [value stringValue];
            } @catch (__unused NSException *exception) {
                return nil;
            }
        }
        return nil;
    };

    NSMutableDictionary *params = [NSMutableDictionary dictionary];

    NSString *msgType = stringValue(self.msgType);
    if (msgType.length > 0) params[@"msgType"] = msgType;

    NSString *sendId = stringValue(self.sendId);
    if (sendId.length > 0) params[@"sendId"] = sendId;

    NSString *channelId = stringValue(self.channelId);
    if (channelId.length > 0) params[@"channelId"] = channelId;

    NSString *nickName = stringValue(self.nickName);
    if (nickName.length > 0) params[@"nickName"] = nickName;

    NSString *headImg = stringValue(self.headImg);
    if (headImg.length > 0) params[@"headImg"] = headImg;

    NSString *nativeUrl = stringValue(self.nativeUrl);
    if (nativeUrl.length > 0) params[@"nativeUrl"] = nativeUrl;

    NSString *sessionUserName = stringValue(self.sessionUserName);
    if (sessionUserName.length > 0) params[@"sessionUserName"] = sessionUserName;

    NSString *timingIdentifier = stringValue(self.timingIdentifier);
    if (timingIdentifier.length > 0) params[@"timingIdentifier"] = timingIdentifier;

    NSString *sign = stringValue(self.sign);
    if (sign.length > 0) params[@"sign"] = sign;

    NSString *nativeUrlForParse = stringValue(self.nativeUrl);
    if (nativeUrlForParse.length > 0) {
        NSString *sendUserName = [self wcpl_queryValueForKey:@"sendusername" inUrl:nativeUrlForParse]
            ?: [self wcpl_queryValueForKey:@"sendUserName" inUrl:nativeUrlForParse]
            ?: [self wcpl_queryValueForKey:@"send_user_name" inUrl:nativeUrlForParse];
        if (sendUserName.length > 0) {
            params[@"sendUserName"] = sendUserName;
        }

        NSString *totalNum = [self wcpl_queryValueForKey:@"total_num" inUrl:nativeUrlForParse]
            ?: [self wcpl_queryValueForKey:@"totalNum" inUrl:nativeUrlForParse];
        if (totalNum.length > 0) {
            params[@"total_num"] = totalNum;
        }
    }

    // 与查询请求保持一致的字段（部分版本缺失会导致打开失败）
    params[@"agreeDuty"] = @"0";
    params[@"inWay"] = @"0";

    return params;
}

@end
