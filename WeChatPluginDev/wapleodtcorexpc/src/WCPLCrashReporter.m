//
// WCPLCrashReporter.m
//
// 崩溃日志收集与自动上传
//

#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"
#import "WCPLLogUploader.h"

#import <UIKit/UIKit.h>
#import <execinfo.h>
#import <signal.h>
#import <fcntl.h>
#import <unistd.h>
#import <sys/stat.h>
#import <time.h>
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
    if (!text) {
        return;
    }
    write(fd, text, strlen(text));
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
        signal(sig, SIG_DFL);
        raise(sig);
        return;
    }

    wcpl_is_handling_crash = 1;

    int fd = -1;
    if (wcpl_crash_log_path[0] != '\0') {
        fd = open(wcpl_crash_log_path, O_WRONLY | O_CREAT | O_APPEND, 0644);
    }

    if (fd >= 0) {
        time_t now = time(NULL);
        struct tm timeinfo;
        localtime_r(&now, &timeinfo);
        char timebuf[64] = {0};
        strftime(timebuf, sizeof(timebuf), "%Y-%m-%d %H:%M:%S", &timeinfo);

        char header[256] = {0};
        snprintf(header, sizeof(header), "\n\n===== WCPL Signal Crash =====\nTime: %s\nSignal: %d\n", timebuf, sig);
        WCPLWriteCString(fd, header);

        if (wcpl_last_action[0] != '\0') {
            WCPLWriteCString(fd, "LastAction: ");
            WCPLWriteCString(fd, wcpl_last_action);
            WCPLWriteCString(fd, "\n");
        }

        void *callstack[64];
        int frames = backtrace(callstack, 64);
        if (frames > 0) {
            WCPLWriteCString(fd, "Backtrace:\n");
            backtrace_symbols_fd(callstack, frames, fd);
            WCPLWriteCString(fd, "\n");
        }

        close(fd);
    }

    WCPLCreateCrashMarkerFile();

    signal(sig, SIG_DFL);
    raise(sig);
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

    signal(SIGABRT, WCPLSignalHandler);
    signal(SIGILL, WCPLSignalHandler);
    signal(SIGSEGV, WCPLSignalHandler);
    signal(SIGFPE, WCPLSignalHandler);
    signal(SIGBUS, WCPLSignalHandler);
    signal(SIGPIPE, WCPLSignalHandler);
    signal(SIGTRAP, WCPLSignalHandler);

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
