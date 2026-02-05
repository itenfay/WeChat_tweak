//
// WCPLRedEnvelopAutoReplyManager.m
//

#import "WCPLRedEnvelopAutoReplyManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLTextMessageSender.h"
#import "WCPLLogger.h"
#import <dispatch/dispatch.h>

static NSString *wcpl_rea_utf16HexPreview(NSString *text, NSUInteger maxUnits) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0 || maxUnits == 0) return @"";
    NSUInteger len = MIN(text.length, maxUnits);
    NSMutableString *result = [NSMutableString stringWithCapacity:len * 5];
    for (NSUInteger i = 0; i < len; i++) {
        unichar ch = [text characterAtIndex:i];
        [result appendFormat:@"%04X", ch];
        if (i + 1 < len) {
            [result appendString:@" "];
        }
    }
    if (text.length > len) {
        [result appendString:@" …"];
    }
    return result;
}

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
                         sessionUserName:(NSString *)sessionUserName
                                 isGroup:(BOOL)isGroup
                                  sendId:(NSString *)sendId
                        timingIdentifier:(NSString *)timingIdentifier {
    if (!success) return;

    NSString *session = WCPLTrimMessageText(sessionUserName);
    if (session.length == 0) return;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *rawReplyText = isGroup ? config.groupRedEnvelopAutoReplyText : config.privateRedEnvelopAutoReplyText;
    NSString *replyText = WCPLTrimMessageText(rawReplyText);
    if (replyText.length == 0) {
        WCPLLog(@"红包自动回复跳过: 文本为空 session=%@ isGroup=%d rawLen=%lu rawHex=%@",
                session,
                isGroup,
                (unsigned long)([rawReplyText isKindOfClass:[NSString class]] ? rawReplyText.length : 0),
                wcpl_rea_utf16HexPreview(rawReplyText, 24));
        return;
    }

    NSString *key = wcpl_rea_dedupeKey(sendId, timingIdentifier, session);
    NSDate *now = [NSDate date];
    if ([self wcpl_shouldSkipForKey:key now:now]) {
        WCPLLog(@"红包自动回复: 去重跳过 session=%@ isGroup=%d key=%@",
                session,
                isGroup,
                key ?: @"");
        return;
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL ok = [[WCPLTextMessageSender sharedSender] sendText:replyText toSession:session];
        WCPLLog(@"红包自动回复: session=%@ isGroup=%d textLen=%lu ok=%d",
                session,
                isGroup,
                (unsigned long)replyText.length,
                ok);
        if (!ok) {
            [self wcpl_removeKeyIfNeeded:key];
        }
    });
}

@end

