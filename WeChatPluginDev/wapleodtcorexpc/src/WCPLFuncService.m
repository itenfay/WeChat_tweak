//
// WCPLFuncService.m
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLFuncService.h"
#import "WCPLRedEnvelopConfig.h"
#import <objc/runtime.h>

NSString *const WCPLShortDateFormat = @"yyyy-MM-dd";
NSString *const WCPLLongDateFormat  = @"yyyy-MM-dd HH:mm:ss";

@interface WCPLFuncService ()

@end

@implementation WCPLFuncService

+ (CGFloat)screenWidth {
    return WCPLScreenWidth;
}

+ (CGFloat)screenHeight {
    return WCPLScreenHeight;
}

+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList {
    if (![msgList isKindOfClass:[NSArray class]]) {
        return msgList;
    }

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSMutableArray *msgListResult = [msgList mutableCopy];
    if (!config.userIgnoreEnable) {
        return msgListResult;
    }

    Class CMessageWrapClass = objc_getClass("CMessageWrap");
    if (!CMessageWrapClass) {
        return msgListResult;
    }

    Ivar nsFromUsrIvar = class_getInstanceVariable(CMessageWrapClass, "m_nsFromUsr");
    Ivar nsRealChatUsrIvar = class_getInstanceVariable(CMessageWrapClass, "m_nsRealChatUsr");

    for (id msgWrap in msgList) {
        if (![msgWrap isKindOfClass:CMessageWrapClass]) {
            continue;
        }

        BOOL isSender = NO;
        @try {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
            isSender = (BOOL)[CMessageWrapClass performSelector:@selector(isSenderFromMsgWrap:) withObject:msgWrap];
#pragma clang diagnostic pop
        } @catch (__unused NSException *exception) {
            isSender = NO;
        }
        if (isSender) {
            continue;
        }

        NSString *fromUsr = nsFromUsrIvar ? object_getIvar(msgWrap, nsFromUsrIvar) : nil;
        if (fromUsr.length > 0 && config.chatIgnoreInfo[fromUsr].boolValue) {
            [msgListResult removeObject:msgWrap];
            continue;
        }
        if (fromUsr.length > 0 && config.userIgnoreInfo[fromUsr].boolValue) {
            [msgListResult removeObject:msgWrap];
            continue;
        }

        NSString *realChatUsr = nsRealChatUsrIvar ? object_getIvar(msgWrap, nsRealChatUsrIvar) : nil;
        if (realChatUsr.length > 0 && config.userIgnoreInfo[realChatUsr].boolValue) {
            [msgListResult removeObject:msgWrap];
            continue;
        }
    }

    return msgListResult;
}

+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)format {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:format];
    return [dateFormatter stringFromDate:date];
}

@end
