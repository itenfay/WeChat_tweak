//
// WeChatRedEnvelopParam.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WeChatRedEnvelopParam.h"

@implementation WeChatRedEnvelopParam

- (NSDictionary *)toParams {
    return @{
             @"msgType": self.msgType,
             @"sendId": self.sendId,
             @"channelId": self.channelId,
             @"nickName": self.nickName,
             @"headImg": self.headImg,
             @"nativeUrl": self.nativeUrl,
             @"sessionUserName": self.sessionUserName,
             @"timingIdentifier": self.timingIdentifier
             };
}

@end
