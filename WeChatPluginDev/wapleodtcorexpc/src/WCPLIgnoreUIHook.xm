#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>

#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"

/**
 消息屏蔽 UI 注入（群聊资料页 / 好友资料页 / 好友设置页）

 目标：
 - 在群聊资料页（ChatRoomInfoViewController）注入「屏蔽群消息」开关
 - 在好友资料页（ContactInfoViewController）注入「屏蔽此人消息」开关
 - 在好友设置页（ContactSettingViewController）注入「屏蔽此人消息」开关

 说明：
 - 只负责“入口开关”的展示与写入配置，真正过滤逻辑在 WCPLFuncService.shouldIgnoreMessageWrap / filtMessageFromMsgList。
 - iOS16/8.0.69 上这些页面的表格通常会多次 reload；因此这里用“扫描是否已存在 cellTitle”避免重复插入。
 */

static NSString *const kWCPLIgnoreUISectionHeader = @"消息屏蔽";
static NSString *const kWCPLIgnoreUIChatroomCellTitle = @"屏蔽群消息";
static NSString *const kWCPLIgnoreUIUserCellTitle = @"屏蔽此人消息";

static NSString *wcpl_ignoreUI_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static id wcpl_ignoreUI_safeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) return nil;
    @try {
        return [obj valueForKey:key];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_ignoreUI_safeObjectIvar(id obj, const char *name) {
    if (!obj || !name) return nil;
    Class cls = object_getClass(obj);
    if (!cls) return nil;
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) return nil;
    const char *encoding = ivar_getTypeEncoding(ivar);
    if (!encoding || encoding[0] != '@') return nil;
    return object_getIvar(obj, ivar);
}

static NSString *wcpl_ignoreUI_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_ignoreUI_trimString((NSString *)obj);
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_ignoreUI_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id value = wcpl_ignoreUI_safeValueForKey(obj, @"m_nsUsrName");
    if ([value isKindOfClass:[NSString class]]) {
        return wcpl_ignoreUI_trimString((NSString *)value);
    }

    return nil;
}

static NSString *wcpl_ignoreUI_safeCellTitle(id cellManager) {
    id cellConfig = wcpl_ignoreUI_safeValueForKey(cellManager, @"cellConfig");
    id leftConfig = wcpl_ignoreUI_safeValueForKey(cellConfig, @"leftConfig");
    id title = wcpl_ignoreUI_safeValueForKey(leftConfig, @"title");
    return wcpl_ignoreUI_trimString(title);
}

static NSArray *wcpl_ignoreUI_sectionsFromTableInfo(id tableInfo) {
    if (!tableInfo) return nil;

    if ([tableInfo respondsToSelector:@selector(getAllSections)]) {
        @try {
            id sections = ((id (*)(id, SEL))objc_msgSend)(tableInfo, @selector(getAllSections));
            if ([sections isKindOfClass:[NSArray class]]) {
                return (NSArray *)sections;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    for (NSString *key in @[ @"sections", @"_sections", @"m_sections" ]) {
        id value = wcpl_ignoreUI_safeValueForKey(tableInfo, key);
        if ([value isKindOfClass:[NSArray class]]) {
            return (NSArray *)value;
        }
    }

    return nil;
}

static NSArray *wcpl_ignoreUI_cellsFromSection(id section) {
    if (!section) return nil;

    if ([section respondsToSelector:@selector(getAllCells)]) {
        @try {
            id cells = ((id (*)(id, SEL))objc_msgSend)(section, @selector(getAllCells));
            if ([cells isKindOfClass:[NSArray class]]) {
                return (NSArray *)cells;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id value = wcpl_ignoreUI_safeValueForKey(section, @"cells");
    return [value isKindOfClass:[NSArray class]] ? (NSArray *)value : nil;
}

static BOOL wcpl_ignoreUI_tableHasCellWithTitle(id tableInfo, NSString *targetTitle) {
    NSString *titleNeedle = wcpl_ignoreUI_trimString(targetTitle);
    if (!tableInfo || titleNeedle.length == 0) return NO;

    NSArray *sections = wcpl_ignoreUI_sectionsFromTableInfo(tableInfo);
    if (![sections isKindOfClass:[NSArray class]] || sections.count == 0) {
        return NO;
    }

    for (id section in sections) {
        NSArray *cells = wcpl_ignoreUI_cellsFromSection(section);
        if (![cells isKindOfClass:[NSArray class]] || cells.count == 0) {
            continue;
        }
        for (id cell in cells) {
            NSString *title = wcpl_ignoreUI_safeCellTitle(cell);
            if (title.length > 0 && [title isEqualToString:titleNeedle]) {
                return YES;
            }
        }
    }

    return NO;
}

static void wcpl_ignoreUI_insertSection(id tableInfo, id section, NSUInteger preferIndex) {
    if (!tableInfo || !section) return;

    BOOL inserted = NO;
    if ([tableInfo respondsToSelector:@selector(insertSection:At:)]) {
        NSUInteger safeIndex = preferIndex;
        NSArray *sections = wcpl_ignoreUI_sectionsFromTableInfo(tableInfo);
        if ([sections isKindOfClass:[NSArray class]]) {
            safeIndex = MIN(preferIndex, sections.count);
        } else {
            // 无法获取 section 数量时，避免越界：统一插到 0。
            safeIndex = 0;
        }

        @try {
            ((void (*)(id, SEL, id, unsigned int))objc_msgSend)(tableInfo,
                                                                 @selector(insertSection:At:),
                                                                 section,
                                                                 (unsigned int)safeIndex);
            inserted = YES;
        } @catch (__unused NSException *exception) {
            inserted = NO;
        }
    }

    if (!inserted && [tableInfo respondsToSelector:@selector(addSection:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(tableInfo, @selector(addSection:), section);
        } @catch (__unused NSException *exception) {
        }
    }

    id tableView = nil;
    if ([tableInfo respondsToSelector:@selector(getTableView)]) {
        @try {
            tableView = ((id (*)(id, SEL))objc_msgSend)(tableInfo, @selector(getTableView));
        } @catch (__unused NSException *exception) {
            tableView = nil;
        }
    }

    if ([tableView respondsToSelector:@selector(reloadData)]) {
        ((void (*)(id, SEL))objc_msgSend)(tableView, @selector(reloadData));
    }
}

static void wcpl_ignoreUI_injectChatroomSwitchIfNeeded(id controller) {
    if (!controller) return;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    id chatroom = wcpl_ignoreUI_safeObjectIvar(controller, "m_chatRoomContact");
    if (!chatroom) {
        chatroom = wcpl_ignoreUI_safeValueForKey(controller, @"m_chatRoomContact");
    }

    NSString *usrName = wcpl_ignoreUI_safeUserNameFromObject(chatroom);
    if (usrName.length == 0) return;

    id tableInfo = wcpl_ignoreUI_safeObjectIvar(controller, "m_tableViewInfo");
    if (!tableInfo) {
        tableInfo = wcpl_ignoreUI_safeValueForKey(controller, @"m_tableViewInfo");
    }
    if (!tableInfo) return;

    if (wcpl_ignoreUI_tableHasCellWithTitle(tableInfo, kWCPLIgnoreUIChatroomCellTitle)) {
        return;
    }

    Class sectionCls = objc_getClass("WCTableViewSectionManager");
    Class cellCls = objc_getClass("WCTableViewNormalCellManager");
    if (!sectionCls || !cellCls) return;

    id section = nil;
    if ([sectionCls respondsToSelector:@selector(sectionInfoHeader:)]) {
        section = ((id (*)(id, SEL, id))objc_msgSend)(sectionCls, @selector(sectionInfoHeader:), kWCPLIgnoreUISectionHeader);
    }
    if (!section || ![section respondsToSelector:@selector(addCell:)]) return;

    BOOL isOn = config.chatIgnoreInfo[usrName].boolValue;
    id cell = nil;
    if ([cellCls respondsToSelector:@selector(switchCellForSel:target:title:on:)]) {
        cell = ((id (*)(id, SEL, SEL, id, id, BOOL))objc_msgSend)(cellCls,
                                                                   @selector(switchCellForSel:target:title:on:),
                                                                   @selector(wcpl_handleIgnoreChatRoom:),
                                                                   controller,
                                                                   kWCPLIgnoreUIChatroomCellTitle,
                                                                   isOn);
    }
    if (!cell) return;

    ((void (*)(id, SEL, id))objc_msgSend)(section, @selector(addCell:), cell);
    wcpl_ignoreUI_insertSection(tableInfo, section, 1);

    WCPLLogInfo(@"[屏蔽UI] 已注入群聊屏蔽开关: chatroom=%@", usrName);
}

static id wcpl_ignoreUI_contactInfoTableInfo(id controller) {
    if (!controller) return nil;

    id assist = wcpl_ignoreUI_safeObjectIvar(controller, "m_oContactInfoAssist");
    if (!assist) {
        assist = wcpl_ignoreUI_safeValueForKey(controller, @"m_oContactInfoAssist");
    }
    if (!assist) return nil;

    id tableInfo = wcpl_ignoreUI_safeObjectIvar(assist, "m_tableViewInfo");
    if (!tableInfo) {
        tableInfo = wcpl_ignoreUI_safeValueForKey(assist, @"m_tableViewInfo");
    }
    return tableInfo;
}

static void wcpl_ignoreUI_injectUserSwitchInContactInfoIfNeeded(id controller) {
    if (!controller) return;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;

    id contact = wcpl_ignoreUI_safeObjectIvar(controller, "m_contact");
    if (!contact) {
        contact = wcpl_ignoreUI_safeValueForKey(controller, @"m_contact");
    }

    NSString *usrName = wcpl_ignoreUI_safeUserNameFromObject(contact);
    if (usrName.length == 0) return;
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) return;

    id tableInfo = wcpl_ignoreUI_contactInfoTableInfo(controller);
    if (!tableInfo) return;

    if (wcpl_ignoreUI_tableHasCellWithTitle(tableInfo, kWCPLIgnoreUIUserCellTitle)) {
        return;
    }

    Class sectionCls = objc_getClass("WCTableViewSectionManager");
    Class cellCls = objc_getClass("WCTableViewNormalCellManager");
    if (!sectionCls || !cellCls) return;

    id section = nil;
    if ([sectionCls respondsToSelector:@selector(sectionInfoHeader:)]) {
        section = ((id (*)(id, SEL, id))objc_msgSend)(sectionCls, @selector(sectionInfoHeader:), kWCPLIgnoreUISectionHeader);
    }
    if (!section || ![section respondsToSelector:@selector(addCell:)]) return;

    BOOL isOn = config.userIgnoreInfo[usrName].boolValue;
    id cell = nil;
    if ([cellCls respondsToSelector:@selector(switchCellForSel:target:title:on:)]) {
        cell = ((id (*)(id, SEL, SEL, id, id, BOOL))objc_msgSend)(cellCls,
                                                                   @selector(switchCellForSel:target:title:on:),
                                                                   @selector(wcpl_handleIgnoreUser:),
                                                                   controller,
                                                                   kWCPLIgnoreUIUserCellTitle,
                                                                   isOn);
    }
    if (!cell) return;

    ((void (*)(id, SEL, id))objc_msgSend)(section, @selector(addCell:), cell);
    wcpl_ignoreUI_insertSection(tableInfo, section, 1);

    WCPLLogInfo(@"[屏蔽UI] 已注入好友资料页屏蔽开关: user=%@", usrName);
}

static void wcpl_ignoreUI_injectUserSwitchInContactSettingIfNeeded(id controller) {
    if (!controller) return;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;

    id contact = wcpl_ignoreUI_safeObjectIvar(controller, "m_contact");
    if (!contact) {
        contact = wcpl_ignoreUI_safeValueForKey(controller, @"m_contact");
    }

    NSString *usrName = wcpl_ignoreUI_safeUserNameFromObject(contact);
    if (usrName.length == 0) return;
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) return;

    id tableInfo = wcpl_ignoreUI_safeObjectIvar(controller, "m_tableViewInfo");
    if (!tableInfo) {
        tableInfo = wcpl_ignoreUI_safeValueForKey(controller, @"m_tableViewInfo");
    }
    if (!tableInfo) return;

    if (wcpl_ignoreUI_tableHasCellWithTitle(tableInfo, kWCPLIgnoreUIUserCellTitle)) {
        return;
    }

    Class sectionCls = objc_getClass("WCTableViewSectionManager");
    Class cellCls = objc_getClass("WCTableViewNormalCellManager");
    if (!sectionCls || !cellCls) return;

    id section = nil;
    if ([sectionCls respondsToSelector:@selector(sectionInfoHeader:)]) {
        section = ((id (*)(id, SEL, id))objc_msgSend)(sectionCls, @selector(sectionInfoHeader:), kWCPLIgnoreUISectionHeader);
    }
    if (!section || ![section respondsToSelector:@selector(addCell:)]) return;

    BOOL isOn = config.userIgnoreInfo[usrName].boolValue;
    id cell = nil;
    if ([cellCls respondsToSelector:@selector(switchCellForSel:target:title:on:)]) {
        cell = ((id (*)(id, SEL, SEL, id, id, BOOL))objc_msgSend)(cellCls,
                                                                   @selector(switchCellForSel:target:title:on:),
                                                                   @selector(wcpl_handleIgnoreUserInSetting:),
                                                                   controller,
                                                                   kWCPLIgnoreUIUserCellTitle,
                                                                   isOn);
    }
    if (!cell) return;

    ((void (*)(id, SEL, id))objc_msgSend)(section, @selector(addCell:), cell);
    wcpl_ignoreUI_insertSection(tableInfo, section, 0);

    WCPLLogInfo(@"[屏蔽UI] 已注入好友设置页屏蔽开关: user=%@", usrName);
}

%hook ChatRoomInfoViewController

- (void)reloadTableData {
    %orig;
    wcpl_ignoreUI_injectChatroomSwitchIfNeeded(self);
}

%new
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender {
    id chatroom = wcpl_ignoreUI_safeObjectIvar(self, "m_chatRoomContact");
    if (!chatroom) {
        chatroom = wcpl_ignoreUI_safeValueForKey(self, @"m_chatRoomContact");
    }
    NSString *targetName = wcpl_ignoreUI_safeUserNameFromObject(chatroom);
    if (targetName.length == 0) {
        sender.on = NO;
        return;
    }

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (sender.on) {
        config.chatIgnoreInfo[targetName] = @(YES);
    } else {
        [config.chatIgnoreInfo removeObjectForKey:targetName];
    }
    [config saveChatIgnoreNameListToLocalFile];

    WCPLLogInfo(@"[屏蔽UI] 群聊屏蔽更新: chatroom=%@ on=%d", targetName, sender.on ? 1 : 0);
}

%end

%hook ContactInfoViewController

- (void)reloadTableData {
    %orig;
    wcpl_ignoreUI_injectUserSwitchInContactInfoIfNeeded(self);
}

%new
- (void)wcpl_handleIgnoreUser:(UISwitch *)sender {
    id contact = wcpl_ignoreUI_safeObjectIvar(self, "m_contact");
    if (!contact) {
        contact = wcpl_ignoreUI_safeValueForKey(self, @"m_contact");
    }
    NSString *targetName = wcpl_ignoreUI_safeUserNameFromObject(contact);
    if (targetName.length == 0 || [targetName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (sender.on) {
        config.userIgnoreInfo[targetName] = @(YES);
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:targetName enabled:YES];
    } else {
        [config.userIgnoreInfo removeObjectForKey:targetName];
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:targetName enabled:NO];
    }
    [config saveUserIgnoreNameListToLocalFile];

    WCPLLogInfo(@"[屏蔽UI] 好友屏蔽更新(资料页): user=%@ on=%d", targetName, sender.on ? 1 : 0);
}

%end

%hook ContactSettingViewController

- (void)reloadTableView {
    %orig;
    wcpl_ignoreUI_injectUserSwitchInContactSettingIfNeeded(self);
}

%new
- (void)wcpl_handleIgnoreUserInSetting:(UISwitch *)sender {
    id contact = wcpl_ignoreUI_safeObjectIvar(self, "m_contact");
    if (!contact) {
        contact = wcpl_ignoreUI_safeValueForKey(self, @"m_contact");
    }

    NSString *targetName = wcpl_ignoreUI_safeUserNameFromObject(contact);
    if (targetName.length == 0 || [targetName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (sender.on) {
        config.userIgnoreInfo[targetName] = @(YES);
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:targetName enabled:YES];
    } else {
        [config.userIgnoreInfo removeObjectForKey:targetName];
        [WCPLFuncService syncIgnoreUserToSystemNotifyStatus:targetName enabled:NO];
    }
    [config saveUserIgnoreNameListToLocalFile];

    WCPLLogInfo(@"[屏蔽UI] 好友屏蔽更新(设置页): user=%@ on=%d", targetName, sender.on ? 1 : 0);
}

%end
