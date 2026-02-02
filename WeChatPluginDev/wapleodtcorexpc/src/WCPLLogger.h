//
// WCPLLogger.h
//
// 微信辣椒本地文件日志工具
//

#import <Foundation/Foundation.h>

@interface WCPLLogger : NSObject

+ (instancetype)sharedLogger;

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
