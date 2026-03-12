//
// WeChatRedEnvelopParam.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WeChatRedEnvelopParam.h"
#import "WCPLSharedConfigHelpers.h"

@implementation WeChatRedEnvelopParam

- (NSDictionary *)toParams {
    NSDictionary *fields = @{
        @"msgType": self.msgType ?: [NSNull null],
        @"sendId": self.sendId ?: [NSNull null],
        @"channelId": self.channelId ?: [NSNull null],
        @"nickName": self.nickName ?: [NSNull null],
        @"headImg": self.headImg ?: [NSNull null],
        @"nativeUrl": self.nativeUrl ?: [NSNull null],
        @"sessionUserName": self.sessionUserName ?: [NSNull null],
        @"timingIdentifier": self.timingIdentifier ?: [NSNull null],
        @"sign": self.sign ?: [NSNull null],
    };
    return WCPLBuildRedEnvelopParamsFromDictionary(fields);
}

@end
