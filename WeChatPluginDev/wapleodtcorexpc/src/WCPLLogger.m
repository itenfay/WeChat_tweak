//
// WCPLLogger.m
//
// 微信辣椒本地文件日志工具
//

#import "WCPLLogger.h"
#import "WCPLAppContextInfo.h"
#import "WCPLConstants.h"
#import "WCPLDispatchUtils.h"
#import "WCPLFileHelpers.h"
#import <UIKit/UIKit.h>

@interface WCPLLogger ()
@property (nonatomic, strong) NSUserDefaults *defaults;
@property (nonatomic, strong) NSString *logFilePath;
@property (nonatomic, strong) NSFileHandle *fileHandle;
@property (nonatomic, strong) dispatch_queue_t logQueue;
@property (nonatomic, strong) NSDateFormatter *timestampFormatter;
@property (nonatomic, assign) NSUInteger writeCounter;
@property (nonatomic, assign) BOOL appInBackground;
// 后台保留关键链路日志（例如红包），避免排障时丢失现场
- (BOOL)shouldKeepLogWhenBackgroundWithLevel:(WCPLLogLevel)level message:(NSString *)message;
- (void)writeToFileUrgent:(NSString *)message;
- (void)writeToFileLocked:(NSString *)message forceSync:(BOOL)forceSync;
@end

@implementation WCPLLogger

static NSString *const kWCPLDebugLogEnabled = @"kWCPLDebugLogEnabled";
static NSString *const kWCPLLogLevelKey = @"kWCPLLogLevel";
static const void *kWCPLLoggerQueueSpecificKey = &kWCPLLoggerQueueSpecificKey;

@dynamic enabled;

+ (instancetype)sharedLogger {
    static WCPLLogger *logger = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        logger = [WCPLLogger loggerWithDefaults:[NSUserDefaults standardUserDefaults]];
    });
    return logger;
}

- (instancetype)init {
    return [self initWithDefaults:[NSUserDefaults standardUserDefaults]];
}

+ (id<WCPLLogging>)sharedLogging {
    return [self sharedLogger];
}

+ (instancetype)loggerWithDefaults:(NSUserDefaults *)defaults {
    return [[self alloc] initWithDefaults:defaults];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    if (self = [super init]) {
        _defaults = defaults ?: [NSUserDefaults standardUserDefaults];
        // 创建日志队列，确保线程安全
        _logQueue = dispatch_queue_create(kWCPLLoggerQueueLabel.UTF8String, DISPATCH_QUEUE_SERIAL);
        dispatch_queue_set_specific(_logQueue, kWCPLLoggerQueueSpecificKey, (void *)kWCPLLoggerQueueSpecificKey, NULL);
        _writeCounter = 0;
        _appInBackground = NO;

        _timestampFormatter = [[NSDateFormatter alloc] init];
        _timestampFormatter.locale = [NSLocale localeWithLocaleIdentifier:@"en_US_POSIX"];
        _timestampFormatter.dateFormat = @"yyyy-MM-dd HH:mm:ss.SSS";

        // 日志文件路径: Documents/wcpl_debug.log
        NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        _logFilePath = [documentsPath stringByAppendingPathComponent:@"wcpl_debug.log"];

        // 确保日志文件存在
        if (![[NSFileManager defaultManager] fileExistsAtPath:_logFilePath]) {
            [[NSFileManager defaultManager] createFileAtPath:_logFilePath contents:nil attributes:nil];
        }

        // 打开文件句柄用于追加写入
        _fileHandle = [NSFileHandle fileHandleForWritingAtPath:_logFilePath];
        if (_fileHandle) {
            [_fileHandle seekToEndOfFile];
        }

        NSNumber *savedLevel = [_defaults objectForKey:kWCPLLogLevelKey];
        if ([savedLevel respondsToSelector:@selector(integerValue)]) {
            _logLevel = (WCPLLogLevel)savedLevel.integerValue;
        } else {
            BOOL savedEnabled = [_defaults boolForKey:kWCPLDebugLogEnabled];
            _logLevel = savedEnabled ? WCPLLogLevelDebug : WCPLLogLevelNone;
        }

        if (_logLevel != WCPLLogLevelNone) {
            NSString *startupLog = [NSString stringWithFormat:@"\n\n========== WCPL Logger Started at %@ ==========\n%@\n",
                                    [self currentTimestamp],
                                    [self startupContextInfo]];
            [self writeToFile:startupLog];
        }

        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(onEnterBackground)
                                                     name:UIApplicationDidEnterBackgroundNotification
                                                   object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(onBecomeActive)
                                                     name:UIApplicationDidBecomeActiveNotification
                                                   object:nil];
    }
    return self;
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    if (_fileHandle) {
        [_fileHandle closeFile];
    }
}

#pragma mark - Public Methods

- (void)setEnabled:(BOOL)enabled {
    self.logLevel = enabled ? WCPLLogLevelDebug : WCPLLogLevelNone;
}

- (BOOL)enabled {
    return self.logLevel != WCPLLogLevelNone;
}

- (void)setLogLevel:(WCPLLogLevel)logLevel {
    WCPLLogLevel normalized = logLevel;
    if (normalized < WCPLLogLevelDebug) {
        normalized = WCPLLogLevelDebug;
    } else if (normalized > WCPLLogLevelNone) {
        normalized = WCPLLogLevelNone;
    }

    if (_logLevel == normalized) {
        return;
    }

    BOOL wasEnabled = (_logLevel != WCPLLogLevelNone);
    BOOL willEnabled = (normalized != WCPLLogLevelNone);

    _logLevel = normalized;

    [self.defaults setInteger:normalized forKey:kWCPLLogLevelKey];
    [self.defaults setBool:willEnabled forKey:kWCPLDebugLogEnabled];

    if (!wasEnabled && willEnabled) {
        NSString *startupLog = [NSString stringWithFormat:@"\n\n========== WCPL Logger Started at %@ ==========\n%@\n",
                                [self currentTimestamp],
                                [self startupContextInfo]];
        [self writeToFile:startupLog];
    } else if (wasEnabled && !willEnabled) {
        NSString *stopLog = [NSString stringWithFormat:@"\n========== WCPL Logger Stopped at %@ ==========\n",
                             [self currentTimestamp]];
        [self writeToFile:stopLog];
    }
}

+ (void)setLogLevel:(WCPLLogLevel)level {
    [WCPLLogger sharedLogger].logLevel = level;
}

+ (WCPLLogLevel)currentLevel {
    return [WCPLLogger sharedLogger].logLevel;
}

- (void)log:(NSString *)message {
    [self logWithLevel:WCPLLogLevelInfo message:message];
}

- (void)logFormat:(NSString *)format, ... {
    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);

    [self logWithLevel:WCPLLogLevelDebug message:message];
}

- (void)logWithLevel:(WCPLLogLevel)level message:(NSString *)message {
    if (!message || message.length == 0) return;
    if (self.logLevel > level) return;
    BOOL keepWhenBackground = NO;
    if (self.appInBackground &&
        level <= WCPLLogLevelInfo &&
        ![self shouldKeepLogWhenBackgroundWithLevel:level message:message]) {
        return;
    }
    if (self.appInBackground && level <= WCPLLogLevelInfo) {
        keepWhenBackground = YES;
    }

    NSString *levelText = @"INFO";
    switch (level) {
        case WCPLLogLevelDebug: levelText = @"DEBUG"; break;
        case WCPLLogLevelInfo: levelText = @"INFO"; break;
        case WCPLLogLevelWarning: levelText = @"WARN"; break;
        case WCPLLogLevelError: levelText = @"ERROR"; break;
        case WCPLLogLevelNone: levelText = @"NONE"; break;
    }

    NSString *timestampedMessage = [NSString stringWithFormat:@"[%@][%@] %@\n",
                                    [self currentTimestamp],
                                    levelText,
                                    message];
    BOOL forceSync = keepWhenBackground || level >= WCPLLogLevelWarning;
    if (forceSync) {
        // 后台关键链路 / 告警错误：同步写入并落盘，尽量保留崩溃前现场。
        [self writeToFileUrgent:timestampedMessage];
    } else {
        [self writeToFile:timestampedMessage];
    }

    if (level >= WCPLLogLevelWarning && self.sink) {
        [self.sink logger:self didRecordMessage:message level:level];
    }

    // 控制系统日志量：后台与高频场景只保留告警/错误
    if (level >= WCPLLogLevelWarning) {
        NSLog(@"[WCPL][%@] %@", levelText, message);
    }
}

- (BOOL)shouldKeepLogWhenBackgroundWithLevel:(WCPLLogLevel)level message:(NSString *)message {
    if (level >= WCPLLogLevelWarning) {
        return YES;
    }
    if (![message isKindOfClass:[NSString class]] || message.length == 0) {
        return NO;
    }

    static NSArray<NSString *> *keywords = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        keywords = @[
            @"红包",
            @"hongbao",
            @"RedEnvelop",
            @"receivehongbao",
            @"OpenRedEnvelopesRequest",
            @"ReceiverQueryRedEnvelopesRequest",
            @"抢红包",
            @"引用消息诊断",
            @"AsyncOnAddMsg",
            @"AsyncOnPreAddMsg"
        ];
    });

    for (NSString *keyword in keywords) {
        if ([message rangeOfString:keyword options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

- (void)logWithLevel:(WCPLLogLevel)level format:(NSString *)format, ... {
    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);

    [self logWithLevel:level message:message];
}

- (NSString *)logFilePath {
    return _logFilePath;
}

- (void)clearLog {
    dispatch_async(_logQueue, ^{
        [@"" writeToFile:self.logFilePath atomically:YES encoding:NSUTF8StringEncoding error:nil];

        // 重新打开文件句柄
        if (self.fileHandle) {
            [self.fileHandle closeFile];
        }
        self.fileHandle = [NSFileHandle fileHandleForWritingAtPath:self.logFilePath];
        if (self.fileHandle) {
            [self.fileHandle seekToEndOfFile];
        }

        NSString *clearLog = [NSString stringWithFormat:@"========== Log Cleared at %@ ==========\n", [self currentTimestamp]];
        [self writeToFile:clearLog];
    });
}

- (NSString *)readRecentLog:(NSInteger)lines {
    NSInteger requestedLines = lines;
    if (requestedLines <= 0) {
        requestedLines = 1;
    } else if (requestedLines > 2000) {
        requestedLines = 2000;
    }

    @try {
        NSString *path = _logFilePath;
        if (![path isKindOfClass:[NSString class]] || path.length == 0) {
            return @"日志文件为空";
        }

        unsigned long long fileSize = WCPLFileSizeAtPath(path);
        if (fileSize == 0) {
            return @"日志文件为空";
        }

        static const unsigned long long kWCPLRecentLogMaxBytes = 256ull * 1024ull;
        unsigned long long offset = 0;
        if (fileSize > kWCPLRecentLogMaxBytes) {
            offset = fileSize - kWCPLRecentLogMaxBytes;
        }

        NSFileHandle *handle = [NSFileHandle fileHandleForReadingAtPath:path];
        if (!handle) {
            return @"日志文件为空";
        }
        [handle seekToFileOffset:offset];
        NSData *data = [handle readDataToEndOfFile];
        [handle closeFile];

        if (![data isKindOfClass:[NSData class]] || data.length == 0) {
            return @"日志文件为空";
        }

        NSString *content = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
        if (!content) {
            content = [[NSString alloc] initWithData:data encoding:NSISOLatin1StringEncoding];
        }
        if (content.length == 0) {
            return @"读取日志失败: 编码错误";
        }

        // 从文件尾部截取时，首行可能是半行，丢弃它以避免展示乱码片段。
        if (offset > 0) {
            NSRange firstNewline = [content rangeOfString:@"\n"];
            if (firstNewline.location != NSNotFound && firstNewline.location + 1 < content.length) {
                content = [content substringFromIndex:firstNewline.location + 1];
            }
        }

        NSArray *allLines = [content componentsSeparatedByString:@"\n"];
        NSInteger startIndex = MAX(0, (NSInteger)allLines.count - requestedLines);
        NSArray *recentLines = [allLines subarrayWithRange:NSMakeRange(startIndex, allLines.count - startIndex)];

        return [recentLines componentsJoinedByString:@"\n"];
    }
    @catch (NSException *exception) {
        return [NSString stringWithFormat:@"读取日志失败: %@", exception.reason];
    }
}

#pragma mark - Private Methods

- (void)writeToFile:(NSString *)message {
    dispatch_async(_logQueue, ^{
        @autoreleasepool {
            @try {
                [self writeToFileLocked:message forceSync:NO];
            }
            @catch (NSException *exception) {
                NSLog(@"[WCPL] Failed to write log: %@", exception.reason);
            }
        }
    });
}

- (void)writeToFileUrgent:(NSString *)message {
    if (message.length == 0) {
        return;
    }

    WCPLDispatchQueueSpecific specific =
        WCPLDispatchQueueSpecificMake(kWCPLLoggerQueueSpecificKey, kWCPLLoggerQueueSpecificKey);
    WCPLDispatchSyncSafe(_logQueue, specific, ^{
        @autoreleasepool {
            @try {
                [self writeToFileLocked:message forceSync:YES];
            } @catch (NSException *exception) {
                NSLog(@"[WCPL] Failed to write urgent log: %@", exception.reason);
            }
        }
    });
}

- (void)writeToFileLocked:(NSString *)message forceSync:(BOOL)forceSync {
    if (message.length == 0) {
        return;
    }

    if (self.fileHandle) {
        NSData *data = [message dataUsingEncoding:NSUTF8StringEncoding];
        [self.fileHandle writeData:data];
    } else {
        // 文件句柄失效，直接追加写入
        NSFileHandle *tempHandle = [NSFileHandle fileHandleForWritingAtPath:self.logFilePath];
        if (tempHandle) {
            [tempHandle seekToEndOfFile];
            NSData *data = [message dataUsingEncoding:NSUTF8StringEncoding];
            [tempHandle writeData:data];
            if (forceSync) {
                [tempHandle synchronizeFile];
            }
            [tempHandle closeFile];
        }
    }

    self.writeCounter += 1;

    if (self.fileHandle && (forceSync || (self.writeCounter % 64 == 0))) {
        [self.fileHandle synchronizeFile];
    }

    // 轮转检查改为低频触发，降低每条日志的系统调用成本
    if (self.writeCounter % 128 == 0) {
        [self checkAndRotateLogFile];
    }
}

- (void)checkAndRotateLogFile {
    @try {
        unsigned long long fileSize = WCPLFileSizeAtPath(_logFilePath);

        // 超过 5MB，保留最后 2MB 的日志
        if (fileSize > 5 * 1024 * 1024) {
            unsigned long long keepBytes = 2 * 1024 * 1024;
            unsigned long long startOffset = (fileSize > keepBytes) ? (fileSize - keepBytes) : 0;

            NSData *tailData = nil;
            NSFileHandle *readHandle = [NSFileHandle fileHandleForReadingAtPath:_logFilePath];
            if (readHandle) {
                @try {
                    [readHandle seekToFileOffset:startOffset];
                    tailData = [readHandle readDataToEndOfFile];
                } @catch (__unused NSException *exceptionReadTail) {
                    tailData = nil;
                }
                [readHandle closeFile];
            }

            if (tailData.length > 0) {
                [tailData writeToFile:_logFilePath atomically:YES];

                // 重新打开文件句柄
                if (self.fileHandle) {
                    [self.fileHandle closeFile];
                }
                self.fileHandle = [NSFileHandle fileHandleForWritingAtPath:self.logFilePath];
                if (self.fileHandle) {
                    [self.fileHandle seekToEndOfFile];
                }

                NSLog(@"[WCPL] Log file rotated due to size limit");
            }
        }
    }
    @catch (NSException *exception) {
        NSLog(@"[WCPL] Failed to rotate log file: %@", exception.reason);
    }
}

- (NSString *)currentTimestamp {
    @synchronized (self.timestampFormatter) {
        return [self.timestampFormatter stringFromDate:[NSDate date]];
    }
}

- (void)onEnterBackground {
    self.appInBackground = YES;
    [self logWithLevel:WCPLLogLevelWarning message:@"[日志] 应用进入后台，启用关键日志保留"];
    dispatch_async(self.logQueue, ^{
        @try {
            if (self.fileHandle) {
                [self.fileHandle synchronizeFile];
            }
        } @catch (__unused NSException *exceptionSync) { WCPLCatchLog(exceptionSync); }
    });
}

- (void)onBecomeActive {
    self.appInBackground = NO;
    [self logWithLevel:WCPLLogLevelWarning message:@"[日志] 应用回到前台，恢复常规日志策略"];
}

- (NSString *)startupContextInfo {
    return WCPLBuildAppContextInfoString();
}

@end
