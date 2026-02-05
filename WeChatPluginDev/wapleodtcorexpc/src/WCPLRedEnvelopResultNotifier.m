//
// WCPLRedEnvelopResultNotifier.m
//

#import "WCPLRedEnvelopResultNotifier.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLTextMessageSender.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import "WeChatRedEnvelop.h"
#import <dispatch/dispatch.h>
#import <objc/message.h>

static BOOL wcpl_ren_isDecimalDigitsOnly(NSString *text) {
    NSString *value = WCPLTrimMessageText(text);
    if (value.length == 0) return NO;
    for (NSUInteger i = 0; i < value.length; i++) {
        unichar ch = [value characterAtIndex:i];
        if (ch < '0' || ch > '9') {
            return NO;
        }
    }
    return YES;
}

// 红包金额格式化：回包多数为“分”(整数)。若已包含小数点则视为“元”字符串。
static NSString *wcpl_ren_formatHongbaoAmountYuan(NSString *rawAmount) {
    NSString *raw = WCPLTrimMessageText(rawAmount);
    if (raw.length == 0) return nil;
    if ([raw rangeOfString:@"."].location != NSNotFound) {
        return raw;
    }
    if (!wcpl_ren_isDecimalDigitsOnly(raw)) {
        return raw;
    }
    long long fen = raw.longLongValue;
    return [NSString stringWithFormat:@"%.2f", ((double)fen) / 100.0];
}

static NSString *wcpl_ren_displayNameForUserName(NSString *userName) {
    NSString *name = WCPLTrimMessageText(userName);
    if (name.length == 0) return nil;

    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr || ![contactMgr respondsToSelector:@selector(getContactByName:)]) {
        return name;
    }

    id contact = nil;
    @try {
        contact = [contactMgr getContactByName:name];
    } @catch (__unused NSException *exception) {
        contact = nil;
    }
    if (!contact) return name;

    NSString *displayName = nil;
    @try {
        if ([contact respondsToSelector:@selector(getContactDisplayName)]) {
            displayName = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(getContactDisplayName));
        } else {
            displayName = [contact valueForKey:@"m_nsNickName"];
        }
    } @catch (__unused NSException *exception) {
        displayName = nil;
    }

    return WCPLTrimMessageText(displayName) ?: name;
}

static NSString *wcpl_ren_dedupeKey(NSString *sendId, NSString *timingIdentifier, NSString *sessionUserName) {
    NSString *sid = WCPLTrimMessageText(sendId);
    NSString *tid = WCPLTrimMessageText(timingIdentifier);
    NSString *session = WCPLTrimMessageText(sessionUserName);

    if (sid.length > 0 && tid.length > 0) {
        return [NSString stringWithFormat:@"%@|%@", sid, tid];
    }
    if (sid.length > 0) {
        return sid;
    }
    if (tid.length > 0 && session.length > 0) {
        return [NSString stringWithFormat:@"%@|%@", tid, session];
    }
    return tid.length > 0 ? tid : session;
}

@interface WCPLRedEnvelopResultNotifier ()

@property (nonatomic) dispatch_queue_t syncQueue;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSDate *> *recentNotifyMap;

@end

@implementation WCPLRedEnvelopResultNotifier

+ (instancetype)sharedNotifier {
    static WCPLRedEnvelopResultNotifier *notifier = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        notifier = [WCPLRedEnvelopResultNotifier new];
    });
    return notifier;
}

- (instancetype)init {
    if (self = [super init]) {
        _syncQueue = dispatch_queue_create("com.wcpl.redenvelop.notifier", DISPATCH_QUEUE_SERIAL);
        _recentNotifyMap = [NSMutableDictionary dictionary];
    }
    return self;
}

- (BOOL)wcpl_shouldSkipForKey:(NSString *)key now:(NSDate *)now {
    if (key.length == 0 || !now) return NO;

    __block BOOL skip = NO;
    dispatch_sync(self.syncQueue, ^{
        NSDate *last = self.recentNotifyMap[key];
        if (last && [now timeIntervalSinceDate:last] < 8.0) {
            skip = YES;
            return;
        }

        if (self.recentNotifyMap.count > 200) {
            [self.recentNotifyMap removeAllObjects];
        }
        self.recentNotifyMap[key] = now;
    });
    return skip;
}

- (void)wcpl_removeKeyIfNeeded:(NSString *)key {
    if (key.length == 0) return;
    dispatch_async(self.syncQueue, ^{
        [self.recentNotifyMap removeObjectForKey:key];
    });
}

- (void)notifyOpenResultSuccess:(BOOL)success
                sessionUserName:(NSString *)sessionUserName
                        isGroup:(BOOL)isGroup
                         sendId:(NSString *)sendId
               timingIdentifier:(NSString *)timingIdentifier
                  receiveAmount:(NSString *)receiveAmount
                    totalAmount:(NSString *)totalAmount
                       hbStatus:(NSInteger)hbStatus
                        retCode:(NSInteger)retCode
                       errorMsg:(NSString *)errorMsg {
    WCPLLog(@"[红包通知] 方法调用: success=%d session=%@ isGroup=%d sendId=%@ timing=%@ receiveAmt=%@ totalAmt=%@ status=%ld retCode=%ld err=%@",
            success,
            sessionUserName ?: @"",
            isGroup,
            sendId ?: @"",
            timingIdentifier ?: @"",
            receiveAmount ?: @"",
            totalAmount ?: @"",
            (long)hbStatus,
            (long)retCode,
            errorMsg ?: @"");

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSInteger notify = config.redEnvelopResultNotify;
    if (notify == 0) {
        WCPLLog(@"[红包通知] 跳过: 通知已关闭");
        return;
    }

    NSString *key = wcpl_ren_dedupeKey(sendId, timingIdentifier, sessionUserName);
    NSDate *now = [NSDate date];
    if ([self wcpl_shouldSkipForKey:key now:now]) {
        WCPLLog(@"[红包通知] 跳过: 去重限制 session=%@ key=%@",
                WCPLTrimMessageText(sessionUserName) ?: @"",
                key ?: @"");
        return;
    }

    NSString *session = WCPLTrimMessageText(sessionUserName);
    NSString *sessionDisplayName = session.length > 0 ? wcpl_ren_displayNameForUserName(session) : nil;
    NSString *sessionName = sessionDisplayName.length > 0 ? sessionDisplayName : (session ?: @"");

    NSString *receiveAmountYuan = wcpl_ren_formatHongbaoAmountYuan(receiveAmount);
    NSString *totalAmountYuan = wcpl_ren_formatHongbaoAmountYuan(totalAmount);
    WCPLLog(@"[红包通知] 金额格式化: receive原始=%@ 格式化=%@ total原始=%@ 格式化=%@",
            receiveAmount ?: @"",
            receiveAmountYuan ?: @"",
            totalAmount ?: @"",
            totalAmountYuan ?: @"");

    NSMutableString *notifyText = [NSMutableString stringWithFormat:@"[红包] 在%@「%@」",
                                   isGroup ? @"群" : @"聊天",
                                   sessionName];
    if (success) {
        if (receiveAmountYuan.length > 0) {
            [notifyText appendFormat:@" 抢到 %@元", receiveAmountYuan];
        } else {
            [notifyText appendString:@" 领取成功"];
        }
        if (totalAmountYuan.length > 0) {
            [notifyText appendFormat:@" 总额 %@元", totalAmountYuan];
        }
    } else {
        [notifyText appendString:@" 领取失败"];
        NSString *err = WCPLTrimMessageText(errorMsg);
        if (hbStatus == 4) {
            [notifyText appendString:@" 已抢完"];
        } else if (err.length > 0) {
            [notifyText appendFormat:@" %@", err];
        } else if (retCode != 0) {
            [notifyText appendFormat:@" 错误码:%ld", (long)retCode];
        }
    }

    NSString *finalText = [notifyText copy];
    WCPLLog(@"[红包通知] 通知文本: '%@'", finalText ?: @"");

    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *targetSession = nil;
        if (notify == 2) {
            targetSession = @"filehelper";
        } else if (notify == 1) {
            targetSession = [[WCPLTextMessageSender sharedSender] selfUserName];
        }

        if (targetSession.length == 0) {
            WCPLLog(@"[红包通知] 跳过: 目标会话为空 notify=%ld", (long)notify);
            [self wcpl_removeKeyIfNeeded:key];
            return;
        } else {
            WCPLLog(@"[红包通知] 目标会话: %@ (notify=%ld)", targetSession ?: @"", (long)notify);
        }

        BOOL didSend = [[WCPLTextMessageSender sharedSender] sendText:finalText toSession:targetSession];
        if (!didSend && notify == 1) {
            WCPLLog(@"[红包通知] 发送到自己失败，尝试文件传输助手");
            didSend = [[WCPLTextMessageSender sharedSender] sendText:finalText toSession:@"filehelper"];
        }

        WCPLLog(@"[红包通知] 发送结果: to=%@ ok=%d text='%@'", targetSession ?: @"", didSend, finalText ?: @"");
        if (!didSend) {
            [self wcpl_removeKeyIfNeeded:key];
        }
    });
}

@end
