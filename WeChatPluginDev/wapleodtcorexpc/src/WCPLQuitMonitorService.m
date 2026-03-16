#import "WCPLQuitMonitorService.h"

#import "WCPLConfigCenter.h"
#import "WCPLContactAdapter.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLQuitMonitorHelpers.h"
#import "WCPLQuitMonitorMessageAdapter.h"
#import "WCPLWeChatContactHeaders.h"

#import <dispatch/dispatch.h>

static NSTimeInterval const kWCPLQuitMonitorDedupeTTL = 2.0;
static NSUInteger const kWCPLQuitMonitorDedupeMaxCount = 128;

static NSArray<NSString *> *wcpl_qm_uniqueMembersFromArray(NSArray<NSString *> *members) {
    NSMutableOrderedSet<NSString *> *normalized = [NSMutableOrderedSet orderedSet];
    for (NSString *member in members) {
        NSString *trimmedMember = WCPLTrimText(member);
        if (trimmedMember.length > 0) {
            [normalized addObject:trimmedMember];
        }
    }
    return normalized.array;
}

static NSArray<NSString *> *wcpl_qm_membersFromListObject(id value) {
    if (!value) {
        return @[];
    }
    if ([value isKindOfClass:[NSString class]]) {
        return WCPLQuitMonitorMembersFromRawList((NSString *)value);
    }
    if ([value isKindOfClass:[NSData class]]) {
        NSString *decoded = [[NSString alloc] initWithData:(NSData *)value encoding:NSUTF8StringEncoding];
        return WCPLQuitMonitorMembersFromRawList(decoded);
    }
    if (![value isKindOfClass:[NSArray class]]) {
        return @[];
    }

    NSMutableArray<NSString *> *members = [NSMutableArray array];
    for (id item in (NSArray *)value) {
        NSString *userName = WCPLContactAdapterSafeUserName(item);
        if (userName.length > 0) {
            [members addObject:userName];
        }
    }
    return wcpl_qm_uniqueMembersFromArray(members);
}

static NSString *wcpl_qm_roomUserName(id roomContact, id newContact) {
    NSString *roomUserName = WCPLContactAdapterSafeUserName(roomContact);
    if (roomUserName.length == 0) {
        roomUserName = WCPLContactAdapterSafeUserName(newContact);
    }
    return roomUserName;
}

static BOOL wcpl_qm_shouldMonitorRoom(NSString *roomUserName) {
    NSString *trimmedRoomUserName = WCPLTrimText(roomUserName);
    if (!WCPLContactAdapterIsChatRoomUserName(trimmedRoomUserName)) {
        return NO;
    }

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (config.quitMonitorScope != WCPLQuitMonitorScopeWhitelist) {
        return YES;
    }
    return [config.quitMonitorWhitelistInfo[trimmedRoomUserName] boolValue];
}

static BOOL wcpl_qm_shouldEmitEvent(NSString *eventKey) {
    NSString *trimmedEventKey = WCPLTrimText(eventKey);
    if (trimmedEventKey.length == 0) {
        return NO;
    }

    static NSMutableDictionary<NSString *, NSNumber *> *eventStore = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        eventStore = [NSMutableDictionary dictionary];
    });

    NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
    @synchronized(eventStore) {
        NSArray<NSString *> *allKeys = eventStore.allKeys;
        for (NSString *key in allKeys) {
            NSNumber *timestamp = eventStore[key];
            if (!(timestamp && (now - timestamp.doubleValue) < kWCPLQuitMonitorDedupeTTL)) {
                [eventStore removeObjectForKey:key];
            }
        }
        if (eventStore[trimmedEventKey]) {
            return NO;
        }
        if (eventStore.count >= kWCPLQuitMonitorDedupeMaxCount) {
            [eventStore removeAllObjects];
        }
        eventStore[trimmedEventKey] = @(now);
    }
    return YES;
}

static NSString *wcpl_qm_timestampString(void) {
    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    });

    @synchronized(formatter) {
        return [formatter stringFromDate:[NSDate date]];
    }
}

static NSString *wcpl_qm_tipContentForRemovedMembers(NSArray<NSString *> *removedMembers) {
    if (removedMembers.count == 0) {
        return nil;
    }

    NSString *timestamp = wcpl_qm_timestampString();
    if (removedMembers.count == 1) {
        NSString *userName = removedMembers.firstObject;
        NSString *displayName = WCPLContactAdapterDisplayNameForUserName(userName) ?: userName;
        return [NSString stringWithFormat:@"[退群监控]\n%@\n<a href=\"weixin://contacts/profile/%@/\">\"%@\"</a>退出了群聊",
                                          timestamp,
                                          userName,
                                          displayName];
    }

    NSMutableArray<NSString *> *displayNames = [NSMutableArray array];
    for (NSString *userName in removedMembers) {
        NSString *displayName = WCPLContactAdapterDisplayNameForUserName(userName) ?: userName;
        if (displayName.length > 0) {
            [displayNames addObject:displayName];
        }
    }
    if (displayNames.count == 0) {
        return nil;
    }
    return [NSString stringWithFormat:@"[退群监控]\n%@\n%@退出了群聊",
                                      timestamp,
                                      [displayNames componentsJoinedByString:@"、"]];
}

void WCPLQuitMonitorHandleContactChange(CContactMgr *contactMgr,
                                        id roomContact,
                                        NSString *oldMemberList,
                                        id newContact,
                                        id explicitNewMemberList,
                                        NSString *sourceTag) {
    (void)contactMgr;

    if (![WCPLConfigCenter shared].ignore.quitMonitorEnable) {
        return;
    }

    NSString *roomUserName = wcpl_qm_roomUserName(roomContact, newContact);
    if (!wcpl_qm_shouldMonitorRoom(roomUserName)) {
        return;
    }

    NSArray<NSString *> *oldMembers = WCPLQuitMonitorMembersFromRawList(oldMemberList);
    NSArray<NSString *> *newMembers = explicitNewMemberList
        ? wcpl_qm_membersFromListObject(explicitNewMemberList)
        : @[];
    if (newMembers.count == 0) {
        newMembers = WCPLQuitMonitorMembersFromRawList(WCPLContactAdapterChatRoomMemberList(newContact));
    }
    if (oldMembers.count == 0 || newMembers.count == 0 || oldMembers.count <= newMembers.count) {
        return;
    }

    NSArray<NSString *> *removedMembers = WCPLQuitMonitorRemovedMembers(oldMembers,
                                                                        newMembers,
                                                                        WCPLContactAdapterCurrentSelfUserName());
    NSString *eventKey = WCPLQuitMonitorBuildEventKey(roomUserName, removedMembers);
    if (!(removedMembers.count > 0 && wcpl_qm_shouldEmitEvent(eventKey))) {
        return;
    }

    NSString *tipContent = wcpl_qm_tipContentForRemovedMembers(removedMembers);
    if (!(tipContent.length > 0 && WCPLQuitMonitorInsertLocalSystemTip(roomUserName, tipContent))) {
        WCPLLogWarning(@"[退群监控] 本地提示入库失败: room=%@ source=%@ removed=%@",
                       roomUserName ?: @"",
                       sourceTag ?: @"unknown",
                       [removedMembers componentsJoinedByString:@","]);
        return;
    }

    WCPLLogInfo(@"[退群监控] 已插入提示: room=%@ source=%@ removed=%@",
                roomUserName,
                sourceTag ?: @"unknown",
                [removedMembers componentsJoinedByString:@","]);
}
