#import <UIKit/UIKit.h>
#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLSettingViewController.h"
#import <objc/runtime.h>
#import <objc/message.h>

static BOOL didRegisterWCPLPlugin = NO;
static const void * __attribute__((unused)) kWCPLChatRoomIgnoreSectionInjectedKey = &kWCPLChatRoomIgnoreSectionInjectedKey;

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

static id wcpl_safeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }
    @try {
        return [obj valueForKey:key];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_safeObjectIvar(id obj, const char *name) {
    if (!obj || !name) return nil;
    Class cls = object_getClass(obj);
    if (!cls) return nil;
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) return nil;
    const char *typeEncoding = ivar_getTypeEncoding(ivar);
    if (!typeEncoding || typeEncoding[0] != '@') return nil;
    return object_getIvar(obj, ivar);
}

static NSString *wcpl_safeCellTitle(id cellManager) {
    id cellConfig = wcpl_safeValueForKey(cellManager, @"cellConfig");
    id leftConfig = wcpl_safeValueForKey(cellConfig, @"leftConfig");
    id title = wcpl_safeValueForKey(leftConfig, @"title");
    return [title isKindOfClass:[NSString class]] ? wcpl_trimString((NSString *)title) : nil;
}

static BOOL wcpl_settingsAlreadyHasPluginEntry(id tableViewMgr) {
    if (!tableViewMgr) return NO;

    NSArray *sections = nil;
    if ([tableViewMgr respondsToSelector:@selector(getAllSections)]) {
        @try {
            sections = ((id (*)(id, SEL))objc_msgSend)(tableViewMgr, @selector(getAllSections));
        } @catch (__unused NSException *exception) {
            sections = nil;
        }
    }
    if (![sections isKindOfClass:[NSArray class]]) {
        id value = wcpl_safeValueForKey(tableViewMgr, @"sections");
        if ([value isKindOfClass:[NSArray class]]) {
            sections = (NSArray *)value;
        }
    }
    if (![sections isKindOfClass:[NSArray class]] || sections.count == 0) {
        return NO;
    }

    for (id section in sections) {
        NSArray *cells = nil;
        if ([section respondsToSelector:@selector(getAllCells)]) {
            @try {
                cells = ((id (*)(id, SEL))objc_msgSend)(section, @selector(getAllCells));
            } @catch (__unused NSException *exception) {
                cells = nil;
            }
        }
        if (![cells isKindOfClass:[NSArray class]]) {
            id value = wcpl_safeValueForKey(section, @"cells");
            if ([value isKindOfClass:[NSArray class]]) {
                cells = (NSArray *)value;
            }
        }
        if (![cells isKindOfClass:[NSArray class]] || cells.count == 0) {
            continue;
        }

        for (id cell in cells) {
            NSString *title = wcpl_safeCellTitle(cell);
            if ([title isEqualToString:@"微信辣椒"]) {
                return YES;
            }
        }
    }

    return NO;
}

%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    BOOL result = %orig(application, launchOptions);
    if (NSClassFromString(@"WCPluginsMgr") && !didRegisterWCPLPlugin) {
        [[objc_getClass("WCPluginsMgr") sharedInstance] registerControllerWithTitle:@"微信辣椒"
                                                                           version:@"1.8.36"
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

    id tableViewMgr = wcpl_safeObjectIvar(self, "m_tableViewMgr");
    if (!tableViewMgr) {
        tableViewMgr = wcpl_safeValueForKey(self, @"m_tableViewMgr");
    }
    if (!tableViewMgr ||
        ![tableViewMgr respondsToSelector:@selector(insertSection:At:)] ||
        ![tableViewMgr respondsToSelector:@selector(getTableView)]) {
        WCPLLogWarning(@"NewSettingViewController: m_tableViewMgr unavailable");
        return;
    }

    if (wcpl_settingsAlreadyHasPluginEntry(tableViewMgr)) {
        return;
    }

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoDefaut];
    if (![sectionMgr respondsToSelector:@selector(addCell:)]) {
        return;
    }

    WCTableViewNormalCellManager *settingCell =
    [%c(WCTableViewNormalCellManager) normalCellForSel:@selector(wcpl_setting)
                                                 target:self
                                                  title:@"微信辣椒"
                                          accessoryType:1];
    if (!settingCell) {
        return;
    }
    [sectionMgr addCell:settingCell];

    @try {
        [tableViewMgr insertSection:sectionMgr At:0];
    } @catch (__unused NSException *exception) {
        WCPLLogWarning(@"NewSettingViewController: insert section failed");
        return;
    }

    id tableView = [tableViewMgr getTableView];
    if ([tableView respondsToSelector:@selector(reloadData)]) {
        [tableView reloadData];
    }
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    if (![settingViewController isKindOfClass:[UIViewController class]]) {
        return;
    }
    [self.navigationController pushViewController:settingViewController animated:YES];
}

%end

%hook ChatRoomInfoViewController

- (void)reloadTableData {
    %orig;
}

%new
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    id chatRoomContact = wcpl_safeValueForKey((id)self, @"m_chatRoomContact");
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
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:usrName enabled:YES];
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:usrName enabled:NO];
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end

// Hook 好友设置页面（从好友资料页点击"设置"进入的页面）
%hook ContactSettingViewController

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;
}

%new
- (void)wcpl_handleIgnoreUserInSetting:(UISwitch *)sender {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    id contact = wcpl_safeObjectIvar(self, "m_contact");
    if (!contact) {
        contact = wcpl_safeValueForKey(self, @"m_contact");
    }
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
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:usrName enabled:YES];
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:usrName enabled:NO];
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end
