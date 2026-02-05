#import <UIKit/UIKit.h>
#import "WCPLSettingViewController.h"
#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
#import "CContact.h"
#import <objc/runtime.h>
#import <objc/message.h>

// ==================== 插件注册 ====================
static BOOL didRegisterWCPLPlugin = NO;

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    BOOL result = %orig(application, launchOptions);

    // 通过 WCPluginsMgr 注册插件入口
    if (NSClassFromString(@"WCPluginsMgr") && !didRegisterWCPLPlugin) {
        [[objc_getClass("WCPluginsMgr") sharedInstance] registerControllerWithTitle:@"微信辣椒"
                                                                           version:@"1.8.16"
                                                                        controller:@"WCPLSettingViewController"];
        didRegisterWCPLPlugin = YES;
        WCPLLogInfo(@"Plugin registered via WCPluginsMgr");
    }

    return result;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    %orig;

    WCTableViewManager *tableViewMgr = MSHookIvar<id>(self, "m_tableViewMgr");

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoDefaut];

    WCTableViewNormalCellManager *settingCell = [%c(WCTableViewNormalCellManager) normalCellForSel:@selector(wcpl_setting) target:self title:@"微信辣椒" accessoryType:1];
    [sectionMgr addCell:settingCell];

    [tableViewMgr insertSection:sectionMgr At:0];

    MMTableView *tableView = [tableViewMgr getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    [self.navigationController pushViewController:settingViewController animated:YES];
}

%end

%hook ChatRoomInfoViewController

- (void)reloadTableData {
    %orig;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        return;
    }

    // 从当前控制器获取群聊联系人
    id chatRoomContact = self.m_chatRoomContact;
    NSString *usrName = wcpl_safeUserNameFromObject(chatRoomContact);
    if (usrName.length == 0) {
        return;
    }

    // 获取 tableViewInfo
    MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(addSection:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        return;
    }

    // 创建新的 section 并添加屏蔽开关，插入到靠前的位置（第1个section之后）
    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreChatRoom:) target:self title:@"屏蔽群消息" on:config.chatIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第1个位置（在群头像section之后），使选项更显眼
    if ([tableViewInfo respondsToSelector:@selector(insertSection:At:)]) {
        [tableViewInfo insertSection:sectionMgr At:1];
    } else {
        [tableViewInfo addSection:sectionMgr];
    }

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    id chatRoomContact = self.m_chatRoomContact;
    NSString *usrName = wcpl_safeUserNameFromObject(chatRoomContact);
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.chatIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.chatIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.chatIgnoreInfo = igDict;
    }
    [config saveChatIgnoreNameListToLocalFile];
}

%end

%hook ContactInfoViewController

- (void)reloadTableData {
    %orig;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        return;
    }

    id contact = self.m_contact;
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length == 0) {
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        return;
    }

    // ContactInfoViewController 使用 m_oContactInfoAssist 管理表格
    // m_oContactInfoAssist (WeixinContactInfoAssist) 中包含 m_tableViewInfo
    id tableViewInfo = nil;
    id assist = nil;

    // 方法1: 尝试使用 MSHookIvar 获取 m_oContactInfoAssist
    @try {
        assist = MSHookIvar<id>(self, "m_oContactInfoAssist");
    } @catch (__unused NSException *exception) {
        assist = nil;
    }

    // 方法2: 如果方法1失败，使用 class_getInstanceVariable
    if (!assist) {
        Ivar assistIvar = class_getInstanceVariable([self class], "m_oContactInfoAssist");
        if (assistIvar) {
            assist = object_getIvar(self, assistIvar);
        }
    }

    if (!assist) {
        WCPLLogWarning(@"ContactInfoViewController: Failed to get m_oContactInfoAssist");
        return;
    }

    // 从 assist 获取 m_tableViewInfo
    @try {
        tableViewInfo = MSHookIvar<id>(assist, "m_tableViewInfo");
    } @catch (__unused NSException *exception) {
        tableViewInfo = nil;
    }

    // 备用方法：使用 Ivar
    if (!tableViewInfo) {
        Ivar tableViewInfoIvar = class_getInstanceVariable([assist class], "m_tableViewInfo");
        if (tableViewInfoIvar) {
            tableViewInfo = object_getIvar(assist, tableViewInfoIvar);
        }
    }

    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(addSection:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        WCPLLogWarning(@"ContactInfoViewController: Failed to get m_tableViewInfo or invalid tableViewInfo");
        return;
    }

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreUser:) target:self title:@"屏蔽此人消息" on:config.userIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第1个位置，使选项更显眼
    if ([tableViewInfo respondsToSelector:@selector(insertSection:At:)]) {
        [tableViewInfo insertSection:sectionMgr At:1];
    } else {
        [tableViewInfo addSection:sectionMgr];
    }

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreUser:(UISwitch *)sender {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    id contact = self.m_contact;
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.userIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end

// Hook 好友设置页面（从好友资料页点击"设置"进入的页面）
%hook ContactSettingViewController

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        return;
    }

    // 获取联系人
    id contact = MSHookIvar<id>(self, "m_contact");
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length == 0) {
        return;
    }
    // 排除群聊
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        return;
    }

    // 检查是否已经添加过（避免重复添加）
    static const void *kWCPLIgnoreSectionAddedKey = &kWCPLIgnoreSectionAddedKey;
    if (objc_getAssociatedObject(self, kWCPLIgnoreSectionAddedKey)) {
        return;
    }

    // 获取 m_tableViewInfo
    MMTableViewInfo *tableViewInfo = MSHookIvar<MMTableViewInfo *>(self, "m_tableViewInfo");
    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(insertSection:At:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        WCPLLogWarning(@"ContactSettingViewController: Failed to get m_tableViewInfo");
        return;
    }

    // 创建消息屏蔽 section
    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreUserInSetting:) target:self title:@"屏蔽此人消息" on:config.userIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第0个位置（最顶部，在编辑备注之前）
    [tableViewInfo insertSection:sectionMgr At:0];

    // 标记已添加
    objc_setAssociatedObject(self, kWCPLIgnoreSectionAddedKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 刷新表格
    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreUserInSetting:(UISwitch *)sender {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    id contact = MSHookIvar<id>(self, "m_contact");
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.userIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end
