//
// WCPLRealtimeLogUploader.m
//
// 调试日志实时上传（HTTP）到本地仓库的日志服务器
//

#import "WCPLRealtimeLogUploader.h"
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
@property (nonatomic, assign) UIBackgroundTaskIdentifier backgroundTask;
@property (nonatomic, assign) NSTimeInterval lastUploadErrorLogAt;
@property (nonatomic, assign) NSUInteger consecutiveUploadFailures;

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
        _backgroundTask = UIBackgroundTaskInvalid;
        _lastUploadErrorLogAt = 0;
        _consecutiveUploadFailures = 0;

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
        // 新一轮实时上传：从头开始，并让服务端覆盖 live 文件，避免重复拼接
        dispatch_async(self.queue, ^{
            self.lastUploadedOffset = 0;
            self.uploading = NO;
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

        dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, self.queue);
        self.timer = timer;
        uint64_t interval = (uint64_t)(kWCPLRealtimeUploadIntervalSeconds * NSEC_PER_SEC);
        dispatch_source_set_timer(timer, dispatch_time(DISPATCH_TIME_NOW, interval), interval, (uint64_t)(0.2 * NSEC_PER_SEC));

        __weak typeof(self) weakSelf = self;
        dispatch_source_set_event_handler(timer, ^{
            [weakSelf uploadNextChunkIfNeeded];
        });
        dispatch_resume(timer);
    });
}

- (void)stop {
    dispatch_async(self.queue, ^{
        if (self.timer) {
            dispatch_source_cancel(self.timer);
            self.timer = nil;
        }
        self.uploading = NO;

        if (self.backgroundTask != UIBackgroundTaskInvalid) {
            UIBackgroundTaskIdentifier task = self.backgroundTask;
            self.backgroundTask = UIBackgroundTaskInvalid;
            [[UIApplication sharedApplication] endBackgroundTask:task];
        }
    });
}

#pragma mark - Notifications

- (void)onEnterBackground {
    dispatch_async(self.queue, ^{
        if (!self.enabled) {
            [self stop];
            return;
        }

        if (self.backgroundTask == UIBackgroundTaskInvalid) {
            __weak typeof(self) weakSelf = self;
            self.backgroundTask = [[UIApplication sharedApplication]
                beginBackgroundTaskWithName:@"wcpl.realtime_log_uploader"
                          expirationHandler:^{
                              __strong typeof(weakSelf) self = weakSelf;
                              if (!self) {
                                  return;
                              }
                              dispatch_async(self.queue, ^{
                                  [self stop];
                              });
                          }];
        }

        // 尽量在系统挂起前把最新日志刷上来
        [self uploadNextChunkIfNeeded];
    });
}

- (void)onBecomeActive {
    dispatch_async(self.queue, ^{
        if (self.backgroundTask != UIBackgroundTaskInvalid) {
            UIBackgroundTaskIdentifier task = self.backgroundTask;
            self.backgroundTask = UIBackgroundTaskInvalid;
            [[UIApplication sharedApplication] endBackgroundTask:task];
        }
        [self startIfNeeded];
    });
}

#pragma mark - Internal

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

    NSString *logPath = [logger logFilePath];
    if (logPath.length == 0) {
        return;
    }

    NSDictionary *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:logPath error:nil];
    if (!attributes) {
        return;
    }

    unsigned long long fileSize = [attributes fileSize];
    if (fileSize == 0) {
        return;
    }

    BOOL shouldReplace = NO;
    if (self.lastUploadedOffset > fileSize) {
        // 日志被清空/截断，重置 offset 并覆盖服务端 live 文件
        self.lastUploadedOffset = 0;
        shouldReplace = YES;
    }
    if (self.lastUploadedOffset == 0) {
        shouldReplace = YES;
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
    self.uploading = YES;

    NSDictionary<NSString *, NSString *> *headers = @{
        @"X-Log-Live": @"1",
        @"X-Log-Mode": shouldReplace ? @"replace" : @"append",
        @"X-Log-Offset": [NSString stringWithFormat:@"%llu", offsetBefore],
    };

    __weak typeof(self) weakSelf = self;
    [WCPLLogUploader uploadLogData:chunk logName:@"wcpl_debug_live.log" headers:headers completion:^(BOOL success, NSInteger statusCode, NSError *error) {
        __strong typeof(weakSelf) self = weakSelf;
        if (!self) {
            return;
        }
        dispatch_async(self.queue, ^{
            self.uploading = NO;
            if (!success || error) {
                self.consecutiveUploadFailures += 1;
                NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
                if (now - self.lastUploadErrorLogAt > 15.0) {
                    self.lastUploadErrorLogAt = now;
                    WCPLLog(@"实时日志上传失败: failures=%lu status=%ld err=%@",
                            (unsigned long)self.consecutiveUploadFailures,
                            (long)statusCode,
                            error.localizedDescription ?: @"");
                }
                return;
            }
            if (self.consecutiveUploadFailures > 0) {
                WCPLLog(@"实时日志上传恢复: failures=%lu", (unsigned long)self.consecutiveUploadFailures);
                self.consecutiveUploadFailures = 0;
            }
            self.lastUploadedOffset = offsetBefore + (unsigned long long)chunk.length;
        });
    }];
}

@end
