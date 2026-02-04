//
// WeChatRedEnvelopParam.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WeChatRedEnvelopParam.h"

@implementation WeChatRedEnvelopParam

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

    // 与查询请求保持一致的字段（部分版本缺失会导致打开失败）
    params[@"agreeDuty"] = @"0";
    params[@"inWay"] = @"0";

    return params;
}

@end
