// Internal include-only module.
// Settings controller helper logic for WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

static void wcpl_entry_afterSettingsReload(id controller,
                                           uint64_t startMs,
                                           uint64_t afterOrigMs) {
    id tableViewMgr = wcpl_entry_safeObjectIvar(controller, "m_tableViewMgr");
    if (!tableViewMgr) {
        tableViewMgr = wcpl_entry_safeValueForKey(controller, @"m_tableViewMgr");
    }
    uint64_t injectStartMs = wcpl_entry_perf_uptimeMillis();
    if (wcpl_entry_hasExternalPluginsPortal(controller, tableViewMgr)) {
        WCPLLogInfo(@"[入口] 检测到设置页已有插件入口，跳过微信辣椒入口注入");
    } else {
        wcpl_entry_insertPluginCell(tableViewMgr,
                                    controller,
                                    @selector(wcpl_setting),
                                    @"NewSettingViewController");
    }
    uint64_t endMs = wcpl_entry_perf_uptimeMillis();
    uint64_t totalMs = endMs >= startMs ? (endMs - startMs) : 0;
    uint64_t origMs = afterOrigMs >= startMs ? (afterOrigMs - startMs) : 0;
    uint64_t injectMs = endMs >= injectStartMs ? (endMs - injectStartMs) : 0;
    WCPLLogDebug(@"[PERF][ENTRY] selector=reloadTableData total_ms=%llu orig_ms=%llu inject_ms=%llu has_table_mgr=%d rss_kb=%llu",
                 (unsigned long long)totalMs,
                 (unsigned long long)origMs,
                 (unsigned long long)injectMs,
                 tableViewMgr ? 1 : 0,
                 wcpl_entry_perf_residentKB());
}

static void wcpl_entry_openSettingsFromController(id controller) {
    wcpl_entry_pushSettingController(controller);
}
