//
// WCPLLogger.h
//
// 微信辣椒本地文件日志工具
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WCPLLogLevel) {
    WCPLLogLevelDebug = 0,
    WCPLLogLevelInfo = 1,
    WCPLLogLevelWarning = 2,
    WCPLLogLevelError = 3,
    WCPLLogLevelNone = 99,
};

NS_ASSUME_NONNULL_BEGIN

@protocol WCPLLogging;

@protocol WCPLLogSink <NSObject>

- (void)logger:(id<WCPLLogging>)logger
didRecordMessage:(NSString *)message
         level:(WCPLLogLevel)level;

@end

@protocol WCPLLogging <NSObject>

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) WCPLLogLevel logLevel;

- (void)log:(NSString *)message;
- (void)logFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);
- (void)logWithLevel:(WCPLLogLevel)level message:(NSString *)message;
- (void)logWithLevel:(WCPLLogLevel)level format:(NSString *)format, ... NS_FORMAT_FUNCTION(2,3);
- (NSString *)logFilePath;
- (void)clearLog;
- (NSString *)readRecentLog:(NSInteger)lines;

@end

@interface WCPLLogger : NSObject <WCPLLogging>

+ (instancetype)sharedLogger;
+ (id<WCPLLogging>)sharedLogging;
+ (instancetype)loggerWithDefaults:(NSUserDefaults *)defaults;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

@property (nullable, nonatomic, weak) id<WCPLLogSink> sink;

// 日志开关 (默认关闭)。兼容旧版开关：开启等价于 Debug，关闭等价于 None。
@property (nonatomic, assign) BOOL enabled;

// 日志级别 (默认 None)
@property (nonatomic, assign) WCPLLogLevel logLevel;

// 便捷：全局设置/读取
+ (void)setLogLevel:(WCPLLogLevel)level;
+ (WCPLLogLevel)currentLevel;

// 写入日志到本地文件
- (void)log:(NSString *)message;

// 写入格式化日志
- (void)logFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);

// 指定级别写入日志
- (void)logWithLevel:(WCPLLogLevel)level message:(NSString *)message;
- (void)logWithLevel:(WCPLLogLevel)level format:(NSString *)format, ... NS_FORMAT_FUNCTION(2,3);

// 获取日志文件路径
- (NSString *)logFilePath;

// 清空日志文件
- (void)clearLog;

// 读取最近的日志内容 (最后 N 行)
- (NSString *)readRecentLog:(NSInteger)lines;

@end

static inline NSString *WCPLLogReporterSafeText(NSString * _Nullable value) {
    return value.length > 0 ? value : @"unknown";
}

static inline NSString *WCPLLogReporterStringFromCString(const char *value) {
    if (!value || value[0] == '\0') {
        return @"unknown";
    }
    NSString *text = [NSString stringWithUTF8String:value];
    return WCPLLogReporterSafeText(text);
}

static inline NSString *WCPLLogReporterFileName(const char *path) {
    NSString *filePath = WCPLLogReporterStringFromCString(path);
    return filePath.lastPathComponent.length > 0 ? filePath.lastPathComponent : filePath;
}

static inline NSString *WCPLLogReporterTargetSummary(id _Nullable target) {
    if (!target) {
        return @"(nil)";
    }
    Class cls = [target class];
    if (!cls) {
        return @"(unknown)";
    }
    return NSStringFromClass(cls) ?: @"(unknown)";
}

static inline void WCPLRecordCaughtException(NSString * _Nullable feature,
                                             NSString * _Nullable stage,
                                             NSException * _Nullable exception,
                                             id _Nullable target,
                                             NSString * _Nullable detail) {
    NSString *message = [NSString stringWithFormat:@"[异常][%@][%@] target=%@ name=%@ reason=%@ detail=%@",
                         WCPLLogReporterSafeText(feature),
                         WCPLLogReporterSafeText(stage),
                         WCPLLogReporterTargetSummary(target),
                         WCPLLogReporterSafeText(exception.name),
                         WCPLLogReporterSafeText(exception.reason),
                         detail.length > 0 ? detail : @"-"];
    NSLog(@"[WCPL][ERROR] %@", message);
}

#define WCPLCatchLog(exception) \
    WCPLRecordCaughtException(WCPLLogReporterFileName(__FILE__), \
                              WCPLLogReporterStringFromCString(__func__), \
                              (exception), \
                              nil, \
                              [NSString stringWithFormat:@"line=%d", __LINE__])

#define WCPLCatchLogTarget(exception, target, detail) \
    WCPLRecordCaughtException(WCPLLogReporterFileName(__FILE__), \
                              WCPLLogReporterStringFromCString(__func__), \
                              (exception), \
                              (target), \
                              (detail))

#define WCPLCatchLogContext(exception, feature, stage, target, detail) \
    WCPLRecordCaughtException((feature), \
                              (stage), \
                              (exception), \
                              (target), \
                              (detail))

// 便捷宏：按级别输出
#define WCPLLogDebug(fmt, ...) do { if ([WCPLLogger currentLevel] <= WCPLLogLevelDebug) { [[WCPLLogger sharedLogger] logWithLevel:WCPLLogLevelDebug format:fmt, ##__VA_ARGS__]; } } while(0)
#define WCPLLogInfo(fmt, ...) do { if ([WCPLLogger currentLevel] <= WCPLLogLevelInfo) { [[WCPLLogger sharedLogger] logWithLevel:WCPLLogLevelInfo format:fmt, ##__VA_ARGS__]; } } while(0)
#define WCPLLogWarning(fmt, ...) do { if ([WCPLLogger currentLevel] <= WCPLLogLevelWarning) { [[WCPLLogger sharedLogger] logWithLevel:WCPLLogLevelWarning format:fmt, ##__VA_ARGS__]; } } while(0)
#define WCPLLogError(fmt, ...) do { if ([WCPLLogger currentLevel] <= WCPLLogLevelError) { [[WCPLLogger sharedLogger] logWithLevel:WCPLLogLevelError format:fmt, ##__VA_ARGS__]; } } while(0)

// 兼容旧宏：默认视为 Debug
#define WCPLLog(fmt, ...) WCPLLogDebug(fmt, ##__VA_ARGS__)

NS_ASSUME_NONNULL_END
