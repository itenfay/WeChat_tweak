//
// WCPLFuncService.m
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLFuncService.h"
#import "WCPLRedEnvelopConfig.h"
#import <objc/runtime.h>

@interface WCPLFuncService ()

@end

@implementation WCPLFuncService

+ (BOOL)shouldIgnoreMessageWrap:(id)msgWrap {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config || !config.userIgnoreEnable) {
        return NO;
    }

    Class CMessageWrapClass = objc_getClass("CMessageWrap");
    if (!CMessageWrapClass || ![msgWrap isKindOfClass:CMessageWrapClass]) {
        return NO;
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
        return NO;
    }

    Ivar nsFromUsrIvar = class_getInstanceVariable(CMessageWrapClass, "m_nsFromUsr");
    Ivar nsRealChatUsrIvar = class_getInstanceVariable(CMessageWrapClass, "m_nsRealChatUsr");

    NSString *fromUsr = nsFromUsrIvar ? object_getIvar(msgWrap, nsFromUsrIvar) : nil;
    if (fromUsr.length > 0 && config.chatIgnoreInfo[fromUsr].boolValue) {
        return YES;
    }
    if (fromUsr.length > 0 && config.userIgnoreInfo[fromUsr].boolValue) {
        return YES;
    }

    NSString *realChatUsr = nsRealChatUsrIvar ? object_getIvar(msgWrap, nsRealChatUsrIvar) : nil;
    if (realChatUsr.length > 0 && config.userIgnoreInfo[realChatUsr].boolValue) {
        return YES;
    }

    return NO;
}

+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList {
    if (![msgList isKindOfClass:[NSArray class]]) {
        return msgList;
    }

    NSMutableArray *msgListResult = [msgList mutableCopy];
    if (![WCPLRedEnvelopConfig sharedConfig].userIgnoreEnable) {
        return msgListResult;
    }

    for (id msgWrap in msgList) {
        if ([self shouldIgnoreMessageWrap:msgWrap]) {
            [msgListResult removeObject:msgWrap];
            continue;
        }
    }

    return msgListResult;
}

@end
