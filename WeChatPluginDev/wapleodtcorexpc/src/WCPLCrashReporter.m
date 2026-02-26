//
// WCPLCrashReporter.m
//
// 崩溃日志收集与自动上传
//

#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"
#import "WCPLLogUploader.h"

#import <UIKit/UIKit.h>
#import <signal.h>
#import <fcntl.h>
#import <unistd.h>
#import <sys/stat.h>
#import <limits.h>
#import <string.h>

static NSString *const kWCPLCrashReporterEnabledKey = @"kWCPLCrashReporterEnabled";
static NSString *const kWCPLCrashAutoUploadEnabledKey = @"kWCPLCrashAutoUploadEnabled";
static NSString *const kWCPLCrashLogFileName = @"wcpl_crash.log";
static NSString *const kWCPLCrashPendingMarkerName = @"wcpl_crash_pending.flag";

static volatile sig_atomic_t wcpl_crash_enabled = 1;
static volatile sig_atomic_t wcpl_is_handling_crash = 0;
static char wcpl_crash_log_path[PATH_MAX] = {0};
static char wcpl_crash_marker_path[PATH_MAX] = {0};
static char wcpl_last_action[256] = {0};

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

static void WCPLSignalHandler(int sig) {
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
        WCPLWriteInt(fd, sig);
        WCPLWriteCString(fd, "\n");

        if (wcpl_last_action[0] != '\0') {
            WCPLWriteCString(fd, "LastAction: ");
            WCPLWriteCString(fd, wcpl_last_action);
            WCPLWriteCString(fd, "\n");
        }

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
    action.sa_handler = WCPLSignalHandler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = SA_RESETHAND | SA_NODEFER;
    sigaction(sig, &action, NULL);
}

@interface WCPLCrashReporter (Private)
- (void)handleException:(NSException *)exception;
@end

static void WCPLHandleException(NSException *exception) {
    [[WCPLCrashReporter sharedReporter] handleException:exception];
}

@interface WCPLCrashReporter ()

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
        reporter = [[WCPLCrashReporter alloc] init];
    });
    return reporter;
}

- (instancetype)init {
    if (self = [super init]) {
        _enabled = YES;
        _autoUploadEnabled = YES;
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

- (void)setEnabled:(BOOL)enabled {
    _enabled = enabled;
    wcpl_crash_enabled = enabled ? 1 : 0;
    [[NSUserDefaults standardUserDefaults] setBool:enabled forKey:kWCPLCrashReporterEnabledKey];
}

- (void)setAutoUploadEnabled:(BOOL)autoUploadEnabled {
    _autoUploadEnabled = autoUploadEnabled;
    [[NSUserDefaults standardUserDefaults] setBool:autoUploadEnabled forKey:kWCPLCrashAutoUploadEnabledKey];
}

- (NSString *)crashLogPath {
    return self.crashLogPathInternal ?: @"";
}

- (void)recordBreadcrumb:(NSString *)breadcrumb {
    if (!self.enabled) {
        return;
    }
    if (breadcrumb.length == 0) {
        return;
    }
    NSString *timestamp = [self currentTimestamp];
    NSString *entry = [NSString stringWithFormat:@"[%@] %@", timestamp, breadcrumb];
    self.lastAction = entry;

    const char *cString = [entry UTF8String];
    if (cString) {
        strncpy(wcpl_last_action, cString, sizeof(wcpl_last_action) - 1);
        wcpl_last_action[sizeof(wcpl_last_action) - 1] = '\0';
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
    NSDictionary *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:logPath error:nil];
    if (!attributes || [attributes fileSize] == 0) {
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
            WCPLLog(@"崩溃日志自动上传失败: %@ (status=%ld)", message, (long)statusCode);
            return;
        }

        [self clearCrashMarker];
        WCPLLog(@"崩溃日志自动上传成功: status=%ld", (long)statusCode);
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
}

- (void)loadSettings {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults objectForKey:kWCPLCrashReporterEnabledKey] == nil) {
        [defaults setBool:YES forKey:kWCPLCrashReporterEnabledKey];
    }
    if ([defaults objectForKey:kWCPLCrashAutoUploadEnabledKey] == nil) {
        [defaults setBool:YES forKey:kWCPLCrashAutoUploadEnabledKey];
    }
    self.enabled = [defaults boolForKey:kWCPLCrashReporterEnabledKey];
    self.autoUploadEnabled = [defaults boolForKey:kWCPLCrashAutoUploadEnabledKey];
}

- (NSString *)currentTimestamp {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss.SSS";
    return [formatter stringFromDate:[NSDate date]];
}

- (NSString *)appContextInfo {
    UIDevice *device = [UIDevice currentDevice];
    NSBundle *bundle = [NSBundle mainBundle];
    NSDictionary *info = [bundle infoDictionary] ?: @{};

    NSString *bundleId = [bundle bundleIdentifier] ?: @"";
    NSString *version = info[@"CFBundleShortVersionString"] ?: @"";
    NSString *build = info[@"CFBundleVersion"] ?: @"";
    NSString *process = [NSProcessInfo processInfo].processName ?: @"";
    NSString *systemName = device.systemName ?: @"iOS";
    NSString *systemVersion = device.systemVersion ?: @"";

    return [NSString stringWithFormat:@"进程: %@\n设备: %@ (%@)\n系统: %@ %@\nApp: %@ %@(%@)",
            process,
            device.model ?: @"",
            device.name ?: @"",
            systemName,
            systemVersion,
            bundleId,
            version,
            build];
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

    if ([WCPLLogger sharedLogger].enabled) {
        NSString *recentLog = [[WCPLLogger sharedLogger] readRecentLog:200];
        if (recentLog.length > 0) {
            [report appendString:@"\n--- Recent Debug Log ---\n"];    
            [report appendString:recentLog];
            [report appendString:@"\n"];    
        }
    }

    [self appendCrashReport:report];
    [self createCrashMarker];
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
