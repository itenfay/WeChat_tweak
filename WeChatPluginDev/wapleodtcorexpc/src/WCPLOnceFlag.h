//
// WCPLOnceFlag.h
//
// “只执行一次”小工具：用于结果回调去重，避免多处重复写 didNotifyResult 状态机。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef struct {
    int fired;
} WCPLOnceFlag;

static inline void WCPLOnceFlagReset(WCPLOnceFlag *flag) {
    if (!flag) {
        return;
    }
    __atomic_store_n(&flag->fired, 0, __ATOMIC_RELEASE);
}

static inline BOOL WCPLOnceFlagTryFire(WCPLOnceFlag *flag) {
    if (!flag) {
        return NO;
    }
    int expected = 0;
    return __atomic_compare_exchange_n(&flag->fired,
                                       &expected,
                                       1,
                                       false,
                                       __ATOMIC_ACQ_REL,
                                       __ATOMIC_ACQUIRE);
}

NS_ASSUME_NONNULL_END

