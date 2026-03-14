#import "WCPLSettingsSelectionStore.h"

#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"

@implementation WCPLSettingViewController (WCPLSettingsSelectionStore)

- (NSArray<NSString *> *)quitMonitorWhitelistedChatrooms {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.quitMonitorWhitelistInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location != NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)ignoredChatroomUserNames {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.chatIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location != NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)ignoredUserNames {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.userIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location == NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)wcpl_sanitizedUserNamesFromArray:(NSArray *)names {
    return WCPLSanitizeIdentifierArray(names);
}

- (NSArray<NSString *> *)wcpl_chatroomUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                   scene:(NSString *)scene {
    NSArray<NSString *> *sanitized = [self wcpl_sanitizedUserNamesFromArray:userNames];
    if (sanitized.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *chatrooms = [NSMutableArray array];
    NSUInteger dropped = 0;
    for (NSString *userName in sanitized) {
        if (WCPLIsChatRoomName(userName)) {
            [chatrooms addObject:userName];
        } else {
            dropped += 1;
        }
    }

    if (dropped > 0) {
        WCPLLogWarning(@"[设置] 过滤非群聊项: scene=%@ dropped=%lu kept=%lu",
                       scene ?: @"",
                       (unsigned long)dropped,
                       (unsigned long)chatrooms.count);
    }
    return chatrooms;
}

- (NSArray<NSString *> *)wcpl_friendUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                 scene:(NSString *)scene {
    NSArray<NSString *> *sanitized = [self wcpl_sanitizedUserNamesFromArray:userNames];
    if (sanitized.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *friends = [NSMutableArray array];
    NSUInteger dropped = 0;
    for (NSString *userName in sanitized) {
        if (!WCPLIsChatRoomName(userName)) {
            [friends addObject:userName];
        } else {
            dropped += 1;
        }
    }

    if (dropped > 0) {
        WCPLLogWarning(@"[设置] 过滤群聊项: scene=%@ dropped=%lu kept=%lu",
                       scene ?: @"",
                       (unsigned long)dropped,
                       (unsigned long)friends.count);
    }
    return friends;
}

- (void)updateChatIgnoreInfoWithChatrooms:(NSArray *)chatrooms {
    NSArray<NSString *> *sanitizedChatrooms = [self wcpl_chatroomUserNamesFromArray:chatrooms scene:@"ignore_chatroom_save"];
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *chatroom in sanitizedChatrooms) {
        dict[chatroom] = @(YES);
    }
    config.chatIgnoreInfo = dict;
    [config saveChatIgnoreNameListToLocalFile];
    WCPLLogInfo(@"[设置] 保存屏蔽群聊: count=%lu", (unsigned long)sanitizedChatrooms.count);
}

- (void)updateUserIgnoreInfoWithUsers:(NSArray *)users {
    NSArray<NSString *> *previousUsers = [self ignoredUserNames];
    NSArray<NSString *> *sanitizedUsers = [self wcpl_friendUserNamesFromArray:users scene:@"ignore_user_save"];
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *user in sanitizedUsers) {
        dict[user] = @(YES);
    }
    config.userIgnoreInfo = dict;
    [config saveUserIgnoreNameListToLocalFile];
    [WCPLFuncService syncIgnoredUsersToSystemNotifyStatus:sanitizedUsers previousIgnoredUsers:previousUsers];
    WCPLLogInfo(@"[设置] 保存屏蔽好友: count=%lu", (unsigned long)sanitizedUsers.count);
}

- (void)updateQuitMonitorWhitelistWithChatrooms:(NSArray *)chatrooms {
    NSArray<NSString *> *sanitizedChatrooms = [self wcpl_chatroomUserNamesFromArray:chatrooms scene:@"quit_monitor_whitelist_save"];
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *chatroom in sanitizedChatrooms) {
        dict[chatroom] = @(YES);
    }
    config.quitMonitorWhitelistInfo = dict;
    [config saveQuitMonitorWhitelistToLocalFile];
    WCPLLogInfo(@"[设置] 保存退群监控白名单: count=%lu", (unsigned long)sanitizedChatrooms.count);
}

@end
