#import "WCPLCrashReporter.h"
#import "WCPLRealtimeLogUploader.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <dispatch/dispatch.h>
#import <mach/mach.h>

/*
 入口主链 Stage-1（启动层）:
 1) 启动探针写盘
 2) CrashReporter 安装
 3) RealtimeLogUploader 启动
 设置入口注入与插件注册统一放在 WCPLPluginEntryHook.xm（Stage-2）。
*/

static void wcpl_appendProbeRecord(NSString *path, NSString *record) {
    if (![path isKindOfClass:[NSString class]] || path.length == 0) {
        return;
    }
    if (![record isKindOfClass:[NSString class]] || record.length == 0) {
        return;
    }

    NSFileHandle *fileHandle = [NSFileHandle fileHandleForWritingAtPath:path];
    if (!fileHandle) {
        [record writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:nil];
        return;
    }
    @try {
        [fileHandle seekToEndOfFile];
        NSData *data = [record dataUsingEncoding:NSUTF8StringEncoding];
        if (data.length > 0) {
            [fileHandle writeData:data];
        }
        [fileHandle closeFile];
    } @catch (__unused NSException *exception) {
    }
}

static void wcpl_appendBootProbe(NSString *line) {
    @autoreleasepool {
        NSString *globalProbePath = @"/var/mobile/Documents/wcpl_boot_probe_global.log";
        NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        NSString *appProbePath = nil;
        if ([documentsPath isKindOfClass:[NSString class]] && documentsPath.length > 0) {
            appProbePath = [documentsPath stringByAppendingPathComponent:@"wcpl_boot_probe.log"];
        }

        NSString *timestamp = [[NSDate date] description];
        NSString *record = [NSString stringWithFormat:@"[%@] %@\n", timestamp, line ?: @"(nil)"];

        if (appProbePath.length > 0) {
            wcpl_appendProbeRecord(appProbePath, record);
        }

        if (![appProbePath isEqualToString:globalProbePath]) {
            wcpl_appendProbeRecord(globalProbePath, record);
        }
    }
}

static dispatch_source_t g_wcpl_bootPerfTimer = nil;

static uint64_t wcpl_perf_uptimeMillis(void) {
    NSTimeInterval uptime = [[NSProcessInfo processInfo] systemUptime];
    if (uptime < 0) {
        return 0;
    }
    return (uint64_t)(uptime * 1000.0);
}

static unsigned long long wcpl_perf_residentKB(void) {
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

static void wcpl_perf_logBootPhase(NSString *phase, uint64_t bootStartMs) {
    uint64_t nowMs = wcpl_perf_uptimeMillis();
    uint64_t elapsedMs = nowMs >= bootStartMs ? (nowMs - bootStartMs) : 0;
    WCPLLogInfo(@"[PERF][BOOT] phase=%@ elapsed_ms=%llu uptime_ms=%llu rss_kb=%llu",
                phase ?: @"unknown",
                (unsigned long long)elapsedMs,
                (unsigned long long)nowMs,
                wcpl_perf_residentKB());
}

static void wcpl_perf_startBootMemorySampling(uint64_t bootStartMs) {
    if ([WCPLLogger currentLevel] > WCPLLogLevelInfo) {
        return;
    }
    if (g_wcpl_bootPerfTimer) {
        return;
    }

    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0);
    dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, queue);
    if (!timer) {
        return;
    }
    g_wcpl_bootPerfTimer = timer;

    __block NSUInteger sampleIndex = 0;
    dispatch_source_set_timer(timer,
                              dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)),
                              (uint64_t)(5 * NSEC_PER_SEC),
                              (uint64_t)(200 * NSEC_PER_MSEC));
    dispatch_source_set_event_handler(timer, ^{
        sampleIndex += 1;
        uint64_t nowMs = wcpl_perf_uptimeMillis();
        uint64_t elapsedMs = nowMs >= bootStartMs ? (nowMs - bootStartMs) : 0;
        WCPLLogInfo(@"[PERF][MEM] stage=boot sample=%lu elapsed_ms=%llu rss_kb=%llu",
                    (unsigned long)sampleIndex,
                    (unsigned long long)elapsedMs,
                    wcpl_perf_residentKB());
        if (sampleIndex >= 12) {
            dispatch_source_cancel(timer);
        }
    });
    dispatch_source_set_cancel_handler(timer, ^{
        g_wcpl_bootPerfTimer = nil;
    });
    dispatch_resume(timer);
}

static void wcpl_logRuntimeDiagnostics(void) {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL hasVarJB = [fileManager fileExistsAtPath:@"/var/jb"];
    BOOL hasElleKit = [fileManager fileExistsAtPath:@"/var/jb/usr/lib/libellekit.dylib"] || [fileManager fileExistsAtPath:@"/usr/lib/libellekit.dylib"];
    BOOL hasSubstrate = [fileManager fileExistsAtPath:@"/Library/MobileSubstrate/MobileSubstrate.dylib"] || [fileManager fileExistsAtPath:@"/var/jb/Library/MobileSubstrate/MobileSubstrate.dylib"];

    Class logicClass = objc_getClass("BaseMsgContentLogicController");
    BOOL canSendEmoticon = logicClass && [logicClass instancesRespondToSelector:@selector(SendEmoticonMessage:)];
    BOOL canSendImage = logicClass && [logicClass instancesRespondToSelector:@selector(SendImageMessage:withData:ImageInfo:)];

    Class messageMgrClass = objc_getClass("CMessageMgr");
    BOOL canAddEmoticon = messageMgrClass && [messageMgrClass instancesRespondToSelector:@selector(AddEmoticonMsg:MsgWrap:)];
    BOOL canAddMsg = messageMgrClass && [messageMgrClass instancesRespondToSelector:@selector(AddMsg:MsgWrap:)];

    NSString *summary = [NSString stringWithFormat:@"[WCPL] Runtime diag: var_jb=%d ellekit=%d substrate=%d logicClass=%d sendEmoticon=%d sendImage=%d addEmoticon=%d addMsg=%d",
                         hasVarJB ? 1 : 0,
                         hasElleKit ? 1 : 0,
                         hasSubstrate ? 1 : 0,
                         logicClass ? 1 : 0,
                         canSendEmoticon ? 1 : 0,
                         canSendImage ? 1 : 0,
                         canAddEmoticon ? 1 : 0,
                         canAddMsg ? 1 : 0];

    NSLog(@"%@", summary);
    WCPLLogInfo(@"%@", summary);
}

%ctor {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        @autoreleasepool {
            uint64_t bootStartMs = wcpl_perf_uptimeMillis();
            wcpl_appendBootProbe(@"ctor-enter");
            wcpl_perf_logBootPhase(@"ctor_enter", bootStartMs);
            wcpl_perf_startBootMemorySampling(bootStartMs);
            @try {
                wcpl_logRuntimeDiagnostics();
                wcpl_appendBootProbe(@"runtime-diag-ok");
                wcpl_perf_logBootPhase(@"runtime_diag_done", bootStartMs);
                [[WCPLCrashReporter sharedReporter] installIfNeeded];
                wcpl_appendBootProbe(@"crash-reporter-ok");
                wcpl_perf_logBootPhase(@"crash_reporter_done", bootStartMs);
                [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
                wcpl_appendBootProbe(@"realtime-uploader-ok");
                wcpl_perf_logBootPhase(@"realtime_uploader_done", bootStartMs);
                wcpl_perf_logBootPhase(@"ctor_done", bootStartMs);
            } @catch (NSException *exception) {
                wcpl_appendBootProbe([NSString stringWithFormat:@"ctor-exception: %@", exception.reason ?: @"unknown"]);
                wcpl_perf_logBootPhase(@"ctor_exception", bootStartMs);
            }
        }
    });
}
