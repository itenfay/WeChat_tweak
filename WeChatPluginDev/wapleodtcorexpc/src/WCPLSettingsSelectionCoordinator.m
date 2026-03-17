#import "WCPLSettingsSelectionCoordinator.h"
#import "WCPLSettingsSelectionStore.h"

#import "WCPLConfigCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLUnifiedMultiSelectViewController.h"

@interface WCPLSettingViewController (WCPLSettingsSelectionCoordinatorPrivate)

- (void)reloadTableData;
- (void)wcpl_presentUnifiedSelectorWithType:(WCPLUnifiedMultiSelectType)selectType
                                      title:(NSString *)title
                                   selected:(NSArray<NSString *> *)selected
                                     onDone:(void (^)(NSArray<NSString *> *userNames))onDone;

@end

@implementation WCPLSettingViewController (WCPLSettingsSelectionCoordinator)

- (void)showBlackList {
    WCPLCrashBreadcrumb(@"打开群聊白名单");
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:config.allowedGroupList scene:@"allow_list_open"];
    id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLBlackList"];
    NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
    WCPLLogInfo(@"[设置] 打开白名单: inMemory=%lu storedType=%@ storedCount=%lu",
                (unsigned long)selected.count,
                stored ? NSStringFromClass([stored class]) : @"(nil)",
                (unsigned long)storedCount);
    WCPLLogInfo(@"[设置] 白名单使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"白名单"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        NSArray<NSString *> *chatrooms = [strongSelf wcpl_chatroomUserNamesFromArray:userNames
                                                                               scene:@"allow_list_save_unified"];
        [WCPLRedEnvelopConfig sharedConfig].allowedGroupList = chatrooms;
        WCPLLogInfo(@"[设置] 保存红包白名单: count=%lu", (unsigned long)chatrooms.count);
    }];
}

- (void)showGroupDenyList {
    WCPLCrashBreadcrumb(@"打开群聊黑名单");
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:config.blockedGroupList scene:@"deny_list_open"];
    id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLGroupDenyList"];
    NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
    WCPLLogInfo(@"[设置] 打开黑名单: inMemory=%lu storedType=%@ storedCount=%lu",
                (unsigned long)selected.count,
                stored ? NSStringFromClass([stored class]) : @"(nil)",
                (unsigned long)storedCount);
    WCPLLogInfo(@"[设置] 黑名单使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"黑名单"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        NSArray<NSString *> *chatrooms = [strongSelf wcpl_chatroomUserNamesFromArray:userNames
                                                                               scene:@"deny_list_save_unified"];
        [WCPLRedEnvelopConfig sharedConfig].blockedGroupList = chatrooms;
        WCPLLogInfo(@"[设置] 保存红包黑名单: count=%lu", (unsigned long)chatrooms.count);
    }];
}

- (void)showIgnoredChatroomList {
    WCPLCrashBreadcrumb(@"打开已屏蔽群聊列表");
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:[self ignoredChatroomUserNames]
                                                        scene:@"ignore_chatroom_open"];
    WCPLLogInfo(@"[设置] 屏蔽群聊使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"屏蔽群聊"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf updateChatIgnoreInfoWithChatrooms:userNames];
    }];
}

- (void)showIgnoredUserList {
    WCPLCrashBreadcrumb(@"打开已屏蔽好友列表");
    NSArray *selected = [self wcpl_friendUserNamesFromArray:[self ignoredUserNames] scene:@"ignore_user_open"];
    WCPLLogInfo(@"[设置] 屏蔽好友使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeContact
                                        title:@"屏蔽用户"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf updateUserIgnoreInfoWithUsers:userNames];
    }];
}

- (void)showQuitMonitorWhitelistSelector {
    WCPLCrashBreadcrumb(@"打开退群监控白名单");
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:[self quitMonitorWhitelistedChatrooms]
                                                        scene:@"quit_monitor_whitelist_open"];
    WCPLLogInfo(@"[设置] 退群监控白名单使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"退群监控白名单"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf updateQuitMonitorWhitelistWithChatrooms:userNames];
    }];
}

- (void)resetAllIgnoredUsers {
    NSArray<NSString *> *users = [self ignoredUserNames];
    NSArray<NSString *> *chatrooms = [self ignoredChatroomUserNames];
    if (users.count == 0 && chatrooms.count == 0) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"无需重置"
                                                                       message:@"当前没有已屏蔽对象"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定"
                                                  style:UIAlertActionStyleDefault
                                                handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    NSString *message = [NSString stringWithFormat:@"将清空已屏蔽用户(%lu)和群聊(%lu)",
                         (unsigned long)users.count,
                         (unsigned long)chatrooms.count];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"重置消息屏蔽"
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"重置"
                                              style:UIAlertActionStyleDestructive
                                            handler:^(__unused UIAlertAction *action) {
        WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
        config.userIgnoreInfo = [NSMutableDictionary dictionary];
        config.chatIgnoreInfo = [NSMutableDictionary dictionary];
        [config saveUserIgnoreNameListToLocalFile];
        [config saveChatIgnoreNameListToLocalFile];
        [WCPLFuncService syncIgnoredUsersToSystemNotifyStatus:@[] previousIgnoredUsers:users];
        WCPLLogInfo(@"[设置] 消息屏蔽已重置: users=%lu chatrooms=%lu",
                    (unsigned long)users.count,
                    (unsigned long)chatrooms.count);
        [self reloadTableData];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

@end
