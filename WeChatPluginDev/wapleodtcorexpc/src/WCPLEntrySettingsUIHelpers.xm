// Internal include-only module.
// Settings-entry UI helper logic for WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

static NSString *const kWCPLEntryPluginTitle = @"微信辣椒";
static NSString *const kWCPLEntryPluginLegacyTitle = @"微信辣椒设置";
static NSString *const kWCPLEntryPluginsHubTitle = @"插件";
static NSString *const kWCPLEntryPluginsManagerTitle = @"插件管理";
static NSString *const kWCPLEntryPluginVersion = @"1.8.36";
static NSString *const kWCPLEntryControllerClassName = @"WCPLSettingViewController";
static const long long kWCPLEntryInsertSectionIndex = 0;

static BOOL wcpl_entry_didRegister = NO;

static BOOL wcpl_entry_hasPluginCellInTableMgr(id tableViewMgr) {
    return wcpl_entry_tableMgrContainsCellWithTitles(tableViewMgr,
                                                     @[kWCPLEntryPluginTitle,
                                                       kWCPLEntryPluginLegacyTitle]);
}

static BOOL wcpl_entry_hasExternalPluginsPortal(id controller, id tableViewMgr) {
    id pluginCellInfo = wcpl_entry_safeObjectIvar(controller, "_pluginCellInfo");
    if (!pluginCellInfo) {
        pluginCellInfo = wcpl_entry_safeValueForKey(controller, @"pluginCellInfo");
    }
    if (pluginCellInfo) {
        return YES;
    }

    NSArray<NSString *> *externalPortalTitles = @[kWCPLEntryPluginsHubTitle,
                                                  kWCPLEntryPluginsManagerTitle];
    return wcpl_entry_tableMgrContainsCellWithTitles(tableViewMgr, externalPortalTitles);
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
                                                                         kWCPLEntryPluginTitle,
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
        ((void (*)(id, SEL, id, long long))objc_msgSend)(tableViewMgr,
                                                          @selector(insertSection:At:),
                                                          section,
                                                          kWCPLEntryInsertSectionIndex);
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

static void wcpl_entry_pushSettingController(id controller) {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    if (![settingViewController isKindOfClass:[UIViewController class]]) {
        return;
    }
    id nav = wcpl_entry_safeValueForKey(controller, @"navigationController");
    if (nav && [nav respondsToSelector:@selector(pushViewController:animated:)]) {
        ((void (*)(id, SEL, id, BOOL))objc_msgSend)(nav,
                                                     @selector(pushViewController:animated:),
                                                     settingViewController,
                                                     YES);
    }
}
