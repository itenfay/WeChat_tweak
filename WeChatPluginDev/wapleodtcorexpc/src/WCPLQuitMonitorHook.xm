#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLContactLookup.h"
#import "WCPLDispatchUtils.h"
#import "WCPLHookGovernance.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

#import <objc/runtime.h>
#import <objc/message.h>
#import <dispatch/dispatch.h>

static NSString *const kWCPLHookFeatureQuitMonitor = @"quit_monitor";

static void wcpl_qm_hookLogCMessageMgr(NSString *selectorName,
                                       NSString *stage,
                                       NSString *decision,
                                       WCPLHookOrigPolicy policy,
                                       NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureQuitMonitor,
                           @"CMessageMgr",
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static void wcpl_qm_handleMemberListDiff(CContactMgr *contactMgr,
                                         CContact *oldRoomContact,
                                         CContact *newRoomContact,
                                         NSString *oldMemberList,
                                         NSString *newMemberList,
                                         NSString *sourceTag);

static NSString *wcpl_qm_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static BOOL wcpl_qm_isChatRoomUserName(NSString *userName) {
    NSString *trimmed = wcpl_qm_trimString(userName);
    if (trimmed.length == 0) {
        return NO;
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [contactClass respondsToSelector:@selector(IsChatRoomContact:)]) {
        @try {
            return ((BOOL (*)(id, SEL, id))objc_msgSend)(contactClass, @selector(IsChatRoomContact:), trimmed);
        } @catch (__unused NSException *exception) {
        }
    }

    return [trimmed rangeOfString:@"@chatroom"].location != NSNotFound;
}

static NSArray<NSString *> *wcpl_qm_memberListFromRawString(NSString *rawList) {
    NSString *trimmed = wcpl_qm_trimString(rawList);
    if (trimmed.length == 0) {
        return @[];
    }

    NSCharacterSet *separatorSet = [NSCharacterSet characterSetWithCharactersInString:@";,\n\r\t \x1f\x0b\x08\x07"];
    NSArray<NSString *> *parts = [trimmed componentsSeparatedByCharactersInSet:separatorSet];
    NSMutableOrderedSet<NSString *> *members = [NSMutableOrderedSet orderedSet];
    for (NSString *part in parts) {
        NSString *member = wcpl_qm_trimString(part);
        if (member.length > 0) {
            [members addObject:member];
        }
    }
    return members.array;
}

static NSArray<NSString *> *wcpl_qm_memberListFromMemListObject(id memListObj) {
    if (!memListObj) {
        return @[];
    }
    if ([memListObj isKindOfClass:[NSString class]]) {
        return wcpl_qm_memberListFromRawString((NSString *)memListObj);
    }
    if ([memListObj isKindOfClass:[NSData class]]) {
        NSString *decoded = [[NSString alloc] initWithData:(NSData *)memListObj encoding:NSUTF8StringEncoding];
        return wcpl_qm_memberListFromRawString(decoded);
    }
    if (![memListObj isKindOfClass:[NSArray class]]) {
        return @[];
    }

    NSMutableOrderedSet<NSString *> *normalized = [NSMutableOrderedSet orderedSet];
    for (id item in (NSArray *)memListObj) {
        NSString *member = nil;
        if ([item isKindOfClass:[NSString class]]) {
            member = (NSString *)item;
        } else if ([item respondsToSelector:@selector(m_nsUsrName)]) {
            @try {
                id value = ((id (*)(id, SEL))objc_msgSend)(item, @selector(m_nsUsrName));
                if ([value isKindOfClass:[NSString class]]) {
                    member = (NSString *)value;
                }
            } @catch (__unused NSException *exceptionGetUsrName) {
                member = nil;
            }
        }

        NSString *trimmed = wcpl_qm_trimString(member);
        if (trimmed.length > 0) {
            [normalized addObject:trimmed];
        }
    }
    return normalized.array;
}

static NSArray<NSString *> *wcpl_qm_memberListFromContactOrRaw(CContact *contact, NSString *rawList) {
    (void)contact;
    return wcpl_qm_memberListFromRawString(rawList);
}

static NSString *wcpl_qm_selfUserName(CContactMgr *contactMgr) {
    if (!contactMgr || ![contactMgr respondsToSelector:@selector(getSelfContact)]) {
        return nil;
    }
    @try {
        CContact *selfContact = [contactMgr getSelfContact];
        return wcpl_qm_trimString(selfContact.m_nsUsrName);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static NSString *wcpl_qm_displayNameForUser(CContactMgr *contactMgr, CContact *roomContact, NSString *userName) {
    (void)roomContact;
    NSString *trimmedUser = wcpl_qm_trimString(userName);
    if (trimmedUser.length == 0) {
        return nil;
    }
    if (![NSThread isMainThread]) {
        return trimmedUser;
    }

    CContact *contact = nil;
    @try {
        contact = WCPLFindContactByUserName(trimmedUser, contactMgr, nil);
    } @catch (__unused NSException *exceptionLookup) {
        contact = nil;
    }

    if (!contact && contactMgr && [contactMgr respondsToSelector:@selector(getContactByName:)]) {
        @try {
            id maybeContact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), trimmedUser);
            if ([maybeContact isKindOfClass:%c(CContact)]) {
                contact = (CContact *)maybeContact;
            }
        } @catch (__unused NSException *exceptionGetContact) {
            contact = nil;
        }
    }

    if (!contact) {
        return trimmedUser;
    }

    NSArray<NSString *> *selectorNames = @[@"m_nsRemark", @"m_nsNickName", @"m_nsAliasName", @"m_nsUsrName"];
    for (NSString *selectorName in selectorNames) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!selector || ![contact respondsToSelector:selector]) {
            continue;
        }
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, selector);
            NSString *name = wcpl_qm_trimString(value);
            if (name.length > 0) {
                return name;
            }
        } @catch (__unused NSException *exceptionName) {
        }
    }

    return trimmedUser;
}

static NSString *wcpl_qm_plainDisplayName(NSString *displayName, NSString *userName) {
    NSString *name = wcpl_qm_trimString(displayName);
    if (name.length == 0) {
        name = wcpl_qm_trimString(userName);
    }
    if (name.length == 0) {
        return nil;
    }
    name = [[name stringByReplacingOccurrencesOfString:@"\n" withString:@" "]
            stringByReplacingOccurrencesOfString:@"\r" withString:@" "];
    return wcpl_qm_trimString(name);
}

static NSString *wcpl_qm_cdataSafe(NSString *text) {
    NSString *source = wcpl_qm_trimString(text) ?: @"";
    if (source.length == 0) {
        return @"";
    }
    return [source stringByReplacingOccurrencesOfString:@"]]>" withString:@"]]]]><![CDATA[>"];
}

static NSString *wcpl_qm_joinDisplayNamesForTip(NSArray<NSString *> *displayNames) {
    if (displayNames.count == 0) {
        return nil;
    }
    if (displayNames.count <= 3) {
        return [displayNames componentsJoinedByString:@"、"];
    }
    NSArray<NSString *> *head = [displayNames subarrayWithRange:NSMakeRange(0, 3)];
    return [NSString stringWithFormat:@"%@ 等%lu人",
                                      [head componentsJoinedByString:@"、"],
                                      (unsigned long)displayNames.count];
}

static NSString *wcpl_qm_plainTipContentForDisplayNames(NSArray<NSString *> *displayNames) {
    NSString *joinedName = wcpl_qm_joinDisplayNamesForTip(displayNames);
    if (joinedName.length == 0) {
        return nil;
    }
    return [NSString stringWithFormat:@"[退群监控] %@ 已退出群聊", joinedName];
}

static NSString *wcpl_qm_sysMsgTemplateTipContent(NSArray<NSString *> *displayNames,
                                                  NSArray<NSString *> *mentionUsers) {
    NSUInteger totalCount = MIN(displayNames.count, mentionUsers.count);
    if (totalCount == 0) {
        return nil;
    }

    NSUInteger renderCount = MIN((NSUInteger)3, totalCount);
    NSMutableArray<NSString *> *plainParts = [NSMutableArray arrayWithCapacity:renderCount];
    NSMutableArray<NSString *> *templateParts = [NSMutableArray arrayWithCapacity:renderCount];
    NSMutableString *linkListXML = [NSMutableString string];

    for (NSUInteger idx = 0; idx < renderCount; idx++) {
        NSString *displayName = wcpl_qm_trimString(displayNames[idx]);
        NSString *userName = wcpl_qm_trimString(mentionUsers[idx]);
        if (displayName.length == 0 || userName.length == 0) {
            continue;
        }
        NSString *linkName = [NSString stringWithFormat:@"quit_member_%lu", (unsigned long)idx];
        [plainParts addObject:displayName];
        [templateParts addObject:[NSString stringWithFormat:@"$%@$", linkName]];
        [linkListXML appendFormat:@"<link name=\"%@\" type=\"link_profile\"><memberlist><member><username><![CDATA[%@]]></username><nickname><![CDATA[%@]]></nickname></member></memberlist></link>",
                                  linkName,
                                  wcpl_qm_cdataSafe(userName),
                                  wcpl_qm_cdataSafe(displayName)];
    }

    if (plainParts.count == 0 || templateParts.count == 0 || linkListXML.length == 0) {
        return nil;
    }

    NSString *plainNames = [plainParts componentsJoinedByString:@"、"];
    NSString *templateNames = [templateParts componentsJoinedByString:@"、"];
    if (totalCount > renderCount) {
        NSString *remain = [NSString stringWithFormat:@"等%lu人", (unsigned long)totalCount];
        plainNames = [plainNames stringByAppendingFormat:@" %@", remain];
        templateNames = [templateNames stringByAppendingFormat:@" %@", remain];
    }

    NSString *plainText = [NSString stringWithFormat:@"[退群监控] %@ 已退出群聊", plainNames];
    NSString *templateText = [NSString stringWithFormat:@"[退群监控] %@ 已退出群聊", templateNames];
    return [NSString stringWithFormat:@"<sysmsg type=\"sysmsgtemplate\"><sysmsgtemplate><content_template type=\"tmpl_type_profile\"><plain><![CDATA[%@]]></plain><template><![CDATA[%@]]></template><link_list>%@</link_list></content_template></sysmsgtemplate></sysmsg>",
                                      wcpl_qm_cdataSafe(plainText),
                                      wcpl_qm_cdataSafe(templateText),
                                      linkListXML];
}

static BOOL wcpl_qm_isSysMsgTemplateContent(NSString *content) {
    NSString *trimmed = wcpl_qm_trimString(content);
    if (trimmed.length == 0) {
        return NO;
    }
    return ([trimmed rangeOfString:@"<sysmsg" options:NSCaseInsensitiveSearch].location != NSNotFound &&
            [trimmed rangeOfString:@"sysmsgtemplate" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

static NSString *wcpl_qm_plainTextFromSysMsgTemplateContent(NSString *content) {
    NSString *trimmed = wcpl_qm_trimString(content);
    if (trimmed.length == 0) {
        return nil;
    }
    if (!wcpl_qm_isSysMsgTemplateContent(trimmed)) {
        return nil;
    }

    static NSString *const kPlainStartToken = @"<plain><![CDATA[";
    static NSString *const kPlainEndToken = @"]]></plain>";

    NSRange start = [trimmed rangeOfString:kPlainStartToken options:NSCaseInsensitiveSearch];
    if (start.location == NSNotFound) {
        return nil;
    }
    NSUInteger from = NSMaxRange(start);
    if (from >= trimmed.length) {
        return nil;
    }

    NSRange end = [trimmed rangeOfString:kPlainEndToken
                                 options:NSCaseInsensitiveSearch
                                   range:NSMakeRange(from, trimmed.length - from)];
    if (end.location == NSNotFound || end.location <= from) {
        return nil;
    }

    NSString *plain = [trimmed substringWithRange:NSMakeRange(from, end.location - from)];
    if (![plain isKindOfClass:[NSString class]]) {
        return nil;
    }
    plain = [[plain stringByReplacingOccurrencesOfString:@"\n" withString:@" "]
             stringByReplacingOccurrencesOfString:@"\r" withString:@" "];
    return wcpl_qm_trimString(plain);
}

static NSString *wcpl_qm_timeTextFromTimestamp(unsigned int timestamp) {
    NSDate *date = timestamp > 0 ? [NSDate dateWithTimeIntervalSince1970:timestamp] : [NSDate date];

    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [NSLocale localeWithLocaleIdentifier:@"zh_CN"];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    });

    return [formatter stringFromDate:date] ?: @"";
}

static BOOL wcpl_qm_looksLikeTimestampLine(NSString *line) {
    NSString *text = wcpl_qm_trimString(line);
    if (text.length != 19) {
        return NO;
    }

    // yyyy-MM-dd HH:mm:ss
    // 0123-56-89 12:45:78
    static const NSUInteger kDigitIndices[] = {0, 1, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18};
    static const NSUInteger kDigitIndicesCount = sizeof(kDigitIndices) / sizeof(kDigitIndices[0]);
    for (NSUInteger i = 0; i < kDigitIndicesCount; i++) {
        unichar c = [text characterAtIndex:kDigitIndices[i]];
        if (c < '0' || c > '9') {
            return NO;
        }
    }

    return ([text characterAtIndex:4] == '-' &&
            [text characterAtIndex:7] == '-' &&
            [text characterAtIndex:10] == ' ' &&
            [text characterAtIndex:13] == ':' &&
            [text characterAtIndex:16] == ':');
}

static BOOL wcpl_qm_hasLeadingTimestampLine(NSString *content) {
    NSString *text = wcpl_qm_trimString(content);
    if (text.length < 19) {
        return NO;
    }

    NSRange lineEnd = [text rangeOfString:@"\n"];
    NSString *firstLine = lineEnd.location != NSNotFound ? [text substringToIndex:lineEnd.location] : text;
    return wcpl_qm_looksLikeTimestampLine(firstLine);
}

static NSString *wcpl_qm_plainTextByPrependingTimestampLine(NSString *content, NSString *timeText) {
    NSString *trimmedContent = wcpl_qm_trimString(content);
    NSString *trimmedTime = wcpl_qm_trimString(timeText);
    if (trimmedContent.length == 0 || trimmedTime.length == 0) {
        return trimmedContent ?: @"";
    }
    if (wcpl_qm_hasLeadingTimestampLine(trimmedContent)) {
        return trimmedContent;
    }
    return [NSString stringWithFormat:@"%@\n%@", trimmedTime, trimmedContent];
}

static NSString *wcpl_qm_sysMsgTemplateContentByPrependingTimestampLine(NSString *content, NSString *timeText) {
    NSString *trimmed = wcpl_qm_trimString(content);
    NSString *trimmedTime = wcpl_qm_trimString(timeText);
    if (trimmed.length == 0 || trimmedTime.length == 0) {
        return trimmed;
    }
    if (!wcpl_qm_isSysMsgTemplateContent(trimmed)) {
        return trimmed;
    }

    // 仅改 plain/template 的 CDATA，避免破坏 sysmsgtemplate 结构与链接跳转能力。
    static NSString *const kPlainStartToken = @"<plain><![CDATA[";
    static NSString *const kPlainEndToken = @"]]></plain>";
    static NSString *const kTemplateStartToken = @"<template><![CDATA[";
    static NSString *const kTemplateEndToken = @"]]></template>";

    NSRange plainStart = [trimmed rangeOfString:kPlainStartToken options:NSCaseInsensitiveSearch];
    if (plainStart.location == NSNotFound) {
        return trimmed;
    }
    NSUInteger plainContentFrom = NSMaxRange(plainStart);
    if (plainContentFrom >= trimmed.length) {
        return trimmed;
    }
    NSRange plainEnd = [trimmed rangeOfString:kPlainEndToken
                                      options:NSCaseInsensitiveSearch
                                        range:NSMakeRange(plainContentFrom, trimmed.length - plainContentFrom)];
    if (plainEnd.location == NSNotFound || plainEnd.location <= plainContentFrom) {
        return trimmed;
    }
    NSRange plainContentRange = NSMakeRange(plainContentFrom, plainEnd.location - plainContentFrom);

    NSRange templateStart = [trimmed rangeOfString:kTemplateStartToken options:NSCaseInsensitiveSearch];
    if (templateStart.location == NSNotFound) {
        return trimmed;
    }
    NSUInteger templateContentFrom = NSMaxRange(templateStart);
    if (templateContentFrom >= trimmed.length) {
        return trimmed;
    }
    NSRange templateEnd = [trimmed rangeOfString:kTemplateEndToken
                                         options:NSCaseInsensitiveSearch
                                           range:NSMakeRange(templateContentFrom, trimmed.length - templateContentFrom)];
    if (templateEnd.location == NSNotFound || templateEnd.location <= templateContentFrom) {
        return trimmed;
    }
    NSRange templateContentRange = NSMakeRange(templateContentFrom, templateEnd.location - templateContentFrom);

    NSString *plainInner = [trimmed substringWithRange:plainContentRange] ?: @"";
    NSString *templateInner = [trimmed substringWithRange:templateContentRange] ?: @"";

    if (wcpl_qm_hasLeadingTimestampLine(plainInner) && wcpl_qm_hasLeadingTimestampLine(templateInner)) {
        return trimmed;
    }

    NSString *newPlainInner = plainInner;
    if (!wcpl_qm_hasLeadingTimestampLine(plainInner)) {
        newPlainInner = [NSString stringWithFormat:@"%@\n%@", trimmedTime, plainInner];
    }
    NSString *newTemplateInner = templateInner;
    if (!wcpl_qm_hasLeadingTimestampLine(templateInner)) {
        newTemplateInner = [NSString stringWithFormat:@"%@\n%@", trimmedTime, templateInner];
    }

    // 先替换后面的 template，再替换 plain，避免 range 失效。
    NSMutableString *mutableXML = [trimmed mutableCopy];
    [mutableXML replaceCharactersInRange:templateContentRange withString:wcpl_qm_cdataSafe(newTemplateInner)];
    [mutableXML replaceCharactersInRange:plainContentRange withString:wcpl_qm_cdataSafe(newPlainInner)];
    return [mutableXML copy];
}

static NSString *wcpl_qm_monitorContentByPrependingTimestampLine(NSString *content, unsigned int timestamp) {
    NSString *trimmed = wcpl_qm_trimString(content);
    if (trimmed.length == 0) {
        return @"";
    }

    NSString *timeText = wcpl_qm_timeTextFromTimestamp(timestamp);
    if (timeText.length == 0) {
        return trimmed;
    }

    if (wcpl_qm_isSysMsgTemplateContent(trimmed)) {
        NSString *updated = wcpl_qm_sysMsgTemplateContentByPrependingTimestampLine(trimmed, timeText);
        return updated.length > 0 ? updated : trimmed;
    }
    return wcpl_qm_plainTextByPrependingTimestampLine(trimmed, timeText);
}

static NSString *wcpl_qm_msgSourceForMentionUsers(NSArray<NSString *> *users) {
    if (users.count == 0) {
        return nil;
    }
    NSMutableOrderedSet<NSString *> *orderedUsers = [NSMutableOrderedSet orderedSet];
    for (NSString *user in users) {
        NSString *trimmed = wcpl_qm_trimString(user);
        if (trimmed.length > 0) {
            [orderedUsers addObject:trimmed];
        }
    }
    if (orderedUsers.count == 0) {
        return nil;
    }

    NSString *atUserList = [orderedUsers.array componentsJoinedByString:@","];
    NSString *primaryUser = orderedUsers.firstObject;
    return [NSString stringWithFormat:@"<msgsource><atuserlist><![CDATA[%@]]></atuserlist><memberusername><![CDATA[%@]]></memberusername><username><![CDATA[%@]]></username></msgsource>",
                                      atUserList,
                                      primaryUser ?: @"",
                                      primaryUser ?: @""];
}

static NSString *wcpl_qm_tipContentForRemovedUsers(CContactMgr *contactMgr,
                                                   CContact *roomContact,
                                                   NSArray<NSString *> *removedUsers,
                                                   NSArray<NSString *> **mentionUsersOut,
                                                   NSString **plainTipOut) {
    if (removedUsers.count == 0) {
        return nil;
    }

    NSMutableArray<NSString *> *displayNames = [NSMutableArray arrayWithCapacity:removedUsers.count];
    NSMutableArray<NSString *> *mentionUsers = [NSMutableArray arrayWithCapacity:removedUsers.count];
    for (NSString *userName in removedUsers) {
        NSString *trimmedUser = wcpl_qm_trimString(userName);
        if (trimmedUser.length == 0) {
            continue;
        }
        NSString *displayName = wcpl_qm_displayNameForUser(contactMgr, roomContact, trimmedUser);
        NSString *plainName = wcpl_qm_plainDisplayName(displayName, trimmedUser);
        if (plainName.length > 0) {
            [displayNames addObject:plainName];
            [mentionUsers addObject:trimmedUser];
        }
    }
    if (displayNames.count == 0 || mentionUsers.count == 0) {
        return nil;
    }

    NSString *plainTip = wcpl_qm_plainTipContentForDisplayNames(displayNames);
    if (mentionUsersOut) {
        *mentionUsersOut = [mentionUsers copy];
    }
    if (plainTipOut) {
        *plainTipOut = plainTip;
    }

    NSString *richTip = wcpl_qm_sysMsgTemplateTipContent(displayNames, mentionUsers);
    return richTip.length > 0 ? richTip : plainTip;
}

static CMessageMgr *wcpl_qm_messageMgr(void) {
    id service = WCPLGetService(objc_getClass("CMessageMgr"));
    if (service) {
        return (CMessageMgr *)service;
    }

    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    MMServiceCenter *serviceCenter = [serviceCenterClass defaultCenter];
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }

    return [serviceCenter getService:objc_getClass("CMessageMgr")];
}

static CContactMgr *wcpl_qm_contactMgr(void) {
    id service = WCPLGetService(objc_getClass("CContactMgr"));
    if (service) {
        return (CContactMgr *)service;
    }

    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    MMServiceCenter *serviceCenter = [serviceCenterClass defaultCenter];
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }

    return [serviceCenter getService:objc_getClass("CContactMgr")];
}

static void wcpl_qm_setWrapObjectValue(id msgWrap, SEL setter, NSString *kvcKey, id value) {
    if (!msgWrap) {
        return;
    }
    if (setter && [msgWrap respondsToSelector:setter]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, setter, value);
            return;
        } @catch (__unused NSException *exception) {
        }
    }
    if (kvcKey.length > 0) {
        @try {
            [msgWrap setValue:value forKey:kvcKey];
        } @catch (__unused NSException *exception) {
        }
    }
}

static void wcpl_qm_setWrapUIntValue(id msgWrap, SEL setter, NSString *kvcKey, unsigned int value) {
    if (!msgWrap) {
        return;
    }
    if (setter && [msgWrap respondsToSelector:setter]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, setter, value);
            return;
        } @catch (__unused NSException *exception) {
        }
    }
    if (kvcKey.length > 0) {
        @try {
            [msgWrap setValue:@(value) forKey:kvcKey];
        } @catch (__unused NSException *exception) {
        }
    }
}

static CMessageWrap *wcpl_qm_createMonitorMsgWrap(unsigned int msgType, NSString *fromUser) {
    Class wrapClass = %c(CMessageWrap);
    if (!wrapClass) {
        return nil;
    }

    NSString *trimmedFromUser = wcpl_qm_trimString(fromUser);
    CMessageWrap *msgWrap = nil;
    if (trimmedFromUser.length > 0 && [wrapClass instancesRespondToSelector:@selector(initWithMsgType:nsFromUsr:)]) {
        @try {
            msgWrap = ((id (*)(id, SEL, unsigned int, id))objc_msgSend)([wrapClass alloc],
                                                                         @selector(initWithMsgType:nsFromUsr:),
                                                                         msgType,
                                                                         trimmedFromUser);
        } @catch (__unused NSException *exception) {
            msgWrap = nil;
        }
    }
    if (!msgWrap && [wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        @try {
            msgWrap = ((id (*)(id, SEL, unsigned int))objc_msgSend)([wrapClass alloc],
                                                                     @selector(initWithMsgType:),
                                                                     msgType);
        } @catch (__unused NSException *exception) {
            msgWrap = nil;
        }
    }
    if (!msgWrap) {
        @try {
            msgWrap = [[wrapClass alloc] init];
        } @catch (__unused NSException *exception) {
            msgWrap = nil;
        }
    }
    if (!msgWrap) {
        return nil;
    }

    wcpl_qm_setWrapUIntValue(msgWrap, @selector(setM_uiMessageType:), @"m_uiMessageType", msgType);
    wcpl_qm_setWrapUIntValue(msgWrap, @selector(setM_uiMesLocalID:), @"m_uiMesLocalID", 0);
    wcpl_qm_setWrapObjectValue(msgWrap, @selector(setM_nsMsgSource:), @"m_nsMsgSource", nil);
    return msgWrap;
}

static BOOL wcpl_qm_addLocalMonitorTip(NSString *session,
                                       NSString *fromUser,
                                       NSString *content,
                                       NSString *msgSource,
                                       NSString *pushContent) {
    if (![NSThread isMainThread]) {
        __block BOOL insertedOnMain = NO;
        NSString *sessionCopy = [session copy];
        NSString *fromUserCopy = [fromUser copy];
        NSString *contentCopy = [content copy];
        NSString *msgSourceCopy = [msgSource copy];
        NSString *pushContentCopy = [pushContent copy];
        BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, ^{
            insertedOnMain = wcpl_qm_addLocalMonitorTip(sessionCopy, fromUserCopy, contentCopy, msgSourceCopy, pushContentCopy);
        });
        if (!didFinish) {
            WCPLLogWarning(@"[退群监控] 主线程调度超时: session=%@ contentLen=%lu",
                           wcpl_qm_trimString(session) ?: @"",
                           (unsigned long)wcpl_qm_trimString(content).length);
            return NO;
        }
        return insertedOnMain;
    }

    NSString *trimmedSession = wcpl_qm_trimString(session);
    NSString *trimmedContent = wcpl_qm_trimString(content);
    if (trimmedSession.length == 0 || trimmedContent.length == 0) {
        WCPLLogWarning(@"[退群监控] 本地提示入库失败: reason=invalid_input room=%@ contentLen=%lu",
                       trimmedSession ?: @"",
                       (unsigned long)trimmedContent.length);
        return NO;
    }

    CMessageMgr *messageMgr = wcpl_qm_messageMgr();
    if (!messageMgr) {
        WCPLLogWarning(@"[退群监控] 本地提示入库失败: reason=message_mgr_nil room=%@",
                       trimmedSession);
        return NO;
    }

    NSString *trimmedFromUser = wcpl_qm_trimString(fromUser);
    NSString *trimmedMsgSource = wcpl_qm_trimString(msgSource);
    NSString *trimmedPushContent = wcpl_qm_trimString(pushContent) ?: trimmedContent;
    BOOL isSysMsgTemplate = wcpl_qm_isSysMsgTemplateContent(trimmedContent);
    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    // 退群监控提示展示风格对齐“撤回提示”：首行增加时间戳，正文从下一行开始。
    NSString *monitorContent = wcpl_qm_monitorContentByPrependingTimestampLine(trimmedContent, now);
    if (monitorContent.length == 0) {
        monitorContent = trimmedContent;
    }
    NSArray<NSNumber *> *candidateMsgTypes = isSysMsgTemplate ? @[@(10002)] : @[@(10000), @(1)];
    NSException *lastException = nil;

    for (NSNumber *typeNumber in candidateMsgTypes) {
        unsigned int msgType = typeNumber.unsignedIntValue;
        CMessageWrap *msgWrap = wcpl_qm_createMonitorMsgWrap(msgType, trimmedFromUser);
        if (!msgWrap) {
            continue;
        }

        wcpl_qm_setWrapUIntValue(msgWrap, @selector(setM_uiStatus:), @"m_uiStatus", 0x4);
        wcpl_qm_setWrapUIntValue(msgWrap, @selector(setM_uiCreateTime:), @"m_uiCreateTime", now);
        wcpl_qm_setWrapObjectValue(msgWrap, @selector(setM_nsContent:), @"m_nsContent", monitorContent);
        wcpl_qm_setWrapObjectValue(msgWrap, @selector(setM_nsPushContent:), @"m_nsPushContent", trimmedPushContent);
        wcpl_qm_setWrapObjectValue(msgWrap, @selector(setM_nsToUsr:), @"m_nsToUsr", trimmedSession);
        wcpl_qm_setWrapObjectValue(msgWrap,
                                   @selector(setM_nsMsgSource:),
                                   @"m_nsMsgSource",
                                   trimmedMsgSource.length > 0 ? trimmedMsgSource : nil);
        if (trimmedFromUser.length > 0) {
            wcpl_qm_setWrapObjectValue(msgWrap, @selector(setM_nsFromUsr:), @"m_nsFromUsr", trimmedFromUser);
            if ([trimmedSession rangeOfString:@"@chatroom"].location != NSNotFound && trimmedMsgSource.length == 0) {
                wcpl_qm_setWrapObjectValue(msgWrap,
                                           @selector(setM_nsRealChatUsr:),
                                           @"m_nsRealChatUsr",
                                           trimmedFromUser);
            }
        }

        NSString *usedPath = nil;
        @try {
            if ([messageMgr respondsToSelector:@selector(AddUniqueLocalMsg:MsgWrap:)]) {
                [messageMgr AddUniqueLocalMsg:trimmedSession MsgWrap:msgWrap];
                usedPath = @"AddUniqueLocalMsg";
            } else if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
                [messageMgr AddLocalMsg:trimmedSession MsgWrap:msgWrap fixTime:YES NewMsgArriveNotify:NO Unique:YES];
                usedPath = @"AddLocalMsg_fixTime_unique";
            } else if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
                [messageMgr AddLocalMsg:trimmedSession MsgWrap:msgWrap fixTime:YES NewMsgArriveNotify:NO];
                usedPath = @"AddLocalMsg_fixTime";
            } else if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
                [messageMgr AddLocalMsg:trimmedSession MsgWrap:msgWrap];
                usedPath = @"AddLocalMsg";
            } else if ([messageMgr respondsToSelector:@selector(AddMsg:MsgWrap:)]) {
                [messageMgr AddMsg:trimmedSession MsgWrap:msgWrap];
                usedPath = @"AddMsg";
            }
        } @catch (NSException *exception) {
            lastException = exception;
            usedPath = nil;
        }

        if (usedPath.length > 0) {
            WCPLLogDebug(@"[退群监控] 本地提示入库调用成功: room=%@ path=%@ msgType=%u localID=%u svrID=%llu",
                         trimmedSession,
                         usedPath,
                         msgType,
                         msgWrap.m_uiMesLocalID,
                         (unsigned long long)msgWrap.m_n64MesSvrID);
            return YES;
        }
    }

    NSString *exceptionReason = lastException ? [NSString stringWithFormat:@"%@: %@",
                                                 NSStringFromClass([lastException class]),
                                                 lastException.reason ?: @""] : @"none";
    WCPLLogWarning(@"[退群监控] 本地提示入库失败: reason=no_available_path room=%@ exception=%@",
                   trimmedSession,
                   exceptionReason);
    return NO;
}

static BOOL wcpl_qm_isAppActive(void) {
    Class appClass = objc_getClass("UIApplication");
    if (!appClass || ![appClass respondsToSelector:@selector(sharedApplication)]) {
        return YES;
    }

    @try {
        id app = ((id (*)(id, SEL))objc_msgSend)(appClass, @selector(sharedApplication));
        if (!app || ![app respondsToSelector:@selector(applicationState)]) {
            return YES;
        }
        NSInteger state = ((NSInteger (*)(id, SEL))objc_msgSend)(app, @selector(applicationState));
        return state == 0;
    } @catch (__unused NSException *exception) {
        return YES;
    }
}

static void wcpl_qm_retryInsertMonitorTip(NSString *session,
                                          NSString *fromUser,
                                          NSString *content,
                                          NSString *msgSource,
                                          NSString *pushContent,
                                          NSString *sourceTag,
                                          NSUInteger attempt) {
    NSString *trimmedSession = wcpl_qm_trimString(session);
    NSString *trimmedContent = wcpl_qm_trimString(content);
    if (trimmedSession.length == 0 || trimmedContent.length == 0 || attempt > 2) {
        return;
    }

    NSTimeInterval delay = (attempt == 1 ? 0.9 : 1.8);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(),
                   ^{
                       BOOL inserted = wcpl_qm_addLocalMonitorTip(trimmedSession, fromUser, trimmedContent, msgSource, pushContent);
                       NSString *trimmedPush = wcpl_qm_trimString(pushContent);
                       if (!inserted && trimmedPush.length > 0 && ![trimmedPush isEqualToString:trimmedContent]) {
                           inserted = wcpl_qm_addLocalMonitorTip(trimmedSession, fromUser, trimmedPush, msgSource, trimmedPush);
                       }
                       if (inserted) {
                           WCPLLogInfo(@"[退群监控] 重试插入提示成功: room=%@ source=%@ attempt=%lu appActive=%d",
                                       trimmedSession,
                                       sourceTag ?: @"unknown",
                                       (unsigned long)attempt,
                                       wcpl_qm_isAppActive() ? 1 : 0);
                       } else {
                           WCPLLogWarning(@"[退群监控] 重试插入提示失败: room=%@ source=%@ attempt=%lu appActive=%d",
                                          trimmedSession,
                                          sourceTag ?: @"unknown",
                                          (unsigned long)attempt,
                                          wcpl_qm_isAppActive() ? 1 : 0);
                           wcpl_qm_retryInsertMonitorTip(trimmedSession,
                                                         fromUser,
                                                         trimmedContent,
                                                         msgSource,
                                                         pushContent,
                                                         sourceTag,
                                                         attempt + 1);
                       }
                   });
}

static BOOL wcpl_qm_shouldEmitForEventKey(NSString *eventKey) {
    NSString *trimmedKey = wcpl_qm_trimString(eventKey);
    if (trimmedKey.length == 0) {
        return NO;
    }

    static NSMutableDictionary<NSString *, NSNumber *> *eventMap = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        eventMap = [NSMutableDictionary dictionary];
    });

    NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
    @synchronized(eventMap) {
        NSNumber *lastTime = eventMap[trimmedKey];
        if (lastTime && (now - lastTime.doubleValue) < 2.5) {
            return NO;
        }
        eventMap[trimmedKey] = @(now);

        // 轻量清理，避免长时间运行后字典无限增长
        if (eventMap.count > 256) {
            NSMutableArray<NSString *> *expiredKeys = [NSMutableArray array];
            [eventMap enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *value, BOOL *stop) {
                if ((now - value.doubleValue) > 120.0) {
                    [expiredKeys addObject:key];
                }
            }];
            [eventMap removeObjectsForKeys:expiredKeys];
        }
    }

    return YES;
}

static NSString *wcpl_qm_wrapStringValueForKey(id wrap, NSString *key) {
    if (!wrap || key.length == 0) {
        return nil;
    }
    @try {
        id value = [wrap valueForKey:key];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_qm_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }
    return nil;
}

static NSString *wcpl_qm_wrapStringValueForSelector(id obj, SEL selector) {
    if (!obj || !selector || ![obj respondsToSelector:selector]) {
        return nil;
    }
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(obj, selector);
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_qm_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }
    return nil;
}

static NSString *wcpl_qm_rawStringValueForKey(id obj, NSString *key) {
    if (!obj || key.length == 0) {
        return nil;
    }
    @try {
        id value = [obj valueForKey:key];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_qm_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }
    return nil;
}

static NSString *wcpl_qm_systemTextFromRawMessage(id rawMsg) {
    if (!rawMsg) {
        return nil;
    }

    if ([rawMsg isKindOfClass:[NSString class]]) {
        return wcpl_qm_trimString((NSString *)rawMsg);
    }

    if ([rawMsg isKindOfClass:[NSData class]]) {
        NSString *decoded = [[NSString alloc] initWithData:(NSData *)rawMsg encoding:NSUTF8StringEncoding];
        return wcpl_qm_trimString(decoded);
    }

    NSArray<NSString *> *keys = @[
        @"m_nsContent",
        @"m_nsLastDisplayContent",
        @"content",
        @"msgContent",
        @"msg",
        @"text"
    ];
    for (NSString *key in keys) {
        NSString *value = wcpl_qm_rawStringValueForKey(rawMsg, key);
        if (value.length > 0) {
            return value;
        }
    }

    if ([rawMsg respondsToSelector:@selector(description)]) {
        NSString *desc = wcpl_qm_trimString([rawMsg description]);
        if (desc.length > 0 && [desc rangeOfString:@"<"].location == NSNotFound) {
            return desc;
        }
    }
    return nil;
}

static NSString *wcpl_qm_logSnippet(NSString *text, NSUInteger maxLen) {
    NSString *trimmed = wcpl_qm_trimString(text);
    if (trimmed.length == 0) {
        return @"";
    }
    if (trimmed.length <= maxLen) {
        return trimmed;
    }
    return [[trimmed substringToIndex:maxLen] stringByAppendingString:@"..."];
}

static BOOL wcpl_qm_isDateLikeText(NSString *text) {
    NSString *trimmed = wcpl_qm_trimString(text);
    if (trimmed.length < 5 || trimmed.length > 32) {
        return NO;
    }

    // 常见时间格式：2026-02-24 16:09:43 / 16:09:43 / 2026/02/24
    NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:@"0123456789-:/. "];
    if ([[trimmed stringByTrimmingCharactersInSet:allowed] length] != 0) {
        return NO;
    }
    BOOL hasDateSep = ([trimmed rangeOfString:@"-"].location != NSNotFound ||
                       [trimmed rangeOfString:@"/"].location != NSNotFound);
    BOOL hasTimeSep = ([trimmed rangeOfString:@":"].location != NSNotFound);
    return hasDateSep || hasTimeSep;
}

static BOOL wcpl_qm_isLowSignalSystemText(NSString *text) {
    NSString *trimmed = wcpl_qm_trimString(text);
    if (trimmed.length == 0) {
        return YES;
    }
    if ([trimmed rangeOfString:@"@chatroom"].location != NSNotFound) {
        return YES;
    }
    if ([trimmed rangeOfString:@"wxid_"].location != NSNotFound && trimmed.length <= 64) {
        return YES;
    }
    if (wcpl_qm_isDateLikeText(trimmed)) {
        return YES;
    }
    return NO;
}

static NSString *wcpl_qm_roomNameFromMessageWrap(CMessageWrap *wrap) {
    if (![wrap isKindOfClass:%c(CMessageWrap)]) {
        return nil;
    }

    NSArray<NSString *> *keys = @[
        @"m_nsFromUsr",
        @"m_nsToUsr",
        @"m_nsRealChatUsr",
        @"m_nsTalker",
        @"m_nsChatName",
        @"m_nsSpecifiedChatName"
    ];
    for (NSString *key in keys) {
        NSString *candidate = wcpl_qm_wrapStringValueForKey(wrap, key);
        if (wcpl_qm_isChatRoomUserName(candidate)) {
            return candidate;
        }
    }

    Class wrapClass = objc_getClass("CMessageWrap");
    SEL selector = @selector(getUserNameFromMsgWrap:);
    if (wrapClass && [wrapClass respondsToSelector:selector]) {
        @try {
            id value = ((id (*)(id, SEL, id))objc_msgSend)(wrapClass, selector, wrap);
            NSString *candidate = wcpl_qm_trimString(value);
            if (wcpl_qm_isChatRoomUserName(candidate)) {
                return candidate;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSString *fromUser = wcpl_qm_trimString(wrap.m_nsFromUsr);
    if (wcpl_qm_isChatRoomUserName(fromUser)) {
        return fromUser;
    }
    NSString *toUser = wcpl_qm_trimString(wrap.m_nsToUsr);
    if (wcpl_qm_isChatRoomUserName(toUser)) {
        return toUser;
    }
    return nil;
}

static NSString *wcpl_qm_systemTextFromMessageWrap(CMessageWrap *wrap, id rawMsg) {
    if (![wrap isKindOfClass:%c(CMessageWrap)]) {
        return wcpl_qm_systemTextFromRawMessage(rawMsg);
    }

    NSArray<NSString *> *keys = @[
        @"systemMessageWording",
        @"systemMessageActionWording",
        @"_systemMessageWording",
        @"_systemMessageActionWording",
        @"m_nsLastDisplayContent",
        @"_m_nsBeforeDisplayContent",
        @"m_nsContent",
        @"m_nsMsgSource",
        @"m_nsPushContent",
        @"m_nsPushBody",
        @"m_nsPushTitle"
    ];
    NSString *fallbackLowSignal = nil;
    for (NSString *key in keys) {
        NSString *text = wcpl_qm_wrapStringValueForKey(wrap, key);
        if (text.length > 0 && !wcpl_qm_isLowSignalSystemText(text)) {
            return text;
        }
        if (text.length > 0 && !fallbackLowSignal) {
            fallbackLowSignal = text;
        }
    }

    NSArray<NSString *> *selectorNames = @[
        @"messageFTSTextForDisplay",
        @"messageFTSText",
        @"nonCategorymessageFTSText",
        @"description"
    ];
    for (NSString *selectorName in selectorNames) {
        NSString *text = wcpl_qm_wrapStringValueForSelector(wrap, NSSelectorFromString(selectorName));
        if (text.length > 0 && !wcpl_qm_isLowSignalSystemText(text)) {
            return text;
        }
        if (text.length > 0 && !fallbackLowSignal) {
            fallbackLowSignal = text;
        }
    }
    NSString *rawText = wcpl_qm_systemTextFromRawMessage(rawMsg);
    if (rawText.length > 0 && !wcpl_qm_isLowSignalSystemText(rawText)) {
        return rawText;
    }
    return fallbackLowSignal ?: rawText;
}

static BOOL wcpl_qm_looksLikeQuitSystemText(NSString *content) {
    NSString *text = wcpl_qm_trimString(content);
    if (text.length == 0) {
        return NO;
    }

    NSArray<NSString *> *excludeTokens = @[
        @"加入了群聊",
        @"邀请",
        @"群公告",
        @"拍了拍",
        @"修改群名",
        @"群二维码",
        @"撤回",
        @"禁言",
        @"红包",
        @"转账"
    ];
    for (NSString *token in excludeTokens) {
        if ([text rangeOfString:token options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return NO;
        }
    }

    NSArray<NSString *> *hitTokens = @[
        @"退群",
        @"退出了群聊",
        @"退出群聊",
        @"已退出群聊",
        @"已退出该群",
        @"离开了群聊",
        @"离开群聊",
        @"离开了该群",
        @"被移出群聊",
        @"被移出了群聊",
        @"被踢出群聊",
        @"left the group chat",
        @"left the group",
        @"removed from the group chat",
        @"removed from the group",
        @"delchatroommember"
    ];
    for (NSString *token in hitTokens) {
        if ([text rangeOfString:token options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL wcpl_qm_looksLikeSelfQuitSystemText(NSString *content, NSString *selfUserName) {
    NSString *text = wcpl_qm_trimString(content);
    if (text.length == 0) {
        return NO;
    }

    NSArray<NSString *> *selfTokens = @[
        @"你退出了群聊",
        @"你离开了群聊",
        @"你被移出群聊",
        @"你被移出了群聊",
        @"you left the group chat"
    ];
    for (NSString *token in selfTokens) {
        if ([text rangeOfString:token options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }

    NSString *selfName = wcpl_qm_trimString(selfUserName);
    if (selfName.length == 0) {
        return NO;
    }

    if ([text rangeOfString:selfName].location == NSNotFound) {
        return NO;
    }
    if ([text rangeOfString:@"退出了群聊"].location != NSNotFound ||
        [text rangeOfString:@"离开了群聊"].location != NSNotFound ||
        [text rangeOfString:@"被移出群聊"].location != NSNotFound ||
        [text rangeOfString:@"被移出了群聊"].location != NSNotFound) {
        return YES;
    }
    return NO;
}

static BOOL wcpl_qm_shouldMonitorRoom(NSString *roomUserName) {
    NSString *trimmedRoom = wcpl_qm_trimString(roomUserName);
    if (trimmedRoom.length == 0) {
        return NO;
    }

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (config.quitMonitorScope != WCPLQuitMonitorScopeWhitelist) {
        return YES;
    }

    NSDictionary<NSString *, NSNumber *> *whitelist = config.quitMonitorWhitelistInfo;
    if (![whitelist isKindOfClass:[NSDictionary class]] || whitelist.count == 0) {
        return NO;
    }

    __block BOOL hasValidRule = NO;
    __block BOOL matchedAllowed = NO;
    [whitelist enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *value, BOOL *stop) {
        if (![key isKindOfClass:[NSString class]]) {
            return;
        }
        if (!wcpl_qm_isChatRoomUserName(key)) {
            return;
        }
        if (![value respondsToSelector:@selector(boolValue)] || !value.boolValue) {
            return;
        }
        hasValidRule = YES;
        if ([key isEqualToString:trimmedRoom]) {
            matchedAllowed = YES;
            *stop = YES;
        }
    }];

    if (!hasValidRule) {
        return NO;
    }
    return matchedAllowed;
}

static NSString *const kWCPLQMSnapshotStoreKey = @"wcpl_qm_room_snapshot_store_v1";

static NSMutableDictionary<NSString *, NSString *> *wcpl_qm_persistedSnapshotStore(void) {
    static NSMutableDictionary<NSString *, NSString *> *store = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSDictionary *saved = [[NSUserDefaults standardUserDefaults] dictionaryForKey:kWCPLQMSnapshotStoreKey];
        store = [NSMutableDictionary dictionary];
        if ([saved isKindOfClass:[NSDictionary class]]) {
            [saved enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
                (void)stop;
                if (![key isKindOfClass:[NSString class]] || ![obj isKindOfClass:[NSString class]]) {
                    return;
                }
                NSString *room = wcpl_qm_trimString((NSString *)key);
                NSString *raw = wcpl_qm_trimString((NSString *)obj);
                if (room.length > 0 && raw.length > 0) {
                    store[room] = raw;
                }
            }];
        }
    });
    return store;
}

static void wcpl_qm_flushPersistedSnapshotStore(void) {
    NSMutableDictionary<NSString *, NSString *> *store = wcpl_qm_persistedSnapshotStore();
    NSDictionary<NSString *, NSString *> *snapshot = nil;
    @synchronized(store) {
        snapshot = [store copy];
    }
    [[NSUserDefaults standardUserDefaults] setObject:snapshot forKey:kWCPLQMSnapshotStoreKey];
}

static void wcpl_qm_updatePersistedMembersForRoom(NSString *roomUserName, NSArray<NSString *> *members) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0 || members.count == 0) {
        return;
    }

    NSString *raw = [members componentsJoinedByString:@";"];
    if (raw.length == 0) {
        return;
    }

    NSMutableDictionary<NSString *, NSString *> *store = wcpl_qm_persistedSnapshotStore();
    @synchronized(store) {
        store[room] = raw;

        if (store.count > 512) {
            NSArray<NSString *> *keys = store.allKeys;
            NSUInteger removeCount = store.count - 480;
            NSUInteger idx = 0;
            while (idx < keys.count && removeCount > 0) {
                [store removeObjectForKey:keys[idx]];
                idx += 1;
                removeCount -= 1;
            }
        }
    }
    wcpl_qm_flushPersistedSnapshotStore();
}

static NSMutableDictionary<NSString *, NSArray<NSString *> *> *wcpl_qm_roomSnapshotCache(void) {
    static NSMutableDictionary<NSString *, NSArray<NSString *> *> *cache = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        cache = [NSMutableDictionary dictionary];
    });
    return cache;
}

static NSArray<NSString *> *wcpl_qm_cachedMembersForRoom(NSString *roomUserName) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0) {
        return @[];
    }

    NSArray<NSString *> *members = nil;
    NSMutableDictionary<NSString *, NSArray<NSString *> *> *cache = wcpl_qm_roomSnapshotCache();
    @synchronized(cache) {
        members = [cache[room] copy];
    }
    if (members.count > 0) {
        return members;
    }

    NSString *persistedRaw = nil;
    NSMutableDictionary<NSString *, NSString *> *store = wcpl_qm_persistedSnapshotStore();
    @synchronized(store) {
        persistedRaw = wcpl_qm_trimString(store[room]);
    }
    NSArray<NSString *> *persistedMembers = wcpl_qm_memberListFromRawString(persistedRaw);
    if (persistedMembers.count == 0) {
        return @[];
    }

    @synchronized(cache) {
        cache[room] = persistedMembers;
    }
    WCPLLogDebug(@"[退群监控] 已恢复持久快照: room=%@ members=%lu",
                 room,
                 (unsigned long)persistedMembers.count);
    return persistedMembers;
}

static void wcpl_qm_updateCachedMembersForRoom(NSString *roomUserName, NSArray<NSString *> *members) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0 || members.count == 0) {
        return;
    }

    NSMutableOrderedSet<NSString *> *normalized = [NSMutableOrderedSet orderedSet];
    for (NSString *member in members) {
        NSString *trimmed = wcpl_qm_trimString(member);
        if (trimmed.length > 0) {
            [normalized addObject:trimmed];
        }
    }
    if (normalized.count == 0) {
        return;
    }
    NSArray<NSString *> *normalizedMembers = [normalized.array copy];

    NSMutableDictionary<NSString *, NSArray<NSString *> *> *cache = wcpl_qm_roomSnapshotCache();
    @synchronized(cache) {
        cache[room] = normalizedMembers;

        if (cache.count > 512) {
            NSArray<NSString *> *keys = cache.allKeys;
            NSUInteger removeCount = cache.count - 480;
            NSUInteger idx = 0;
            while (idx < keys.count && removeCount > 0) {
                [cache removeObjectForKey:keys[idx]];
                idx += 1;
                removeCount -= 1;
            }
        }
    }

    // 重启后首个退群事件也可用旧基线做差分，避免 oldCache=0 漏检。
    wcpl_qm_updatePersistedMembersForRoom(room, normalizedMembers);
}

static NSArray<NSString *> *wcpl_qm_fetchCurrentMembersForRoom(CContactMgr *contactMgr,
                                                               NSString *roomUserName,
                                                               CContact **outRoomContact,
                                                               NSString **outRawMemberList) {
    if (outRoomContact) {
        *outRoomContact = nil;
    }
    if (outRawMemberList) {
        *outRawMemberList = nil;
    }

    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0 || !contactMgr) {
        return @[];
    }

    CContact *roomContact = nil;
    NSArray<NSString *> *contactSelectors = @[
        @"getContactByName:",
        @"getContactByNameFromDB:",
        @"getContactByNameFromCache:",
        @"getContactFromDB:"
    ];
    for (NSString *selectorName in contactSelectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![contactMgr respondsToSelector:selector]) {
            continue;
        }
        @try {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, selector, room);
            if ([contact isKindOfClass:%c(CContact)]) {
                roomContact = (CContact *)contact;
                break;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSString *rawMemberList = [roomContact.m_nsChatRoomMemList copy];
    NSArray<NSString *> *members = roomContact
        ? wcpl_qm_memberListFromContactOrRaw(roomContact, rawMemberList)
        : @[];

    if (members.count == 0 && [contactMgr respondsToSelector:@selector(getGroupCardMemberList:)]) {
        @try {
            id groupCardMembers = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getGroupCardMemberList:), room);
            if ([groupCardMembers isKindOfClass:[NSArray class]]) {
                NSMutableOrderedSet<NSString *> *normalized = [NSMutableOrderedSet orderedSet];
                for (id item in (NSArray *)groupCardMembers) {
                    NSString *member = nil;
                    if ([item isKindOfClass:[NSString class]]) {
                        member = (NSString *)item;
                    } else if ([item respondsToSelector:@selector(m_nsUsrName)]) {
                        @try {
                            member = ((id (*)(id, SEL))objc_msgSend)(item, @selector(m_nsUsrName));
                        } @catch (__unused NSException *exceptionGetUsrName) {
                            member = nil;
                        }
                    }
                    NSString *trimmed = wcpl_qm_trimString(member);
                    if (trimmed.length > 0) {
                        [normalized addObject:trimmed];
                    }
                }
                members = normalized.array;
            }
        } @catch (__unused NSException *exceptionGetGroupCardMembers) {
        }
    }

    if (members.count == 0) {
        return @[];
    }

    if (outRoomContact) {
        *outRoomContact = roomContact;
    }
    if (outRawMemberList) {
        *outRawMemberList = rawMemberList;
    }
    return members ?: @[];
}

static void wcpl_qm_primeSnapshotIfNeeded(CContactMgr *contactMgr, NSString *roomUserName, NSString *sourceTag) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0 || !contactMgr) {
        return;
    }
    if (wcpl_qm_cachedMembersForRoom(room).count > 0) {
        return;
    }

    NSArray<NSString *> *members = wcpl_qm_fetchCurrentMembersForRoom(contactMgr, room, nil, nil);
    if (members.count == 0) {
        return;
    }

    wcpl_qm_updateCachedMembersForRoom(room, members);
    WCPLLogDebug(@"[退群监控] 已建立快照基线: room=%@ source=%@ members=%lu",
                 room,
                 sourceTag ?: @"unknown",
                 (unsigned long)members.count);
}

static void wcpl_qm_refreshRoomSnapshotLater(NSString *roomUserName, NSString *sourceTag, NSTimeInterval delaySeconds) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0) {
        return;
    }

    NSTimeInterval delay = delaySeconds < 0.0 ? 0.0 : delaySeconds;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(),
                   ^{
                       CContactMgr *contactMgr = wcpl_qm_contactMgr();
                       NSArray<NSString *> *members = wcpl_qm_fetchCurrentMembersForRoom(contactMgr, room, nil, nil);
                       if (members.count == 0) {
                           return;
                       }
                       wcpl_qm_updateCachedMembersForRoom(room, members);
                       WCPLLogDebug(@"[退群监控] 快照已刷新: room=%@ source=%@ members=%lu",
                                    room,
                                    sourceTag ?: @"unknown",
                                    (unsigned long)members.count);
                   });
}

static void wcpl_qm_runSnapshotFallbackDiff(NSString *roomUserName,
                                            NSArray<NSString *> *oldMembersSnapshot,
                                            NSString *sourceTag,
                                            BOOL retry) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0 || oldMembersSnapshot.count == 0) {
        return;
    }

    NSTimeInterval delay = retry ? 1.2 : 0.8;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(),
                   ^{
                       CContactMgr *contactMgr = wcpl_qm_contactMgr();
                       CContact *newRoomContact = nil;
                       NSString *newMemberList = nil;
                       NSArray<NSString *> *newMembers = wcpl_qm_fetchCurrentMembersForRoom(contactMgr,
                                                                                            room,
                                                                                            &newRoomContact,
                                                                                            &newMemberList);
                       if (newMembers.count == 0) {
                           WCPLLogDebug(@"[退群监控] 快照兜底无成员数据: room=%@ source=%@ retry=%d",
                                        room,
                                        sourceTag ?: @"unknown",
                                        retry ? 1 : 0);
                           return;
                       }

                       if (oldMembersSnapshot.count > newMembers.count) {
                           NSString *oldMemberList = [oldMembersSnapshot componentsJoinedByString:@";"];
                           wcpl_qm_handleMemberListDiff(contactMgr,
                                                        nil,
                                                        newRoomContact,
                                                        oldMemberList,
                                                        newMemberList,
                                                        (retry ? @"system_snapshot_fallback_retry" : @"system_snapshot_fallback"));
                           wcpl_qm_updateCachedMembersForRoom(room, newMembers);
                           return;
                       }

                       if (!retry && oldMembersSnapshot.count == newMembers.count) {
                           WCPLLogDebug(@"[退群监控] 快照兜底准备重试: room=%@ source=%@ old=%lu new=%lu",
                                        room,
                                        sourceTag ?: @"unknown",
                                        (unsigned long)oldMembersSnapshot.count,
                                        (unsigned long)newMembers.count);
                           wcpl_qm_runSnapshotFallbackDiff(room, oldMembersSnapshot, sourceTag, YES);
                           return;
                       }

                       wcpl_qm_updateCachedMembersForRoom(room, newMembers);
                       WCPLLogDebug(@"[退群监控] 快照兜底无差异: room=%@ source=%@ old=%lu new=%lu retry=%d",
                                    room,
                                    sourceTag ?: @"unknown",
                                    (unsigned long)oldMembersSnapshot.count,
                                    (unsigned long)newMembers.count,
                                    retry ? 1 : 0);
                   });
}

static void wcpl_qm_scheduleSnapshotFallback(CMessageWrap *wrap,
                                             NSString *roomUserName,
                                             NSString *sourceTag,
                                             NSString *content) {
    NSString *room = wcpl_qm_trimString(roomUserName);
    if (room.length == 0) {
        return;
    }

    NSArray<NSString *> *oldMembers = wcpl_qm_cachedMembersForRoom(room);
    if (oldMembers.count == 0) {
        CContactMgr *contactMgr = wcpl_qm_contactMgr();
        NSArray<NSString *> *realtimeMembers = wcpl_qm_fetchCurrentMembersForRoom(contactMgr, room, nil, nil);
        if (realtimeMembers.count > 0) {
            oldMembers = realtimeMembers;
            wcpl_qm_updateCachedMembersForRoom(room, realtimeMembers);
            WCPLLogDebug(@"[退群监控] 快照兜底基线: room=%@ source=%@ members=%lu",
                         room,
                         sourceTag ?: @"unknown",
                         (unsigned long)realtimeMembers.count);
        } else {
            WCPLLogDebug(@"[退群监控] 快照兜底跳过: reason=baseline_missing room=%@ source=%@ content=%@",
                         room,
                         sourceTag ?: @"unknown",
                         wcpl_qm_logSnippet(content, 100));
            wcpl_qm_refreshRoomSnapshotLater(room, @"token_miss_prime", 0.2);
            return;
        }
    }

    unsigned long long msgSvrId = wrap ? (unsigned long long)wrap.m_n64MesSvrID : 0;
    unsigned int createTime = wrap ? wrap.m_uiCreateTime : 0;
    NSString *eventKey = [NSString stringWithFormat:@"snapshot_fallback|%@|%llu|%u",
                          room,
                          msgSvrId,
                          createTime];
    if (!wcpl_qm_shouldEmitForEventKey(eventKey)) {
        return;
    }

    NSArray<NSString *> *oldMembersSnapshot = [oldMembers copy];
    wcpl_qm_runSnapshotFallbackDiff(room, oldMembersSnapshot, sourceTag, NO);
}

static void wcpl_qm_handleSystemQuitMessage(CMessageWrap *wrap, id rawMsg, NSString *sourceTag) {
    if (![wrap isKindOfClass:%c(CMessageWrap)]) {
        return;
    }
    if (![WCPLConfigCenter shared].ignore.quitMonitorEnable) {
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=feature_disabled source=%@ type=%u",
                     sourceTag ?: @"unknown",
                     wrap.m_uiMessageType);
        return;
    }

    unsigned int msgType = wrap.m_uiMessageType;
    if (!(msgType == 10000 || msgType == 10002)) {
        return;
    }
    NSString *rawText = wcpl_qm_systemTextFromRawMessage(rawMsg);
    WCPLLogDebug(@"[退群监控] 系统消息捕获: source=%@ type=%u from=%@ to=%@ rawLen=%lu",
                 sourceTag ?: @"unknown",
                 msgType,
                 wcpl_qm_trimString(wrap.m_nsFromUsr) ?: @"",
                 wcpl_qm_trimString(wrap.m_nsToUsr) ?: @"",
                 (unsigned long)rawText.length);

    NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(wrap);
    if (!wcpl_qm_isChatRoomUserName(roomUserName)) {
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=room_invalid source=%@ type=%u from=%@ to=%@",
                     sourceTag ?: @"unknown",
                     msgType,
                     wcpl_qm_trimString(wrap.m_nsFromUsr) ?: @"",
                     wcpl_qm_trimString(wrap.m_nsToUsr) ?: @"");
        return;
    }
    if (!wcpl_qm_shouldMonitorRoom(roomUserName)) {
        WCPLLogDebug(@"[退群监控] 系统消息不在白名单: room=%@ source=%@",
                     roomUserName ?: @"(nil)",
                     sourceTag ?: @"unknown");
        return;
    }

    CContactMgr *contactMgr = wcpl_qm_contactMgr();
    wcpl_qm_primeSnapshotIfNeeded(contactMgr, roomUserName, sourceTag);

    NSString *rawContent = wcpl_qm_systemTextFromMessageWrap(wrap, rawMsg);
    if (rawContent.length == 0) {
        NSString *rawPreview = wcpl_qm_logSnippet(wcpl_qm_systemTextFromRawMessage(rawMsg), 120);
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=content_empty source=%@ room=%@ type=%u rawPreview=%@",
                     sourceTag ?: @"unknown",
                     roomUserName ?: @"",
                     msgType,
                     rawPreview ?: @"");
        wcpl_qm_scheduleSnapshotFallback(wrap, roomUserName, sourceTag, rawPreview);
        return;
    }

    BOOL isRawSysMsgTemplate = wcpl_qm_isSysMsgTemplateContent(rawContent);
    NSString *displayContent = rawContent;
    if (isRawSysMsgTemplate) {
        NSString *plain = wcpl_qm_plainTextFromSysMsgTemplateContent(rawContent);
        if (plain.length > 0) {
            displayContent = plain;
        }
    }

    // token 命中使用“展示文本优先”，避免 sysmsgtemplate XML 直传导致误判或插入失败。
    NSString *tokenCheckText = displayContent.length > 0 ? displayContent : rawContent;

    WCPLLogDebug(@"[退群监控] 系统消息文本: source=%@ room=%@ type=%u content=%@",
                 sourceTag ?: @"unknown",
                 roomUserName ?: @"",
                 msgType,
                 wcpl_qm_logSnippet(tokenCheckText, 120));
    if ([tokenCheckText rangeOfString:@"[退群监控]"].location != NSNotFound) {
        return;
    }

    if (isRawSysMsgTemplate && displayContent.length == 0) {
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=sysmsgtemplate_plain_missing source=%@ room=%@ type=%u rawPreview=%@",
                     sourceTag ?: @"unknown",
                     roomUserName ?: @"",
                     msgType,
                     wcpl_qm_logSnippet(rawContent, 120));
        wcpl_qm_scheduleSnapshotFallback(wrap, roomUserName, sourceTag, rawContent);
        return;
    }

    if (!wcpl_qm_looksLikeQuitSystemText(tokenCheckText)) {
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=token_miss source=%@ room=%@ type=%u content=%@",
                     sourceTag ?: @"unknown",
                     roomUserName ?: @"",
                     msgType,
                     wcpl_qm_logSnippet(tokenCheckText, 120));
        wcpl_qm_scheduleSnapshotFallback(wrap, roomUserName, sourceTag, tokenCheckText);
        return;
    }

    NSString *selfUserName = wcpl_qm_selfUserName(contactMgr);
    if (wcpl_qm_looksLikeSelfQuitSystemText(tokenCheckText, selfUserName)) {
        WCPLLogDebug(@"[退群监控] 系统消息命中自己退群，忽略: room=%@ source=%@ content=%@",
                     roomUserName,
                     sourceTag ?: @"unknown",
                     tokenCheckText);
        return;
    }

    unsigned long long msgSvrId = (unsigned long long)wrap.m_n64MesSvrID;
    NSString *eventKey = [NSString stringWithFormat:@"%@|%llu|%@",
                          roomUserName ?: @"",
                          msgSvrId,
                          tokenCheckText ?: @""];
    if (!wcpl_qm_shouldEmitForEventKey(eventKey)) {
        return;
    }

    NSString *fromUser = selfUserName.length > 0 ? selfUserName : @"weixin";
    NSString *tipContent = wcpl_qm_trimString(displayContent) ?: wcpl_qm_trimString(tokenCheckText);
    if (tipContent.length == 0) {
        return;
    }
    NSString *tip = [NSString stringWithFormat:@"[退群监控] %@", tipContent];
    wcpl_qm_refreshRoomSnapshotLater(roomUserName, @"system_token_hit", 0.8);
    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL inserted = wcpl_qm_addLocalMonitorTip(roomUserName, fromUser, tip, nil, tip);
        if (inserted) {
            WCPLLogInfo(@"[退群监控] 系统消息提示成功: room=%@ source=%@ type=%u content=%@",
                        roomUserName,
                        sourceTag ?: @"unknown",
                        msgType,
                        tipContent);
        } else {
            WCPLLogWarning(@"[退群监控] 系统消息提示失败: room=%@ source=%@ type=%u appActive=%d content=%@",
                           roomUserName,
                           sourceTag ?: @"unknown",
                           msgType,
                           wcpl_qm_isAppActive() ? 1 : 0,
                           tipContent);
            wcpl_qm_retryInsertMonitorTip(roomUserName, fromUser, tip, nil, tip, sourceTag ?: @"unknown", 1);
        }
    });
}

static void wcpl_qm_handleMemberListDiff(CContactMgr *contactMgr,
                                         CContact *oldRoomContact,
                                         CContact *newRoomContact,
                                         NSString *oldMemberList,
                                         NSString *newMemberList,
                                         NSString *sourceTag) {
    if (!contactMgr) {
        return;
    }

    if (![WCPLConfigCenter shared].ignore.quitMonitorEnable) {
        return;
    }

    CContact *roomContact = newRoomContact ?: oldRoomContact;
    if (![roomContact isKindOfClass:%c(CContact)]) {
        return;
    }

    NSString *roomUserName = wcpl_qm_trimString(newRoomContact.m_nsUsrName);
    if (roomUserName.length == 0) {
        roomUserName = wcpl_qm_trimString(oldRoomContact.m_nsUsrName);
    }
    if (!wcpl_qm_isChatRoomUserName(roomUserName)) {
        return;
    }
    if (!wcpl_qm_shouldMonitorRoom(roomUserName)) {
        WCPLLogDebug(@"[退群监控] 房间不在白名单，跳过: room=%@ source=%@",
                     roomUserName ?: @"(nil)",
                     sourceTag ?: @"unknown");
        return;
    }

    NSArray<NSString *> *oldMembers = wcpl_qm_memberListFromContactOrRaw(oldRoomContact, oldMemberList);
    NSArray<NSString *> *newMembers = wcpl_qm_memberListFromContactOrRaw(newRoomContact, newMemberList);
    if (oldMembers.count == 0 || newMembers.count == 0 || oldMembers.count <= newMembers.count) {
        WCPLLogDebug(@"[退群监控] 无有效差异: room=%@ source=%@ old=%lu new=%lu",
                     roomUserName ?: @"(nil)",
                     sourceTag ?: @"unknown",
                     (unsigned long)oldMembers.count,
                     (unsigned long)newMembers.count);
        return;
    }

    NSUInteger deltaCount = oldMembers.count - newMembers.count;
    if (deltaCount > 20) {
        WCPLLogWarning(@"[退群监控] 发现异常大差异(不再静默跳过): room=%@ source=%@ old=%lu new=%lu",
                       roomUserName,
                       sourceTag ?: @"unknown",
                       (unsigned long)oldMembers.count,
                       (unsigned long)newMembers.count);

        NSString *eventKey = [NSString stringWithFormat:@"%@|large_delta|%lu|%lu",
                              roomUserName,
                              (unsigned long)oldMembers.count,
                              (unsigned long)newMembers.count];
        if (!wcpl_qm_shouldEmitForEventKey(eventKey)) {
            return;
        }

        NSString *selfUserName = wcpl_qm_selfUserName(contactMgr);
        NSString *fromUser = selfUserName.length > 0 ? selfUserName : @"weixin";
        NSString *tipContent = [NSString stringWithFormat:@"[退群监控] 群成员列表发生大幅变化：%lu → %lu（减少 %lu）",
                                                          (unsigned long)oldMembers.count,
                                                          (unsigned long)newMembers.count,
                                                          (unsigned long)deltaCount];
        dispatch_async(dispatch_get_main_queue(), ^{
            BOOL inserted = wcpl_qm_addLocalMonitorTip(roomUserName, fromUser, tipContent, nil, tipContent);
            if (inserted) {
                WCPLLogInfo(@"[退群监控] 已插入大差异提示: room=%@ source=%@ delta=%lu",
                            roomUserName,
                            sourceTag ?: @"unknown",
                            (unsigned long)deltaCount);
            } else {
                WCPLLogWarning(@"[退群监控] 插入大差异提示失败: room=%@ source=%@ appActive=%d",
                               roomUserName,
                               sourceTag ?: @"unknown",
                               wcpl_qm_isAppActive() ? 1 : 0);
                wcpl_qm_retryInsertMonitorTip(roomUserName,
                                              fromUser,
                                              tipContent,
                                              nil,
                                              tipContent,
                                              sourceTag ?: @"unknown",
                                              1);
            }
        });
        return;
    }

    NSSet<NSString *> *newMemberSet = [NSSet setWithArray:newMembers];
    NSString *selfUserName = wcpl_qm_selfUserName(contactMgr);
    NSMutableArray<NSString *> *removedMembers = [NSMutableArray array];
    for (NSString *member in oldMembers) {
        if ([newMemberSet containsObject:member]) {
            continue;
        }
        if (selfUserName.length > 0 && [member isEqualToString:selfUserName]) {
            continue;
        }
        [removedMembers addObject:member];
    }

    if (removedMembers.count == 0) {
        return;
    }

    NSString *eventKey = [NSString stringWithFormat:@"%@|%@", roomUserName, [removedMembers componentsJoinedByString:@","]];
    if (!wcpl_qm_shouldEmitForEventKey(eventKey)) {
        WCPLLogDebug(@"[退群监控] 事件去重: room=%@ source=%@ key=%@",
                     roomUserName,
                     sourceTag ?: @"unknown",
                     eventKey);
        return;
    }

    NSString *fromUser = selfUserName.length > 0 ? selfUserName : @"weixin";
    NSArray<NSString *> *removedMembersSnapshot = [removedMembers copy];
    dispatch_async(dispatch_get_main_queue(), ^{
        CContactMgr *mainContactMgr = wcpl_qm_contactMgr();
        NSArray<NSString *> *mentionUsers = nil;
        NSString *plainTipContent = nil;
        NSString *tipContent = wcpl_qm_tipContentForRemovedUsers(mainContactMgr ?: contactMgr,
                                                                 nil,
                                                                 removedMembersSnapshot,
                                                                 &mentionUsers,
                                                                 &plainTipContent);
        if (tipContent.length == 0) {
            WCPLLogDebug(@"[退群监控] 提示内容为空: room=%@ source=%@ removed=%@",
                         roomUserName,
                         sourceTag ?: @"unknown",
                         [removedMembersSnapshot componentsJoinedByString:@","]);
            return;
        }
        NSString *msgSource = wcpl_qm_msgSourceForMentionUsers(mentionUsers);
        NSString *pushContent = plainTipContent.length > 0 ? plainTipContent : tipContent;
        BOOL inserted = wcpl_qm_addLocalMonitorTip(roomUserName, fromUser, tipContent, msgSource, pushContent);
        if (!inserted && plainTipContent.length > 0 && ![plainTipContent isEqualToString:tipContent]) {
            inserted = wcpl_qm_addLocalMonitorTip(roomUserName, fromUser, plainTipContent, msgSource, plainTipContent);
        }
        if (inserted) {
            WCPLLogInfo(@"[退群监控] 已插入提示: room=%@ source=%@ removed=%@",
                        roomUserName,
                        sourceTag ?: @"unknown",
                        [removedMembersSnapshot componentsJoinedByString:@","]);
        } else {
            WCPLLogWarning(@"[退群监控] 插入提示失败: room=%@ source=%@ appActive=%d",
                           roomUserName,
                           sourceTag ?: @"unknown",
                           wcpl_qm_isAppActive() ? 1 : 0);
            wcpl_qm_retryInsertMonitorTip(roomUserName,
                                          fromUser,
                                          tipContent,
                                          msgSource,
                                          pushContent,
                                          sourceTag ?: @"unknown",
                                          1);
        }
    });
}

%group WCPLQuitMonitorMergeHookGroup

%hook CContactMgr

- (void)mergeChatRoomData:(CContact *)contact oldContact:(CContact *)oldContact {
    BOOL didCallOrig = NO;
    @try {
        NSString *roomUserName = nil;
        NSString *oldList = nil;

        @try {
            if ([oldContact isKindOfClass:%c(CContact)]) {
                roomUserName = wcpl_qm_trimString(oldContact.m_nsUsrName);
                oldList = [oldContact.m_nsChatRoomMemList copy];
            }
            if ([contact isKindOfClass:%c(CContact)]) {
                if (roomUserName.length == 0) {
                    roomUserName = wcpl_qm_trimString(contact.m_nsUsrName);
                }
                if (oldList.length == 0) {
                    oldList = [contact.m_nsChatRoomMemList copy];
                }
            }
        } @catch (__unused NSException *exceptionWarmup) {
        }

        BOOL shouldTrack = wcpl_qm_isChatRoomUserName(roomUserName);
        NSArray<NSString *> *cachedMembersBeforeMerge = shouldTrack ? wcpl_qm_cachedMembersForRoom(roomUserName) : @[];

        %orig;
        didCallOrig = YES;

        if (!shouldTrack) {
            return;
        }

        CContact *latestRoomContact = nil;
        NSString *newList = nil;
        NSArray<NSString *> *newMembers = wcpl_qm_fetchCurrentMembersForRoom((CContactMgr *)self,
                                                                              roomUserName,
                                                                              &latestRoomContact,
                                                                              &newList);
        NSArray<NSString *> *newMembersFromRaw = wcpl_qm_memberListFromRawString(newList);
        NSArray<NSString *> *effectiveNewMembers = newMembers.count > 0 ? newMembers : newMembersFromRaw;

        NSArray<NSString *> *oldMembersFromRaw = wcpl_qm_memberListFromRawString(oldList);
        NSArray<NSString *> *effectiveOldMembers = oldMembersFromRaw;
        NSString *oldSource = @"merge_old_raw";
        NSUInteger effectiveNewCount = effectiveNewMembers.count;
        NSUInteger oldRawCount = oldMembersFromRaw.count;
        NSUInteger oldCacheCount = cachedMembersBeforeMerge.count;
        if (oldRawCount == 0 && oldCacheCount > 0) {
            effectiveOldMembers = cachedMembersBeforeMerge;
            oldSource = @"cache_before_merge_raw_empty";
        } else if (effectiveNewCount > 0 &&
                   oldRawCount <= effectiveNewCount &&
                   oldCacheCount > effectiveNewCount &&
                   (oldCacheCount - effectiveNewCount) <= 8) {
            // merge 回调里 oldContact 可能已是更新后数据；此时用 merge 前快照兜底。
            effectiveOldMembers = cachedMembersBeforeMerge;
            oldSource = @"cache_before_merge_raw_not_older";
        }

        if (effectiveOldMembers.count > 0) {
            BOOL shouldRebuildOldRaw = (effectiveOldMembers != oldMembersFromRaw) || oldList.length == 0;
            if (shouldRebuildOldRaw) {
                // 只有在“用快照兜底 oldContact”时才重建 raw，避免大群下重复 join 造成额外开销。
                oldList = [effectiveOldMembers componentsJoinedByString:@";"];
            }
        }
        if (newList.length == 0 && newMembers.count > 0) {
            newList = [newMembers componentsJoinedByString:@";"];
        }

        WCPLLogDebug(@"[退群监控] merge差分采样: room=%@ oldRawLen=%lu newRawLen=%lu oldRaw=%lu oldCache=%lu new=%lu oldSource=%@",
                     roomUserName ?: @"(nil)",
                     (unsigned long)oldList.length,
                     (unsigned long)newList.length,
                     (unsigned long)oldRawCount,
                     (unsigned long)oldCacheCount,
                     (unsigned long)effectiveNewCount,
                     oldSource);

        wcpl_qm_handleMemberListDiff((CContactMgr *)self,
                                     nil,
                                     latestRoomContact,
                                     oldList,
                                     newList,
                                     @"mergeChatRoomData");
        if (effectiveNewMembers.count > 0) {
            wcpl_qm_updateCachedMembersForRoom(roomUserName, effectiveNewMembers);
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] mergeChatRoomData Hook 异常(已拦截): %@", exception);
        if (!didCallOrig) {
            %orig;
        }
    }
}

%end

%end

%group WCPLQuitMonitorSetMemListHookGroup

%hook CContactMgr

// 大群场景里，微信可能不再插入“XXX 退出了群聊”的系统消息，
// 但联系人层仍会更新 chatRoomMemList。这里补一个更底层的入口做成员差分。
- (BOOL)setContact:(id)contact chatRoomMemList:(id)memList isNotify:(BOOL)isNotify {
    BOOL didCallOrig = NO;
    BOOL ret = NO;
    @try {
        NSString *roomUserName = nil;
        NSString *oldRawList = nil;
        @try {
            if ([contact isKindOfClass:%c(CContact)]) {
                CContact *roomContact = (CContact *)contact;
                roomUserName = wcpl_qm_trimString(roomContact.m_nsUsrName);
                oldRawList = [roomContact.m_nsChatRoomMemList copy];
            }
        } @catch (__unused NSException *exceptionWarmup) {
            roomUserName = nil;
            oldRawList = nil;
        }

        BOOL shouldTrack = wcpl_qm_isChatRoomUserName(roomUserName) && wcpl_qm_shouldMonitorRoom(roomUserName);
        NSArray<NSString *> *cachedMembersBeforeSet = shouldTrack ? wcpl_qm_cachedMembersForRoom(roomUserName) : @[];
        NSArray<NSString *> *oldMembersFromRaw = wcpl_qm_memberListFromRawString(oldRawList);
        NSArray<NSString *> *newMembersFromArg = shouldTrack ? wcpl_qm_memberListFromMemListObject(memList) : @[];

        ret = %orig;
        didCallOrig = YES;

        if (!shouldTrack) {
            return ret;
        }

        NSString *newRawList = nil;
        NSArray<NSString *> *newMembersFromRaw = @[];
        @try {
            if ([contact isKindOfClass:%c(CContact)]) {
                CContact *roomContact = (CContact *)contact;
                newRawList = [roomContact.m_nsChatRoomMemList copy];
                newMembersFromRaw = wcpl_qm_memberListFromRawString(newRawList);
            }
        } @catch (__unused NSException *exceptionNewRaw) {
            newRawList = nil;
            newMembersFromRaw = @[];
        }

        NSArray<NSString *> *effectiveNewMembers = newMembersFromArg.count > 0 ? newMembersFromArg : newMembersFromRaw;
        NSString *newSource = newMembersFromArg.count > 0 ? @"arg_memList" : @"contact_raw";
        if (effectiveNewMembers.count == 0) {
            CContact *latestRoomContact = nil;
            NSString *fetchedRawList = nil;
            NSArray<NSString *> *fetchedMembers = wcpl_qm_fetchCurrentMembersForRoom((CContactMgr *)self,
                                                                                    roomUserName,
                                                                                    &latestRoomContact,
                                                                                    &fetchedRawList);
            if (fetchedMembers.count > 0) {
                effectiveNewMembers = fetchedMembers;
                newRawList = fetchedRawList.length > 0 ? fetchedRawList : [fetchedMembers componentsJoinedByString:@";"];
                newSource = @"fetchCurrentMembers";
            }
        }

        NSArray<NSString *> *effectiveOldMembers = oldMembersFromRaw;
        NSString *oldSource = @"contact_raw";
        NSUInteger newCount = effectiveNewMembers.count;
        NSUInteger oldRawCount = oldMembersFromRaw.count;
        NSUInteger cacheCount = cachedMembersBeforeSet.count;
        if (oldRawCount == 0 && cacheCount > 0) {
            effectiveOldMembers = cachedMembersBeforeSet;
            oldSource = @"cache_before_set_raw_empty";
        } else if (newCount > 0 &&
                   oldRawCount <= newCount &&
                   cacheCount > newCount &&
                   (cacheCount - newCount) <= 8) {
            // setContact 回调里 contact 可能已是更新后数据；此时用 set 前快照兜底。
            effectiveOldMembers = cachedMembersBeforeSet;
            oldSource = @"cache_before_set_raw_not_older";
        }

        NSString *effectiveOldRawList = oldRawList;
        if (effectiveOldMembers.count > 0) {
            BOOL shouldRebuildOldRaw = (effectiveOldMembers != oldMembersFromRaw) || effectiveOldRawList.length == 0;
            if (shouldRebuildOldRaw) {
                // 只有在“用 set 前快照兜底”时才重建 raw，避免大群下重复 join 造成额外开销。
                effectiveOldRawList = [effectiveOldMembers componentsJoinedByString:@";"];
            }
        }
        if (newRawList.length == 0 && effectiveNewMembers.count > 0) {
            newRawList = [effectiveNewMembers componentsJoinedByString:@";"];
        }

        WCPLLogDebug(@"[退群监控] setContactMemList采样: room=%@ old=%lu(cache=%lu raw=%lu src=%@) new=%lu(src=%@) notify=%d",
                     roomUserName ?: @"(nil)",
                     (unsigned long)effectiveOldMembers.count,
                     (unsigned long)cacheCount,
                     (unsigned long)oldRawCount,
                     oldSource,
                     (unsigned long)effectiveNewMembers.count,
                     newSource,
                     isNotify ? 1 : 0);

        wcpl_qm_handleMemberListDiff((CContactMgr *)self,
                                     nil,
                                     [contact isKindOfClass:%c(CContact)] ? (CContact *)contact : nil,
                                     effectiveOldRawList,
                                     newRawList,
                                     @"setContactMemList");

        if (effectiveNewMembers.count > 0) {
            wcpl_qm_updateCachedMembersForRoom(roomUserName, effectiveNewMembers);
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] setContactMemList Hook 异常(已拦截): %@", exception);
        if (!didCallOrig) {
            ret = %orig;
        }
    }
    return ret;
}

%end

%end

%group WCPLQuitMonitorSystemHookGroup

%hook CMessageMgr

- (void)AddMsg:(id)msg MsgWrap:(id)wrap {
    static NSString *const kHookSelector = @"AddMsg:MsgWrap:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    // 前置过滤：非消息对象直接放行原生。
    if (![wrap isKindOfClass:%c(CMessageWrap)]) {
        wcpl_qm_hookLogCMessageMgr(kHookSelector,
                                   @"pre_filter",
                                   @"skip_feature",
                                   kOrigPolicy,
                                   @"reason=wrap_invalid");
        %orig;
        return;
    }

    // 兜底放行：先走原生链路，再执行监控能力，避免影响主流程。
    %orig;

    CMessageWrap *messageWrap = (CMessageWrap *)wrap;
    @try {
        NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(messageWrap);
        if (wcpl_qm_isChatRoomUserName(roomUserName)) {
            wcpl_qm_primeSnapshotIfNeeded(wcpl_qm_contactMgr(), roomUserName, @"AddMsgWarm");
        }
        wcpl_qm_handleSystemQuitMessage(messageWrap, msg, @"AddMsg");
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] AddMsg 系统消息检测异常: %@", exception);
        wcpl_qm_hookLogCMessageMgr(kHookSelector,
                                   @"feature",
                                   @"exception",
                                   kOrigPolicy,
                                   exception.reason ?: @"unknown");
    }
}

- (void)AsyncOnAddMsg:(id)msg MsgWrap:(id)wrap {
    static NSString *const kHookSelector = @"AsyncOnAddMsg:MsgWrap:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    if (![wrap isKindOfClass:%c(CMessageWrap)]) {
        wcpl_qm_hookLogCMessageMgr(kHookSelector,
                                   @"pre_filter",
                                   @"skip_feature",
                                   kOrigPolicy,
                                   @"reason=wrap_invalid");
        %orig;
        return;
    }

    %orig;

    CMessageWrap *messageWrap = (CMessageWrap *)wrap;
    @try {
        NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(messageWrap);
        if (wcpl_qm_isChatRoomUserName(roomUserName)) {
            wcpl_qm_primeSnapshotIfNeeded(wcpl_qm_contactMgr(), roomUserName, @"AsyncOnAddMsgWarm");
        }
        wcpl_qm_handleSystemQuitMessage(messageWrap, msg, @"AsyncOnAddMsg");
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] AsyncOnAddMsg 系统消息检测异常: %@", exception);
        wcpl_qm_hookLogCMessageMgr(kHookSelector,
                                   @"feature",
                                   @"exception",
                                   kOrigPolicy,
                                   exception.reason ?: @"unknown");
    }
}

- (void)AsyncOnPreAddMsg:(id)msg MsgWrap:(id)wrap {
    static NSString *const kHookSelector = @"AsyncOnPreAddMsg:MsgWrap:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    if (![wrap isKindOfClass:%c(CMessageWrap)]) {
        wcpl_qm_hookLogCMessageMgr(kHookSelector,
                                   @"pre_filter",
                                   @"skip_feature",
                                   kOrigPolicy,
                                   @"reason=wrap_invalid");
        %orig;
        return;
    }

    %orig;

    CMessageWrap *messageWrap = (CMessageWrap *)wrap;
    @try {
        NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(messageWrap);
        if (wcpl_qm_isChatRoomUserName(roomUserName)) {
            wcpl_qm_primeSnapshotIfNeeded(wcpl_qm_contactMgr(), roomUserName, @"AsyncOnPreAddMsgWarm");
        }
        wcpl_qm_handleSystemQuitMessage(messageWrap, msg, @"AsyncOnPreAddMsg");
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] AsyncOnPreAddMsg 系统消息检测异常: %@", exception);
        wcpl_qm_hookLogCMessageMgr(kHookSelector,
                                   @"feature",
                                   @"exception",
                                   kOrigPolicy,
                                   exception.reason ?: @"unknown");
    }
}

%end

%end

%ctor {
    @autoreleasepool {
        Class contactMgrClass = objc_getClass("CContactMgr");
        Class messageMgrClass = objc_getClass("CMessageMgr");

        BOOL didInitAny = NO;
        if (contactMgrClass && [contactMgrClass instancesRespondToSelector:@selector(setContact:chatRoomMemList:isNotify:)]) {
            %init(WCPLQuitMonitorSetMemListHookGroup);
            didInitAny = YES;
            WCPLLogInfo(@"[退群监控] 已挂载成员差分入口: setContact:chatRoomMemList:isNotify:");
        } else if (contactMgrClass) {
            WCPLLogWarning(@"[退群监控] 未找到 setContact:chatRoomMemList:isNotify:（已跳过成员差分入口）");
        }

        if (contactMgrClass && [contactMgrClass instancesRespondToSelector:@selector(mergeChatRoomData:oldContact:)]) {
            %init(WCPLQuitMonitorMergeHookGroup);
            didInitAny = YES;
            WCPLLogInfo(@"[退群监控] 已挂载成员差分入口: mergeChatRoomData:oldContact:");
        } else if (contactMgrClass) {
            WCPLLogWarning(@"[退群监控] 未找到 mergeChatRoomData:oldContact:（已跳过差分入口）");
        } else {
            WCPLLogWarning(@"[退群监控] 未找到 CContactMgr（已跳过差分入口）");
        }

        if (messageMgrClass &&
            ([messageMgrClass instancesRespondToSelector:@selector(AsyncOnAddMsg:MsgWrap:)] ||
             [messageMgrClass instancesRespondToSelector:@selector(AsyncOnPreAddMsg:MsgWrap:)])) {
            %init(WCPLQuitMonitorSystemHookGroup);
            didInitAny = YES;
            WCPLLogInfo(@"[退群监控] 已挂载系统消息入口: AsyncOnAddMsg/AsyncOnPreAddMsg");
        } else {
            WCPLLogWarning(@"[退群监控] 未找到系统消息入口（AsyncOnAddMsg/AsyncOnPreAddMsg）");
        }

        if (!didInitAny) {
            WCPLLogWarning(@"[退群监控] Hook 初始化失败：无可用入口");
        } else {
            WCPLLogInfo(@"[退群监控] Hook 初始化完成");
        }
    }
}
