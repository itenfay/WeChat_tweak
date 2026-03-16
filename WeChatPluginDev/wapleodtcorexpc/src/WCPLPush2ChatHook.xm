#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

#import "WCPLConfigCenter.h"
#import "WCPLContactAdapter.h"
#import "WCPLHookGovernance.h"
#import "WCPLUIKitHelpers.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenter.h"

#import <dispatch/dispatch.h>
#import <objc/message.h>

#import "BaseMsgContentViewController.h"
#import "CAppViewControllerManager.h"
#import "CContact.h"
#import "CContactMgr.h"
#import "MicroMessengerAppDelegate.h"
#import "MessagePageSheetAdapter.h"
#import "MMMsgLogicManager.h"
#import "NotificationActionsMgr.h"
#import "QuickReplyMsgMgr.h"

typedef NS_ENUM(NSInteger, WCPLPush2ChatContext) {
    WCPLPush2ChatContextBackground = 0,
    WCPLPush2ChatContextForeground = 1,
};

static NSString *const kWCPLHookFeaturePush2Chat = @"push2chat";

static void wcpl_push2chat_hookLog(NSString *className,
                                   NSString *selectorName,
                                   NSString *stage,
                                   NSString *decision,
                                   WCPLHookOrigPolicy policy,
                                   NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeaturePush2Chat,
                           className,
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static NSString *wcpl_push2chat_contextDescription(WCPLPush2ChatContext context) {
    return (context == WCPLPush2ChatContextForeground) ? @"fg" : @"bg";
}

static dispatch_queue_t wcpl_push2chat_traceQueue(void) {
    static dispatch_queue_t queue = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = dispatch_queue_create("com.wcpl.push2chat.trace", DISPATCH_QUEUE_SERIAL);
    });
    return queue;
}

static NSString *wcpl_push2chat_traceFilePath(void) {
    // 独立日志文件，避免依赖 WCPLLogger 的 logLevel 开关。
    // 写入微信沙盒 Documents，避免无权限写 /var/mobile 导致文件不存在。
    static NSString *path = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        if (![documentsPath isKindOfClass:[NSString class]] || documentsPath.length == 0) {
            path = @"/tmp/wcpl_push2chat.log";
        } else {
            path = [[documentsPath stringByAppendingPathComponent:@"wcpl_push2chat.log"] copy];
        }
    });
    return path;
}

static void wcpl_push2chat_trace(NSString *format, ...) {
    if (![format isKindOfClass:[NSString class]] || format.length == 0) return;

    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);

    NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], message];
    NSLog(@"[WCPL][Push2Chat] %@", message);

    dispatch_async(wcpl_push2chat_traceQueue(), ^{
        @autoreleasepool {
            NSString *path = wcpl_push2chat_traceFilePath();
            NSData *data = [line dataUsingEncoding:NSUTF8StringEncoding];
            if (!data) return;

            NSFileManager *fm = [NSFileManager defaultManager];
            if (![fm fileExistsAtPath:path]) {
                [fm createFileAtPath:path contents:nil attributes:nil];
            }

            NSFileHandle *fh = [NSFileHandle fileHandleForWritingAtPath:path];
            if (!fh) return;
            @try {
                [fh seekToEndOfFile];
                [fh writeData:data];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
            @try {
                [fh closeFile];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    });
}

static BOOL wcpl_push2chat_pageSheetIsVisible(void);
static BOOL wcpl_push2chat_hasForegroundHostUI(void);
static NSString *wcpl_push2chat_actionIdentifierFromResponse(id response);

static UIWindow *wcpl_push2chat_activeKeyWindow(void) {
    return WCPLKeyWindow();
}

static NSString *wcpl_push2chat_pendingUserName = nil;
static CFAbsoluteTime wcpl_push2chat_pendingSetTime = 0;
static WCPLPush2ChatContext wcpl_push2chat_pendingContext = WCPLPush2ChatContextBackground;
static NSString *wcpl_push2chat_coldStartUserName = nil;
static CFAbsoluteTime wcpl_push2chat_coldStartSetTime = 0;
static NSString *wcpl_push2chat_lastPageSheetUserName = nil;
static CFAbsoluteTime wcpl_push2chat_lastPageSheetSetTime = 0;
static NSString *wcpl_push2chat_preparedPageSheetUserName = nil;
static CFAbsoluteTime wcpl_push2chat_preparedPageSheetSetTime = 0;
static NSString *wcpl_push2chat_lastAppearedChatUserName = nil;
static CFAbsoluteTime wcpl_push2chat_lastAppearedChatSetTime = 0;
static UIView *wcpl_push2chat_transitionCoverView = nil;
static NSString *wcpl_push2chat_transitionCoverUserName = nil;
static CFAbsoluteTime wcpl_push2chat_transitionCoverSetTime = 0;
static const CFTimeInterval kWCPLPush2ChatPendingMaxAge = 30.0;
static const CFTimeInterval kWCPLPush2ChatColdStartMaxAge = 30.0;
static const CFTimeInterval kWCPLPush2ChatRecentPageSheetWindow = 8.0;
static const CFTimeInterval kWCPLPush2ChatPreparedPageSheetMaxAge = 90.0;
static const CFTimeInterval kWCPLPush2ChatChatAppearMaxAge = 2.0;
static const CFTimeInterval kWCPLPush2ChatBecomeActiveDelay = 0.35;
static const CFTimeInterval kWCPLPush2ChatBackgroundVerifyDelay = 0.9;
static const CFTimeInterval kWCPLPush2ChatVerifyPostPushDelay = 0.6;
static const CFTimeInterval kWCPLPush2ChatPageSheetRequestCooldown = 0.65;
static const CFTimeInterval kWCPLPush2ChatRetryInterval = 0.2;
static const CFTimeInterval kWCPLPush2ChatTransitionCoverMaxAge = 3.0;

static void wcpl_push2chat_setPendingUserName(NSString *userName,
                                              WCPLPush2ChatContext context,
                                              NSString *source) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;

    wcpl_push2chat_pendingUserName = [trimmed copy];
    wcpl_push2chat_pendingSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_pendingContext = context;
    wcpl_push2chat_trace(@"pending set: user=%@ ctx=%@ source=%@",
                         wcpl_push2chat_pendingUserName,
                         wcpl_push2chat_contextDescription(context),
                         source ?: @"(nil)");
}

static void wcpl_push2chat_markColdStartUserName(NSString *userName, NSString *reason) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;

    wcpl_push2chat_coldStartUserName = [trimmed copy];
    wcpl_push2chat_coldStartSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_trace(@"cold_start mark: user=%@ reason=%@", trimmed, reason ?: @"(nil)");
}

static BOOL wcpl_push2chat_hasFreshColdStartUserName(NSString *userName, CFTimeInterval maxAge) {
    if (![wcpl_push2chat_coldStartUserName isKindOfClass:[NSString class]] ||
        wcpl_push2chat_coldStartUserName.length == 0 ||
        wcpl_push2chat_coldStartSetTime <= 0) {
        return NO;
    }

    CFAbsoluteTime delta = CFAbsoluteTimeGetCurrent() - wcpl_push2chat_coldStartSetTime;
    if (delta > maxAge) {
        wcpl_push2chat_coldStartUserName = nil;
        wcpl_push2chat_coldStartSetTime = 0;
        return NO;
    }

    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return YES;
    return [wcpl_push2chat_coldStartUserName isEqualToString:trimmed];
}

static void wcpl_push2chat_clearColdStartUserNameIfMatch(NSString *userName, NSString *reason) {
    if (![wcpl_push2chat_coldStartUserName isKindOfClass:[NSString class]]) return;

    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length > 0 && ![wcpl_push2chat_coldStartUserName isEqualToString:trimmed]) {
        return;
    }

    wcpl_push2chat_trace(@"cold_start clear: user=%@ reason=%@",
                         wcpl_push2chat_coldStartUserName,
                         reason ?: @"(nil)");
    wcpl_push2chat_coldStartUserName = nil;
    wcpl_push2chat_coldStartSetTime = 0;
}

static NSString *wcpl_push2chat_takePendingUserNameIfFresh(CFTimeInterval maxAge,
                                                           WCPLPush2ChatContext *contextOut) {
    NSString *userName = wcpl_push2chat_pendingUserName;
    if (![userName isKindOfClass:[NSString class]] || userName.length == 0) {
        return nil;
    }

    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if (wcpl_push2chat_pendingSetTime <= 0 || (now - wcpl_push2chat_pendingSetTime) > maxAge) {
        wcpl_push2chat_pendingUserName = nil;
        wcpl_push2chat_pendingSetTime = 0;
        wcpl_push2chat_pendingContext = WCPLPush2ChatContextBackground;
        return nil;
    }

    WCPLPush2ChatContext context = wcpl_push2chat_pendingContext;
    wcpl_push2chat_pendingUserName = nil;
    wcpl_push2chat_pendingSetTime = 0;
    wcpl_push2chat_pendingContext = WCPLPush2ChatContextBackground;
    if (contextOut) {
        *contextOut = context;
    }
    return userName;
}

static void wcpl_push2chat_clearPendingUserNameIfMatch(NSString *userName, NSString *reason) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;
    if (![wcpl_push2chat_pendingUserName isKindOfClass:[NSString class]]) return;
    if (![wcpl_push2chat_pendingUserName isEqualToString:trimmed]) return;

    wcpl_push2chat_trace(@"pending clear: user=%@ reason=%@", trimmed, reason ?: @"(nil)");
    wcpl_push2chat_pendingUserName = nil;
    wcpl_push2chat_pendingSetTime = 0;
    wcpl_push2chat_pendingContext = WCPLPush2ChatContextBackground;
}

static void wcpl_push2chat_recordPageSheetUserName(NSString *userName, NSString *reason) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;
    wcpl_push2chat_lastPageSheetUserName = [trimmed copy];
    wcpl_push2chat_lastPageSheetSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_trace(@"pagesheet record: user=%@ reason=%@", trimmed, reason ?: @"(nil)");
}

static BOOL wcpl_push2chat_recentPageSheetUserMatches(NSString *userName, CFTimeInterval maxAge) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return NO;
    if (![wcpl_push2chat_lastPageSheetUserName isKindOfClass:[NSString class]]) return NO;
    if (![wcpl_push2chat_lastPageSheetUserName isEqualToString:trimmed]) return NO;
    if (wcpl_push2chat_lastPageSheetSetTime <= 0) return NO;
    CFAbsoluteTime delta = CFAbsoluteTimeGetCurrent() - wcpl_push2chat_lastPageSheetSetTime;
    return delta <= maxAge;
}

static BOOL wcpl_push2chat_hasRecentPageSheet(CFTimeInterval maxAge) {
    if (wcpl_push2chat_lastPageSheetSetTime <= 0) return NO;
    CFAbsoluteTime delta = CFAbsoluteTimeGetCurrent() - wcpl_push2chat_lastPageSheetSetTime;
    return delta <= maxAge;
}

static void wcpl_push2chat_markPreparedPageSheetUserName(NSString *userName, NSString *reason) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;

    wcpl_push2chat_preparedPageSheetUserName = [trimmed copy];
    wcpl_push2chat_preparedPageSheetSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_trace(@"pagesheet prepare mark: user=%@ reason=%@",
                         trimmed,
                         reason ?: @"(nil)");
}

static NSString *wcpl_push2chat_preparedPageSheetUserNameIfFresh(CFTimeInterval maxAge) {
    if (![wcpl_push2chat_preparedPageSheetUserName isKindOfClass:[NSString class]] ||
        wcpl_push2chat_preparedPageSheetUserName.length == 0 ||
        wcpl_push2chat_preparedPageSheetSetTime <= 0) {
        return nil;
    }

    CFAbsoluteTime delta = CFAbsoluteTimeGetCurrent() - wcpl_push2chat_preparedPageSheetSetTime;
    if (delta > maxAge) {
        wcpl_push2chat_preparedPageSheetUserName = nil;
        wcpl_push2chat_preparedPageSheetSetTime = 0;
        return nil;
    }

    return [wcpl_push2chat_preparedPageSheetUserName copy];
}

static void wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(NSString *userName, NSString *reason) {
    NSString *prepared = wcpl_push2chat_preparedPageSheetUserNameIfFresh(kWCPLPush2ChatPreparedPageSheetMaxAge);
    if (prepared.length == 0) return;

    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length > 0 && ![prepared isEqualToString:trimmed]) {
        return;
    }

    wcpl_push2chat_trace(@"pagesheet prepare clear: user=%@ reason=%@",
                         prepared,
                         reason ?: @"(nil)");
    wcpl_push2chat_preparedPageSheetUserName = nil;
    wcpl_push2chat_preparedPageSheetSetTime = 0;
}

static void wcpl_push2chat_recordAppearedChatUserName(NSString *userName, NSString *reason) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;

    wcpl_push2chat_lastAppearedChatUserName = [trimmed copy];
    wcpl_push2chat_lastAppearedChatSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_trace(@"chat appear: user=%@ reason=%@",
                         trimmed,
                         reason ?: @"(nil)");
}

static BOOL wcpl_push2chat_chatDidAppearRecently(NSString *userName, CFTimeInterval maxAge) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return NO;
    if (![wcpl_push2chat_lastAppearedChatUserName isKindOfClass:[NSString class]]) return NO;
    if (![wcpl_push2chat_lastAppearedChatUserName isEqualToString:trimmed]) return NO;
    if (wcpl_push2chat_lastAppearedChatSetTime <= 0) return NO;

    CFAbsoluteTime delta = CFAbsoluteTimeGetCurrent() - wcpl_push2chat_lastAppearedChatSetTime;
    return delta <= maxAge;
}

static void wcpl_push2chat_hideTransitionCover(NSString *reason) {
    if (![wcpl_push2chat_transitionCoverView isKindOfClass:[UIView class]]) return;

    wcpl_push2chat_trace(@"transition cover hide: user=%@ reason=%@",
                         wcpl_push2chat_transitionCoverUserName ?: @"(nil)",
                         reason ?: @"(nil)");
    @try {
        [wcpl_push2chat_transitionCoverView removeFromSuperview];
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    wcpl_push2chat_transitionCoverView = nil;
    wcpl_push2chat_transitionCoverUserName = nil;
    wcpl_push2chat_transitionCoverSetTime = 0;
}

static void wcpl_push2chat_showTransitionCover(NSString *userName, NSString *reason) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) return;

    UIWindow *window = wcpl_push2chat_activeKeyWindow();
    if (![window isKindOfClass:[UIWindow class]]) {
        wcpl_push2chat_trace(@"transition cover skip: window=nil user=%@ reason=%@",
                             trimmed,
                             reason ?: @"(nil)");
        return;
    }

    wcpl_push2chat_hideTransitionCover(@"replace");

    UIView *cover = [[UIView alloc] initWithFrame:window.bounds];
    cover.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    cover.backgroundColor = window.backgroundColor ?: [UIColor blackColor];
    UIView *snapshot = [window snapshotViewAfterScreenUpdates:NO];
    if ([snapshot isKindOfClass:[UIView class]]) {
        snapshot.frame = cover.bounds;
        snapshot.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        [cover addSubview:snapshot];
    }

    [window addSubview:cover];
    [window bringSubviewToFront:cover];

    wcpl_push2chat_transitionCoverView = cover;
    wcpl_push2chat_transitionCoverUserName = [trimmed copy];
    wcpl_push2chat_transitionCoverSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_trace(@"transition cover show: user=%@ reason=%@", trimmed, reason ?: @"(nil)");

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLPush2ChatTransitionCoverMaxAge * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        if (![wcpl_push2chat_transitionCoverView isKindOfClass:[UIView class]]) return;
        CFAbsoluteTime delta = CFAbsoluteTimeGetCurrent() - wcpl_push2chat_transitionCoverSetTime;
        if (delta < kWCPLPush2ChatTransitionCoverMaxAge) return;
        [UIView animateWithDuration:0.12 animations:^{
            wcpl_push2chat_transitionCoverView.alpha = 0.0;
        } completion:^(__unused BOOL finished) {
            wcpl_push2chat_hideTransitionCover(@"timeout");
        }];
    });
}

static WCPLPush2ChatContext wcpl_push2chat_resolveContextOnMainQueue(WCPLPush2ChatContext preferredContext,
                                                                     UIApplicationState state,
                                                                     WCPLPush2ChatConfig *cfg,
                                                                     NSString *source,
                                                                     NSString *userName) {
    WCPLPush2ChatContext context = preferredContext;
    if (preferredContext == WCPLPush2ChatContextBackground) {
        BOOL launchedFromTerminatedState =
            wcpl_push2chat_hasFreshColdStartUserName(userName, kWCPLPush2ChatColdStartMaxAge);
        if (launchedFromTerminatedState) {
            return WCPLPush2ChatContextBackground;
        }

        context = WCPLPush2ChatContextForeground;
        wcpl_push2chat_trace(@"context promote -> fg: source=%@ state=%@ user=%@ reason=process_alive",
                             source ?: @"(nil)",
                             WCPLApplicationStateDescription(state),
                             userName ?: @"(nil)");
    }

    if (state == UIApplicationStateActive) {
        context = WCPLPush2ChatContextForeground;
    }
    if (!cfg) return context;

    BOOL pageSheetVisible = wcpl_push2chat_pageSheetIsVisible();
    BOOL hasRecentPageSheet = wcpl_push2chat_hasRecentPageSheet(kWCPLPush2ChatRecentPageSheetWindow);
    BOOL hasForegroundHostUI = wcpl_push2chat_hasForegroundHostUI();

    if (state != UIApplicationStateBackground &&
        (cfg.foregroundPushMode == 1 || pageSheetVisible || hasRecentPageSheet || hasForegroundHostUI)) {
        if (context != WCPLPush2ChatContextForeground) {
            wcpl_push2chat_trace(@"context resolve -> fg: source=%@ state=%@ pageSheet=%@ recent=%@ hostUI=%@",
                                 source ?: @"(nil)",
                                 WCPLApplicationStateDescription(state),
                                 pageSheetVisible ? @"YES" : @"NO",
                                 hasRecentPageSheet ? @"YES" : @"NO",
                                 hasForegroundHostUI ? @"YES" : @"NO");
        }
        context = WCPLPush2ChatContextForeground;
    }

    return context;
}

static void wcpl_push2chat_openWithUserNameOnMainQueue(NSString *userName, WCPLPush2ChatContext context);

static void wcpl_push2chat_installDidBecomeActiveObserverOnce(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidBecomeActiveNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:^(__unused NSNotification *note) {
            WCPLPush2ChatContext pendingContext = WCPLPush2ChatContextBackground;
            NSString *pending = wcpl_push2chat_takePendingUserNameIfFresh(kWCPLPush2ChatPendingMaxAge, &pendingContext);
            if (pending.length == 0) return;

            wcpl_push2chat_trace(@"becomeActive: drain pending user=%@", pending);

            // 给主界面一点点缓冲时间，避免启动过程中 push 被后续重置覆盖。
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLPush2ChatBecomeActiveDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
                UIApplicationState state = [UIApplication sharedApplication].applicationState;
                WCPLPush2ChatContext context = wcpl_push2chat_resolveContextOnMainQueue(pendingContext,
                                                                                         state,
                                                                                         cfg,
                                                                                         @"becomeActive",
                                                                                         pending);
                wcpl_push2chat_trace(@"becomeActive: pending open ctx=%@ state=%@ user=%@",
                                     wcpl_push2chat_contextDescription(context),
                                     WCPLApplicationStateDescription(state),
                                     pending);
                wcpl_push2chat_clearColdStartUserNameIfMatch(pending, @"becomeActive_open");
                wcpl_push2chat_openWithUserNameOnMainQueue(pending, context);
            });
        }];
    });
}

static NSDictionary *wcpl_safeUserInfoFromNotificationResponse(id response) {
    if (!response) return nil;

    id notification = nil;
    @try {
        if ([response respondsToSelector:@selector(notification)]) {
            notification = ((id (*)(id, SEL))objc_msgSend)(response, @selector(notification));
        }
    } @catch (__unused NSException *exception) {
        notification = nil;
    }
    if (!notification) return nil;

    id request = nil;
    @try {
        if ([notification respondsToSelector:@selector(request)]) {
            request = ((id (*)(id, SEL))objc_msgSend)(notification, @selector(request));
        }
    } @catch (__unused NSException *exception) {
        request = nil;
    }
    if (!request) return nil;

    id content = nil;
    @try {
        if ([request respondsToSelector:@selector(content)]) {
            content = ((id (*)(id, SEL))objc_msgSend)(request, @selector(content));
        }
    } @catch (__unused NSException *exception) {
        content = nil;
    }
    if (!content) return nil;

    id userInfo = nil;
    @try {
        if ([content respondsToSelector:@selector(userInfo)]) {
            userInfo = ((id (*)(id, SEL))objc_msgSend)(content, @selector(userInfo));
        }
    } @catch (__unused NSException *exception) {
        userInfo = nil;
    }
    return [userInfo isKindOfClass:[NSDictionary class]] ? (NSDictionary *)userInfo : nil;
}

static NSString *wcpl_push2chat_actionIdentifierFromResponse(id response) {
    if (!response) return nil;
    if (![response respondsToSelector:@selector(actionIdentifier)]) return nil;

    id actionIdentifier = nil;
    @try {
        actionIdentifier = ((id (*)(id, SEL))objc_msgSend)(response, @selector(actionIdentifier));
    } @catch (__unused NSException *exception) {
        actionIdentifier = nil;
    }
    if (![actionIdentifier isKindOfClass:[NSString class]]) return nil;
    return WCPLTrimText((NSString *)actionIdentifier);
}

static NSString *wcpl_push2chat_requestIdentifierFromResponse(id response) {
    if (!response) return nil;

    id notification = nil;
    @try {
        if ([response respondsToSelector:@selector(notification)]) {
            notification = ((id (*)(id, SEL))objc_msgSend)(response, @selector(notification));
        }
    } @catch (__unused NSException *exception) {
        notification = nil;
    }
    if (!notification) return nil;

    id request = nil;
    @try {
        if ([notification respondsToSelector:@selector(request)]) {
            request = ((id (*)(id, SEL))objc_msgSend)(notification, @selector(request));
        }
    } @catch (__unused NSException *exception) {
        request = nil;
    }
    if (!request) return nil;

    id identifier = nil;
    @try {
        if ([request respondsToSelector:@selector(identifier)]) {
            identifier = ((id (*)(id, SEL))objc_msgSend)(request, @selector(identifier));
        }
    } @catch (__unused NSException *exception) {
        identifier = nil;
    }

    return [identifier isKindOfClass:[NSString class]] ? WCPLTrimText((NSString *)identifier) : nil;
}

static BOOL wcpl_push2chat_shouldDropDuplicateTap(NSString *tapKey, CFTimeInterval window) {
    NSString *key = WCPLTrimText(tapKey);
    if (key.length == 0) return NO;

    static NSString *lastTapKey = nil;
    static CFAbsoluteTime lastTapTime = 0;
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if ([lastTapKey isKindOfClass:[NSString class]] &&
        [lastTapKey isEqualToString:key] &&
        lastTapTime > 0 &&
        (now - lastTapTime) < window) {
        wcpl_push2chat_trace(@"tap dedupe hit: key=%@ delta=%.3f", key, now - lastTapTime);
        return YES;
    }

    lastTapKey = [key copy];
    lastTapTime = now;
    return NO;
}

static NSString *wcpl_push2chat_targetUserNameFromUserInfo(NSDictionary *userInfo) {
    if (![userInfo isKindOfClass:[NSDictionary class]] || userInfo.count == 0) return nil;

    // 兼容不同通知 payload 键名：优先使用 wcpush 的约定 key="u"。
    NSArray<NSString *> *candidateKeys = @[
        @"u",
        @"userName",
        @"username",
        @"sessionUserName",
        @"session",
        @"fromUserName",
        @"fromusername",
        @"fromUser",
    ];

    for (NSString *key in candidateKeys) {
        id value = userInfo[key];
        if ([value isKindOfClass:[NSString class]]) {
            NSString *trimmed = WCPLTrimText((NSString *)value);
            if (trimmed.length > 0) {
                return trimmed;
            }
        }
    }

    return nil;
}

static id wcpl_push2chat_contactForUserName(NSString *userName) {
    return WCPLContactAdapterFindContactByUserName(userName);
}

static UIViewController *wcpl_push2chat_findTopViewControllerFallback(void) {
    return WCPLTopVisibleViewController();
}

static UIViewController *wcpl_push2chat_findTopViewController(void) {
    // 与 wcpush 逻辑保持一致：使用基于 keyWindow 的 topVC 选择，避免 topMostController 返回不可展示 VC。
    return wcpl_push2chat_findTopViewControllerFallback();
}

static UINavigationController *wcpl_push2chat_navigationControllerForViewController(UIViewController *viewController) {
    if ([viewController isKindOfClass:[UINavigationController class]]) {
        return (UINavigationController *)viewController;
    }

    UINavigationController *nav = [viewController isKindOfClass:[UIViewController class]] ? viewController.navigationController : nil;
    if ([nav isKindOfClass:[UINavigationController class]]) {
        return nav;
    }

    return nil;
}

static BOOL wcpl_push2chat_classLooksLikePageSheet(Class cls) {
    NSString *className = cls ? (NSStringFromClass(cls) ?: @"") : @"";
    if (className.length == 0) return NO;
    return [className rangeOfString:@"PageSheet" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static BOOL wcpl_push2chat_pageSheetIsVisible(void) {
    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if ([topVC isKindOfClass:[UIViewController class]] &&
        wcpl_push2chat_classLooksLikePageSheet([topVC class])) {
        return YES;
    }

    UIViewController *cursor = topVC;
    NSUInteger depth = 0;
    while ([cursor isKindOfClass:[UIViewController class]] && depth < 6) {
        UIViewController *presented = cursor.presentedViewController;
        if (![presented isKindOfClass:[UIViewController class]]) {
            break;
        }
        if (wcpl_push2chat_classLooksLikePageSheet([presented class])) {
            return YES;
        }
        cursor = presented;
        depth += 1;
    }

    UINavigationController *nav = [topVC isKindOfClass:[UIViewController class]] ? topVC.navigationController : nil;
    if ([nav isKindOfClass:[UINavigationController class]]) {
        NSArray<UIViewController *> *stack = nav.viewControllers;
        for (UIViewController *vc in [stack reverseObjectEnumerator]) {
            if ([vc isKindOfClass:[UIViewController class]] &&
                wcpl_push2chat_classLooksLikePageSheet([vc class])) {
                return YES;
            }
        }
    }

    return NO;
}

static BOOL wcpl_push2chat_hasForegroundHostUI(void) {
    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if (![topVC isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    @try {
        UIWindow *topWindow = topVC.view.window;
        if ([topWindow isKindOfClass:[UIWindow class]] && !topWindow.hidden && topWindow.alpha > 0.01) {
            return YES;
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    UINavigationController *nav = topVC.navigationController;
    if ([nav isKindOfClass:[UINavigationController class]]) {
        @try {
            UIWindow *navWindow = nav.view.window;
            if ([navWindow isKindOfClass:[UIWindow class]] && !navWindow.hidden && navWindow.alpha > 0.01) {
                return YES;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return wcpl_push2chat_pageSheetIsVisible();
}

static NSString *wcpl_push2chat_userNameFromContact(id chatContact) {
    return WCPLContactAdapterSafeUserName(chatContact);
}

static NSString *wcpl_push2chat_extractSessionUserNameFromViewController(UIViewController *viewController,
                                                                         NSUInteger depth,
                                                                         NSMutableSet<NSValue *> *visited) {
    if (![viewController isKindOfClass:[UIViewController class]] || depth > 8) {
        return nil;
    }

    NSValue *identity = [NSValue valueWithPointer:(__bridge const void *)(viewController)];
    if ([visited containsObject:identity]) {
        return nil;
    }
    [visited addObject:identity];

    Class baseMsgClass = objc_getClass("BaseMsgContentViewController");
    if (baseMsgClass && [viewController isKindOfClass:baseMsgClass]) {
        id chatContact = nil;
        @try {
            if ([viewController respondsToSelector:@selector(getChatContact)]) {
                chatContact = ((id (*)(id, SEL))objc_msgSend)(viewController, @selector(getChatContact));
            } else if ([viewController respondsToSelector:@selector(GetContact)]) {
                chatContact = ((id (*)(id, SEL))objc_msgSend)(viewController, @selector(GetContact));
            }
        } @catch (__unused NSException *exception) {
            chatContact = nil;
        }

        NSString *sessionUser = wcpl_push2chat_userNameFromContact(chatContact);
        if (sessionUser.length > 0) {
            return sessionUser;
        }
    }

    NSArray<NSString *> *singleSelectors = @[
        @"visibleViewController",
        @"topViewController",
        @"selectedViewController",
        @"presentedViewController",
        @"contentViewController",
        @"currentViewController",
        @"viewController"
    ];
    for (NSString *selectorName in singleSelectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![viewController respondsToSelector:selector]) continue;
        id child = nil;
        @try {
            child = ((id (*)(id, SEL))objc_msgSend)(viewController, selector);
        } @catch (__unused NSException *exception) {
            child = nil;
        }
        if (![child isKindOfClass:[UIViewController class]]) continue;

        NSString *sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController((UIViewController *)child, depth + 1, visited);
        if (sessionUser.length > 0) {
            return sessionUser;
        }
    }

    NSArray<NSString *> *arraySelectors = @[@"viewControllers", @"childViewControllers"];
    for (NSString *selectorName in arraySelectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![viewController respondsToSelector:selector]) continue;

        id children = nil;
        @try {
            children = ((id (*)(id, SEL))objc_msgSend)(viewController, selector);
        } @catch (__unused NSException *exception) {
            children = nil;
        }
        if (![children isKindOfClass:[NSArray class]]) continue;

        for (id obj in (NSArray *)children) {
            if (![obj isKindOfClass:[UIViewController class]]) continue;
            NSString *sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController((UIViewController *)obj, depth + 1, visited);
            if (sessionUser.length > 0) {
                return sessionUser;
            }
        }
    }

    return nil;
}

static NSString *wcpl_push2chat_currentSessionUserName(void) {
    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if (![topVC isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    NSMutableSet<NSValue *> *visited = [NSMutableSet set];
    NSString *sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController(topVC, 0, visited);
    if (sessionUser.length > 0) {
        return sessionUser;
    }

    UINavigationController *nav = topVC.navigationController;
    if ([nav isKindOfClass:[UINavigationController class]]) {
        for (UIViewController *vc in [nav.viewControllers reverseObjectEnumerator]) {
            if (![vc isKindOfClass:[UIViewController class]]) {
                continue;
            }
            sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController(vc, 1, visited);
            if (sessionUser.length > 0) {
                return sessionUser;
            }
        }
    }

    return nil;
}

static UIViewController *wcpl_push2chat_visibleChatViewControllerForUserName(NSString *userName) {
    NSString *target = WCPLTrimText(userName);
    if (target.length == 0) return nil;

    Class baseMsgClass = objc_getClass("BaseMsgContentViewController");
    if (!baseMsgClass) return nil;

    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if (![topVC isKindOfClass:[UIViewController class]]) return nil;

    NSMutableArray<UIViewController *> *candidates = [NSMutableArray array];
    [candidates addObject:topVC];

    UINavigationController *nav = topVC.navigationController;
    if ([nav isKindOfClass:[UINavigationController class]]) {
        UIViewController *visible = nav.visibleViewController;
        if ([visible isKindOfClass:[UIViewController class]]) {
            [candidates addObject:visible];
        }
        NSArray<UIViewController *> *stack = nav.viewControllers;
        if ([stack isKindOfClass:[NSArray class]]) {
            for (UIViewController *vc in [stack reverseObjectEnumerator]) {
                if ([vc isKindOfClass:[UIViewController class]]) {
                    [candidates addObject:vc];
                }
            }
        }
    }

    UIViewController *parent = topVC.parentViewController;
    if ([parent isKindOfClass:[UIViewController class]]) {
        [candidates addObject:parent];
    }

    NSMutableSet<NSValue *> *visited = [NSMutableSet set];
    for (UIViewController *candidate in candidates) {
        if (![candidate isKindOfClass:baseMsgClass]) continue;

        NSValue *identity = [NSValue valueWithPointer:(__bridge const void *)(candidate)];
        if ([visited containsObject:identity]) continue;
        [visited addObject:identity];

        NSString *sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController(candidate, 0, [NSMutableSet set]);
        if ([sessionUser isEqualToString:target]) {
            return candidate;
        }
    }

    return nil;
}

static UIViewController *wcpl_push2chat_pageSheetHostViewControllerForChatViewController(UIViewController *chatVC) {
    if (![chatVC isKindOfClass:[UIViewController class]]) return nil;

    UINavigationController *nav = wcpl_push2chat_navigationControllerForViewController(chatVC);
    if ([nav isKindOfClass:[UINavigationController class]]) {
        return nav;
    }

    UIViewController *parent = chatVC.parentViewController;
    if ([parent isKindOfClass:[UIViewController class]]) {
        return parent;
    }

    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if ([topVC isKindOfClass:[UIViewController class]]) {
        return topVC;
    }

    return chatVC;
}

static void wcpl_push2chat_recoverPreparedPageSheetIfNeeded(NSString *userName, NSString *reason) {
    NSString *target = WCPLTrimText(userName);
    if (target.length == 0) return;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.05 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        NSString *prepared = wcpl_push2chat_preparedPageSheetUserNameIfFresh(kWCPLPush2ChatPreparedPageSheetMaxAge);
        if (![prepared isEqualToString:target]) {
            return;
        }

        if (wcpl_push2chat_pageSheetIsVisible()) {
            wcpl_push2chat_trace(@"pagesheet close recover skip: still_visible user=%@ reason=%@",
                                 target,
                                 reason ?: @"(nil)");
            return;
        }

        UIViewController *topVC = wcpl_push2chat_findTopViewController();
        UINavigationController *nav = wcpl_push2chat_navigationControllerForViewController(topVC);
        if (![nav isKindOfClass:[UINavigationController class]]) {
            wcpl_push2chat_trace(@"pagesheet close recover skip: nav=nil user=%@ top=%@ reason=%@",
                                 target,
                                 NSStringFromClass([topVC class]),
                                 reason ?: @"(nil)");
            wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(target, @"recover_nav_nil");
            return;
        }

        NSArray<UIViewController *> *stack = nav.viewControllers;
        if (![stack isKindOfClass:[NSArray class]] || stack.count <= 1) {
            wcpl_push2chat_trace(@"pagesheet close recover skip: stack=%lu user=%@ reason=%@",
                                 (unsigned long)stack.count,
                                 target,
                                 reason ?: @"(nil)");
            wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(target, @"recover_stack_short");
            return;
        }

        NSString *currentSession = wcpl_push2chat_currentSessionUserName();
        if (currentSession.length > 0 && ![currentSession isEqualToString:target]) {
            wcpl_push2chat_trace(@"pagesheet close recover skip: current=%@ target=%@ reason=%@",
                                 currentSession,
                                 target,
                                 reason ?: @"(nil)");
            wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(target, @"recover_session_changed");
            return;
        }

        @try {
            UIViewController *popped = nav.topViewController;
            [nav popViewControllerAnimated:NO];
            wcpl_push2chat_trace(@"pagesheet close recover: pop=%@ user=%@ stack=%lu reason=%@",
                                 NSStringFromClass([popped class]),
                                 target,
                                 (unsigned long)stack.count,
                                 reason ?: @"(nil)");
        } @catch (__unused NSException *exception) {
            wcpl_push2chat_trace(@"pagesheet close recover exception: user=%@ reason=%@",
                                 target,
                                 reason ?: @"(nil)");
        }

        wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(target, @"recover_done");
    });
}

static BOOL wcpl_push2chat_promoteVisibleChatToPageSheet(NSString *userName, NSString *reason) {
    NSString *target = WCPLTrimText(userName);
    if (target.length == 0) return NO;

    UIViewController *chatVC = wcpl_push2chat_visibleChatViewControllerForUserName(target);
    if (![chatVC isKindOfClass:[UIViewController class]]) {
        wcpl_push2chat_trace(@"promote skip: chatVC=nil user=%@ reason=%@", target, reason ?: @"(nil)");
        return NO;
    }

    id quickMgr = WCPLGetService(objc_getClass("QuickReplyMsgMgr"));
    if (!quickMgr) {
        wcpl_push2chat_trace(@"promote skip: QuickReplyMsgMgr=nil user=%@ reason=%@", target, reason ?: @"(nil)");
        return NO;
    }

    id adapter = nil;
    @try {
        if ([objc_getClass("MessagePageSheetAdapter") respondsToSelector:@selector(adapterWithMsgViewController:)]) {
            adapter = ((id (*)(id, SEL, id))objc_msgSend)(objc_getClass("MessagePageSheetAdapter"),
                                                          @selector(adapterWithMsgViewController:),
                                                          chatVC);
        }
    } @catch (__unused NSException *exception) {
        adapter = nil;
    }
    if (!adapter) {
        wcpl_push2chat_trace(@"promote skip: adapter=nil user=%@ reason=%@", target, reason ?: @"(nil)");
        return NO;
    }

    UIViewController *host = wcpl_push2chat_pageSheetHostViewControllerForChatViewController(chatVC);
    if (![host isKindOfClass:[UIViewController class]]) {
        wcpl_push2chat_trace(@"promote skip: host=nil user=%@ reason=%@", target, reason ?: @"(nil)");
        return NO;
    }

    @try {
        if ([chatVC respondsToSelector:@selector(setIsPageSheetSessionWillRestore:)]) {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(chatVC, @selector(setIsPageSheetSessionWillRestore:), YES);
        }
        if ([adapter respondsToSelector:@selector(setCurrUsername:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(adapter, @selector(setCurrUsername:), target);
        }
        if ([adapter respondsToSelector:@selector(setShouldCallbackAtPageSheetAppear:)]) {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(adapter, @selector(setShouldCallbackAtPageSheetAppear:), YES);
        }
        if ([adapter respondsToSelector:@selector(setHostViewController:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(adapter, @selector(setHostViewController:), host);
        }
        if ([adapter respondsToSelector:@selector(setDelegate:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(adapter, @selector(setDelegate:), quickMgr);
        }
        if ([adapter respondsToSelector:@selector(setBizDelegate:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(adapter, @selector(setBizDelegate:), quickMgr);
        }
        if ([chatVC respondsToSelector:@selector(setPageSheetAdapter:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(setPageSheetAdapter:), adapter);
        }
        if ([quickMgr respondsToSelector:@selector(setPageSheetAdapter:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(quickMgr, @selector(setPageSheetAdapter:), adapter);
        }

        wcpl_push2chat_trace(@"promote(pageSheet): user=%@ chatVC=%@ host=%@ reason=%@",
                             target,
                             NSStringFromClass([chatVC class]),
                             NSStringFromClass([host class]),
                             reason ?: @"(nil)");
        if ([adapter respondsToSelector:@selector(showFromViewController:animated:)]) {
            ((void (*)(id, SEL, id, BOOL))objc_msgSend)(adapter,
                                                        @selector(showFromViewController:animated:),
                                                        host,
                                                        YES);
        } else if ([adapter respondsToSelector:@selector(showFromViewController:animated:complete:)]) {
            ((void (*)(id, SEL, id, BOOL, id))objc_msgSend)(adapter,
                                                            @selector(showFromViewController:animated:complete:),
                                                            host,
                                                            YES,
                                                            nil);
        } else {
            return NO;
        }
        wcpl_push2chat_recordPageSheetUserName(target, reason ?: @"promote_pagesheet");
        NSString *preparedUser = wcpl_push2chat_preparedPageSheetUserNameIfFresh(kWCPLPush2ChatPreparedPageSheetMaxAge);
        if ([preparedUser isEqualToString:target]) {
            wcpl_push2chat_markPreparedPageSheetUserName(target, @"pagesheet_presented");
        }
        return YES;
    } @catch (__unused NSException *exception) {
        wcpl_push2chat_trace(@"promote(pageSheet) exception: user=%@ reason=%@", target, reason ?: @"(nil)");
    }

    return NO;
}

static BOOL wcpl_push2chat_dismissVisiblePageSheetIfNeededWithCompletion(UIViewController *topVC,
                                                                         NSString *reason,
                                                                         dispatch_block_t completion) {
    if (![topVC isKindOfClass:[UIViewController class]]) return NO;

    UIViewController *target = nil;
    if (wcpl_push2chat_classLooksLikePageSheet([topVC class])) {
        target = topVC;
    } else {
        UIViewController *presented = topVC.presentedViewController;
        if ([presented isKindOfClass:[UIViewController class]] &&
            wcpl_push2chat_classLooksLikePageSheet([presented class])) {
            target = presented;
        }
    }
    if (![target isKindOfClass:[UIViewController class]]) return NO;

    @try {
        wcpl_push2chat_trace(@"dismiss pagesheet: reason=%@ vc=%@", reason ?: @"(nil)", NSStringFromClass([target class]));
        [target dismissViewControllerAnimated:NO completion:completion];
        return YES;
    } @catch (__unused NSException *exception) {
        wcpl_push2chat_trace(@"dismiss pagesheet exception: reason=%@", reason ?: @"(nil)");
    }
    return NO;
}

static BOOL wcpl_push2chat_dismissVisiblePageSheetIfNeeded(UIViewController *topVC, NSString *reason) {
    return wcpl_push2chat_dismissVisiblePageSheetIfNeededWithCompletion(topVC, reason, nil);
}

static void wcpl_push2chat_pruneChatControllersIfNeeded(UINavigationController *nav, NSString *reason) {
    if (![nav isKindOfClass:[UINavigationController class]]) return;
    NSArray<UIViewController *> *stack = nav.viewControllers;
    if (![stack isKindOfClass:[NSArray class]] || stack.count == 0) return;

    Class baseMsgClass = objc_getClass("BaseMsgContentViewController");
    if (!baseMsgClass) return;

    NSMutableArray<UIViewController *> *kept = [NSMutableArray arrayWithCapacity:stack.count];
    BOOL removed = NO;
    for (UIViewController *vc in stack) {
        if (![vc isKindOfClass:[UIViewController class]]) continue;
        if ([vc isKindOfClass:baseMsgClass]) {
            removed = YES;
            continue;
        }
        [kept addObject:vc];
    }
    if (!removed) return;

    if (kept.count == 0) {
        UIViewController *root = stack.firstObject;
        if ([root isKindOfClass:[UIViewController class]]) {
            [kept addObject:root];
        }
    }

    @try {
        [nav setViewControllers:kept animated:NO];
        wcpl_push2chat_trace(@"prune chat stack: reason=%@ before=%lu after=%lu",
                             reason ?: @"(nil)",
                             (unsigned long)stack.count,
                             (unsigned long)kept.count);
    } @catch (__unused NSException *exception) {
        wcpl_push2chat_trace(@"prune chat stack exception: reason=%@", reason ?: @"(nil)");
    }
}

static BOOL wcpl_push2chat_forcePushToChat(id contact, NSString *userName, NSString *reason) {
    if (!contact || userName.length == 0) return NO;
    BOOL forPageSheetPrepare = [reason isEqualToString:@"prepare_pagesheet"];

    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if (![topVC isKindOfClass:[UIViewController class]]) {
        wcpl_push2chat_trace(@"push(fallback:%@) skip: topVC=nil user=%@", reason ?: @"unknown", userName);
        return NO;
    }

    UINavigationController *nav = wcpl_push2chat_navigationControllerForViewController(topVC);
    if (![nav isKindOfClass:[UINavigationController class]]) {
        wcpl_push2chat_trace(@"push(fallback:%@) skip: nav=nil topVC=%@ user=%@", reason ?: @"unknown", NSStringFromClass([topVC class]), userName);
        return NO;
    }

    wcpl_push2chat_dismissVisiblePageSheetIfNeeded(topVC, @"force_push");
    wcpl_push2chat_pruneChatControllersIfNeeded(nav, @"force_push");

    id logicMgr = WCPLGetService(objc_getClass("MMMsgLogicManager"));
    if (!logicMgr || ![logicMgr respondsToSelector:@selector(PushOtherBaseMsgControllerByContact:navigationController:animated:)]) {
        return NO;
    }

    BOOL animated = !forPageSheetPrepare;
    if (forPageSheetPrepare) {
        wcpl_push2chat_showTransitionCover(userName, reason);
    }
    @try {
        wcpl_push2chat_trace(@"push(fallback:%@): user=%@ contact=%@ nav=%@", reason ?: @"unknown", userName, contact, nav);
        ((void (*)(id, SEL, id, id, BOOL))objc_msgSend)(logicMgr,
                                                        @selector(PushOtherBaseMsgControllerByContact:navigationController:animated:),
                                                        contact,
                                                        nav,
                                                        animated);
        if (forPageSheetPrepare) {
            wcpl_push2chat_markPreparedPageSheetUserName(userName, reason);
        }
        return YES;
    } @catch (__unused NSException *exception) {
        wcpl_push2chat_trace(@"push(fallback:%@) exception: user=%@", reason ?: @"unknown", userName);
    }

    if (forPageSheetPrepare) {
        wcpl_push2chat_hideTransitionCover(@"prepare_push_exception");
    }

    return NO;
}

static BOOL wcpl_push2chat_showDirectPageSheetForContact(id contact,
                                                         NSString *userName,
                                                         UIViewController *host,
                                                         NSString *reason) {
    NSString *target = WCPLTrimText(userName);
    if (!contact || target.length == 0) return NO;
    if (![host isKindOfClass:[UIViewController class]]) return NO;

    id logicMgr = WCPLGetService(objc_getClass("MMMsgLogicManager"));
    id quickMgr = WCPLGetService(objc_getClass("QuickReplyMsgMgr"));
    if (!logicMgr || !quickMgr) {
        wcpl_push2chat_trace(@"pagesheet direct skip: logic=%@ quick=%@ user=%@ reason=%@",
                             logicMgr ? @"YES" : @"NO",
                             quickMgr ? @"YES" : @"NO",
                             target,
                             reason ?: @"(nil)");
        return NO;
    }

    wcpl_push2chat_hideTransitionCover(@"direct_pagesheet");
    wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(target, @"direct_pagesheet");

    @try {
        wcpl_push2chat_trace(@"pagesheet direct request: user=%@ host=%@ reason=%@",
                             target,
                             NSStringFromClass([host class]),
                             reason ?: @"(nil)");
        if ([logicMgr respondsToSelector:@selector(ShowPageSheetLogicControllerByContact:pageSheetDelegate:fromViewController:animated:)]) {
            ((void (*)(id, SEL, id, id, id, BOOL))objc_msgSend)(logicMgr,
                                                                @selector(ShowPageSheetLogicControllerByContact:pageSheetDelegate:fromViewController:animated:),
                                                                contact,
                                                                quickMgr,
                                                                host,
                                                                YES);
        } else if ([logicMgr respondsToSelector:@selector(ShowPageSheetLogicControllerByContact:pageSheetDelegate:toMessage:fromViewController:animated:complete:)]) {
            ((void (*)(id, SEL, id, id, id, id, BOOL, id))objc_msgSend)(logicMgr,
                                                                        @selector(ShowPageSheetLogicControllerByContact:pageSheetDelegate:toMessage:fromViewController:animated:complete:),
                                                                        contact,
                                                                        quickMgr,
                                                                        nil,
                                                                        host,
                                                                        YES,
                                                                        nil);
        } else if ([logicMgr respondsToSelector:@selector(ShowPageSheetLogicControllerByContact:pageSheetDelegate:toMessage:fromViewController:animated:extraInfo:complete:)]) {
            ((void (*)(id, SEL, id, id, id, id, BOOL, id, id))objc_msgSend)(logicMgr,
                                                                             @selector(ShowPageSheetLogicControllerByContact:pageSheetDelegate:toMessage:fromViewController:animated:extraInfo:complete:),
                                                                             contact,
                                                                             quickMgr,
                                                                             nil,
                                                                             host,
                                                                             YES,
                                                                             nil,
                                                                             nil);
        } else {
            wcpl_push2chat_trace(@"pagesheet direct skip: selector_missing user=%@ reason=%@",
                                 target,
                                 reason ?: @"(nil)");
            return NO;
        }

        wcpl_push2chat_recordPageSheetUserName(target, reason ?: @"direct_pagesheet_request");
        return YES;
    } @catch (__unused NSException *exception) {
        wcpl_push2chat_trace(@"pagesheet direct exception: user=%@ host=%@ reason=%@",
                             target,
                             NSStringFromClass([host class]),
                             reason ?: @"(nil)");
    }

    return NO;
}

static BOOL wcpl_push2chat_handleVisiblePageSheetSwitchIfNeeded(UIViewController *topVC,
                                                                id contact,
                                                                NSString *targetUserName,
                                                                WCPLPush2ChatContext context) {
    if (!wcpl_push2chat_pageSheetIsVisible()) {
        return NO;
    }

    NSString *sheetSession = wcpl_push2chat_currentSessionUserName();
    if ([sheetSession isKindOfClass:[NSString class]] && [sheetSession isEqualToString:targetUserName]) {
        wcpl_push2chat_recordPageSheetUserName(targetUserName, @"pagesheet_visible_same_user");
        wcpl_push2chat_trace(@"skip open: pagesheet already visible user=%@ ctx=%@",
                             targetUserName,
                             wcpl_push2chat_contextDescription(context));
        return YES;
    }

    wcpl_push2chat_trace(@"pagesheet switch: close current=%@ target=%@ ctx=%@",
                         sheetSession ?: @"(nil)",
                         targetUserName ?: @"(nil)",
                         wcpl_push2chat_contextDescription(context));
    wcpl_push2chat_hideTransitionCover(@"pagesheet_switch");
    wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(sheetSession, @"pagesheet_switch");
    return wcpl_push2chat_dismissVisiblePageSheetIfNeededWithCompletion(topVC,
                                                                        @"switch_pagesheet_user",
                                                                        ^{
        UIViewController *host = wcpl_push2chat_findTopViewController();
        if (![host isKindOfClass:[UIViewController class]]) {
            wcpl_push2chat_trace(@"pagesheet switch reopen skip: host=nil target=%@ ctx=%@",
                                 targetUserName ?: @"(nil)",
                                 wcpl_push2chat_contextDescription(context));
            return;
        }
        if (!wcpl_push2chat_showDirectPageSheetForContact(contact,
                                                          targetUserName,
                                                          host,
                                                          @"switch_pagesheet_user")) {
            wcpl_push2chat_trace(@"pagesheet switch reopen failed: target=%@ host=%@ ctx=%@",
                                 targetUserName ?: @"(nil)",
                                 NSStringFromClass([host class]),
                                 wcpl_push2chat_contextDescription(context));
        }
    });
}

static BOOL wcpl_push2chat_tryOpenSession(id contact, NSString *userName, WCPLPush2ChatContext context) {
    if (![userName isKindOfClass:[NSString class]] || userName.length == 0) {
        return YES;
    }

    NSString *currentSession = wcpl_push2chat_currentSessionUserName();

    // 与 wcpush 对齐：以 topVC 作为展示 VC。
    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if (![topVC isKindOfClass:[UIViewController class]]) {
        wcpl_push2chat_trace(@"tryOpen: topVC=nil user=%@", userName);
        return NO;
    }
    UINavigationController *nav = topVC.navigationController;
    BOOL hasNav = [nav isKindOfClass:[UINavigationController class]];
    if (!hasNav) {
        wcpl_push2chat_trace(@"tryOpen: nav=nil topVC=%@ user=%@", NSStringFromClass([topVC class]), userName);
        if (context == WCPLPush2ChatContextForeground) {
            return NO;
        }
    }

    WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
    BOOL pageSheetVisible = wcpl_push2chat_pageSheetIsVisible();
    BOOL hasRecentPageSheet = wcpl_push2chat_hasRecentPageSheet(kWCPLPush2ChatRecentPageSheetWindow);
    NSInteger mode = (context == WCPLPush2ChatContextForeground) ? cfg.foregroundPushMode : cfg.backgroundPushMode;
    // 激进策略：只要当前存在/刚存在半屏，就强制继续走半屏替换链路，避免切回全屏。
    BOOL forcePageSheetPreference = (pageSheetVisible || hasRecentPageSheet);
    if (forcePageSheetPreference && mode != 1) {
        mode = 1;
        wcpl_push2chat_trace(@"mode override -> pagesheet: user=%@ ctx=%@",
                             userName,
                             wcpl_push2chat_contextDescription(context));
    }

    wcpl_push2chat_trace(@"tryOpen: ctx=%@ mode=%ld topVC=%@ nav=%@ user=%@",
                         wcpl_push2chat_contextDescription(context),
                         (long)mode,
                         NSStringFromClass([topVC class]),
                         hasNav ? NSStringFromClass([nav class]) : @"(nil)",
                         userName);

    if ([currentSession isKindOfClass:[NSString class]] && [currentSession isEqualToString:userName]) {
        if (wcpl_push2chat_pageSheetIsVisible()) {
            wcpl_push2chat_recordPageSheetUserName(userName, @"already_in_session");
            wcpl_push2chat_trace(@"skip open: pagesheet already visible user=%@ ctx=%@",
                                 userName,
                                 wcpl_push2chat_contextDescription(context));
            return YES;
        }

        if (mode == 1) {
            if (wcpl_push2chat_recentPageSheetUserMatches(userName, kWCPLPush2ChatPageSheetRequestCooldown)) {
                return NO;
            }
            if (wcpl_push2chat_showDirectPageSheetForContact(contact,
                                                             userName,
                                                             topVC,
                                                             @"already_in_session_direct")) {
                wcpl_push2chat_trace(@"pagesheet request accepted: user=%@ ctx=%@ reason=%@",
                                     userName,
                                     wcpl_push2chat_contextDescription(context),
                                     @"already_in_session_direct");
                return YES;
            }
            return NO;
        }

        wcpl_push2chat_trace(@"skip open: already in session user=%@ ctx=%@", userName, wcpl_push2chat_contextDescription(context));
        return YES;
    }

    if (mode == 1) {
        if (pageSheetVisible) {
            if (wcpl_push2chat_handleVisiblePageSheetSwitchIfNeeded(topVC,
                                                                    contact,
                                                                    userName,
                                                                    context)) {
                return YES;
            }
        }

        // 冷却：避免重复 show/dismiss 导致闪烁或被 WeChat 视为无效请求。
        if (wcpl_push2chat_recentPageSheetUserMatches(userName, kWCPLPush2ChatPageSheetRequestCooldown)) {
            return NO;
        }

        if (!contact) {
            wcpl_push2chat_trace(@"pagesheet skip: contact=nil user=%@", userName);
            return NO;
        }

        if (wcpl_push2chat_showDirectPageSheetForContact(contact,
                                                         userName,
                                                         topVC,
                                                         @"direct_pagesheet")) {
            wcpl_push2chat_trace(@"pagesheet request accepted: user=%@ ctx=%@ reason=%@",
                                 userName,
                                 wcpl_push2chat_contextDescription(context),
                                 @"direct_pagesheet");
            return YES;
        }
        return NO;
    }

    BOOL opened = NO;
    NSString *openPath = @"none";

    if (!contact) {
        wcpl_push2chat_trace(@"push skip: contact=nil user=%@", userName);
        return NO;
    }

    if (hasNav) {
        wcpl_push2chat_dismissVisiblePageSheetIfNeeded(topVC, @"open_push");
        wcpl_push2chat_pruneChatControllersIfNeeded(nav, @"open_push");
        id logicMgr = WCPLGetService(objc_getClass("MMMsgLogicManager"));
        if (logicMgr && [logicMgr respondsToSelector:@selector(PushOtherBaseMsgControllerByContact:navigationController:animated:)]) {
            @try {
                wcpl_push2chat_trace(@"open(push): user=%@ contact=%@ nav=%@", userName, contact, nav);
                ((void (*)(id, SEL, id, id, BOOL))objc_msgSend)(logicMgr,
                                                                @selector(PushOtherBaseMsgControllerByContact:navigationController:animated:),
                                                                contact,
                                                                nav,
                                                                YES);
                opened = YES;
                openPath = @"push";
            } @catch (__unused NSException *exception) {
                wcpl_push2chat_trace(@"open(push) exception: user=%@", userName);
            }
        }
    }

    // 保守策略：避免高风险 jumpToChat 兜底导致崩溃。

    if (!opened) return NO;

    if (context == WCPLPush2ChatContextBackground) {
        // 后台唤起容易出现“调用成功但未真正进会话”，这里做二次校验并自动兜底。
        NSString *targetUser = [userName copy];
        id targetContact = contact;
        NSString *pathSnapshot = [openPath copy];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLPush2ChatBackgroundVerifyDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            NSString *current = wcpl_push2chat_currentSessionUserName();
            if ([current isEqualToString:targetUser]) {
                wcpl_push2chat_trace(@"verify ok: path=%@ current=%@ target=%@",
                                     pathSnapshot,
                                     current ?: @"(nil)",
                                     targetUser);
                return;
            }

            wcpl_push2chat_trace(@"verify miss: path=%@ current=%@ target=%@",
                                 pathSnapshot,
                                 current ?: @"(nil)",
                                 targetUser);

            if (wcpl_push2chat_forcePushToChat(targetContact, targetUser, @"verify_miss")) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLPush2ChatVerifyPostPushDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    NSString *post = wcpl_push2chat_currentSessionUserName();
                    wcpl_push2chat_trace(@"verify post-push: current=%@ target=%@", post ?: @"(nil)", targetUser);
                });
            }
        });
    }

    return YES;
}

static void wcpl_push2chat_openWithUserNameOnMainQueue(NSString *userName, WCPLPush2ChatContext context) {
    WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
    if (!cfg) return;

    if (context == WCPLPush2ChatContextForeground && !cfg.enableForegroundPush) {
        return;
    }
    if (context == WCPLPush2ChatContextBackground && !cfg.enableBackgroundPush) {
        return;
    }

    // 冷启动/后台唤起：联系人与 UI 可能未就绪，需轮询重试。
    const NSInteger maxAttempts = 20;
    __block NSInteger attempts = 0;
    __block NSTimer *timer = nil;

    BOOL (^attemptOpen)(void) = ^BOOL{
        id contact = wcpl_push2chat_contactForUserName(userName);
        if (!contact) {
            if (attempts == 0 || (attempts % 4) == 0) {
                wcpl_push2chat_trace(@"attempt %ld: contact=nil user=%@", (long)attempts, userName);
            }
        } else if (attempts == 0) {
            wcpl_push2chat_trace(@"contact ok: user=%@ contact=%@", userName, contact);
        }
        return wcpl_push2chat_tryOpenSession(contact, userName, context);
    };

    wcpl_push2chat_trace(@"open start: ctx=%@ user=%@ fgEnable=%d bgEnable=%d fgMode=%ld bgMode=%ld",
                         wcpl_push2chat_contextDescription(context),
                         userName,
                         (int)cfg.enableForegroundPush,
                         (int)cfg.enableBackgroundPush,
                         (long)cfg.foregroundPushMode,
                         (long)cfg.backgroundPushMode);

    if (attemptOpen()) {
        wcpl_push2chat_trace(@"open done(immediate): ctx=%@ user=%@",
                             wcpl_push2chat_contextDescription(context),
                             userName);
        return;
    }

    timer = [NSTimer scheduledTimerWithTimeInterval:kWCPLPush2ChatRetryInterval repeats:YES block:^(__unused NSTimer *t) {
        attempts += 1;
        if (attemptOpen() || attempts >= maxAttempts) {
            if (attempts >= maxAttempts) {
                WCPLLogWarning(@"[消息直达] open failed after retries: %@", userName);
                wcpl_push2chat_trace(@"open failed(after retries): ctx=%@ user=%@",
                                     wcpl_push2chat_contextDescription(context),
                                     userName);
                wcpl_push2chat_hideTransitionCover(@"open_failed_after_retries");
            } else {
                wcpl_push2chat_trace(@"open done(retry#%ld): ctx=%@ user=%@",
                                     (long)attempts,
                                     wcpl_push2chat_contextDescription(context),
                                     userName);
            }
            [timer invalidate];
            timer = nil;
        }
    }];
}

static BOOL wcpl_push2chat_handleNotificationResponse(id response, WCPLPush2ChatContext preferredContext, NSString *source) {
    wcpl_push2chat_installDidBecomeActiveObserverOnce();

    // 仅处理“点通知本体”的默认动作，避免干扰“回复/已读”等通知 action。
    NSString *actionIdentifier = wcpl_push2chat_actionIdentifierFromResponse(response);
    if (actionIdentifier.length > 0 && ![actionIdentifier isEqualToString:UNNotificationDefaultActionIdentifier]) {
        wcpl_push2chat_trace(@"tap ignore: actionIdentifier=%@", actionIdentifier);
        return NO;
    }

    NSDictionary *userInfo = wcpl_safeUserInfoFromNotificationResponse(response);
    NSString *userName = wcpl_push2chat_targetUserNameFromUserInfo(userInfo);
    NSString *requestIdentifier = wcpl_push2chat_requestIdentifierFromResponse(response);
    NSArray *keys = [userInfo isKindOfClass:[NSDictionary class]] ? [[userInfo allKeys] sortedArrayUsingSelector:@selector(compare:)] : @[];
    if (userName.length == 0) {
        return NO;
    }

    NSString *tapKey = nil;
    if (requestIdentifier.length > 0) {
        tapKey = [NSString stringWithFormat:@"rid:%@|user:%@", requestIdentifier, userName];
    } else {
        tapKey = [NSString stringWithFormat:@"ptr:%p|user:%@", response, userName];
    }
    BOOL isDuplicate = wcpl_push2chat_shouldDropDuplicateTap(tapKey, 5.0);

    __block BOOL suppressOrig = NO;

    void (^mainWork)(void) = ^{
        WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
        if (!cfg) return;

        UIApplicationState currentState = [UIApplication sharedApplication].applicationState;
        WCPLPush2ChatContext openContext = wcpl_push2chat_resolveContextOnMainQueue(preferredContext,
                                                                                     currentState,
                                                                                     cfg,
                                                                                     source,
                                                                                     userName);

        BOOL pageSheetVisible = wcpl_push2chat_pageSheetIsVisible();
        BOOL hasRecentPageSheet = wcpl_push2chat_hasRecentPageSheet(kWCPLPush2ChatRecentPageSheetWindow);
        NSInteger mode = (openContext == WCPLPush2ChatContextForeground) ? cfg.foregroundPushMode : cfg.backgroundPushMode;
        if ((pageSheetVisible || hasRecentPageSheet) && mode != 1) {
            mode = 1;
        }
        suppressOrig = (mode == 1);

        wcpl_push2chat_trace(@"tap: source=%@ pref=%@ eff=%@ state=%@ mode=%ld suppress=%@ dup=%@ user=%@ keys=%@",
                             source ?: @"(nil)",
                             wcpl_push2chat_contextDescription(preferredContext),
                             wcpl_push2chat_contextDescription(openContext),
                             WCPLApplicationStateDescription(currentState),
                             (long)mode,
                             suppressOrig ? @"YES" : @"NO",
                             isDuplicate ? @"YES" : @"NO",
                             userName ?: @"(nil)",
                             keys);

        if (openContext == WCPLPush2ChatContextForeground && !cfg.enableForegroundPush) {
            suppressOrig = NO;
            return;
        }
        if (openContext == WCPLPush2ChatContextBackground && !cfg.enableBackgroundPush) {
            suppressOrig = NO;
            return;
        }

        if (isDuplicate) {
            return;
        }

        if (currentState != UIApplicationStateActive) {
            // 无论最终采用前台还是后台模式，只要当前 UI 尚未 active，就先缓存到 becomeActive。
            // 否则会在窗口/导航层级尚未稳定时直接触发开屏或半屏展示，存在闪退风险。
            wcpl_push2chat_setPendingUserName(userName, openContext, source);
            return;
        }

        wcpl_push2chat_clearPendingUserNameIfMatch(userName, @"direct_open");
        wcpl_push2chat_clearColdStartUserNameIfMatch(userName, @"direct_open");
        wcpl_push2chat_openWithUserNameOnMainQueue(userName, openContext);
    };

    if ([NSThread isMainThread]) {
        mainWork();
    } else {
        dispatch_sync(dispatch_get_main_queue(), mainWork);
    }

    return suppressOrig;
}

#ifdef __cplusplus
extern "C" {
#endif
void wcpl_push2chat_handleLaunchOptions(id launchOptions);
BOOL wcpl_push2chat_handleForegroundNotificationResponse(id response);
#ifdef __cplusplus
}
#endif

// 提供给 WCPLPluginEntryHook.xm 调用：统一走主入口 didFinishLaunching 链路。
void wcpl_push2chat_handleLaunchOptions(id launchOptions) {
    static NSString *const kHookSelector = @"application:didFinishLaunchingWithOptions:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    NSDictionary *options = [launchOptions isKindOfClass:[NSDictionary class]] ? (NSDictionary *)launchOptions : nil;
    NSDictionary *userInfo = nil;
    if (options) {
        id value = options[UIApplicationLaunchOptionsRemoteNotificationKey];
        if ([value isKindOfClass:[NSDictionary class]]) {
            userInfo = (NSDictionary *)value;
        }
    }
    NSString *userName = wcpl_push2chat_targetUserNameFromUserInfo(userInfo);
    NSArray *keys = [userInfo isKindOfClass:[NSDictionary class]] ? [[userInfo allKeys] sortedArrayUsingSelector:@selector(compare:)] : @[];
    wcpl_push2chat_trace(@"launch: user=%@ keys=%@", userName ?: @"(nil)", keys);

    if (userName.length == 0) {
        wcpl_push2chat_hookLog(@"MicroMessengerAppDelegate",
                               kHookSelector,
                               @"pre_filter",
                               @"skip_feature",
                               kOrigPolicy,
                               @"reason=target_user_empty");
        return;
    }

    WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
    if (!cfg.enableBackgroundPush) {
        wcpl_push2chat_hookLog(@"MicroMessengerAppDelegate",
                               kHookSelector,
                               @"pre_filter",
                               @"skip_feature",
                               kOrigPolicy,
                               @"reason=background_push_disabled");
        return;
    }

    wcpl_push2chat_hookLog(@"MicroMessengerAppDelegate",
                           kHookSelector,
                           @"feature",
                           @"queue_pending",
                           kOrigPolicy,
                           [NSString stringWithFormat:@"user=%@", userName ?: @"(nil)"]);
    dispatch_async(dispatch_get_main_queue(), ^{
        wcpl_push2chat_installDidBecomeActiveObserverOnce();
        wcpl_push2chat_markColdStartUserName(userName, @"launchOptions");
        wcpl_push2chat_setPendingUserName(userName, WCPLPush2ChatContextBackground, @"launchOptions");
    });
}

// 提供给 WCPLPluginEntryHook.xm 调用：统一由主入口 hook 分发前台通知响应。
BOOL wcpl_push2chat_handleForegroundNotificationResponse(id response) {
    static NSString *const kHookSelector = @"userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPost;
    wcpl_push2chat_hookLog(@"MicroMessengerAppDelegate",
                           kHookSelector,
                           @"feature",
                           @"dispatch",
                           kOrigPolicy,
                           @"context=foreground");
    return wcpl_push2chat_handleNotificationResponse(response, WCPLPush2ChatContextForeground, @"MicroMessengerAppDelegate");
}

%hook BaseMsgContentViewController

- (void)viewDidAppear:(_Bool)animated {
    %orig(animated);

    NSString *sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController((UIViewController *)self,
                                                                                    0,
                                                                                    [NSMutableSet set]);
    if (sessionUser.length == 0) {
        return;
    }

    wcpl_push2chat_recordAppearedChatUserName(sessionUser, @"viewDidAppear");

    NSString *preparedUser = wcpl_push2chat_preparedPageSheetUserNameIfFresh(kWCPLPush2ChatPreparedPageSheetMaxAge);
    if (![preparedUser isEqualToString:sessionUser]) {
        return;
    }
    if (wcpl_push2chat_pageSheetIsVisible()) {
        return;
    }
    if (wcpl_push2chat_recentPageSheetUserMatches(sessionUser, kWCPLPush2ChatPageSheetRequestCooldown)) {
        return;
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.05 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!wcpl_push2chat_chatDidAppearRecently(sessionUser, kWCPLPush2ChatChatAppearMaxAge)) {
            return;
        }
        if (wcpl_push2chat_pageSheetIsVisible()) {
            return;
        }
        wcpl_push2chat_promoteVisibleChatToPageSheet(sessionUser, @"chat_viewDidAppear");
    });
}

- (void)onPageSheetDidAppear {
    %orig;

    NSString *sessionUser = wcpl_push2chat_extractSessionUserNameFromViewController((UIViewController *)self,
                                                                                    0,
                                                                                    [NSMutableSet set]);
    wcpl_push2chat_hideTransitionCover([NSString stringWithFormat:@"pagesheet_did_appear:%@",
                                        sessionUser ?: @"(nil)"]);
}

- (void)onDismissPageSheetSession {
    wcpl_push2chat_hideTransitionCover(@"onDismissPageSheetSession");
    %orig;
}

%end

%hook QuickReplyMsgMgr

- (void)pageSheetDidClose:(id)pageSheet closeType:(long long)closeType {
    NSString *preparedUser = wcpl_push2chat_preparedPageSheetUserNameIfFresh(kWCPLPush2ChatPreparedPageSheetMaxAge);
    wcpl_push2chat_trace(@"hook pageSheetDidClose: closeType=%lld prepared=%@",
                         closeType,
                         preparedUser ?: @"(nil)");
    wcpl_push2chat_hideTransitionCover([NSString stringWithFormat:@"pageSheetDidClose:%lld", closeType]);
    %orig(pageSheet, closeType);
    if (preparedUser.length > 0) {
        wcpl_push2chat_recoverPreparedPageSheetIfNeeded(preparedUser,
                                                        [NSString stringWithFormat:@"closeType=%lld", closeType]);
    }
}

- (void)onMsgPageSheetEnterFullscreen:(id)adapter {
    NSString *preparedUser = wcpl_push2chat_preparedPageSheetUserNameIfFresh(kWCPLPush2ChatPreparedPageSheetMaxAge);
    wcpl_push2chat_trace(@"hook onMsgPageSheetEnterFullscreen: prepared=%@ adapter=%@",
                         preparedUser ?: @"(nil)",
                         NSStringFromClass([adapter class]));
    wcpl_push2chat_hideTransitionCover(@"enter_fullscreen");
    if (preparedUser.length > 0) {
        wcpl_push2chat_clearPreparedPageSheetUserNameIfMatch(preparedUser, @"enter_fullscreen");
    }
    %orig(adapter);
}

%end

%hook NotificationActionsMgr

- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(void (^)(void))completionHandler {
    static NSString *const kHookSelector = @"userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPost;
    wcpl_push2chat_hookLog(@"NotificationActionsMgr",
                           kHookSelector,
                           @"feature",
                           @"dispatch",
                           kOrigPolicy,
                           @"context=background");
    BOOL suppressOrig = wcpl_push2chat_handleNotificationResponse(response, WCPLPush2ChatContextBackground, @"NotificationActionsMgr");
    if (suppressOrig) {
        wcpl_push2chat_hookLog(@"NotificationActionsMgr",
                               kHookSelector,
                               @"feature",
                               @"intercept",
                               kOrigPolicy,
                               @"reason=pagesheet");
        if (completionHandler) completionHandler();
        return;
    }
    wcpl_push2chat_hookLog(@"NotificationActionsMgr",
                           kHookSelector,
                           @"fallback",
                           @"pass_through",
                           kOrigPolicy,
                           @"reason=call_orig");
    %orig(center, response, completionHandler);
}

%end
