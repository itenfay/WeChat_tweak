//
// WCPLDispatchUtils.h
//
// 小工具：降低 dispatch_sync(main) 带来的互锁/卡死风险。
//

#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>

NS_ASSUME_NONNULL_BEGIN

/// 在主线程同步执行 block，但加入超时保护。
/// - 返回 YES：block 已在 timeoutSeconds 内执行完成。
/// - 返回 NO：等待超时；block 会被标记取消，若稍后才被调度执行也会尽量 no-op。
static inline BOOL WCPLDispatchMainSyncWithTimeout(NSTimeInterval timeoutSeconds, dispatch_block_t block) {
    if (!block) {
        return YES;
    }
    if ([NSThread isMainThread]) {
        block();
        return YES;
    }

    // timeoutSeconds <= 0 表示“尽量不阻塞”，立即返回并取消执行。
    double seconds = (timeoutSeconds > 0) ? (double)timeoutSeconds : 0.0;

    dispatch_semaphore_t semaphore = dispatch_semaphore_create(0);
    // __block 变量会被 block 复制到堆上，避免超时返回后悬空引用。
    __block int cancelled = 0;

    dispatch_async(dispatch_get_main_queue(), ^{
        if (__atomic_load_n(&cancelled, __ATOMIC_ACQUIRE)) {
            dispatch_semaphore_signal(semaphore);
            return;
        }
        block();
        dispatch_semaphore_signal(semaphore);
    });

    dispatch_time_t deadline = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(seconds * (double)NSEC_PER_SEC));
    if (dispatch_semaphore_wait(semaphore, deadline) != 0) {
        __atomic_store_n(&cancelled, 1, __ATOMIC_RELEASE);
        return NO;
    }
    return YES;
}

NS_ASSUME_NONNULL_END

