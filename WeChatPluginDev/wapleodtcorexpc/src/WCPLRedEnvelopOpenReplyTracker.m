#import "WCPLRedEnvelopOpenReplyTracker.h"

#import "WCPLPureHelpers.h"
#import "WCPLRedEnvelopRequestParser.h"
#import "WCPLRedEnvelopSessionResolver.h"

static NSTimeInterval const kWCPLAutoReplyTrackTTL = 180.0;
static NSTimeInterval const kWCPLAutoReplyTrackFallbackAge = 12.0;
static NSUInteger const kWCPLAutoReplyTrackHardLimit = 512;
static const void *kWCPLOpenReplyTrackQueueSpecificKey = &kWCPLOpenReplyTrackQueueSpecificKey;

static inline void wcpl_openReplyDispatchSyncSafe(dispatch_queue_t queue, dispatch_block_t block) {
    if (!block) {
        return;
    }
    if (dispatch_get_specific(kWCPLOpenReplyTrackQueueSpecificKey)) {
        block();
        return;
    }
    dispatch_sync(queue, block);
}

static NSString *wcpl_openReplyTrimText(NSString *text) {
    NSString *trimmed = WCPLTrimText(text);
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_openReplyNormalizeSessionUserName(NSString *text) {
    NSString *session = wcpl_openReplyTrimText(text);
    if (session.length == 0) {
        return nil;
    }

    for (NSInteger i = 0; i < 2; i++) {
        if ([session rangeOfString:@"%"].location == NSNotFound) {
            break;
        }
        NSString *decoded = [session stringByRemovingPercentEncoding];
        NSString *normalized = wcpl_openReplyTrimText(decoded);
        if (normalized.length == 0 || [normalized isEqualToString:session]) {
            break;
        }
        session = normalized;
    }

    return session;
}

static dispatch_queue_t wcpl_openReplyTrackQueue(void) {
    static dispatch_queue_t queue;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = dispatch_queue_create("com.wcpl.red_envelop.reply_track", DISPATCH_QUEUE_SERIAL);
        dispatch_queue_set_specific(queue,
                                    kWCPLOpenReplyTrackQueueSpecificKey,
                                    (void *)kWCPLOpenReplyTrackQueueSpecificKey,
                                    NULL);
    });
    return queue;
}

static NSMutableDictionary<NSString *, NSDictionary *> *wcpl_openReplyTrackMap(void) {
    static NSMutableDictionary<NSString *, NSDictionary *> *tracker;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tracker = [NSMutableDictionary dictionary];
    });
    return tracker;
}

static NSString *wcpl_openReplyTrackKey(NSString *prefix, NSString *token) {
    NSString *safePrefix = wcpl_openReplyTrimText(prefix);
    NSString *safeToken = wcpl_openReplyTrimText(token);
    if (safePrefix.length == 0 || safeToken.length == 0) {
        return nil;
    }
    return [NSString stringWithFormat:@"%@:%@", safePrefix, safeToken];
}

static void wcpl_openReplyTrackCleanupLocked(NSMutableDictionary<NSString *, NSDictionary *> *tracker,
                                             NSTimeInterval now) {
    if (![tracker isKindOfClass:[NSMutableDictionary class]]) {
        return;
    }

    NSTimeInterval expireBefore = now - kWCPLAutoReplyTrackTTL;
    NSArray<NSString *> *allKeys = [tracker allKeys];
    for (NSString *key in allKeys) {
        NSDictionary *entry = [tracker[key] isKindOfClass:[NSDictionary class]] ? tracker[key] : nil;
        NSNumber *ts = [entry[@"ts"] isKindOfClass:[NSNumber class]] ? entry[@"ts"] : nil;
        if (!ts || ts.doubleValue < expireBefore) {
            [tracker removeObjectForKey:key];
        }
    }

    if (tracker.count > kWCPLAutoReplyTrackHardLimit) {
        [tracker removeAllObjects];
    }
}

void WCPLTrackOpenReplySession(NSString *sendId,
                               NSString *sign,
                               NSString *timingIdentifier,
                               NSString *sessionUserName) {
    NSString *session = wcpl_openReplyNormalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    wcpl_openReplyDispatchSyncSafe(wcpl_openReplyTrackQueue(), ^{
        NSMutableDictionary<NSString *, NSDictionary *> *tracker = wcpl_openReplyTrackMap();
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        wcpl_openReplyTrackCleanupLocked(tracker, now);

        NSDictionary *entry = @{
            @"session": session,
            @"ts": @(now)
        };

        NSString *sendKey = wcpl_openReplyTrackKey(@"sendId", sendId);
        NSString *signKey = wcpl_openReplyTrackKey(@"sign", sign);
        NSString *timingKey = wcpl_openReplyTrackKey(@"timing", timingIdentifier);

        if (sendKey.length > 0) tracker[sendKey] = entry;
        if (signKey.length > 0) tracker[signKey] = entry;
        if (timingKey.length > 0) tracker[timingKey] = entry;

        tracker[@"__last__"] = entry;
    });
}

void WCPLTrackOpenReplySessionFromRequestDictionary(NSDictionary *params) {
    if (![params isKindOfClass:[NSDictionary class]] || params.count == 0) {
        return;
    }

    NSString *sendId = WCPLRedEnvelopStringForKeysInDictionary(params, @[@"sendId", @"sendid", @"send_id"]);
    NSString *sign = WCPLRedEnvelopStringForKeysInDictionary(params, @[@"sign"]);
    NSString *timingIdentifier = WCPLRedEnvelopStringForKeysInDictionary(params, @[@"timingIdentifier", @"timing_identifier"]);

    NSString *session = WCPLRedEnvelopStringForKeysInDictionary(params,
                                                                @[@"sessionUserName", @"sessionusername", @"session_user_name"]);
    if (session.length == 0) {
        NSDictionary *nativeUrlDict = WCPLRedEnvelopNativeUrlDictionaryFromRequestDictionary(params);
        session = WCPLRedEnvelopSessionFromDictionary(nativeUrlDict);
    }

    WCPLTrackOpenReplySession(sendId, sign, timingIdentifier, session);
}

NSString *WCPLLookupTrackedOpenSession(NSString *sendId,
                                       NSString *sign,
                                       NSString *timingIdentifier,
                                       NSString *__autoreleasing *sourceOut) {
    __block NSString *session = nil;
    __block NSString *source = nil;

    wcpl_openReplyDispatchSyncSafe(wcpl_openReplyTrackQueue(), ^{
        NSMutableDictionary<NSString *, NSDictionary *> *tracker = wcpl_openReplyTrackMap();
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        wcpl_openReplyTrackCleanupLocked(tracker, now);

        NSString *(^lookupSessionForKey)(NSString *) = ^NSString *(NSString *key) {
            if (key.length == 0) {
                return nil;
            }
            NSDictionary *entry = [tracker[key] isKindOfClass:[NSDictionary class]] ? tracker[key] : nil;
            NSString *trackedSession = wcpl_openReplyNormalizeSessionUserName(entry[@"session"]);
            if (trackedSession.length == 0) {
                return nil;
            }
            NSNumber *ts = [entry[@"ts"] isKindOfClass:[NSNumber class]] ? entry[@"ts"] : nil;
            if (!ts || (now - ts.doubleValue > kWCPLAutoReplyTrackTTL)) {
                return nil;
            }
            return trackedSession;
        };

        NSString *sendKey = wcpl_openReplyTrackKey(@"sendId", sendId);
        NSString *signKey = wcpl_openReplyTrackKey(@"sign", sign);
        NSString *timingKey = wcpl_openReplyTrackKey(@"timing", timingIdentifier);

        session = lookupSessionForKey(sendKey);
        if (session.length > 0) {
            source = @"sendId";
            return;
        }

        session = lookupSessionForKey(signKey);
        if (session.length > 0) {
            source = @"sign";
            return;
        }

        session = lookupSessionForKey(timingKey);
        if (session.length > 0) {
            source = @"timing";
            return;
        }

        NSDictionary *lastEntry = [tracker[@"__last__"] isKindOfClass:[NSDictionary class]] ? tracker[@"__last__"] : nil;
        NSString *lastSession = wcpl_openReplyNormalizeSessionUserName(lastEntry[@"session"]);
        NSNumber *lastTs = [lastEntry[@"ts"] isKindOfClass:[NSNumber class]] ? lastEntry[@"ts"] : nil;
        if (lastSession.length > 0 && lastTs && (now - lastTs.doubleValue <= kWCPLAutoReplyTrackFallbackAge)) {
            session = lastSession;
            source = @"last";
        }
    });

    if (sourceOut) {
        *sourceOut = source;
    }
    return session;
}
