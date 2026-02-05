//
// WCPLFuncService.m
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLFuncService.h"
#import "WCPLConfigCenter.h"
#import "WCPLServiceCenter.h"
#import <objc/message.h>
#import <objc/runtime.h>

@interface WCPLFuncService ()

@end

@implementation WCPLFuncService

static NSString *wcpl_safeUserNameString(id value) {
    if (![value isKindOfClass:[NSString class]]) {
        return nil;
    }
    NSString *trimmed = [(NSString *)value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static BOOL wcpl_isFriendUser(NSString *userName) {
    NSString *target = wcpl_safeUserNameString(userName);
    if (target.length == 0) {
        return NO;
    }

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) {
        return NO;
    }

    id contact = nil;
    @try {
        if ([contactMgr respondsToSelector:@selector(getContactByName:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), target);
        }
        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromDB:), target);
        }
        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromCache:), target);
        }
    } @catch (__unused NSException *exception) {
        contact = nil;
    }

    if (!contact) {
        return NO;
    }

    if ([contact respondsToSelector:@selector(isMyContact)]) {
        @try {
            BOOL isMyContact = ((BOOL (*)(id, SEL))objc_msgSend)(contact, @selector(isMyContact));
            if (isMyContact) {
                return YES;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id friendScene = [contact valueForKey:@"m_uiFriendScene"];
        if ([friendScene respondsToSelector:@selector(integerValue)]) {
            return ((NSInteger)[friendScene integerValue]) > 0;
        }
    } @catch (__unused NSException *exception) {
    }

    return NO;
}

+ (BOOL)shouldIgnoreMessageWrap:(id)msgWrap {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
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

    NSString *fromUsr = wcpl_safeUserNameString(nsFromUsrIvar ? object_getIvar(msgWrap, nsFromUsrIvar) : nil);
    NSString *realChatUsr = wcpl_safeUserNameString(nsRealChatUsrIvar ? object_getIvar(msgWrap, nsRealChatUsrIvar) : nil);

    if (fromUsr.length > 0 && config.chatIgnoreInfo[fromUsr].boolValue) {
        return YES;
    }

    BOOL isGroupMessage = (fromUsr.length > 0 && [fromUsr rangeOfString:@"@chatroom"].location != NSNotFound);
    if (isGroupMessage) {
        if (realChatUsr.length > 0 && config.userIgnoreInfo[realChatUsr].boolValue) {
            return YES;
        }
        return NO;
    }

    if (fromUsr.length > 0 && config.userIgnoreInfo[fromUsr].boolValue) {
        return wcpl_isFriendUser(fromUsr);
    }

    return NO;
}

+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList {
    if (![msgList isKindOfClass:[NSArray class]]) {
        return msgList;
    }

    NSMutableArray *msgListResult = [msgList mutableCopy];
    if (![WCPLConfigCenter shared].ignore.userIgnoreEnable) {
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
