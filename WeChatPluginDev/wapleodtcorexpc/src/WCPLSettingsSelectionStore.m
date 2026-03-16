#import "WCPLSettingsSelectionStore.h"

#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"

@interface WCPLSettingsUserNameFilterSpec : NSObject
@property (nonatomic, copy, readonly) NSString *scene;
@property (nonatomic, assign, readonly) BOOL wantChatrooms;
- (instancetype)initWithScene:(NSString *)scene wantChatrooms:(BOOL)wantChatrooms;
@end

@implementation WCPLSettingsUserNameFilterSpec

- (instancetype)initWithScene:(NSString *)scene wantChatrooms:(BOOL)wantChatrooms {
    if (self = [super init]) {
        _scene = [scene copy] ?: @"";
        _wantChatrooms = wantChatrooms;
    }
    return self;
}

@end

@implementation WCPLSettingViewController (WCPLSettingsSelectionStore)

- (NSArray<NSString *> *)quitMonitorWhitelistedChatrooms {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.quitMonitorWhitelistInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && WCPLIsChatRoomName(key)) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)ignoredChatroomUserNames {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.chatIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && WCPLIsChatRoomName(key)) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)ignoredUserNames {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.userIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && !WCPLIsChatRoomName(key)) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)wcpl_sanitizedUserNamesFromArray:(NSArray *)names {
    return WCPLSanitizeIdentifierArray(names);
}

- (NSArray<NSString *> *)wcpl_filteredUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                    spec:(WCPLSettingsUserNameFilterSpec *)spec {
    NSArray<NSString *> *sanitized = [self wcpl_sanitizedUserNamesFromArray:userNames];
    if (sanitized.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *results = [NSMutableArray array];
    NSUInteger dropped = 0;
    for (NSString *userName in sanitized) {
        BOOL isChatroom = WCPLIsChatRoomName(userName);
        if (spec.wantChatrooms ? isChatroom : !isChatroom) {
            [results addObject:userName];
        } else {
            dropped += 1;
        }
    }

    if (dropped > 0) {
        NSString *droppedType = spec.wantChatrooms ? @"非群聊项" : @"群聊项";
        WCPLLogWarning(@"[设置] 过滤%@: scene=%@ dropped=%lu kept=%lu",
                       droppedType,
                       spec.scene,
                       (unsigned long)dropped,
                       (unsigned long)results.count);
    }
    return results;
}

- (NSArray<NSString *> *)wcpl_chatroomUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                   scene:(NSString *)scene {
    WCPLSettingsUserNameFilterSpec *spec = [[WCPLSettingsUserNameFilterSpec alloc] initWithScene:scene
                                                                                   wantChatrooms:YES];
    return [self wcpl_filteredUserNamesFromArray:userNames spec:spec];
}

- (NSArray<NSString *> *)wcpl_friendUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                 scene:(NSString *)scene {
    WCPLSettingsUserNameFilterSpec *spec = [[WCPLSettingsUserNameFilterSpec alloc] initWithScene:scene
                                                                                   wantChatrooms:NO];
    return [self wcpl_filteredUserNamesFromArray:userNames spec:spec];
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
