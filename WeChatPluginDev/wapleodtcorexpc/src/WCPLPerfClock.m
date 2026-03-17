//
// WCPLPerfClock.m
//

#import "WCPLPerfClock.h"

#import <mach/mach.h>

uint64_t WCPLUptimeMillis(void) {
    NSTimeInterval uptime = [[NSProcessInfo processInfo] systemUptime];
    if (uptime < 0) {
        return 0;
    }
    return (uint64_t)(uptime * 1000.0);
}

unsigned long long WCPLResidentKB(void) {
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

