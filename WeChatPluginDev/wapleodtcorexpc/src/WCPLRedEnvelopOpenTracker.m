//
// WCPLRedEnvelopOpenTracker.m
//

#import "WCPLRedEnvelopOpenTracker.h"
#import "WeChatRedEnvelopParam.h"
#import <dispatch/dispatch.h>

@interface WCPLRedEnvelopOpenTracker ()

@property (nonatomic) dispatch_queue_t syncQueue;
@property (nonatomic, strong) NSMutableDictionary<NSString *, WeChatRedEnvelopParam *> *tracked;

@end

@implementation WCPLRedEnvelopOpenTracker

+ (instancetype)sharedTracker {
    static WCPLRedEnvelopOpenTracker *tracker = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tracker = [WCPLRedEnvelopOpenTracker new];
    });
    return tracker;
}

- (instancetype)init {
    if (self = [super init]) {
        _syncQueue = dispatch_queue_create("com.wcpl.redenvelop.open.tracker", DISPATCH_QUEUE_SERIAL);
        _tracked = [NSMutableDictionary dictionary];
    }
    return self;
}

static NSString *wcpl_redEnvelopTrackKey(NSString *sendId, NSString *timingIdentifier) {
    NSString *sid = [sendId isKindOfClass:[NSString class]] ? sendId : nil;
    NSString *tid = [timingIdentifier isKindOfClass:[NSString class]] ? timingIdentifier : nil;

    if (sid.length > 0 && tid.length > 0) {
        return [NSString stringWithFormat:@"%@|%@", sid, tid];
    }
    if (sid.length > 0) {
        return sid;
    }
    if (tid.length > 0) {
        return tid;
    }
    return nil;
}

- (void)trackParam:(WeChatRedEnvelopParam *)param {
    if (![param isKindOfClass:[WeChatRedEnvelopParam class]]) return;
    NSString *key = wcpl_redEnvelopTrackKey(param.sendId, param.timingIdentifier);
    if (key.length == 0) return;

    dispatch_async(self.syncQueue, ^{
        // 简单限流：避免极端情况下无限增长
        if (self.tracked.count > 200) {
            [self.tracked removeAllObjects];
        }
        self.tracked[key] = param;
    });
}

- (WeChatRedEnvelopParam *)consumeParamForSendId:(NSString *)sendId
                                timingIdentifier:(NSString *)timingIdentifier {
    __block WeChatRedEnvelopParam *param = nil;
    NSString *key = wcpl_redEnvelopTrackKey(sendId, timingIdentifier);

    dispatch_sync(self.syncQueue, ^{
        if (key.length > 0) {
            param = self.tracked[key];
            if (param) {
                [self.tracked removeObjectForKey:key];
                return;
            }
        }

        // 兜底：只按 sendId 匹配（timingIdentifier 可能缺失/变更）
        if ([sendId isKindOfClass:[NSString class]] && sendId.length > 0) {
            NSString *foundKey = nil;
            for (NSString *k in self.tracked) {
                WeChatRedEnvelopParam *candidate = self.tracked[k];
                if ([candidate.sendId isEqualToString:sendId]) {
                    foundKey = k;
                    param = candidate;
                    break;
                }
            }
            if (foundKey.length > 0) {
                [self.tracked removeObjectForKey:foundKey];
            }
        }
    });

    return param;
}

@end

