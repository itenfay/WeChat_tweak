#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>

#import "WCPLConfigCenter.h"
#import "WCPLContactAdapter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLObjcSafeCall.h"
#import "WCPLPureHelpers.h"
#import "WCPLTypeGuard.h"
#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatUIHeaders.h"

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

static NSString *wcpl_ignoreUI_safeCellTitle(id cellManager) {
    id cellConfig = WCPLSafeValueForKey(cellManager, @"cellConfig");
    id leftConfig = WCPLSafeValueForKey(cellConfig, @"leftConfig");
    id title = WCPLSafeValueForKey(leftConfig, @"title");
    return WCPLTrimText(title);
}

static NSArray *wcpl_ignoreUI_sectionsFromTableInfo(id tableInfo) {
    if (!tableInfo) return nil;

    if ([tableInfo respondsToSelector:@selector(getAllSections)]) {
        @try {
            id sections = ((id (*)(id, SEL))objc_msgSend)(tableInfo, @selector(getAllSections));
            return WCPLArrayOrNil(sections);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    for (NSString *key in @[ @"sections", @"_sections", @"m_sections" ]) {
        id value = WCPLSafeValueForKey(tableInfo, key);
        NSArray *sections = WCPLArrayOrNil(value);
        if (sections.count > 0) {
            return sections;
        }
    }

    return nil;
}

static NSArray *wcpl_ignoreUI_cellsFromSection(id section) {
    if (!section) return nil;

    if ([section respondsToSelector:@selector(getAllCells)]) {
        @try {
            id cells = ((id (*)(id, SEL))objc_msgSend)(section, @selector(getAllCells));
            return WCPLArrayOrNil(cells);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    id value = WCPLSafeValueForKey(section, @"cells");
    return WCPLArrayOrNil(value);
}

static BOOL wcpl_ignoreUI_tableHasCellWithTitle(id tableInfo, NSString *targetTitle) {
    NSString *titleNeedle = WCPLTrimText(targetTitle);
    if (!tableInfo || titleNeedle.length == 0) return NO;

    NSArray *sections = wcpl_ignoreUI_sectionsFromTableInfo(tableInfo);
    if (sections.count == 0) {
        return NO;
    }

    for (id section in sections) {
        NSArray *cells = wcpl_ignoreUI_cellsFromSection(section);
        if (cells.count == 0) {
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
        if (sections.count > 0) {
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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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
    id chatroom = WCPLSafeObjectIvar(controller, "m_chatRoomContact");
    if (!chatroom) {
        chatroom = WCPLSafeValueForKey(controller, @"m_chatRoomContact");
    }

    NSString *usrName = WCPLContactAdapterSafeUserName(chatroom);
    if (usrName.length == 0 || !WCPLIsChatRoomName(usrName)) return;

    id tableInfo = WCPLSafeObjectIvar(controller, "m_tableViewInfo");
    if (!tableInfo) {
        tableInfo = WCPLSafeValueForKey(controller, @"m_tableViewInfo");
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

    id assist = WCPLSafeObjectIvar(controller, "m_oContactInfoAssist");
    if (!assist) {
        assist = WCPLSafeValueForKey(controller, @"m_oContactInfoAssist");
    }
    if (!assist) return nil;

    id tableInfo = WCPLSafeObjectIvar(assist, "m_tableViewInfo");
    if (!tableInfo) {
        tableInfo = WCPLSafeValueForKey(assist, @"m_tableViewInfo");
    }
    return tableInfo;
}

static void wcpl_ignoreUI_injectUserSwitchInContactInfoIfNeeded(id controller) {
    if (!controller) return;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;

    id contact = WCPLSafeObjectIvar(controller, "m_contact");
    if (!contact) {
        contact = WCPLSafeValueForKey(controller, @"m_contact");
    }

    NSString *usrName = WCPLContactAdapterSafeUserName(contact);
    if (usrName.length == 0) return;
    if (WCPLIsChatRoomName(usrName)) return;

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

    id contact = WCPLSafeObjectIvar(controller, "m_contact");
    if (!contact) {
        contact = WCPLSafeValueForKey(controller, @"m_contact");
    }

    NSString *usrName = WCPLContactAdapterSafeUserName(contact);
    if (usrName.length == 0) return;
    if (WCPLIsChatRoomName(usrName)) return;

    id tableInfo = WCPLSafeObjectIvar(controller, "m_tableViewInfo");
    if (!tableInfo) {
        tableInfo = WCPLSafeValueForKey(controller, @"m_tableViewInfo");
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
    id chatroom = WCPLSafeObjectIvar(self, "m_chatRoomContact");
    if (!chatroom) {
        chatroom = WCPLSafeValueForKey(self, @"m_chatRoomContact");
    }
    NSString *targetName = WCPLContactAdapterSafeUserName(chatroom);
    if (targetName.length == 0 || !WCPLIsChatRoomName(targetName)) {
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
    id contact = WCPLSafeObjectIvar(self, "m_contact");
    if (!contact) {
        contact = WCPLSafeValueForKey(self, @"m_contact");
    }
    NSString *targetName = WCPLContactAdapterSafeUserName(contact);
    if (targetName.length == 0 || WCPLIsChatRoomName(targetName)) {
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
    id contact = WCPLSafeObjectIvar(self, "m_contact");
    if (!contact) {
        contact = WCPLSafeValueForKey(self, @"m_contact");
    }

    NSString *targetName = WCPLContactAdapterSafeUserName(contact);
    if (targetName.length == 0 || WCPLIsChatRoomName(targetName)) {
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
