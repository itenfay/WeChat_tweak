//
// WCPLRedEnvelopAutoReplyManager.m
//

#import "WCPLRedEnvelopAutoReplyManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLTextMessageSender.h"
#import "WCPLLogger.h"
#import <dispatch/dispatch.h>

static NSString *wcpl_rea_dedupeKey(NSString *sendId, NSString *timingIdentifier, NSString *sessionUserName) {
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

@interface WCPLRedEnvelopAutoReplyManager ()

@property (nonatomic) dispatch_queue_t syncQueue;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSDate *> *recentReplyMap;

@end

@implementation WCPLRedEnvelopAutoReplyManager

+ (instancetype)sharedManager {
    static WCPLRedEnvelopAutoReplyManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [WCPLRedEnvelopAutoReplyManager new];
    });
    return manager;
}

- (instancetype)init {
    if (self = [super init]) {
        _syncQueue = dispatch_queue_create("com.wcpl.redenvelop.autoreply", DISPATCH_QUEUE_SERIAL);
        _recentReplyMap = [NSMutableDictionary dictionary];
    }
    return self;
}

- (BOOL)wcpl_shouldSkipForKey:(NSString *)key now:(NSDate *)now {
    if (key.length == 0 || !now) return NO;

    __block BOOL skip = NO;
    dispatch_sync(self.syncQueue, ^{
        NSDate *last = self.recentReplyMap[key];
        if (last && [now timeIntervalSinceDate:last] < 8.0) {
            skip = YES;
            return;
        }

        if (self.recentReplyMap.count > 200) {
            [self.recentReplyMap removeAllObjects];
        }
        self.recentReplyMap[key] = now;
    });
    return skip;
}

- (void)wcpl_removeKeyIfNeeded:(NSString *)key {
    if (key.length == 0) return;
    dispatch_async(self.syncQueue, ^{
        [self.recentReplyMap removeObjectForKey:key];
    });
}

- (void)handleRedEnvelopOpenResultSuccess:(BOOL)success
                         sessionUserName:(nullable NSString *)sessionUserName
                                 isGroup:(BOOL)isGroup
                                  sendId:(nullable NSString *)sendId
                        timingIdentifier:(nullable NSString *)timingIdentifier {
    if (!success) return;

    NSString *session = WCPLTrimMessageText(sessionUserName);
    if (session.length == 0) return;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *rawReplyText = isGroup ? config.groupRedEnvelopAutoReplyText : config.privateRedEnvelopAutoReplyText;
    NSString *replyText = WCPLTrimMessageText(rawReplyText);
    if (replyText.length == 0) {
        return;
    }

    NSString *key = wcpl_rea_dedupeKey(sendId, timingIdentifier, session);
    NSDate *now = [NSDate date];
    if ([self wcpl_shouldSkipForKey:key now:now]) {
        return;
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL ok = [[WCPLTextMessageSender sharedSender] sendText:replyText toSession:session];
        if (!ok) {
            WCPLLog(@"红包自动回复发送失败: session=%@ isGroup=%d", session, isGroup);
            [self wcpl_removeKeyIfNeeded:key];
        }
    });
}

@end
