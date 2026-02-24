#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

#import "WCPLLogger.h"
#import "WCPLSettingViewController.h"

static BOOL wcpl_entry_didRegister = NO;

static id wcpl_entry_safeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }
    @try {
        return [obj valueForKey:key];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_entry_safeObjectIvar(id obj, const char *name) {
    if (!obj || !name) {
        return nil;
    }
    Class cls = object_getClass(obj);
    if (!cls) {
        return nil;
    }
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) {
        return nil;
    }
    const char *encoding = ivar_getTypeEncoding(ivar);
    if (!encoding || encoding[0] != '@') {
        return nil;
    }
    return object_getIvar(obj, ivar);
}

static NSString *wcpl_entry_trim(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_entry_safeCellTitle(id cellManager) {
    id cellConfig = wcpl_entry_safeValueForKey(cellManager, @"cellConfig");
    id leftConfig = wcpl_entry_safeValueForKey(cellConfig, @"leftConfig");
    id title = wcpl_entry_safeValueForKey(leftConfig, @"title");
    return wcpl_entry_trim(title);
}

static BOOL wcpl_entry_hasPluginCellInTableMgr(id tableViewMgr) {
    if (!tableViewMgr) {
        return NO;
    }

    NSArray *sections = nil;
    if ([tableViewMgr respondsToSelector:@selector(getAllSections)]) {
        @try {
            sections = ((id (*)(id, SEL))objc_msgSend)(tableViewMgr, @selector(getAllSections));
        } @catch (__unused NSException *exception) {
            sections = nil;
        }
    }
    if (![sections isKindOfClass:[NSArray class]]) {
        id value = wcpl_entry_safeValueForKey(tableViewMgr, @"sections");
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
            id value = wcpl_entry_safeValueForKey(section, @"cells");
            if ([value isKindOfClass:[NSArray class]]) {
                cells = (NSArray *)value;
            }
        }
        if (![cells isKindOfClass:[NSArray class]] || cells.count == 0) {
            continue;
        }
        for (id cell in cells) {
            NSString *title = wcpl_entry_safeCellTitle(cell);
            if ([title isEqualToString:@"微信辣椒"] ||
                [title isEqualToString:@"微信辣椒设置"]) {
                return YES;
            }
        }
    }
    return NO;
}

static void wcpl_entry_insertPluginCell(id tableViewMgr, id target, SEL action, NSString *sceneTag) {
    if (!tableViewMgr) {
        WCPLLogWarning(@"[入口] tableViewMgr 不可用: scene=%@", sceneTag ?: @"unknown");
        return;
    }
    if (wcpl_entry_hasPluginCellInTableMgr(tableViewMgr)) {
        return;
    }

    Class sectionCls = objc_getClass("WCTableViewSectionManager");
    Class normalCellCls = objc_getClass("WCTableViewNormalCellManager");
    if (!sectionCls || !normalCellCls) {
        WCPLLogWarning(@"[入口] 表格类不可用: scene=%@ section=%p cell=%p",
                       sceneTag ?: @"unknown",
                       sectionCls,
                       normalCellCls);
        return;
    }

    id section = nil;
    if ([sectionCls respondsToSelector:@selector(sectionInfoDefaut)]) {
        section = ((id (*)(id, SEL))objc_msgSend)(sectionCls, @selector(sectionInfoDefaut));
    }
    if (!section || ![section respondsToSelector:@selector(addCell:)]) {
        WCPLLogWarning(@"[入口] section 创建失败: scene=%@", sceneTag ?: @"unknown");
        return;
    }

    id cell = nil;
    if ([normalCellCls respondsToSelector:@selector(normalCellForSel:target:title:accessoryType:)]) {
        cell = ((id (*)(id, SEL, SEL, id, id, long long))objc_msgSend)(normalCellCls,
                                                                         @selector(normalCellForSel:target:title:accessoryType:),
                                                                         action,
                                                                         target,
                                                                         @"微信辣椒",
                                                                         1);
    }
    if (!cell) {
        WCPLLogWarning(@"[入口] cell 创建失败: scene=%@", sceneTag ?: @"unknown");
        return;
    }
    ((void (*)(id, SEL, id))objc_msgSend)(section, @selector(addCell:), cell);

    if (![tableViewMgr respondsToSelector:@selector(insertSection:At:)]) {
        WCPLLogWarning(@"[入口] insertSection 不可用: scene=%@", sceneTag ?: @"unknown");
        return;
    }

    @try {
        ((void (*)(id, SEL, id, long long))objc_msgSend)(tableViewMgr, @selector(insertSection:At:), section, 0);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[入口] 插入 section 失败: scene=%@ reason=%@",
                       sceneTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return;
    }

    if ([tableViewMgr respondsToSelector:@selector(getTableView)]) {
        id tableView = ((id (*)(id, SEL))objc_msgSend)(tableViewMgr, @selector(getTableView));
        if ([tableView respondsToSelector:@selector(reloadData)]) {
            ((void (*)(id, SEL))objc_msgSend)(tableView, @selector(reloadData));
        }
    }

    WCPLLogInfo(@"[入口] 已插入微信辣椒入口: scene=%@", sceneTag ?: @"unknown");
}

%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    BOOL result = %orig(application, launchOptions);

    Class pluginsMgrClass = objc_getClass("WCPluginsMgr");
    if (pluginsMgrClass && !wcpl_entry_didRegister) {
        @try {
            if ([pluginsMgrClass respondsToSelector:@selector(sharedInstance)]) {
                id mgr = ((id (*)(id, SEL))objc_msgSend)(pluginsMgrClass, @selector(sharedInstance));
                if (mgr && [mgr respondsToSelector:@selector(registerControllerWithTitle:version:controller:)]) {
                    ((void (*)(id, SEL, id, id, id))objc_msgSend)(mgr,
                                                                   @selector(registerControllerWithTitle:version:controller:),
                                                                   @"微信辣椒",
                                                                   @"1.8.36",
                                                                   @"WCPLSettingViewController");
                    wcpl_entry_didRegister = YES;
                    WCPLLogInfo(@"[入口] 已通过 WCPluginsMgr 注册插件");
                }
            }
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[入口] WCPluginsMgr 注册失败: %@", exception.reason ?: @"unknown");
        }
    }
    return result;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    %orig;
    id tableViewMgr = wcpl_entry_safeObjectIvar(self, "m_tableViewMgr");
    if (!tableViewMgr) {
        tableViewMgr = wcpl_entry_safeValueForKey(self, @"m_tableViewMgr");
    }
    wcpl_entry_insertPluginCell(tableViewMgr, self, @selector(wcpl_setting), @"NewSettingViewController");
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    if (![settingViewController isKindOfClass:[UIViewController class]]) {
        return;
    }
    id nav = wcpl_entry_safeValueForKey(self, @"navigationController");
    if (nav && [nav respondsToSelector:@selector(pushViewController:animated:)]) {
        ((void (*)(id, SEL, id, BOOL))objc_msgSend)(nav,
                                                     @selector(pushViewController:animated:),
                                                     settingViewController,
                                                     YES);
    }
}

%end

// 仅保留“插件管理(注册)”和“设置”两个入口：
// 1) WCPluginsMgr 注册入口（插件管理）
// 2) NewSettingViewController 里的设置入口
// MoreViewController 额外入口已移除，避免出现第三个入口。
