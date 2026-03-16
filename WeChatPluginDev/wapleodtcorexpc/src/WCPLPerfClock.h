//
// WCPLPerfClock.h
//
// 性能采样相关的小工具：统一 uptime/RSS 计算口径。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT uint64_t WCPLUptimeMillis(void);
FOUNDATION_EXPORT unsigned long long WCPLResidentKB(void);

NS_ASSUME_NONNULL_END

