//
// WCPLConstants.h
//
// 统一常量定义，避免魔法数字与硬编码字符串散落各处
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

#pragma mark - 队列配置
static const NSInteger kWCPLMaxConcurrentRedEnvelopTasks = 5;
static const NSInteger kWCPLSerialQueueConcurrency = 1;

#pragma mark - 队列标识
static NSString *const kWCPLRedEnvelopQueueLabel = @"com.wcpl.redenvelop.queue";
static NSString *const kWCPLConfigQueueLabel = @"com.wcpl.config.threadsafe.dict";
static NSString *const kWCPLLoggerQueueLabel = @"com.wcpl.logger";

#pragma mark - 超时配置
static const NSTimeInterval kWCPLRedEnvelopOperationTimeout = 30.0;
static const NSTimeInterval kWCPLAPICallTimeout = 5.0;

#pragma mark - UI 配置
static const NSTimeInterval kWCPLRepeatButtonThrottleInterval = 0.05;

