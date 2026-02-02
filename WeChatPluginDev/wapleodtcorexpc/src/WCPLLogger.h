//
// WCPLLogger.h
//
// 微信辣椒本地文件日志工具
//

#import <Foundation/Foundation.h>

@interface WCPLLogger : NSObject

+ (instancetype)sharedLogger;

// 日志开关 (默认关闭)
@property (nonatomic, assign) BOOL enabled;

// 写入日志到本地文件
- (void)log:(NSString *)message;

// 写入格式化日志
- (void)logFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);

// 获取日志文件路径
- (NSString *)logFilePath;

// 清空日志文件
- (void)clearLog;

// 读取最近的日志内容 (最后 N 行)
- (NSString *)readRecentLog:(NSInteger)lines;

@end

// 便捷宏:只在日志启用时才记录
#define WCPLLog(fmt, ...) \
    do { \
        if ([WCPLLogger sharedLogger].enabled) { \
            [[WCPLLogger sharedLogger] logFormat:fmt, ##__VA_ARGS__]; \
        } \
    } while(0)
