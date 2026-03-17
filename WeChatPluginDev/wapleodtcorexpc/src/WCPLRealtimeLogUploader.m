//
// WCPLRealtimeLogUploader.m
//
// 调试日志实时上传（HTTP）到本地仓库的日志服务器
//

#import "WCPLRealtimeLogUploader.h"
#import "WCPLFileHelpers.h"
#import "WCPLLogger.h"
#import "WCPLLogUploader.h"

#import <UIKit/UIKit.h>

static NSString *const kWCPLRealtimeDebugLogUploadEnabledKey = @"kWCPLRealtimeDebugLogUploadEnabled";

static const NSTimeInterval kWCPLRealtimeUploadIntervalSeconds = 2.0;
static const NSUInteger kWCPLRealtimeUploadChunkSize = 64 * 1024; // 64KB

@interface WCPLRealtimeLogUploader ()

@property (nonatomic, strong) dispatch_queue_t queue;
@property (nonatomic, strong) dispatch_source_t timer;
@property (nonatomic, assign) unsigned long long lastUploadedOffset;
@property (nonatomic, assign) BOOL uploading;
@property (nonatomic, assign) NSTimeInterval lastUploadErrorLogAt;
@property (nonatomic, assign) NSUInteger consecutiveUploadFailures;
@property (nonatomic, copy) NSString *sessionLogName;
@property (nonatomic, assign) BOOL sessionHasUploaded;
@property (nonatomic, assign) NSUInteger sessionGeneration;

@end

@implementation WCPLRealtimeLogUploader

+ (instancetype)sharedUploader {
    static WCPLRealtimeLogUploader *uploader = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        uploader = [[WCPLRealtimeLogUploader alloc] init];
    });
    return uploader;
}

- (instancetype)init {
    if (self = [super init]) {
        _queue = dispatch_queue_create("com.wcpl.realtime_log_uploader", DISPATCH_QUEUE_SERIAL);
        _enabled = [[NSUserDefaults standardUserDefaults] boolForKey:kWCPLRealtimeDebugLogUploadEnabledKey];
        _lastUploadedOffset = 0;
        _uploading = NO;
        _lastUploadErrorLogAt = 0;
        _consecutiveUploadFailures = 0;
        _sessionLogName = nil;
        _sessionHasUploaded = NO;
        _sessionGeneration = 0;

        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onEnterBackground) name:UIApplicationDidEnterBackgroundNotification object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onBecomeActive) name:UIApplicationDidBecomeActiveNotification object:nil];
    }
    return self;
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - Public

- (void)setEnabled:(BOOL)enabled {
    if (_enabled == enabled) {
        return;
    }
    _enabled = enabled;
    [[NSUserDefaults standardUserDefaults] setBool:enabled forKey:kWCPLRealtimeDebugLogUploadEnabledKey];

    if (enabled) {
        dispatch_async(self.queue, ^{
            self.lastUploadedOffset = 0;
            self.uploading = NO;
            self.sessionLogName = nil;
            self.sessionHasUploaded = NO;
            self.sessionGeneration += 1;
        });
        [self startIfNeeded];
    } else {
        [self stop];
    }
}

- (void)startIfNeeded {
    dispatch_async(self.queue, ^{
        if (!self.enabled) {
            return;
        }
        if (![WCPLLogger sharedLogger].enabled) {
            return;
        }
        if (self.timer) {
            return;
        }

        [self prepareNewSessionLocked];

        dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, self.queue);
        self.timer = timer;
        uint64_t interval = (uint64_t)(kWCPLRealtimeUploadIntervalSeconds * NSEC_PER_SEC);
        dispatch_source_set_timer(timer, dispatch_time(DISPATCH_TIME_NOW, 0), interval, (uint64_t)(0.2 * NSEC_PER_SEC));

        __weak typeof(self) weakSelf = self;
        dispatch_source_set_event_handler(timer, ^{
            [weakSelf uploadNextChunkIfNeeded];
        });
        dispatch_resume(timer);

        [self uploadNextChunkIfNeeded];
    });
}

- (void)stop {
    dispatch_async(self.queue, ^{
        if (self.timer) {
            dispatch_source_cancel(self.timer);
            self.timer = nil;
        }
        self.uploading = NO;
        self.lastUploadedOffset = 0;
        self.sessionLogName = nil;
        self.sessionHasUploaded = NO;
        self.sessionGeneration += 1;
    });
}

#pragma mark - Notifications

- (void)onEnterBackground {
    // 后台立刻停止上传：避免后台保活/网络请求
    [self stop];
}

- (void)onBecomeActive {
    dispatch_async(self.queue, ^{
        [self startIfNeeded];
    });
}

#pragma mark - Internal

- (NSString *)newTimestampLogNameLocked {
    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [NSLocale localeWithLocaleIdentifier:@"en_US_POSIX"];
        formatter.dateFormat = @"yyyyMMdd_HHmmss_SSS";
    });

    NSString *ts = [formatter stringFromDate:[NSDate date]] ?: @"";
    if (ts.length == 0) {
        ts = [NSString stringWithFormat:@"%.0f", [[NSDate date] timeIntervalSince1970] * 1000.0];
    }
    return [NSString stringWithFormat:@"wcpl_debug_live_%@.log", ts];
}

- (void)prepareNewSessionLocked {
    self.sessionGeneration += 1;
    self.sessionHasUploaded = NO;
    self.uploading = NO;
    self.lastUploadErrorLogAt = 0;
    self.consecutiveUploadFailures = 0;

    WCPLLogger *logger = [WCPLLogger sharedLogger];
    NSString *logPath = [logger logFilePath];
    unsigned long long fileSize = WCPLFileSizeAtPath(logPath);

    self.lastUploadedOffset = fileSize;
    self.sessionLogName = [self newTimestampLogNameLocked];

    WCPLLogInfo(@"实时日志会话开始: name=%@ offset=%llu", self.sessionLogName ?: @"", self.lastUploadedOffset);
}

- (void)uploadNextChunkIfNeeded {
    if (!self.enabled) {
        return;
    }
    if (self.uploading) {
        return;
    }

    WCPLLogger *logger = [WCPLLogger sharedLogger];
    if (!logger.enabled) {
        return;
    }
    if (self.sessionLogName.length == 0) {
        return;
    }

    NSString *logPath = [logger logFilePath];
    if (logPath.length == 0) {
        return;
    }

    unsigned long long fileSize = WCPLFileSizeAtPath(logPath);
    if (fileSize == 0) {
        return;
    }

    BOOL didTruncate = NO;
    if (self.lastUploadedOffset > fileSize) {
        // 日志被清空/截断，重置 offset（可能会导致重复，但优先保证不漏日志）
        self.lastUploadedOffset = 0;
        didTruncate = YES;
    }
    if (fileSize <= self.lastUploadedOffset) {
        return;
    }

    unsigned long long remaining = fileSize - self.lastUploadedOffset;
    NSUInteger readLen = (NSUInteger)MIN((unsigned long long)kWCPLRealtimeUploadChunkSize, remaining);
    if (readLen == 0) {
        return;
    }

    NSData *chunk = nil;
    @try {
        NSFileHandle *handle = [NSFileHandle fileHandleForReadingAtPath:logPath];
        if (!handle) {
            return;
        }
        [handle seekToFileOffset:self.lastUploadedOffset];
        chunk = [handle readDataOfLength:readLen];
        [handle closeFile];
    }
    @catch (__unused NSException *exception) {
        return;
    }

    if (chunk.length == 0) {
        return;
    }

    unsigned long long offsetBefore = self.lastUploadedOffset;
    NSString *logName = [self.sessionLogName copy];
    NSUInteger generation = self.sessionGeneration;
    BOOL shouldReplace = !self.sessionHasUploaded;
    self.uploading = YES;

    NSDictionary<NSString *, NSString *> *headers = @{
        @"X-Log-Live": @"1",
        @"X-Log-Mode": shouldReplace ? @"replace" : @"append",
        @"X-Log-Offset": [NSString stringWithFormat:@"%llu", offsetBefore],
    };

    __weak typeof(self) weakSelf = self;
    [WCPLLogUploader uploadLogData:chunk logName:logName headers:headers completion:^(BOOL success, NSInteger statusCode, NSError *error) {
        __strong typeof(weakSelf) self = weakSelf;
        if (!self) {
            return;
        }
        dispatch_async(self.queue, ^{
            if (generation != self.sessionGeneration) {
                return;
            }
            self.uploading = NO;
            if (!success || error) {
                self.consecutiveUploadFailures += 1;
                NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
                if (now - self.lastUploadErrorLogAt > 15.0) {
                    self.lastUploadErrorLogAt = now;
                    WCPLLogWarning(@"实时日志上传失败: failures=%lu status=%ld err=%@ name=%@ truncate=%d",
                                   (unsigned long)self.consecutiveUploadFailures,
                                   (long)statusCode,
                                   error.localizedDescription ?: @"",
                                   logName ?: @"",
                                   didTruncate ? 1 : 0);
                }
                return;
            }
            if (self.consecutiveUploadFailures > 0) {
                WCPLLogInfo(@"实时日志上传恢复: failures=%lu", (unsigned long)self.consecutiveUploadFailures);
                self.consecutiveUploadFailures = 0;
            }
            self.lastUploadedOffset = offsetBefore + (unsigned long long)chunk.length;
            self.sessionHasUploaded = YES;
        });
    }];
}

@end
