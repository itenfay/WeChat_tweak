//
// WCPLFuncService.m
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLFuncService.h"
#import "WCPLConfigCenter.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
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

static NSString *wcpl_groupSenderFromContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length < 3) {
        return nil;
    }
    NSRange sep = [content rangeOfString:@":\n"];
    if (sep.location == NSNotFound || sep.location == 0 || sep.location > 128) {
        return nil;
    }

    NSString *candidate = wcpl_safeUserNameString([content substringToIndex:sep.location]);
    if (candidate.length == 0) {
        return nil;
    }
    if ([candidate rangeOfString:@"\n"].location != NSNotFound ||
        [candidate rangeOfString:@"\t"].location != NSNotFound ||
        [candidate rangeOfString:@" "].location != NSNotFound) {
        return nil;
    }
    return candidate;
}

static unsigned int wcpl_messageTypeFromWrap(id msgWrap) {
    if (!msgWrap) {
        return 0;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(m_uiMessageType)]) {
            return ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_uiMessageType));
        }

        id value = [msgWrap valueForKey:@"m_uiMessageType"];
        if ([value respondsToSelector:@selector(unsignedIntValue)]) {
            return ((unsigned int (*)(id, SEL))objc_msgSend)(value, @selector(unsignedIntValue));
        }
    } @catch (__unused NSException *exception) {
        return 0;
    }

    return 0;
}

static BOOL wcpl_isRedEnvelopMessageWrap(id msgWrap, Ivar nsContentIvar) {
    if (!msgWrap || wcpl_messageTypeFromWrap(msgWrap) != 49) {
        return NO;
    }

    NSString *content = wcpl_safeUserNameString(nsContentIvar ? object_getIvar(msgWrap, nsContentIvar) : nil);
    if (content.length == 0) {
        return NO;
    }

    // 消息屏蔽链路保留红包可见，避免密友红包被上游过滤。
    if ([content rangeOfString:@"wxpay://c2cbizmessagehandler/hongbao/" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    if ([content rangeOfString:@"receivehongbao" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }

    BOOL hasWCPayInfo = ([content rangeOfString:@"<wcpayinfo" options:NSCaseInsensitiveSearch].location != NSNotFound);
    BOOL hasHongbaoKeyword = ([content rangeOfString:@"hongbao" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                              [content rangeOfString:@"红包"].location != NSNotFound);
    return hasWCPayInfo && hasHongbaoKeyword;
}

static id wcpl_contactForUserName(NSString *userName) {
    NSString *target = wcpl_safeUserNameString(userName);
    if (target.length == 0) {
        return nil;
    }

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) {
        return nil;
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

    return contact;
}

static NSSet<NSString *> *wcpl_normalizedFriendUserSet(NSArray<NSString *> *userNames) {
    if (![userNames isKindOfClass:[NSArray class]]) {
        return [NSSet set];
    }

    NSMutableSet<NSString *> *set = [NSMutableSet setWithCapacity:userNames.count];
    for (NSString *userName in userNames) {
        NSString *target = wcpl_safeUserNameString(userName);
        if (target.length == 0 || [target rangeOfString:@"@chatroom"].location != NSNotFound) {
            continue;
        }
        [set addObject:target];
    }
    return set.copy;
}

static BOOL wcpl_changeNotifyStatus(id contactMgr, id contact, BOOL notifyOpen) {
    if (!contactMgr || !contact || ![contactMgr respondsToSelector:@selector(ChangeNotifyStatus:withStatus:sync:)]) {
        return NO;
    }
    return ((BOOL (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr,
                                                               @selector(ChangeNotifyStatus:withStatus:sync:),
                                                               contact,
                                                               notifyOpen,
                                                               YES);
}

+ (BOOL)syncIgnoreUserToSystemNotifyStatus:(NSString *)userName enabled:(BOOL)enabled {
    NSString *target = wcpl_safeUserNameString(userName);
    if (target.length == 0 || [target rangeOfString:@"@chatroom"].location != NSNotFound) {
        return NO;
    }

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) {
        WCPLLogWarning(@"[屏蔽同步] 通知状态同步失败: contactMgr不存在 user=%@", target);
        return NO;
    }

    id contact = wcpl_contactForUserName(target);
    if (!contact) {
        WCPLLogWarning(@"[屏蔽同步] 通知状态同步失败: 联系人不存在 user=%@", target);
        return NO;
    }

    BOOL notifyOpen = !enabled;
    BOOL synced = NO;
    BOOL localApplied = NO;

    @try {
        synced = wcpl_changeNotifyStatus(contactMgr, contact, notifyOpen);

        if (!synced && [contactMgr respondsToSelector:@selector(ModifyNotifyStatus:withStatus:)]) {
            unsigned int status = notifyOpen ? 1 : 0;
            synced = ((BOOL (*)(id, SEL, id, unsigned int))objc_msgSend)(contactMgr,
                                                                          @selector(ModifyNotifyStatus:withStatus:),
                                                                          contact,
                                                                          status);
        }

        if ([contact respondsToSelector:@selector(setChatStatusNotifyOpen:)]) {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(contact, @selector(setChatStatusNotifyOpen:), notifyOpen);
            localApplied = YES;
        }

        if ([contactMgr respondsToSelector:@selector(setLocalContact:notifyOpen:)]) {
            BOOL localOK = ((BOOL (*)(id, SEL, id, BOOL))objc_msgSend)(contactMgr,
                                                                        @selector(setLocalContact:notifyOpen:),
                                                                        contact,
                                                                        notifyOpen);
            localApplied = localApplied || localOK;
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[屏蔽同步] 通知状态同步异常: user=%@ enabled=%d reason=%@",
                       target,
                       enabled ? 1 : 0,
                       exception.reason ?: @"unknown");
        synced = NO;
    }

    BOOL finalOK = synced || localApplied;
    if (finalOK) {
        WCPLLogInfo(@"[屏蔽同步] 通知状态同步成功: user=%@ enabled=%d notifyOpen=%d",
                    target,
                    enabled ? 1 : 0,
                    notifyOpen ? 1 : 0);
    } else {
        WCPLLogWarning(@"[屏蔽同步] 通知状态同步失败: user=%@ enabled=%d notifyOpen=%d",
                       target,
                       enabled ? 1 : 0,
                       notifyOpen ? 1 : 0);
    }

    return finalOK;
}

+ (void)syncIgnoredUsersToSystemNotifyStatus:(NSArray<NSString *> *)ignoredUsers
                     previousIgnoredUsers:(nullable NSArray<NSString *> *)previousIgnoredUsers {
    NSSet<NSString *> *targetSet = wcpl_normalizedFriendUserSet(ignoredUsers);
    NSSet<NSString *> *previousSet = wcpl_normalizedFriendUserSet(previousIgnoredUsers);

    NSUInteger successCount = 0;
    NSUInteger totalCount = 0;

    for (NSString *target in targetSet) {
        totalCount += 1;
        if ([self syncIgnoreUserToSystemNotifyStatus:target enabled:YES]) {
            successCount += 1;
        }
    }

    for (NSString *target in previousSet) {
        if (![targetSet containsObject:target]) {
            totalCount += 1;
            if ([self syncIgnoreUserToSystemNotifyStatus:target enabled:NO]) {
                successCount += 1;
            }
        }
    }

    WCPLLogInfo(@"[屏蔽同步] 通知状态批量同步完成: total=%lu success=%lu",
                (unsigned long)totalCount,
                (unsigned long)successCount);
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
    Ivar nsContentIvar = class_getInstanceVariable(CMessageWrapClass, "m_nsContent");

    NSString *fromUsr = wcpl_safeUserNameString(nsFromUsrIvar ? object_getIvar(msgWrap, nsFromUsrIvar) : nil);
    NSString *realChatUsr = wcpl_safeUserNameString(nsRealChatUsrIvar ? object_getIvar(msgWrap, nsRealChatUsrIvar) : nil);

    if (fromUsr.length > 0 && config.chatIgnoreInfo[fromUsr].boolValue) {
        return !wcpl_isRedEnvelopMessageWrap(msgWrap, nsContentIvar);
    }

    BOOL isGroupMessage = (fromUsr.length > 0 && [fromUsr rangeOfString:@"@chatroom"].location != NSNotFound);
    if (isGroupMessage) {
        NSString *groupSender = realChatUsr;
        if (groupSender.length == 0) {
            NSString *content = wcpl_safeUserNameString(nsContentIvar ? object_getIvar(msgWrap, nsContentIvar) : nil);
            if (content.length > 0) {
                groupSender = wcpl_groupSenderFromContent(content);
            }
        }

        if (groupSender.length > 0 && config.userIgnoreInfo[groupSender].boolValue) {
            return !wcpl_isRedEnvelopMessageWrap(msgWrap, nsContentIvar);
        }
        return NO;
    }

    if (fromUsr.length > 0 && config.userIgnoreInfo[fromUsr].boolValue) {
        return !wcpl_isRedEnvelopMessageWrap(msgWrap, nsContentIvar);
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
