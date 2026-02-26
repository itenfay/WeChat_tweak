#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLContactLookup.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

#import <objc/runtime.h>
#import <objc/message.h>
#import <dispatch/dispatch.h>

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
        dispatch_sync(dispatch_get_main_queue(), ^{
            insertedOnMain = wcpl_qm_addLocalMonitorTip(session, fromUser, content, msgSource, pushContent);
        });
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
        wcpl_qm_setWrapObjectValue(msgWrap, @selector(setM_nsContent:), @"m_nsContent", trimmedContent);
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

    NSString *content = wcpl_qm_systemTextFromMessageWrap(wrap, rawMsg);
    if (content.length == 0) {
        NSString *rawPreview = wcpl_qm_logSnippet(wcpl_qm_systemTextFromRawMessage(rawMsg), 120);
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=content_empty source=%@ room=%@ type=%u rawPreview=%@",
                     sourceTag ?: @"unknown",
                     roomUserName ?: @"",
                     msgType,
                     rawPreview ?: @"");
        wcpl_qm_scheduleSnapshotFallback(wrap, roomUserName, sourceTag, rawPreview);
        return;
    }
    WCPLLogDebug(@"[退群监控] 系统消息文本: source=%@ room=%@ type=%u content=%@",
                 sourceTag ?: @"unknown",
                 roomUserName ?: @"",
                 msgType,
                 wcpl_qm_logSnippet(content, 120));
    if ([content rangeOfString:@"[退群监控]"].location != NSNotFound) {
        return;
    }
    if (!wcpl_qm_looksLikeQuitSystemText(content)) {
        WCPLLogDebug(@"[退群监控] 系统消息跳过: reason=token_miss source=%@ room=%@ type=%u content=%@",
                     sourceTag ?: @"unknown",
                     roomUserName ?: @"",
                     msgType,
                     wcpl_qm_logSnippet(content, 120));
        wcpl_qm_scheduleSnapshotFallback(wrap, roomUserName, sourceTag, content);
        return;
    }

    NSString *selfUserName = wcpl_qm_selfUserName(contactMgr);
    if (wcpl_qm_looksLikeSelfQuitSystemText(content, selfUserName)) {
        WCPLLogDebug(@"[退群监控] 系统消息命中自己退群，忽略: room=%@ source=%@ content=%@",
                     roomUserName,
                     sourceTag ?: @"unknown",
                     content);
        return;
    }

    unsigned long long msgSvrId = (unsigned long long)wrap.m_n64MesSvrID;
    NSString *eventKey = [NSString stringWithFormat:@"%@|%llu|%@",
                          roomUserName ?: @"",
                          msgSvrId,
                          content ?: @""];
    if (!wcpl_qm_shouldEmitForEventKey(eventKey)) {
        return;
    }

    NSString *fromUser = selfUserName.length > 0 ? selfUserName : @"weixin";
    NSString *tip = [NSString stringWithFormat:@"[退群监控] %@", content];
    wcpl_qm_refreshRoomSnapshotLater(roomUserName, @"system_token_hit", 0.8);
    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL inserted = wcpl_qm_addLocalMonitorTip(roomUserName, fromUser, tip, nil, tip);
        if (inserted) {
            WCPLLogInfo(@"[退群监控] 系统消息提示成功: room=%@ source=%@ type=%u content=%@",
                        roomUserName,
                        sourceTag ?: @"unknown",
                        msgType,
                        content);
        } else {
            WCPLLogWarning(@"[退群监控] 系统消息提示失败: room=%@ source=%@ type=%u appActive=%d content=%@",
                           roomUserName,
                           sourceTag ?: @"unknown",
                           msgType,
                           wcpl_qm_isAppActive() ? 1 : 0,
                           content);
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
        WCPLLogWarning(@"[退群监控] 跳过异常大差异: room=%@ source=%@ old=%lu new=%lu",
                       roomUserName,
                       sourceTag ?: @"unknown",
                       (unsigned long)oldMembers.count,
                       (unsigned long)newMembers.count);
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
            oldList = [effectiveOldMembers componentsJoinedByString:@";"];
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

%group WCPLQuitMonitorUpdateHookGroup

%hook CContactMgr

- (void)updateContact:(CContact *)contact {
    @try {
    NSString *roomUserName = nil;
    if ([contact isKindOfClass:%c(CContact)]) {
        roomUserName = wcpl_qm_trimString(contact.m_nsUsrName);
    }
    BOOL shouldTrackRoom = wcpl_qm_isChatRoomUserName(roomUserName);

    CContact *oldRoomContact = nil;
    NSString *oldList = nil;
    if (shouldTrackRoom && [self respondsToSelector:@selector(getContactByName:)]) {
        @try {
            id cachedContact = [self getContactByName:roomUserName];
            if ([cachedContact isKindOfClass:%c(CContact)]) {
                oldRoomContact = (CContact *)cachedContact;
                oldList = [oldRoomContact.m_nsChatRoomMemList copy];
            }
        } @catch (__unused NSException *exception) {
            oldRoomContact = nil;
            oldList = nil;
        }
    }

    %orig;

    if (!shouldTrackRoom) {
        return;
    }

    CContact *latestContact = nil;
    if ([self respondsToSelector:@selector(getContactByName:)]) {
        @try {
            id contactObj = [self getContactByName:roomUserName];
            if ([contactObj isKindOfClass:%c(CContact)]) {
                latestContact = (CContact *)contactObj;
            }
        } @catch (__unused NSException *exception) {
            latestContact = nil;
        }
    }

    CContact *newRoomContact = nil;
    if ([latestContact isKindOfClass:%c(CContact)]) {
        newRoomContact = latestContact;
    } else if ([contact isKindOfClass:%c(CContact)]) {
        newRoomContact = contact;
    }
    if (![newRoomContact isKindOfClass:%c(CContact)]) {
        WCPLLogDebug(@"[退群监控] updateContact 跳过：newRoomContact 非 CContact room=%@ class=%@",
                     roomUserName ?: @"(nil)",
                     contact ? NSStringFromClass([contact class]) : @"(nil)");
        return;
    }

    NSString *newList = [newRoomContact.m_nsChatRoomMemList copy];
    wcpl_qm_handleMemberListDiff((CContactMgr *)self,
                                 oldRoomContact,
                                 newRoomContact,
                                 oldList,
                                 newList,
                                 @"updateContact");
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] updateContact Hook 异常(已拦截): %@", exception);
    }
}

%end

%end

%group WCPLQuitMonitorSystemHookGroup

%hook CMessageMgr

- (void)AddMsg:(id)msg MsgWrap:(id)wrap {
    %orig;
    @try {
        if ([wrap isKindOfClass:%c(CMessageWrap)]) {
            CMessageWrap *messageWrap = (CMessageWrap *)wrap;
            NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(messageWrap);
            if (wcpl_qm_isChatRoomUserName(roomUserName)) {
                wcpl_qm_primeSnapshotIfNeeded(wcpl_qm_contactMgr(), roomUserName, @"AddMsgWarm");
            }
            wcpl_qm_handleSystemQuitMessage(messageWrap, msg, @"AddMsg");
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] AddMsg 系统消息检测异常: %@", exception);
    }
}

- (void)AsyncOnAddMsg:(id)msg MsgWrap:(id)wrap {
    %orig;
    @try {
        if ([wrap isKindOfClass:%c(CMessageWrap)]) {
            CMessageWrap *messageWrap = (CMessageWrap *)wrap;
            NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(messageWrap);
            if (wcpl_qm_isChatRoomUserName(roomUserName)) {
                wcpl_qm_primeSnapshotIfNeeded(wcpl_qm_contactMgr(), roomUserName, @"AsyncOnAddMsgWarm");
            }
            wcpl_qm_handleSystemQuitMessage(messageWrap, msg, @"AsyncOnAddMsg");
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] AsyncOnAddMsg 系统消息检测异常: %@", exception);
    }
}

- (void)AsyncOnPreAddMsg:(id)msg MsgWrap:(id)wrap {
    %orig;
    @try {
        if ([wrap isKindOfClass:%c(CMessageWrap)]) {
            CMessageWrap *messageWrap = (CMessageWrap *)wrap;
            NSString *roomUserName = wcpl_qm_roomNameFromMessageWrap(messageWrap);
            if (wcpl_qm_isChatRoomUserName(roomUserName)) {
                wcpl_qm_primeSnapshotIfNeeded(wcpl_qm_contactMgr(), roomUserName, @"AsyncOnPreAddMsgWarm");
            }
            wcpl_qm_handleSystemQuitMessage(messageWrap, msg, @"AsyncOnPreAddMsg");
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[退群监控] AsyncOnPreAddMsg 系统消息检测异常: %@", exception);
    }
}

%end

%end

%ctor {
    @autoreleasepool {
        if (NO) {
            %init(WCPLQuitMonitorUpdateHookGroup);
        }

        Class contactMgrClass = objc_getClass("CContactMgr");
        Class messageMgrClass = objc_getClass("CMessageMgr");

        BOOL didInitAny = NO;
        if (contactMgrClass && [contactMgrClass instancesRespondToSelector:@selector(mergeChatRoomData:oldContact:)]) {
            %init(WCPLQuitMonitorMergeHookGroup);
            didInitAny = YES;
            WCPLLogInfo(@"[退群监控] 已挂载成员差分入口: mergeChatRoomData:oldContact:");
            WCPLLogWarning(@"[退群监控] 稳定性提示：updateContact 差分入口仍保持关闭");
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
