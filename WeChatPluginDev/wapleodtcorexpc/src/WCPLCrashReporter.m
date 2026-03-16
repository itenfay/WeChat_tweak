//
// WCPLCrashReporter.m
//
// 崩溃日志收集与自动上传
//

#import "WCPLCrashReporter.h"
#import "WCPLAppContextInfo.h"
#import "WCPLAlertTextHelpers.h"
#import "WCPLFileHelpers.h"
#import "WCPLUIKitHelpers.h"
#import "WCPLLogger.h"
#import "WCPLLogUploader.h"

#import <UIKit/UIKit.h>
#import <signal.h>
#import <fcntl.h>
#import <unistd.h>
#import <sys/stat.h>
#import <sys/ucontext.h>
#import <mach/arm/thread_status.h>
#import <stdint.h>
#import <limits.h>
#import <string.h>

static NSString *const kWCPLCrashReporterEnabledKey = @"kWCPLCrashReporterEnabled";
static NSString *const kWCPLCrashAutoUploadEnabledKey = @"kWCPLCrashAutoUploadEnabled";
static NSString *const kWCPLCrashLogFileName = @"wcpl_crash.log";
static NSString *const kWCPLCrashPendingMarkerName = @"wcpl_crash_pending.flag";

enum {
    kWCPLCrashBreadcrumbRingSize = 24,
    kWCPLCrashBreadcrumbMaxLen = 240,
    kWCPLCrashDiagnosticRingSize = 48,
    kWCPLCrashDiagnosticMaxLen = 320,
    kWCPLCrashSignalDebugLogTailMaxBytes = 24 * 1024,
};

static volatile sig_atomic_t wcpl_crash_enabled = 1;
static volatile sig_atomic_t wcpl_is_handling_crash = 0;
static char wcpl_crash_log_path[PATH_MAX] = {0};
static char wcpl_crash_marker_path[PATH_MAX] = {0};
static char wcpl_last_action[256] = {0};
static char wcpl_debug_log_path[PATH_MAX] = {0};
static volatile uint32_t wcpl_breadcrumb_seq = 0;
static char wcpl_breadcrumb_ring[kWCPLCrashBreadcrumbRingSize][kWCPLCrashBreadcrumbMaxLen] = {{0}};
static volatile uint32_t wcpl_diagnostic_seq = 0;
static char wcpl_diagnostic_ring[kWCPLCrashDiagnosticRingSize][kWCPLCrashDiagnosticMaxLen] = {{0}};

static NSString *WCPLNormalizeCrashText(NSString *text) {
    return WCPLSanitizeInlineText(text, 0) ?: @"";
}

static void WCPLStoreRingEntry(volatile uint32_t *seqStorage,
                               uint32_t ringSize,
                               size_t slotLen,
                               char *ringStorage,
                               const char *text) {
    if (!seqStorage || !ringStorage || !text || text[0] == '\0' || ringSize == 0 || slotLen == 0) {
        return;
    }

    uint32_t seq = __atomic_fetch_add(seqStorage, 1, __ATOMIC_RELAXED);
    size_t offset = ((size_t)(seq % ringSize)) * slotLen;
    char *slot = ringStorage + offset;
    strncpy(slot, text, slotLen - 1);
    slot[slotLen - 1] = '\0';
}

static void WCPLWriteCString(int fd, const char *text) {
    if (fd < 0 || !text) {
        return;
    }
    size_t len = 0;
    while (text[len] != '\0') {
        len += 1;
    }

    const char *p = text;
    size_t remaining = len;
    while (remaining > 0) {
        ssize_t written = write(fd, p, remaining);
        if (written <= 0) {
            return;
        }
        p += written;
        remaining -= (size_t)written;
    }
}

static void WCPLWriteBytes(int fd, const void *bytes, size_t length) {
    if (fd < 0 || !bytes || length == 0) {
        return;
    }
    const char *p = (const char *)bytes;
    size_t remaining = length;
    while (remaining > 0) {
        ssize_t written = write(fd, p, remaining);
        if (written <= 0) {
            return;
        }
        p += written;
        remaining -= (size_t)written;
    }
}

static void WCPLWriteInt(int fd, int value) {
    char buf[32] = {0};
    size_t idx = 0;
    long long v = (long long)value;

    if (v == 0) {
        buf[idx++] = '0';
        write(fd, buf, idx);
        return;
    }

    if (v < 0) {
        buf[idx++] = '-';
        v = -v;
    }

    char digits[24] = {0};
    size_t digitCount = 0;
    while (v > 0 && digitCount < sizeof(digits)) {
        digits[digitCount++] = (char)('0' + (v % 10));
        v /= 10;
    }
    for (size_t i = 0; i < digitCount; i++) {
        buf[idx++] = digits[digitCount - 1 - i];
    }
    write(fd, buf, idx);
}

static void WCPLWriteUInt64Hex(int fd, uint64_t value) {
    char buf[32] = {0};
    static const char hexChars[] = "0123456789abcdef";
    size_t idx = 0;
    buf[idx++] = '0';
    buf[idx++] = 'x';

    BOOL started = NO;
    for (int shift = 60; shift >= 0; shift -= 4) {
        uint8_t nibble = (uint8_t)((value >> shift) & 0xf);
        if (!started && nibble == 0 && shift > 0) {
            continue;
        }
        started = YES;
        buf[idx++] = hexChars[nibble];
    }

    if (!started) {
        buf[idx++] = '0';
    }
    write(fd, buf, idx);
}

static const char *WCPLSignalName(int sig) {
    switch (sig) {
        case SIGABRT: return "SIGABRT";
        case SIGILL: return "SIGILL";
        case SIGSEGV: return "SIGSEGV";
        case SIGFPE: return "SIGFPE";
        case SIGBUS: return "SIGBUS";
        case SIGPIPE: return "SIGPIPE";
        case SIGTRAP: return "SIGTRAP";
        default: return "UNKNOWN";
    }
}

static void WCPLWriteSignalContext(int fd, siginfo_t *info, void *uap) {
    if (fd < 0) {
        return;
    }

    if (info) {
        WCPLWriteCString(fd, "SignalCode: ");
        WCPLWriteInt(fd, info->si_code);
        WCPLWriteCString(fd, "\n");

        if (info->si_addr) {
            WCPLWriteCString(fd, "FaultAddress: ");
            WCPLWriteUInt64Hex(fd, (uint64_t)(uintptr_t)info->si_addr);
            WCPLWriteCString(fd, "\n");
        }
    }

#if defined(__arm64__) || defined(__aarch64__)
    if (!uap) {
        return;
    }
    ucontext_t *context = (ucontext_t *)uap;
    if (!context || !context->uc_mcontext) {
        return;
    }
    uintptr_t pc = arm_thread_state64_get_pc(context->uc_mcontext->__ss);
    uintptr_t lr = arm_thread_state64_get_lr(context->uc_mcontext->__ss);
    uintptr_t sp = arm_thread_state64_get_sp(context->uc_mcontext->__ss);

    WCPLWriteCString(fd, "PC: ");
    WCPLWriteUInt64Hex(fd, (uint64_t)pc);
    WCPLWriteCString(fd, "\n");
    WCPLWriteCString(fd, "LR: ");
    WCPLWriteUInt64Hex(fd, (uint64_t)lr);
    WCPLWriteCString(fd, "\n");
    WCPLWriteCString(fd, "SP: ");
    WCPLWriteUInt64Hex(fd, (uint64_t)sp);
    WCPLWriteCString(fd, "\n");
#else
    (void)uap;
#endif
}

static void WCPLWriteBreadcrumbRing(int fd) {
    uint32_t seq = __atomic_load_n(&wcpl_breadcrumb_seq, __ATOMIC_RELAXED);
    uint32_t total = seq < (uint32_t)kWCPLCrashBreadcrumbRingSize ? seq : (uint32_t)kWCPLCrashBreadcrumbRingSize;
    if (total == 0) {
        return;
    }

    WCPLWriteCString(fd, "\n--- Recent Breadcrumbs ---\n");
    uint32_t startSeq = seq - total;
    for (uint32_t s = startSeq; s < seq; s++) {
        uint32_t idx = s % (uint32_t)kWCPLCrashBreadcrumbRingSize;
        if (wcpl_breadcrumb_ring[idx][0] == '\0') {
            continue;
        }
        WCPLWriteCString(fd, wcpl_breadcrumb_ring[idx]);
        WCPLWriteCString(fd, "\n");
    }
}

static void WCPLWriteDiagnosticRing(int fd) {
    uint32_t seq = __atomic_load_n(&wcpl_diagnostic_seq, __ATOMIC_RELAXED);
    uint32_t total = seq < (uint32_t)kWCPLCrashDiagnosticRingSize ? seq : (uint32_t)kWCPLCrashDiagnosticRingSize;
    if (total == 0) {
        return;
    }

    WCPLWriteCString(fd, "\n--- Recent Diagnostics ---\n");
    uint32_t startSeq = seq - total;
    for (uint32_t s = startSeq; s < seq; s++) {
        uint32_t idx = s % (uint32_t)kWCPLCrashDiagnosticRingSize;
        if (wcpl_diagnostic_ring[idx][0] == '\0') {
            continue;
        }
        WCPLWriteCString(fd, wcpl_diagnostic_ring[idx]);
        WCPLWriteCString(fd, "\n");
    }
}

static void WCPLWriteFileTail(int fd, const char *path, size_t maxBytes) {
    if (fd < 0 || !path || path[0] == '\0' || maxBytes == 0) {
        return;
    }
    int inputFd = open(path, O_RDONLY);
    if (inputFd < 0) {
        return;
    }

    struct stat st;
    if (fstat(inputFd, &st) != 0 || st.st_size <= 0) {
        close(inputFd);
        return;
    }

    off_t fileSize = st.st_size;
    off_t start = 0;
    if ((unsigned long long)fileSize > (unsigned long long)maxBytes) {
        start = fileSize - (off_t)maxBytes;
    }
    if (lseek(inputFd, start, SEEK_SET) == (off_t)-1) {
        close(inputFd);
        return;
    }

    WCPLWriteCString(fd, "\n--- Debug Log Tail ---\n");
    char buf[4096];
    for (;;) {
        ssize_t n = read(inputFd, buf, sizeof(buf));
        if (n <= 0) {
            break;
        }
        WCPLWriteBytes(fd, buf, (size_t)n);
    }
    WCPLWriteCString(fd, "\n");
    close(inputFd);
}

static void WCPLCreateCrashMarkerFile(void) {
    if (wcpl_crash_marker_path[0] == '\0') {
        return;
    }
    int fd = open(wcpl_crash_marker_path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd >= 0) {
        const char flag = '1';
        write(fd, &flag, 1);
        close(fd);
    }
}

static void WCPLSignalHandler(int sig, siginfo_t *info, void *uap) {
    if (!wcpl_crash_enabled || wcpl_is_handling_crash) {
        kill(getpid(), sig);
        _exit(128 + sig);
    }

    wcpl_is_handling_crash = 1;

    int fd = -1;
    if (wcpl_crash_log_path[0] != '\0') {
        fd = open(wcpl_crash_log_path, O_WRONLY | O_CREAT | O_APPEND, 0644);
    }

    if (fd >= 0) {
        // 信号处理仅使用 async-signal-safe API，避免 backtrace/时间格式化/Objective-C 调用导致二次崩溃。
        WCPLWriteCString(fd, "\n\n===== WCPL Signal Crash =====\nSignal: ");
        WCPLWriteCString(fd, WCPLSignalName(sig));
        WCPLWriteCString(fd, " (");
        WCPLWriteInt(fd, sig);
        WCPLWriteCString(fd, ")\n");
        WCPLWriteSignalContext(fd, info, uap);

        if (wcpl_last_action[0] != '\0') {
            WCPLWriteCString(fd, "LastAction: ");
            WCPLWriteCString(fd, wcpl_last_action);
            WCPLWriteCString(fd, "\n");
        }

        WCPLWriteBreadcrumbRing(fd);
        WCPLWriteDiagnosticRing(fd);
        WCPLWriteFileTail(fd, wcpl_debug_log_path, (size_t)kWCPLCrashSignalDebugLogTailMaxBytes);

        close(fd);
    }

    WCPLCreateCrashMarkerFile();

    // sigaction 已通过 SA_RESETHAND 恢复默认处理；这里用 kill 触发默认行为。
    kill(getpid(), sig);
    _exit(128 + sig);
}

static void WCPLInstallSignalHandler(int sig) {
    struct sigaction action;
    memset(&action, 0, sizeof(action));
    action.sa_sigaction = WCPLSignalHandler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = SA_RESETHAND | SA_NODEFER | SA_SIGINFO;
    sigaction(sig, &action, NULL);
}

@interface WCPLCrashReporter (Private)
- (void)handleException:(NSException *)exception;
- (void)recordLifecycleDiagnostic:(NSString *)event;
- (NSString *)diagnosticSnapshot;
@end

static void WCPLHandleException(NSException *exception) {
    [[WCPLCrashReporter sharedReporter] handleException:exception];
}

@interface WCPLCrashReporter () <WCPLLogSink>

@property (nonatomic, strong) NSUserDefaults *defaults;
@property (nonatomic, strong) id<WCPLLogging> logger;
@property (nonatomic, assign) BOOL installed;
@property (nonatomic, strong) NSString *crashLogPathInternal;
@property (nonatomic, strong) NSString *crashMarkerPathInternal;
@property (nonatomic, strong) NSString *lastAction;

@end

@implementation WCPLCrashReporter

+ (instancetype)sharedReporter {
    static WCPLCrashReporter *reporter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        reporter = [WCPLCrashReporter reporterWithDefaults:[NSUserDefaults standardUserDefaults]
                                                    logger:[WCPLLogger sharedLogging]];
    });
    return reporter;
}

- (instancetype)init {
    return [self initWithDefaults:[NSUserDefaults standardUserDefaults]
                           logger:[WCPLLogger sharedLogging]];
}

+ (instancetype)reporterWithDefaults:(NSUserDefaults *)defaults {
    return [self reporterWithDefaults:defaults logger:[WCPLLogger sharedLogging]];
}

+ (instancetype)reporterWithDefaults:(NSUserDefaults *)defaults
                              logger:(id<WCPLLogging>)logger {
    return [[self alloc] initWithDefaults:defaults logger:logger];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    return [self initWithDefaults:defaults logger:[WCPLLogger sharedLogging]];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults
                          logger:(id<WCPLLogging>)logger {
    if (self = [super init]) {
        _defaults = defaults ?: [NSUserDefaults standardUserDefaults];
        _logger = logger ?: [WCPLLogger sharedLogging];
        _enabled = YES;
        _autoUploadEnabled = YES;
        if ([_logger isKindOfClass:[WCPLLogger class]]) {
            ((WCPLLogger *)_logger).sink = self;
        }
    }
    return self;
}

- (void)installIfNeeded {
    if (self.installed) {
        return;
    }
    self.installed = YES;

    if (![self shouldActivate]) {
        return;
    }

    [self setupPaths];
    [self loadSettings];
    [self recordBreadcrumb:@"启动"];
    [self recordLifecycleDiagnostic:@"launch"];

    NSNotificationCenter *center = [NSNotificationCenter defaultCenter];
    [center addObserver:self selector:@selector(wcpl_onDidEnterBackground) name:UIApplicationDidEnterBackgroundNotification object:nil];
    [center addObserver:self selector:@selector(wcpl_onDidBecomeActive) name:UIApplicationDidBecomeActiveNotification object:nil];
    [center addObserver:self selector:@selector(wcpl_onWillTerminate) name:UIApplicationWillTerminateNotification object:nil];
    [center addObserver:self selector:@selector(wcpl_onMemoryWarning) name:UIApplicationDidReceiveMemoryWarningNotification object:nil];

    NSSetUncaughtExceptionHandler(&WCPLHandleException);

    WCPLInstallSignalHandler(SIGABRT);
    WCPLInstallSignalHandler(SIGILL);
    WCPLInstallSignalHandler(SIGSEGV);
    WCPLInstallSignalHandler(SIGFPE);
    WCPLInstallSignalHandler(SIGBUS);
    // 避免覆盖宿主已忽略 SIGPIPE 的行为，否则可能引入“原本不崩 -> 变崩”的回归。
    struct sigaction oldPipeAction;
    if (sigaction(SIGPIPE, NULL, &oldPipeAction) == 0 && oldPipeAction.sa_handler == SIG_IGN) {
        // keep ignored
    } else {
        WCPLInstallSignalHandler(SIGPIPE);
    }
    WCPLInstallSignalHandler(SIGTRAP);

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self tryUploadPendingReport];
    });
}

- (void)wcpl_onDidEnterBackground {
    [self recordBreadcrumb:@"进入后台"];
    [self recordLifecycleDiagnostic:@"enter_background"];
}

- (void)wcpl_onDidBecomeActive {
    [self recordBreadcrumb:@"回到前台"];
    [self recordLifecycleDiagnostic:@"become_active"];
}

- (void)wcpl_onWillTerminate {
    [self recordBreadcrumb:@"WillTerminate"];
    [self recordLifecycleDiagnostic:@"terminate"];
}

- (void)wcpl_onMemoryWarning {
    [self recordBreadcrumb:@"内存警告"];
    [self recordDiagnostic:@"lifecycle memory_warning"];
}

- (void)setEnabled:(BOOL)enabled {
    _enabled = enabled;
    wcpl_crash_enabled = enabled ? 1 : 0;
    [self.defaults setBool:enabled forKey:kWCPLCrashReporterEnabledKey];
}

- (void)setAutoUploadEnabled:(BOOL)autoUploadEnabled {
    _autoUploadEnabled = autoUploadEnabled;
    [self.defaults setBool:autoUploadEnabled forKey:kWCPLCrashAutoUploadEnabledKey];
}

- (NSString *)crashLogPath {
    return self.crashLogPathInternal ?: @"";
}

- (void)recordBreadcrumb:(NSString *)breadcrumb {
    if (!self.enabled) {
        return;
    }
    NSString *normalized = WCPLNormalizeCrashText(breadcrumb);
    if (normalized.length == 0) {
        return;
    }
    NSString *timestamp = [self currentTimestamp];
    NSString *entry = [NSString stringWithFormat:@"[%@] %@", timestamp, normalized];
    self.lastAction = entry;

    const char *cString = [entry UTF8String];
    if (cString) {
        strncpy(wcpl_last_action, cString, sizeof(wcpl_last_action) - 1);
        wcpl_last_action[sizeof(wcpl_last_action) - 1] = '\0';
        WCPLStoreRingEntry(&wcpl_breadcrumb_seq,
                           (uint32_t)kWCPLCrashBreadcrumbRingSize,
                           (size_t)kWCPLCrashBreadcrumbMaxLen,
                           &wcpl_breadcrumb_ring[0][0],
                           cString);
    }
}

- (void)recordBreadcrumbFormat:(NSString *)format, ... {
    if (format.length == 0) {
        return;
    }
    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    [self recordBreadcrumb:message];
}

- (void)recordDiagnostic:(NSString *)diagnostic {
    if (!self.enabled) {
        return;
    }
    NSString *normalized = WCPLNormalizeCrashText(diagnostic);
    if (normalized.length == 0) {
        return;
    }

    NSString *entry = [NSString stringWithFormat:@"[%@] %@", [self currentTimestamp], normalized];
    const char *cString = [entry UTF8String];
    if (cString) {
        WCPLStoreRingEntry(&wcpl_diagnostic_seq,
                           (uint32_t)kWCPLCrashDiagnosticRingSize,
                           (size_t)kWCPLCrashDiagnosticMaxLen,
                           &wcpl_diagnostic_ring[0][0],
                           cString);
    }
}

- (void)recordDiagnosticFormat:(NSString *)format, ... {
    if (format.length == 0) {
        return;
    }
    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    [self recordDiagnostic:message];
}

- (void)tryUploadPendingReport {
    if (!self.enabled || !self.autoUploadEnabled) {
        return;
    }

    if (![self hasPendingCrashMarker]) {
        return;
    }

    NSString *logPath = self.crashLogPathInternal;
    if (logPath.length == 0) {
        return;
    }
    if (WCPLFileSizeAtPath(logPath) == 0) {
        [self clearCrashMarker];
        return;
    }

    __weak typeof(self) weakSelf = self;
    [WCPLLogUploader uploadLogFileAtPath:logPath logName:kWCPLCrashLogFileName completion:^(BOOL success, NSInteger statusCode, NSError *error) {
        __strong typeof(weakSelf) self = weakSelf;
        if (!self) {
            return;
        }
        if (!success || error) {
            NSString *message = error.localizedDescription ?: @"上传崩溃日志失败";
            [self.logger logWithLevel:WCPLLogLevelWarning
                               format:@"崩溃日志自动上传失败: %@ (status=%ld)",
                                      message,
                                      (long)statusCode];
            return;
        }

        [self clearCrashMarker];
        [self.logger logWithLevel:WCPLLogLevelInfo
                           format:@"崩溃日志自动上传成功: status=%ld",
                                  (long)statusCode];
    }];
}

#pragma mark - Private

- (BOOL)shouldActivate {
    NSString *bundleId = [[NSBundle mainBundle] bundleIdentifier];
    if (bundleId.length == 0) {
        return NO;
    }
    return [bundleId isEqualToString:@"com.tencent.xin"];
}

- (void)setupPaths {
    NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    if (documentsPath.length == 0) {
        return;
    }

    self.crashLogPathInternal = [documentsPath stringByAppendingPathComponent:kWCPLCrashLogFileName];
    self.crashMarkerPathInternal = [documentsPath stringByAppendingPathComponent:kWCPLCrashPendingMarkerName];
    NSString *debugLogPath = [documentsPath stringByAppendingPathComponent:@"wcpl_debug.log"];

    const char *logPath = [self.crashLogPathInternal fileSystemRepresentation];
    if (logPath) {
        strncpy(wcpl_crash_log_path, logPath, sizeof(wcpl_crash_log_path) - 1);
        wcpl_crash_log_path[sizeof(wcpl_crash_log_path) - 1] = '\0';
    }

    const char *markerPath = [self.crashMarkerPathInternal fileSystemRepresentation];
    if (markerPath) {
        strncpy(wcpl_crash_marker_path, markerPath, sizeof(wcpl_crash_marker_path) - 1);
        wcpl_crash_marker_path[sizeof(wcpl_crash_marker_path) - 1] = '\0';
    }

    const char *debugPath = [debugLogPath fileSystemRepresentation];
    if (debugPath) {
        strncpy(wcpl_debug_log_path, debugPath, sizeof(wcpl_debug_log_path) - 1);
        wcpl_debug_log_path[sizeof(wcpl_debug_log_path) - 1] = '\0';
    }
}

- (void)loadSettings {
    if ([self.defaults objectForKey:kWCPLCrashReporterEnabledKey] == nil) {
        [self.defaults setBool:YES forKey:kWCPLCrashReporterEnabledKey];
    }
    if ([self.defaults objectForKey:kWCPLCrashAutoUploadEnabledKey] == nil) {
        [self.defaults setBool:YES forKey:kWCPLCrashAutoUploadEnabledKey];
    }
    self.enabled = [self.defaults boolForKey:kWCPLCrashReporterEnabledKey];
    self.autoUploadEnabled = [self.defaults boolForKey:kWCPLCrashAutoUploadEnabledKey];
}

- (void)recordLifecycleDiagnostic:(NSString *)event {
    UIApplication *application = [UIApplication sharedApplication];
    UIViewController *topVC = WCPLTopVisibleViewController();
    NSString *topVCClass = topVC ? NSStringFromClass([topVC class]) : @"(nil)";
    NSUInteger windowCount = 0;
    if ([application respondsToSelector:@selector(windows)]) {
        windowCount = application.windows.count;
    }

    [self recordDiagnosticFormat:@"lifecycle event=%@ state=%@ topVC=%@ windows=%lu",
                                 WCPLNormalizeCrashText(event),
                                 WCPLApplicationStateDescription(application.applicationState),
                                 topVCClass,
                                 (unsigned long)windowCount];
}

- (NSString *)currentTimestamp {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss.SSS";
    return [formatter stringFromDate:[NSDate date]];
}

- (NSString *)appContextInfo {
    return WCPLBuildAppContextInfoString();
}

- (BOOL)hasPendingCrashMarker {
    NSString *markerPath = self.crashMarkerPathInternal;
    if (markerPath.length == 0) {
        return NO;
    }
    return [[NSFileManager defaultManager] fileExistsAtPath:markerPath];
}

- (void)clearCrashMarker {
    NSString *markerPath = self.crashMarkerPathInternal;
    if (markerPath.length == 0) {
        return;
    }
    [[NSFileManager defaultManager] removeItemAtPath:markerPath error:nil];
}

- (void)handleException:(NSException *)exception {
    if (!self.enabled || !exception) {
        return;
    }

    NSMutableString *report = [NSMutableString string];
    [report appendString:@"\n\n===== WCPL Exception Crash =====\n"];    
    [report appendFormat:@"Time: %@\n", [self currentTimestamp]];

    NSString *lastAction = self.lastAction;
    if (lastAction.length == 0 && wcpl_last_action[0] != '\0') {
        lastAction = [NSString stringWithUTF8String:wcpl_last_action];
    }
    if (lastAction.length > 0) {
        [report appendFormat:@"LastAction: %@\n", lastAction];
    }

    [report appendFormat:@"Exception: %@\n", exception.name ?: @""];
    [report appendFormat:@"Reason: %@\n", exception.reason ?: @""];
    [report appendString:@"\n--- Context ---\n"];    
    [report appendFormat:@"%@\n", [self appContextInfo]];

    NSArray<NSString *> *stack = exception.callStackSymbols;
    if (stack.count > 0) {
        [report appendString:@"\n--- CallStack ---\n"];    
        for (NSString *symbol in stack) {
            [report appendFormat:@"%@\n", symbol];
        }
    }

    NSString *breadcrumbSnapshot = [self breadcrumbSnapshot];
    if (breadcrumbSnapshot.length > 0) {
        [report appendString:@"\n--- Recent Breadcrumbs ---\n"];
        [report appendString:breadcrumbSnapshot];
        [report appendString:@"\n"];
    }

    NSString *diagnosticSnapshot = [self diagnosticSnapshot];
    if (diagnosticSnapshot.length > 0) {
        [report appendString:@"\n--- Recent Diagnostics ---\n"];
        [report appendString:diagnosticSnapshot];
        [report appendString:@"\n"];
    }

    if (self.logger.enabled) {
        NSString *recentLog = [self.logger readRecentLog:600];
        if (recentLog.length > 0) {
            [report appendString:@"\n--- Recent Debug Log ---\n"];    
            [report appendString:recentLog];
            [report appendString:@"\n"];    
        }
    }

    [self appendCrashReport:report];
    [self createCrashMarker];
}

- (void)logger:(id<WCPLLogging>)logger
didRecordMessage:(NSString *)message
         level:(WCPLLogLevel)level {
    NSString *levelText = @"INFO";
    switch (level) {
        case WCPLLogLevelDebug: levelText = @"DEBUG"; break;
        case WCPLLogLevelInfo: levelText = @"INFO"; break;
        case WCPLLogLevelWarning: levelText = @"WARN"; break;
        case WCPLLogLevelError: levelText = @"ERROR"; break;
        case WCPLLogLevelNone: levelText = @"NONE"; break;
    }

    [self recordDiagnosticFormat:@"log[%@] %@", levelText, message ?: @""];
}

- (NSString *)breadcrumbSnapshot {
    uint32_t seq = __atomic_load_n(&wcpl_breadcrumb_seq, __ATOMIC_RELAXED);
    uint32_t total = seq < (uint32_t)kWCPLCrashBreadcrumbRingSize ? seq : (uint32_t)kWCPLCrashBreadcrumbRingSize;
    if (total == 0) {
        return @"";
    }

    NSMutableArray<NSString *> *items = [NSMutableArray arrayWithCapacity:(NSUInteger)total];
    uint32_t startSeq = seq - total;
    for (uint32_t s = startSeq; s < seq; s++) {
        uint32_t idx = s % (uint32_t)kWCPLCrashBreadcrumbRingSize;
        const char *cString = wcpl_breadcrumb_ring[idx];
        if (!cString || cString[0] == '\0') {
            continue;
        }
        NSString *line = [NSString stringWithUTF8String:cString];
        if (line.length > 0) {
            [items addObject:line];
        }
    }
    return [items componentsJoinedByString:@"\n"];
}

- (NSString *)diagnosticSnapshot {
    uint32_t seq = __atomic_load_n(&wcpl_diagnostic_seq, __ATOMIC_RELAXED);
    uint32_t total = seq < (uint32_t)kWCPLCrashDiagnosticRingSize ? seq : (uint32_t)kWCPLCrashDiagnosticRingSize;
    if (total == 0) {
        return @"";
    }

    NSMutableArray<NSString *> *items = [NSMutableArray arrayWithCapacity:(NSUInteger)total];
    uint32_t startSeq = seq - total;
    for (uint32_t s = startSeq; s < seq; s++) {
        uint32_t idx = s % (uint32_t)kWCPLCrashDiagnosticRingSize;
        const char *cString = wcpl_diagnostic_ring[idx];
        if (!cString || cString[0] == '\0') {
            continue;
        }
        NSString *line = [NSString stringWithUTF8String:cString];
        if (line.length > 0) {
            [items addObject:line];
        }
    }
    return [items componentsJoinedByString:@"\n"];
}

- (void)appendCrashReport:(NSString *)report {
    if (report.length == 0) {
        return;
    }
    NSString *path = self.crashLogPathInternal;
    if (path.length == 0) {
        return;
    }

    NSData *data = [report dataUsingEncoding:NSUTF8StringEncoding];
    if (!data) {
        return;
    }

    NSFileManager *fileManager = [NSFileManager defaultManager];
    if (![fileManager fileExistsAtPath:path]) {
        [fileManager createFileAtPath:path contents:nil attributes:nil];
    }

    NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:path];
    if (!handle) {
        return;
    }

    [handle seekToEndOfFile];
    [handle writeData:data];
    [handle closeFile];
}

- (void)createCrashMarker {
    NSString *path = self.crashMarkerPathInternal;
    if (path.length == 0) {
        return;
    }
    [[NSFileManager defaultManager] createFileAtPath:path contents:[@"1" dataUsingEncoding:NSUTF8StringEncoding] attributes:nil];
}

@end
