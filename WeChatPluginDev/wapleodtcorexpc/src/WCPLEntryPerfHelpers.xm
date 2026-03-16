// Internal include-only module.
// Shared perf / governance helper logic for WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLPerfClock.h"

static NSString *const kWCPLHookFeatureEntry = @"entry";

static uint64_t wcpl_entry_perf_uptimeMillis(void) {
    return WCPLUptimeMillis();
}

static unsigned long long wcpl_entry_perf_residentKB(void) {
    return WCPLResidentKB();
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
