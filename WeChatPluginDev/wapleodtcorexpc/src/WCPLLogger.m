//
// WCPLLogger.m
//
// 微信辣椒本地文件日志工具
//

#import "WCPLLogger.h"
#import "WCPLConstants.h"
#import <UIKit/UIKit.h>

@interface WCPLLogger ()
@property (nonatomic, strong) NSString *logFilePath;
@property (nonatomic, strong) NSFileHandle *fileHandle;
@property (nonatomic, strong) dispatch_queue_t logQueue;
@end

@implementation WCPLLogger

static NSString *const kWCPLDebugLogEnabled = @"kWCPLDebugLogEnabled";
static NSString *const kWCPLLogLevelKey = @"kWCPLLogLevel";

@dynamic enabled;

+ (instancetype)sharedLogger {
    static WCPLLogger *logger = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        logger = [[WCPLLogger alloc] init];
    });
    return logger;
}

- (instancetype)init {
    if (self = [super init]) {
        // 创建日志队列，确保线程安全
        _logQueue = dispatch_queue_create(kWCPLLoggerQueueLabel.UTF8String, DISPATCH_QUEUE_SERIAL);

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

        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        NSNumber *savedLevel = [defaults objectForKey:kWCPLLogLevelKey];
        if ([savedLevel respondsToSelector:@selector(integerValue)]) {
            _logLevel = (WCPLLogLevel)savedLevel.integerValue;
        } else {
            BOOL savedEnabled = [defaults boolForKey:kWCPLDebugLogEnabled];
            _logLevel = savedEnabled ? WCPLLogLevelDebug : WCPLLogLevelNone;
        }

        if (_logLevel != WCPLLogLevelNone) {
            NSString *startupLog = [NSString stringWithFormat:@"\n\n========== WCPL Logger Started at %@ ==========\n%@\n",
                                    [self currentTimestamp],
                                    [self startupContextInfo]];
            [self writeToFile:startupLog];
        }
    }
    return self;
}

- (void)dealloc {
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

    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setInteger:normalized forKey:kWCPLLogLevelKey];
    [defaults setBool:willEnabled forKey:kWCPLDebugLogEnabled];

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
    [self writeToFile:timestampedMessage];

    // 同时输出到系统日志（仅在启用日志时）
    NSLog(@"[WCPL][%@] %@", levelText, message);
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
    @try {
        NSString *content = [NSString stringWithContentsOfFile:_logFilePath encoding:NSUTF8StringEncoding error:nil];
        if (!content || content.length == 0) {
            return @"日志文件为空";
        }

        NSArray *allLines = [content componentsSeparatedByString:@"\n"];
        NSInteger startIndex = MAX(0, (NSInteger)allLines.count - lines);
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
        @try {
            if (self.fileHandle) {
                NSData *data = [message dataUsingEncoding:NSUTF8StringEncoding];
                [self.fileHandle writeData:data];

                // 定期同步到磁盘，避免数据丢失
                static NSInteger writeCount = 0;
                writeCount++;
                if (writeCount % 10 == 0) {
                    [self.fileHandle synchronizeFile];
                }
            } else {
                // 文件句柄失效，直接追加写入
                NSFileHandle *tempHandle = [NSFileHandle fileHandleForWritingAtPath:self.logFilePath];
                if (tempHandle) {
                    [tempHandle seekToEndOfFile];
                    NSData *data = [message dataUsingEncoding:NSUTF8StringEncoding];
                    [tempHandle writeData:data];
                    [tempHandle closeFile];
                }
            }

            // 日志文件大小限制: 5MB，超过则自动清理旧日志
            [self checkAndRotateLogFile];
        }
        @catch (NSException *exception) {
            NSLog(@"[WCPL] Failed to write log: %@", exception.reason);
        }
    });
}

- (void)checkAndRotateLogFile {
    @try {
        NSDictionary *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:_logFilePath error:nil];
        unsigned long long fileSize = [attributes fileSize];

        // 超过 5MB，保留最后 2MB 的日志
        if (fileSize > 5 * 1024 * 1024) {
            NSString *content = [NSString stringWithContentsOfFile:_logFilePath encoding:NSUTF8StringEncoding error:nil];
            if (content && content.length > 2 * 1024 * 1024) {
                // 截取最后 2MB
                NSString *recentContent = [content substringFromIndex:content.length - 2 * 1024 * 1024];
                [recentContent writeToFile:_logFilePath atomically:YES encoding:NSUTF8StringEncoding error:nil];

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
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss.SSS";
    return [formatter stringFromDate:[NSDate date]];
}

- (NSString *)startupContextInfo {
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

@end
