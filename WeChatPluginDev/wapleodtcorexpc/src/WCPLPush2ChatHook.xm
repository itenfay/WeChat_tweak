#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

#import <dispatch/dispatch.h>
#import <objc/message.h>

#import "BaseMsgContentViewController.h"
#import "CAppViewControllerManager.h"
#import "CContact.h"
#import "CContactMgr.h"
#import "MicroMessengerAppDelegate.h"
#import "MMMsgLogicManager.h"
#import "NotificationActionsMgr.h"
#import "QuickReplyMsgMgr.h"

typedef NS_ENUM(NSInteger, WCPLPush2ChatContext) {
    WCPLPush2ChatContextBackground = 0,
    WCPLPush2ChatContextForeground = 1,
};

static NSString *wcpl_push2chat_contextDescription(WCPLPush2ChatContext context) {
    return (context == WCPLPush2ChatContextForeground) ? @"fg" : @"bg";
}

static NSString *wcpl_push2chat_applicationStateDescription(UIApplicationState state) {
    switch (state) {
        case UIApplicationStateActive: return @"active";
        case UIApplicationStateInactive: return @"inactive";
        case UIApplicationStateBackground: return @"background";
    }
    return [NSString stringWithFormat:@"unknown(%ld)", (long)state];
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
            } @catch (__unused NSException *exception) {
            }
            @try {
                [fh closeFile];
            } @catch (__unused NSException *exception) {
            }
        }
    });
}

static NSString *wcpl_trimString(NSString *text);

static NSString *wcpl_push2chat_pendingUserName = nil;
static CFAbsoluteTime wcpl_push2chat_pendingSetTime = 0;

static void wcpl_push2chat_setPendingUserName(NSString *userName, NSString *source) {
    NSString *trimmed = wcpl_trimString(userName);
    if (trimmed.length == 0) return;

    wcpl_push2chat_pendingUserName = [trimmed copy];
    wcpl_push2chat_pendingSetTime = CFAbsoluteTimeGetCurrent();
    wcpl_push2chat_trace(@"pending set: user=%@ source=%@", wcpl_push2chat_pendingUserName, source ?: @"(nil)");
}

static NSString *wcpl_push2chat_takePendingUserNameIfFresh(CFTimeInterval maxAge) {
    NSString *userName = wcpl_push2chat_pendingUserName;
    if (![userName isKindOfClass:[NSString class]] || userName.length == 0) {
        return nil;
    }

    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if (wcpl_push2chat_pendingSetTime <= 0 || (now - wcpl_push2chat_pendingSetTime) > maxAge) {
        wcpl_push2chat_pendingUserName = nil;
        wcpl_push2chat_pendingSetTime = 0;
        return nil;
    }

    wcpl_push2chat_pendingUserName = nil;
    wcpl_push2chat_pendingSetTime = 0;
    return userName;
}

static void wcpl_push2chat_openWithUserNameOnMainQueue(NSString *userName, WCPLPush2ChatContext context);

static void wcpl_push2chat_installDidBecomeActiveObserverOnce(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidBecomeActiveNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:^(__unused NSNotification *note) {
            NSString *pending = wcpl_push2chat_takePendingUserNameIfFresh(30.0);
            if (pending.length == 0) return;

            wcpl_push2chat_trace(@"becomeActive: drain pending user=%@", pending);

            // 给主界面一点点缓冲时间，避免启动过程中 push 被后续重置覆盖。
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                wcpl_push2chat_openWithUserNameOnMainQueue(pending, WCPLPush2ChatContextBackground);
            });
        }];
    });
}

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
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
            NSString *trimmed = wcpl_trimString((NSString *)value);
            if (trimmed.length > 0) {
                return trimmed;
            }
        }
    }

    return nil;
}

static id wcpl_push2chat_contactForUserName(NSString *userName) {
    NSString *target = wcpl_trimString(userName);
    if (target.length == 0) return nil;

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) return nil;

    id contact = nil;
    @try {
        if ([contactMgr respondsToSelector:@selector(getContactByName:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), target);
        }
        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromDB:), target);
        }
        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromCache:), target);
        }
        if (!contact && [contactMgr respondsToSelector:@selector(getContactForSearchByName:)]) {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactForSearchByName:), target);
        }
    } @catch (__unused NSException *exception) {
        contact = nil;
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && contact && ![contact isKindOfClass:contactClass]) {
        return nil;
    }

    return contact;
}

static UIViewController *wcpl_push2chat_findTopViewControllerFallback(void) {
    UIApplication *application = [UIApplication sharedApplication];
    UIWindow *keyWindow = nil;

    if ([application respondsToSelector:@selector(connectedScenes)]) {
        NSSet *connectedScenes = application.connectedScenes;
        for (id scene in connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            // 与 wcpush 对齐：只在前台 active 时寻找 keyWindow，避免 UI 未就绪导致“半屏已弹但无效果”。
            if (windowScene.activationState != UISceneActivationStateForegroundActive) {
                continue;
            }
            for (UIWindow *window in windowScene.windows) {
                if ([window isKindOfClass:[UIWindow class]] && window.isKeyWindow) {
                    keyWindow = window;
                    break;
                }
            }
            if (keyWindow) break;
        }
        // 若还没进入 active（例如冷启动/后台唤起初期），此处返回 nil 触发重试等待。
        if (![keyWindow isKindOfClass:[UIWindow class]]) {
            return nil;
        }
    }

    // 避免使用 deprecated 的 application.keyWindow（工程开启了 -Werror）。
    if (!keyWindow && ![application respondsToSelector:@selector(connectedScenes)] && [application respondsToSelector:@selector(windows)]) {
        for (UIWindow *window in application.windows) {
            if (![window isKindOfClass:[UIWindow class]]) {
                continue;
            }
            if (window.isKeyWindow) {
                keyWindow = window;
                break;
            }
            if (!keyWindow) {
                keyWindow = window;
            }
        }
    }
    if (![keyWindow isKindOfClass:[UIWindow class]]) {
        return nil;
    }

    UIViewController *root = keyWindow.rootViewController;
    if (![root isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIViewController *vc = root;
    while ([vc presentedViewController]) {
        UIViewController *presented = vc.presentedViewController;
        if (![presented isKindOfClass:[UIViewController class]]) break;
        vc = presented;
    }

    if ([vc isKindOfClass:[UINavigationController class]]) {
        UIViewController *visible = ((UINavigationController *)vc).visibleViewController;
        if ([visible isKindOfClass:[UIViewController class]]) {
            vc = visible;
        }
    } else if ([vc isKindOfClass:[UITabBarController class]]) {
        UIViewController *selected = ((UITabBarController *)vc).selectedViewController;
        if ([selected isKindOfClass:[UINavigationController class]]) {
            UIViewController *visible = ((UINavigationController *)selected).visibleViewController;
            if ([visible isKindOfClass:[UIViewController class]]) {
                vc = visible;
            } else {
                vc = (UIViewController *)selected;
            }
        } else if ([selected isKindOfClass:[UIViewController class]]) {
            vc = selected;
        }
    }

    return vc;
}

static UIViewController *wcpl_push2chat_findTopViewController(void) {
    // 与 wcpush 逻辑保持一致：使用基于 keyWindow 的 topVC 选择，避免 topMostController 返回不可展示 VC。
    return wcpl_push2chat_findTopViewControllerFallback();
}

static NSString *wcpl_push2chat_currentSessionUserName(void) {
    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    Class baseMsgClass = objc_getClass("BaseMsgContentViewController");
    if (!baseMsgClass || ![topVC isKindOfClass:baseMsgClass]) {
        return nil;
    }

    @try {
        id chatContact = nil;
        if ([topVC respondsToSelector:@selector(getChatContact)]) {
            chatContact = ((id (*)(id, SEL))objc_msgSend)(topVC, @selector(getChatContact));
        }
        if (!chatContact) return nil;

        if ([chatContact isKindOfClass:objc_getClass("CContact")]) {
            return wcpl_trimString(((CContact *)chatContact).m_nsUsrName);
        }
        if ([chatContact respondsToSelector:@selector(m_nsUsrName)]) {
            id userName = ((id (*)(id, SEL))objc_msgSend)(chatContact, @selector(m_nsUsrName));
            if ([userName isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)userName);
            }
        }
    } @catch (__unused NSException *exception) {
    }
    return nil;
}

static BOOL wcpl_push2chat_forcePushToChat(id contact, NSString *userName, NSString *reason) {
    if (!contact || userName.length == 0) return NO;

    UIViewController *topVC = wcpl_push2chat_findTopViewController();
    if (![topVC isKindOfClass:[UIViewController class]]) {
        wcpl_push2chat_trace(@"push(fallback:%@) skip: topVC=nil user=%@", reason ?: @"unknown", userName);
        return NO;
    }

    UINavigationController *nav = topVC.navigationController;
    if (![nav isKindOfClass:[UINavigationController class]]) {
        wcpl_push2chat_trace(@"push(fallback:%@) skip: nav=nil topVC=%@ user=%@", reason ?: @"unknown", NSStringFromClass([topVC class]), userName);
        return NO;
    }

    id logicMgr = WCPLGetService(objc_getClass("MMMsgLogicManager"));
    if (!logicMgr || ![logicMgr respondsToSelector:@selector(PushOtherBaseMsgControllerByContact:navigationController:animated:)]) {
        return NO;
    }

    @try {
        wcpl_push2chat_trace(@"push(fallback:%@): user=%@ contact=%@ nav=%@", reason ?: @"unknown", userName, contact, nav);
        ((void (*)(id, SEL, id, id, BOOL))objc_msgSend)(logicMgr,
                                                        @selector(PushOtherBaseMsgControllerByContact:navigationController:animated:),
                                                        contact,
                                                        nav,
                                                        YES);
        return YES;
    } @catch (__unused NSException *exception) {
        wcpl_push2chat_trace(@"push(fallback:%@) exception: user=%@", reason ?: @"unknown", userName);
    }

    return NO;
}

static BOOL wcpl_push2chat_tryOpenSession(id contact, NSString *userName, WCPLPush2ChatContext context) {
    if (!contact || ![userName isKindOfClass:[NSString class]] || userName.length == 0) {
        return YES;
    }

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

    // 前台路径：若已在目标会话，直接结束重试。
    if (context == WCPLPush2ChatContextForeground) {
        Class baseMsgClass = objc_getClass("BaseMsgContentViewController");
        if (baseMsgClass && [topVC isKindOfClass:baseMsgClass]) {
            @try {
                id chatContact = ((id (*)(id, SEL))objc_msgSend)(topVC, @selector(getChatContact));
                NSString *currentUsr = nil;
                if ([chatContact isKindOfClass:objc_getClass("CContact")]) {
                    currentUsr = ((CContact *)chatContact).m_nsUsrName;
                } else if ([chatContact respondsToSelector:@selector(m_nsUsrName)]) {
                    currentUsr = ((id (*)(id, SEL))objc_msgSend)(chatContact, @selector(m_nsUsrName));
                }
                if ([currentUsr isKindOfClass:[NSString class]] && [currentUsr isEqualToString:userName]) {
                    return YES;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
    NSInteger mode = (context == WCPLPush2ChatContextForeground) ? cfg.foregroundPushMode : cfg.backgroundPushMode;
    wcpl_push2chat_trace(@"tryOpen: ctx=%@ mode=%ld topVC=%@ nav=%@ user=%@",
                         wcpl_push2chat_contextDescription(context),
                         (long)mode,
                         NSStringFromClass([topVC class]),
                         hasNav ? NSStringFromClass([nav class]) : @"(nil)",
                         userName);

    __block BOOL opened = NO;
    __block NSString *openPath = @"none";

    if (mode == 1) {
        id quickMgr = WCPLGetService(objc_getClass("QuickReplyMsgMgr"));
        if (quickMgr && [quickMgr respondsToSelector:@selector(showPageSheetSession:fromViewController:)]) {
            @try {
                wcpl_push2chat_trace(@"open(pageSheet): user=%@ contact=%@", userName, contact);
                ((void (*)(id, SEL, id, id))objc_msgSend)(quickMgr, @selector(showPageSheetSession:fromViewController:), contact, topVC);
                opened = YES;
                openPath = @"pageSheet";
            } @catch (__unused NSException *exception) {
                wcpl_push2chat_trace(@"open(pageSheet) exception: user=%@", userName);
            }
        }
        // 半屏不可用时降级全屏，保证“直达”能力不丢。
    }

    if (!opened && hasNav) {
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
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.9 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            NSString *current = wcpl_push2chat_currentSessionUserName();
            if ([current isEqualToString:targetUser]) {
                wcpl_push2chat_trace(@"verify ok: path=%@ user=%@", pathSnapshot, targetUser);
                return;
            }

            wcpl_push2chat_trace(@"verify miss: path=%@ current=%@ target=%@", pathSnapshot, current ?: @"(nil)", targetUser);
            if (wcpl_push2chat_forcePushToChat(targetContact, targetUser, @"verify_miss")) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
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
            return NO;
        }
        if (attempts == 0) {
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

    timer = [NSTimer scheduledTimerWithTimeInterval:0.5 repeats:YES block:^(__unused NSTimer *t) {
        attempts += 1;
        if (attemptOpen() || attempts >= maxAttempts) {
            if (attempts >= maxAttempts) {
                WCPLLogWarning(@"[消息直达] open failed after retries: %@", userName);
                wcpl_push2chat_trace(@"open failed(after retries): ctx=%@ user=%@",
                                     wcpl_push2chat_contextDescription(context),
                                     userName);
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

static void wcpl_push2chat_handleNotificationResponse(id response, WCPLPush2ChatContext preferredContext, NSString *source) {
    wcpl_push2chat_installDidBecomeActiveObserverOnce();

    NSDictionary *userInfo = wcpl_safeUserInfoFromNotificationResponse(response);
    NSString *userName = wcpl_push2chat_targetUserNameFromUserInfo(userInfo);
    NSArray *keys = [userInfo isKindOfClass:[NSDictionary class]] ? [[userInfo allKeys] sortedArrayUsingSelector:@selector(compare:)] : @[];

    UIApplicationState state = UIApplicationStateInactive;
    @try {
        state = [UIApplication sharedApplication].applicationState;
    } @catch (__unused NSException *exception) {
        state = UIApplicationStateInactive;
    }

    WCPLPush2ChatContext effectiveContext = preferredContext;
    if (state != UIApplicationStateActive) {
        effectiveContext = WCPLPush2ChatContextBackground;
    }

    wcpl_push2chat_trace(@"tap: source=%@ pref=%@ eff=%@ state=%@ user=%@ keys=%@",
                         source ?: @"(nil)",
                         wcpl_push2chat_contextDescription(preferredContext),
                         wcpl_push2chat_contextDescription(effectiveContext),
                         wcpl_push2chat_applicationStateDescription(state),
                         userName ?: @"(nil)",
                         keys);
    if (userName.length == 0) {
        return;
    }

    WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
    if (effectiveContext == WCPLPush2ChatContextForeground && !cfg.enableForegroundPush) {
        return;
    }
    if (effectiveContext == WCPLPush2ChatContextBackground && !cfg.enableBackgroundPush) {
        return;
    }

    // 简单去重：避免同一通知在不同处理器里重复触发。
    static CFAbsoluteTime lastTime = 0;
    static NSString *lastUser = nil;
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if (lastUser && [lastUser isEqualToString:userName] && (now - lastTime) < 0.5) {
        return;
    }
    lastUser = userName;
    lastTime = now;

    dispatch_async(dispatch_get_main_queue(), ^{
        UIApplicationState currentState = [UIApplication sharedApplication].applicationState;
        if (effectiveContext == WCPLPush2ChatContextBackground && currentState != UIApplicationStateActive) {
            // 后台点击通知：先缓存，等进入前台 active 后再尝试打开，避免 UI 未就绪导致“只进主页面不进会话”。
            wcpl_push2chat_setPendingUserName(userName, source);
            return;
        }
        wcpl_push2chat_openWithUserNameOnMainQueue(userName, effectiveContext);
    });
}

%hook MicroMessengerAppDelegate

- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(void (^)(void))completionHandler {
    wcpl_push2chat_handleNotificationResponse(response, WCPLPush2ChatContextForeground, @"MicroMessengerAppDelegate");
    %orig(center, response, completionHandler);
}

- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)launchOptions {
    BOOL ok = %orig(application, launchOptions);

    // 兜底：冷启动从通知进入时，可能先走 launchOptions 而不是 didReceiveNotificationResponse。
    NSDictionary *options = [launchOptions isKindOfClass:[NSDictionary class]] ? (NSDictionary *)launchOptions : nil;
    NSDictionary *userInfo = nil;
    if (options) {
        id v = options[UIApplicationLaunchOptionsRemoteNotificationKey];
        if ([v isKindOfClass:[NSDictionary class]]) {
            userInfo = (NSDictionary *)v;
        }
    }
    NSString *userName = wcpl_push2chat_targetUserNameFromUserInfo(userInfo);
    NSArray *keys = [userInfo isKindOfClass:[NSDictionary class]] ? [[userInfo allKeys] sortedArrayUsingSelector:@selector(compare:)] : @[];
    wcpl_push2chat_trace(@"launch: user=%@ keys=%@", userName ?: @"(nil)", keys);

    if (userName.length > 0) {
        WCPLPush2ChatConfig *cfg = [WCPLConfigCenter shared].push2Chat;
        if (cfg.enableBackgroundPush) {
            dispatch_async(dispatch_get_main_queue(), ^{
                wcpl_push2chat_installDidBecomeActiveObserverOnce();
                wcpl_push2chat_setPendingUserName(userName, @"launchOptions");
            });
        }
    }

    return ok;
}

%end

%hook NotificationActionsMgr

- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(void (^)(void))completionHandler {
    wcpl_push2chat_handleNotificationResponse(response, WCPLPush2ChatContextBackground, @"NotificationActionsMgr");
    %orig(center, response, completionHandler);
}

%end
