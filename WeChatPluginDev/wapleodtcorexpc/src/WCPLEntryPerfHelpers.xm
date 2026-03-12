// Internal include-only module.
// Shared perf / governance helper logic for WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

static NSString *const kWCPLHookFeatureEntry = @"entry";

static uint64_t wcpl_entry_perf_uptimeMillis(void) {
    NSTimeInterval uptime = [[NSProcessInfo processInfo] systemUptime];
    if (uptime < 0) {
        return 0;
    }
    return (uint64_t)(uptime * 1000.0);
}

static unsigned long long wcpl_entry_perf_residentKB(void) {
    mach_task_basic_info_data_t info;
    mach_msg_type_number_t count = MACH_TASK_BASIC_INFO_COUNT;
    kern_return_t kr = task_info(mach_task_self_,
                                 MACH_TASK_BASIC_INFO,
                                 (task_info_t)&info,
                                 &count);
    if (kr != KERN_SUCCESS) {
        return 0;
    }
    return (unsigned long long)(info.resident_size / 1024ull);
}

static void wcpl_entryHookLog(NSString *className,
                              NSString *selectorName,
                              NSString *stage,
                              NSString *decision,
                              WCPLHookOrigPolicy policy,
                              NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureEntry,
                           className,
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}
