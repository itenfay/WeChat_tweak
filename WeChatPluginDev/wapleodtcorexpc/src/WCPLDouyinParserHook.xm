#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatMessageHeaders.h"
#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

#import <dispatch/dispatch.h>
#import <objc/message.h>

@interface MMMenuItem : NSObject
- (instancetype)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title icon:(UIImage *)icon target:(id)target action:(SEL)action;
- (SEL)action;
- (void)setIconImage:(UIImage *)iconImage;
@property(retain, nonatomic) UIImage *iconImage;
@end

@interface CommonMessageCellView (WCPLDouyinParserAction)
- (void)wcpl_handleDouyinParseMenuItem:(id)sender;
@end

@interface TextMessageCellView (WCPLDouyinParserAction)
- (void)wcpl_handleDouyinParseMenuItem:(id)sender;
@end

static NSString *const kWCPLDouyinParserMenuTitle = @"解析抖音";
static NSString *const kWCPLDouyinParserCommandNotification = @"WCPLDouyinParserCommandNotification";

static dispatch_queue_t g_wcpl_douyinSessionQueue = nil;
static NSMutableDictionary<NSString *, NSNumber *> *g_wcpl_douyinSessionTokenByChat = nil;
static NSMutableDictionary<NSString *, NSMutableArray<NSURLSessionTask *> *> *g_wcpl_douyinTasksByChat = nil;
static unsigned long long g_wcpl_douyinSessionSeq = 0;

static NSString *wcpl_douyin_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_douyin_redactedString(NSString *text) {
    NSString *value = wcpl_douyin_trimString(text);
    if (value.length == 0) {
        return @"empty";
    }
    unsigned long hash = ((unsigned long)value.hash) & 0xffffffff;
    return [NSString stringWithFormat:@"len=%lu#%08lx", (unsigned long)value.length, hash];
}

static NSString *wcpl_douyin_redactedPath(NSString *path) {
    NSString *value = wcpl_douyin_trimString(path);
    if (value.length == 0) {
        return @"empty";
    }
    NSString *ext = wcpl_douyin_trimString(value.pathExtension.lowercaseString);
    if (ext.length == 0) {
        ext = @"none";
    }
    unsigned long hash = ((unsigned long)value.hash) & 0xffffffff;
    return [NSString stringWithFormat:@"ext=%@#%08lx", ext, hash];
}

static void wcpl_douyin_initSessionState(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        g_wcpl_douyinSessionQueue = dispatch_queue_create("com.aple.wcpl.douyin.session", DISPATCH_QUEUE_SERIAL);
        g_wcpl_douyinSessionTokenByChat = [NSMutableDictionary dictionary];
        g_wcpl_douyinTasksByChat = [NSMutableDictionary dictionary];
    });
}

static NSString *wcpl_douyin_sessionKey(NSString *chatUserName) {
    NSString *chat = wcpl_douyin_trimString(chatUserName);
    return chat.length > 0 ? chat : @"__unknown__";
}

static void wcpl_douyin_cancelTasksLocked(NSString *sessionKey) {
    NSMutableArray<NSURLSessionTask *> *tasks = g_wcpl_douyinTasksByChat[sessionKey];
    if (![tasks isKindOfClass:[NSMutableArray class]] || tasks.count == 0) {
        [g_wcpl_douyinTasksByChat removeObjectForKey:sessionKey];
        return;
    }

    NSArray<NSURLSessionTask *> *snapshot = [tasks copy];
    [g_wcpl_douyinTasksByChat removeObjectForKey:sessionKey];
    for (NSURLSessionTask *task in snapshot) {
        if ([task isKindOfClass:[NSURLSessionTask class]]) {
            [task cancel];
        }
    }
}

static unsigned long long wcpl_douyin_beginSession(NSString *chatUserName) {
    wcpl_douyin_initSessionState();
    NSString *key = wcpl_douyin_sessionKey(chatUserName);
    __block unsigned long long token = 0;
    dispatch_sync(g_wcpl_douyinSessionQueue, ^{
        wcpl_douyin_cancelTasksLocked(key);
        g_wcpl_douyinSessionSeq += 1;
        if (g_wcpl_douyinSessionSeq == 0) {
            g_wcpl_douyinSessionSeq = 1;
        }
        token = g_wcpl_douyinSessionSeq;
        g_wcpl_douyinSessionTokenByChat[key] = @(token);
    });
    return token;
}

static BOOL wcpl_douyin_isSessionActive(NSString *chatUserName, unsigned long long sessionToken) {
    if (sessionToken == 0) {
        return NO;
    }
    wcpl_douyin_initSessionState();
    NSString *key = wcpl_douyin_sessionKey(chatUserName);
    __block BOOL active = NO;
    dispatch_sync(g_wcpl_douyinSessionQueue, ^{
        active = ([g_wcpl_douyinSessionTokenByChat[key] unsignedLongLongValue] == sessionToken);
    });
    return active;
}

static void wcpl_douyin_registerTaskForSession(NSString *chatUserName,
                                               unsigned long long sessionToken,
                                               NSURLSessionTask *task) {
    if (!task || sessionToken == 0) {
        return;
    }
    wcpl_douyin_initSessionState();
    NSString *key = wcpl_douyin_sessionKey(chatUserName);
    dispatch_sync(g_wcpl_douyinSessionQueue, ^{
        if ([g_wcpl_douyinSessionTokenByChat[key] unsignedLongLongValue] != sessionToken) {
            [task cancel];
            return;
        }
        NSMutableArray<NSURLSessionTask *> *tasks = g_wcpl_douyinTasksByChat[key];
        if (![tasks isKindOfClass:[NSMutableArray class]]) {
            tasks = [NSMutableArray array];
            g_wcpl_douyinTasksByChat[key] = tasks;
        }
        [tasks addObject:task];
    });
}

static void wcpl_douyin_unregisterTaskForSession(NSString *chatUserName,
                                                 unsigned long long sessionToken,
                                                 NSURLSessionTask *task) {
    if (!task || sessionToken == 0) {
        return;
    }
    wcpl_douyin_initSessionState();
    NSString *key = wcpl_douyin_sessionKey(chatUserName);
    dispatch_sync(g_wcpl_douyinSessionQueue, ^{
        NSMutableArray<NSURLSessionTask *> *tasks = g_wcpl_douyinTasksByChat[key];
        if (![tasks isKindOfClass:[NSMutableArray class]] || tasks.count == 0) {
            [g_wcpl_douyinTasksByChat removeObjectForKey:key];
            return;
        }
        NSIndexSet *matched = [tasks indexesOfObjectsPassingTest:^BOOL(id obj, NSUInteger idx, BOOL *stop) {
            (void)idx;
            (void)stop;
            return obj == task;
        }];
        if (matched.count > 0) {
            [tasks removeObjectsAtIndexes:matched];
        }
        if (tasks.count == 0) {
            [g_wcpl_douyinTasksByChat removeObjectForKey:key];
        }
    });
}

static void wcpl_douyin_finishSession(NSString *chatUserName, unsigned long long sessionToken) {
    if (sessionToken == 0) {
        return;
    }
    wcpl_douyin_initSessionState();
    NSString *key = wcpl_douyin_sessionKey(chatUserName);
    dispatch_sync(g_wcpl_douyinSessionQueue, ^{
        if ([g_wcpl_douyinSessionTokenByChat[key] unsignedLongLongValue] != sessionToken) {
            return;
        }
        [g_wcpl_douyinSessionTokenByChat removeObjectForKey:key];
        wcpl_douyin_cancelTasksLocked(key);
    });
}

static NSString *wcpl_douyin_sanitizeCandidate(NSString *candidate) {
    NSString *value = wcpl_douyin_trimString(candidate);
    if (value.length == 0) {
        return nil;
    }

    static NSCharacterSet *trailingSet = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableCharacterSet *set = [[NSCharacterSet whitespaceAndNewlineCharacterSet] mutableCopy];
        [set addCharactersInString:@"，。！？；：、）】》」』”\"'`" ];
        trailingSet = [set copy];
    });

    while (value.length > 0) {
        unichar lastChar = [value characterAtIndex:value.length - 1];
        if (![trailingSet characterIsMember:lastChar]) {
            break;
        }
        value = [value substringToIndex:value.length - 1];
    }

    return wcpl_douyin_trimString(value);
}

static id wcpl_douyin_safeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }
    @try {
        return [obj valueForKey:key];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static NSString *wcpl_douyin_safeUserNameFromObject(id obj) {
    if (!obj) {
        return nil;
    }
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_douyin_trimString((NSString *)obj);
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_douyin_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_douyin_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    return nil;
}

static BOOL wcpl_douyin_isSenderFromMsgWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }

    Class wrapClass = objc_getClass("CMessageWrap");
    if (wrapClass && [wrapClass respondsToSelector:@selector(isSenderFromMsgWrap:)]) {
        @try {
            return ((BOOL (*)(id, SEL, id))objc_msgSend)(wrapClass, @selector(isSenderFromMsgWrap:), msgWrap);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return NO;
}

static CMessageWrap *wcpl_douyin_messageWrapFromCell(id cell) {
    if (!cell) {
        return nil;
    }

    if ([cell respondsToSelector:@selector(getCurrentMessageWrap)]) {
        @try {
            id wrap = [cell getCurrentMessageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([cell respondsToSelector:@selector(messageWrap)]) {
        @try {
            id wrap = [cell messageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([cell respondsToSelector:@selector(getMediaWrap)]) {
        @try {
            id wrap = [cell getMediaWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([cell respondsToSelector:@selector(viewModel)]) {
        @try {
            id viewModel = [cell viewModel];
            if ([viewModel respondsToSelector:@selector(messageWrap)]) {
                id wrap = [viewModel messageWrap];
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            }
            if ([viewModel respondsToSelector:@selector(msgWrap)]) {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(msgWrap));
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static UIViewController *wcpl_douyin_viewControllerFromCell(id cell) {
    if (!cell) {
        return nil;
    }

    if ([cell respondsToSelector:@selector(getViewController)]) {
        @try {
            id vc = [cell getViewController];
            if ([vc isKindOfClass:[UIViewController class]]) {
                return (UIViewController *)vc;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([cell respondsToSelector:@selector(viewController)]) {
        @try {
            id vc = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(viewController));
            if ([vc isKindOfClass:[UIViewController class]]) {
                return (UIViewController *)vc;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static NSString *wcpl_douyin_chatUserNameFromCellAndWrap(id cell, CMessageWrap *msgWrap) {
    UIViewController *viewController = wcpl_douyin_viewControllerFromCell(cell);
    if (viewController && [viewController respondsToSelector:@selector(GetContact)]) {
        @try {
            id contact = ((id (*)(id, SEL))objc_msgSend)(viewController, @selector(GetContact));
            NSString *userName = wcpl_douyin_safeUserNameFromObject(contact);
            if (userName.length > 0) {
                return userName;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (msgWrap) {
        BOOL isSender = wcpl_douyin_isSenderFromMsgWrap(msgWrap);
        NSString *chatName = wcpl_douyin_trimString(isSender ? msgWrap.m_nsToUsr : msgWrap.m_nsFromUsr);
        if (chatName.length > 0) {
            return chatName;
        }
        NSString *fallback = wcpl_douyin_trimString(msgWrap.m_nsToUsr) ?: wcpl_douyin_trimString(msgWrap.m_nsFromUsr);
        if (fallback.length > 0) {
            return fallback;
        }
    }

    return nil;
}

static NSString *wcpl_douyin_chatUserNameFromInputTool(id inputTool) {
    if (!inputTool) {
        return nil;
    }

    if ([inputTool respondsToSelector:@selector(getChatUsername)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(inputTool, @selector(getChatUsername));
            if ([value isKindOfClass:[NSString class]]) {
                NSString *chatName = wcpl_douyin_trimString((NSString *)value);
                if (chatName.length > 0) {
                    return chatName;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    id contact = nil;
    if ([inputTool respondsToSelector:@selector(contact)]) {
        @try {
            contact = ((id (*)(id, SEL))objc_msgSend)(inputTool, @selector(contact));
        } @catch (__unused NSException *exception) {
            contact = nil;
        }
    }
    if (!contact) {
        contact = wcpl_douyin_safeValueForKey(inputTool, @"contact");
    }
    NSString *chatFromContact = wcpl_douyin_safeUserNameFromObject(contact);
    if (chatFromContact.length > 0) {
        return chatFromContact;
    }

    id delegate = nil;
    if ([inputTool respondsToSelector:@selector(delegate)]) {
        @try {
            delegate = ((id (*)(id, SEL))objc_msgSend)(inputTool, @selector(delegate));
        } @catch (__unused NSException *exception) {
            delegate = nil;
        }
    }
    if (!delegate) {
        delegate = wcpl_douyin_safeValueForKey(inputTool, @"delegate");
    }

    if (delegate && [delegate respondsToSelector:@selector(getCurrentChatName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(delegate, @selector(getCurrentChatName));
            if ([value isKindOfClass:[NSString class]]) {
                NSString *chatName = wcpl_douyin_trimString((NSString *)value);
                if (chatName.length > 0) {
                    return chatName;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (delegate && [delegate respondsToSelector:@selector(chatUserNameForSightStatistics)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(delegate, @selector(chatUserNameForSightStatistics));
            if ([value isKindOfClass:[NSString class]]) {
                NSString *chatName = wcpl_douyin_trimString((NSString *)value);
                if (chatName.length > 0) {
                    return chatName;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (delegate && [delegate respondsToSelector:@selector(GetContact)]) {
        @try {
            id delegateContact = ((id (*)(id, SEL))objc_msgSend)(delegate, @selector(GetContact));
            NSString *chatName = wcpl_douyin_safeUserNameFromObject(delegateContact);
            if (chatName.length > 0) {
                return chatName;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static UIViewController *wcpl_douyin_chatViewControllerFromInputTool(id inputTool) {
    if (!inputTool) {
        return nil;
    }

    id delegate = nil;
    if ([inputTool respondsToSelector:@selector(delegate)]) {
        @try {
            delegate = ((id (*)(id, SEL))objc_msgSend)(inputTool, @selector(delegate));
        } @catch (__unused NSException *exception) {
            delegate = nil;
        }
    }
    if (!delegate) {
        delegate = wcpl_douyin_safeValueForKey(inputTool, @"delegate");
    }

    if ([delegate isKindOfClass:[UIViewController class]]) {
        return (UIViewController *)delegate;
    }

    if (delegate && [delegate respondsToSelector:@selector(GetCurrentViewController)]) {
        @try {
            id vc = ((id (*)(id, SEL))objc_msgSend)(delegate, @selector(GetCurrentViewController));
            if ([vc isKindOfClass:[UIViewController class]]) {
                return (UIViewController *)vc;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static NSString *wcpl_douyin_currentSelfUserName(void) {
    __block NSString *selfUserName = nil;
    void (^resolve)(void) = ^{
        id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
        if (!contactMgr || ![contactMgr respondsToSelector:@selector(getSelfContact)]) {
            return;
        }
        @try {
            id selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
            selfUserName = [wcpl_douyin_safeUserNameFromObject(selfContact) copy];
        } @catch (__unused NSException *exception) {
            selfUserName = nil;
        }
    };

    if ([NSThread isMainThread]) {
        resolve();
    } else {
        dispatch_sync(dispatch_get_main_queue(), resolve);
    }

    return selfUserName;
}

static NSString *wcpl_douyin_normalizeURLString(NSString *urlString) {
    NSString *candidate = wcpl_douyin_sanitizeCandidate(urlString);
    if (candidate.length == 0) {
        return nil;
    }

    NSString *normalized = candidate;
    if ([normalized rangeOfString:@"://"].location == NSNotFound) {
        normalized = [@"https://" stringByAppendingString:normalized];
    }

    NSURLComponents *components = [NSURLComponents componentsWithString:normalized];
    NSString *host = [components.host lowercaseString];
    if (host.length == 0) {
        return nil;
    }

    BOOL isDouyinHost = [host isEqualToString:@"v.douyin.com"] ||
                        [host isEqualToString:@"www.douyin.com"] ||
                        [host isEqualToString:@"douyin.com"];
    if (!isDouyinHost) {
        return nil;
    }

    NSString *path = [components.path lowercaseString] ?: @"";
    BOOL supportsPath = NO;
    if ([host isEqualToString:@"v.douyin.com"]) {
        supportsPath = (path.length > 1);
    } else {
        supportsPath = [path hasPrefix:@"/video/"];
    }

    if (!supportsPath) {
        return nil;
    }

    return components.string ?: normalized;
}

static NSString *wcpl_douyin_extractLinkFromText(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }

    static NSDataDetector *linkDetector = nil;
    static dispatch_once_t detectorOnceToken;
    dispatch_once(&detectorOnceToken, ^{
        NSError *detectorError = nil;
        linkDetector = [NSDataDetector dataDetectorWithTypes:NSTextCheckingTypeLink error:&detectorError];
        if (detectorError) {
            linkDetector = nil;
        }
    });

    if (linkDetector) {
        NSArray<NSTextCheckingResult *> *matches = [linkDetector matchesInString:text options:0 range:NSMakeRange(0, text.length)];
        for (NSTextCheckingResult *match in matches) {
            NSURL *url = match.URL;
            if (![url isKindOfClass:[NSURL class]]) {
                continue;
            }
            NSString *normalized = wcpl_douyin_normalizeURLString(url.absoluteString);
            if (normalized.length > 0) {
                return normalized;
            }
        }
    }

    static NSRegularExpression *regex = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSError *error = nil;
        regex = [NSRegularExpression regularExpressionWithPattern:@"(?i)(?:https?://)?(?:v\\.douyin\\.com/[A-Za-z0-9]+(?:/[A-Za-z0-9]*)?(?:\\?[^\\s\\u3000<>\\\"']*)?|(?:www\\.)?douyin\\.com/video/[A-Za-z0-9]+(?:\\?[^\\s\\u3000<>\\\"']*)?)"
                                                         options:0
                                                           error:&error];
        if (error) {
            regex = nil;
        }
    });

    if (!regex) {
        return nil;
    }

    NSTextCheckingResult *match = [regex firstMatchInString:text options:0 range:NSMakeRange(0, text.length)];
    if (!match || match.range.location == NSNotFound || match.range.length == 0) {
        return nil;
    }

    NSString *candidate = [text substringWithRange:match.range];
    return wcpl_douyin_normalizeURLString(candidate);
}

static NSString *wcpl_douyin_firstStringForKeys(NSDictionary *dict, NSArray<NSString *> *keys) {
    if (![dict isKindOfClass:[NSDictionary class]] || keys.count == 0) {
        return nil;
    }

    for (NSString *key in keys) {
        id value = dict[key];
        if ([value isKindOfClass:[NSString class]]) {
            NSString *trimmed = wcpl_douyin_trimString((NSString *)value);
            if (trimmed.length > 0) {
                return trimmed;
            }
        }
    }

    return nil;
}

static NSString *wcpl_douyin_normalizeMediaURLString(NSString *urlString) {
    NSString *candidate = wcpl_douyin_trimString(urlString);
    if (candidate.length == 0) {
        return nil;
    }

    if ([candidate hasPrefix:@"//"]) {
        candidate = [@"https:" stringByAppendingString:candidate];
    }

    NSURLComponents *components = [NSURLComponents componentsWithString:candidate];
    NSString *scheme = components.scheme.lowercaseString;
    if (!([scheme isEqualToString:@"http"] || [scheme isEqualToString:@"https"])) {
        return nil;
    }

    return components.string ?: candidate;
}

static void wcpl_douyin_appendUniqueURLCandidate(NSMutableArray<NSString *> *candidates, NSString *candidate) {
    if (![candidates isKindOfClass:[NSMutableArray class]]) {
        return;
    }

    NSString *normalized = wcpl_douyin_normalizeMediaURLString(candidate);
    if (normalized.length == 0) {
        return;
    }
    if ([candidates containsObject:normalized]) {
        return;
    }
    [candidates addObject:normalized];
}

static void wcpl_douyin_appendURLListCandidate(NSMutableArray<NSString *> *candidates, id listObject) {
    if (![listObject isKindOfClass:[NSArray class]]) {
        return;
    }
    for (id item in (NSArray *)listObject) {
        if ([item isKindOfClass:[NSString class]]) {
            wcpl_douyin_appendUniqueURLCandidate(candidates, (NSString *)item);
        }
    }
}

static void wcpl_douyin_appendAddrCandidates(NSMutableArray<NSString *> *candidates, NSDictionary *address) {
    if (![address isKindOfClass:[NSDictionary class]]) {
        return;
    }
    wcpl_douyin_appendURLListCandidate(candidates, address[@"url_list"]);
    wcpl_douyin_appendUniqueURLCandidate(candidates, wcpl_douyin_firstStringForKeys(address, @[@"url", @"play_url", @"download_url"]));
}

static NSArray<NSString *> *wcpl_douyin_extractVideoURLsFromJSON(id jsonObject) {
    if (![jsonObject isKindOfClass:[NSDictionary class]]) {
        return @[];
    }

    NSMutableArray<NSString *> *candidates = [NSMutableArray array];
    NSDictionary *root = (NSDictionary *)jsonObject;
    NSDictionary *data = [root[@"data"] isKindOfClass:[NSDictionary class]] ? root[@"data"] : nil;

    if ([data isKindOfClass:[NSDictionary class]]) {
        NSDictionary *video = [data[@"video"] isKindOfClass:[NSDictionary class]] ? data[@"video"] : nil;
        if ([video isKindOfClass:[NSDictionary class]]) {
            NSArray *bitRate = [video[@"bit_rate"] isKindOfClass:[NSArray class]] ? video[@"bit_rate"] : nil;
            if ([bitRate isKindOfClass:[NSArray class]]) {
                for (id rateItem in bitRate) {
                    if (![rateItem isKindOfClass:[NSDictionary class]]) {
                        continue;
                    }
                    NSDictionary *rate = (NSDictionary *)rateItem;
                    wcpl_douyin_appendAddrCandidates(candidates, [rate[@"play_addr"] isKindOfClass:[NSDictionary class]] ? rate[@"play_addr"] : nil);
                    wcpl_douyin_appendAddrCandidates(candidates, [rate[@"play_addr_h264"] isKindOfClass:[NSDictionary class]] ? rate[@"play_addr_h264"] : nil);
                    wcpl_douyin_appendAddrCandidates(candidates, [rate[@"download_addr"] isKindOfClass:[NSDictionary class]] ? rate[@"download_addr"] : nil);
                    wcpl_douyin_appendUniqueURLCandidate(candidates, wcpl_douyin_firstStringForKeys(rate, @[@"video_url", @"url", @"play_url", @"download_url"]));
                }
            }

            wcpl_douyin_appendAddrCandidates(candidates, [video[@"play_addr"] isKindOfClass:[NSDictionary class]] ? video[@"play_addr"] : nil);
            wcpl_douyin_appendAddrCandidates(candidates, [video[@"play_addr_h264"] isKindOfClass:[NSDictionary class]] ? video[@"play_addr_h264"] : nil);
            wcpl_douyin_appendAddrCandidates(candidates, [video[@"download_addr"] isKindOfClass:[NSDictionary class]] ? video[@"download_addr"] : nil);
            wcpl_douyin_appendUniqueURLCandidate(candidates, wcpl_douyin_firstStringForKeys(video,
                                                                                             @[@"video_url", @"url", @"play_url", @"download_url"]));
        }

        NSArray *videoList = nil;
        if ([data[@"video_list"] isKindOfClass:[NSArray class]]) {
            videoList = data[@"video_list"];
        } else if ([data[@"videos"] isKindOfClass:[NSArray class]]) {
            videoList = data[@"videos"];
        }

        if ([videoList isKindOfClass:[NSArray class]]) {
            for (id item in videoList) {
                if ([item isKindOfClass:[NSString class]]) {
                    wcpl_douyin_appendUniqueURLCandidate(candidates, (NSString *)item);
                    continue;
                }

                if (![item isKindOfClass:[NSDictionary class]]) {
                    continue;
                }

                NSDictionary *dictItem = (NSDictionary *)item;
                wcpl_douyin_appendUniqueURLCandidate(candidates,
                                                     wcpl_douyin_firstStringForKeys(dictItem, @[@"video_url", @"url", @"play_url", @"download_url"]));
                wcpl_douyin_appendAddrCandidates(candidates, [dictItem[@"play_addr"] isKindOfClass:[NSDictionary class]] ? dictItem[@"play_addr"] : nil);
                wcpl_douyin_appendAddrCandidates(candidates, [dictItem[@"download_addr"] isKindOfClass:[NSDictionary class]] ? dictItem[@"download_addr"] : nil);
                wcpl_douyin_appendURLListCandidate(candidates, dictItem[@"url_list"]);
            }
        }

        wcpl_douyin_appendUniqueURLCandidate(candidates,
                                             wcpl_douyin_firstStringForKeys(data, @[@"video_url", @"url", @"play_url", @"download_url"]));
    }

    wcpl_douyin_appendUniqueURLCandidate(candidates,
                                         wcpl_douyin_firstStringForKeys(root, @[@"video_url", @"url", @"play_url", @"download_url"]));
    return [candidates copy];
}

static NSString *wcpl_douyin_errorMessageFromJSON(id jsonObject) {
    if (![jsonObject isKindOfClass:[NSDictionary class]]) {
        return nil;
    }

    NSDictionary *dict = (NSDictionary *)jsonObject;
    NSString *message = wcpl_douyin_firstStringForKeys(dict, @[@"msg", @"message", @"error", @"detail"]);
    if (message.length > 0) {
        return message;
    }

    id detail = dict[@"detail"];
    if ([detail isKindOfClass:[NSDictionary class]]) {
        return wcpl_douyin_firstStringForKeys((NSDictionary *)detail, @[@"message", @"msg", @"detail"]);
    }

    return nil;
}

static void wcpl_douyin_showToast(NSString *text, BOOL isError) {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *message = wcpl_douyin_trimString(text);
        if (message.length == 0) {
            return;
        }

        Class toastClass = objc_getClass("WeToast");
        if (toastClass && [toastClass respondsToSelector:@selector(toast)]) {
            id toast = nil;
            @try {
                toast = ((id (*)(id, SEL))objc_msgSend)(toastClass, @selector(toast));
            } @catch (__unused NSException *exception) {
                toast = nil;
            }

            if (toast) {
                SEL errorSel = @selector(showErrorToastWithText:);
                SEL textSel = @selector(showToastWithText:);
                if (isError && [toast respondsToSelector:errorSel]) {
                    @try {
                        ((void (*)(id, SEL, id))objc_msgSend)(toast, errorSel, message);
                        return;
                    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
                }
                if ([toast respondsToSelector:textSel]) {
                    @try {
                        ((void (*)(id, SEL, id))objc_msgSend)(toast, textSel, message);
                        return;
                    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
                }
            }
        }

        WCPLLogInfo(@"[抖音解析] 提示: %@", message);
    });
}

static unsigned long long wcpl_douyin_sendQueueCount(BOOL *availableOut) {
    if (availableOut) {
        *availableOut = NO;
    }

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(GetCountOfSendMessage)])) {
        return 0;
    }

    @try {
        unsigned long long count = ((unsigned long long (*)(id, SEL))objc_msgSend)(sendMessageMgr, @selector(GetCountOfSendMessage));
        if (availableOut) {
            *availableOut = YES;
        }
        return count;
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

static NSString *wcpl_douyin_tempRootDirectory(void) {
    NSString *tmp = NSTemporaryDirectory();
    if (![tmp isKindOfClass:[NSString class]] || tmp.length == 0) {
        tmp = @"/tmp";
    }
    return [tmp stringByAppendingPathComponent:@"wcpl_douyin_parser"];
}

static NSString *wcpl_douyin_createWorkingDirectory(void) {
    NSString *root = wcpl_douyin_tempRootDirectory();
    NSString *uuid = [[NSUUID UUID] UUIDString] ?: [NSString stringWithFormat:@"%u", arc4random()];
    NSString *workDir = [root stringByAppendingPathComponent:uuid];

    NSFileManager *fm = [NSFileManager defaultManager];
    NSError *err = nil;
    [fm createDirectoryAtPath:workDir withIntermediateDirectories:YES attributes:nil error:&err];
    if (err) {
        WCPLLogWarning(@"[抖音解析] 创建临时目录失败: %@", err.localizedDescription ?: @"unknown");
        return nil;
    }

    return workDir;
}

static void wcpl_douyin_cleanupPathsAfterDelay(NSArray<NSString *> *paths, NSTimeInterval delay) {
    NSArray<NSString *> *safePaths = [paths isKindOfClass:[NSArray class]] ? paths : @[];
    if (safePaths.count == 0) {
        return;
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(MAX(0.0, delay) * NSEC_PER_SEC)),
                   dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0),
                   ^{
        NSFileManager *fm = [NSFileManager defaultManager];
        for (NSString *path in safePaths) {
            NSString *trimmed = wcpl_douyin_trimString(path);
            if (trimmed.length == 0) {
                continue;
            }
            if ([fm fileExistsAtPath:trimmed]) {
                NSError *err = nil;
                [fm removeItemAtPath:trimmed error:&err];
                if (err) {
                    WCPLLogWarning(@"[抖音解析] 清理临时文件失败: path=%@ err=%@",
                                   wcpl_douyin_redactedPath(trimmed),
                                   err.localizedDescription ?: @"unknown");
                }
            }
        }
    });
}

static NSDictionary * __unused wcpl_douyin_videoMetaForPath(NSString *videoPath) {
    NSMutableDictionary *meta = [NSMutableDictionary dictionary];

    unsigned long long fileSize = 0;
    NSDictionary *attrs = [[NSFileManager defaultManager] attributesOfItemAtPath:videoPath error:nil];
    if ([attrs isKindOfClass:[NSDictionary class]]) {
        NSNumber *sizeObj = attrs[NSFileSize];
        if ([sizeObj isKindOfClass:[NSNumber class]]) {
            fileSize = sizeObj.unsignedLongLongValue;
        }
    }
    meta[@"size"] = @(fileSize);

    AVURLAsset *asset = [AVURLAsset URLAssetWithURL:[NSURL fileURLWithPath:videoPath] options:nil];
    Float64 seconds = CMTimeGetSeconds(asset.duration);
    if (!isfinite(seconds) || seconds <= 0) {
        seconds = 1;
    }
    unsigned int durationSec = (unsigned int)MAX(1, (int)llround(seconds));
    meta[@"duration"] = @(durationSec);

    CGSize naturalSize = CGSizeZero;
    NSArray<AVAssetTrack *> *tracks = [asset tracksWithMediaType:AVMediaTypeVideo];
    if (tracks.count > 0) {
        AVAssetTrack *track = tracks.firstObject;
        CGSize transformed = CGSizeApplyAffineTransform(track.naturalSize, track.preferredTransform);
        naturalSize = CGSizeMake(fabs(transformed.width), fabs(transformed.height));
    }
    meta[@"width"] = @((unsigned int)MAX(0, (int)llround(naturalSize.width)));
    meta[@"height"] = @((unsigned int)MAX(0, (int)llround(naturalSize.height)));

    return meta;
}

static NSDictionary *wcpl_douyin_lightVideoMetaForPath(NSString *videoPath) {
    NSMutableDictionary *meta = [NSMutableDictionary dictionary];
    unsigned long long fileSize = 0;
    NSDictionary *attrs = [[NSFileManager defaultManager] attributesOfItemAtPath:videoPath error:nil];
    if ([attrs isKindOfClass:[NSDictionary class]]) {
        NSNumber *sizeObj = attrs[NSFileSize];
        if ([sizeObj isKindOfClass:[NSNumber class]]) {
            fileSize = sizeObj.unsignedLongLongValue;
        }
    }
    meta[@"size"] = @(fileSize);
    // 低开销模式：关闭精确时长计算，仅取容器时长，避免高 CPU/IO。
    Float64 seconds = 0;
    @try {
        NSDictionary *assetOptions = @{ AVURLAssetPreferPreciseDurationAndTimingKey : @NO };
        AVURLAsset *asset = [AVURLAsset URLAssetWithURL:[NSURL fileURLWithPath:videoPath] options:assetOptions];
        seconds = CMTimeGetSeconds(asset.duration);
    } @catch (__unused NSException *exception) {
        seconds = 0;
    }
    if (!isfinite(seconds) || seconds <= 0) {
        seconds = 1;
    }
    meta[@"duration"] = @((unsigned int)MAX(1, (int)llround(seconds)));
    meta[@"width"] = @0;
    meta[@"height"] = @0;
    return meta;
}

static unsigned int wcpl_douyin_safeUnsignedIntForKey(id obj, NSString *key, unsigned int fallbackValue) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return fallbackValue;
    }
    @try {
        id value = [obj valueForKey:key];
        if ([value respondsToSelector:@selector(unsignedIntValue)]) {
            return (unsigned int)[value unsignedIntValue];
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    return fallbackValue;
}

// 紧急稳定优先：关闭原生工厂建包路径，避免个别版本触发崩溃。
static const BOOL kWCPLDouyinEnableNativeVideoInfoFactory = NO;

static id wcpl_douyin_createCaptureVideoInfoNative(Class captureClass, NSString *videoPath, NSString *thumbPath) {
    if (!captureClass || videoPath.length == 0 || thumbPath.length == 0) {
        return nil;
    }

    SEL nativeFactorySel = @selector(genVideoInfoWithVideoUrl:thumb:);
    if (![captureClass respondsToSelector:nativeFactorySel]) {
        return nil;
    }

    @try {
        id info = ((id (*)(id, SEL, id, id))objc_msgSend)(captureClass, nativeFactorySel, videoPath, thumbPath);
        if (info && [info isKindOfClass:captureClass]) {
            return info;
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    return nil;
}

static id wcpl_douyin_createCaptureVideoInfoFallback(Class captureClass,
                                                     NSString *videoPath,
                                                     NSString *thumbPath,
                                                     NSString *chatUserName) {
    if (!captureClass) {
        return nil;
    }

    id videoInfo = nil;
    @try {
        videoInfo = [[captureClass alloc] init];
    } @catch (__unused NSException *exception) {
        videoInfo = nil;
    }
    if (!videoInfo) {
        return nil;
    }

    NSDictionary *meta = wcpl_douyin_lightVideoMetaForPath(videoPath);
    NSNumber *sizeObj = [meta[@"size"] isKindOfClass:[NSNumber class]] ? meta[@"size"] : @(0);
    NSNumber *durObj = [meta[@"duration"] isKindOfClass:[NSNumber class]] ? meta[@"duration"] : @(1);

    unsigned int thumbSize = 0;
    NSDictionary *thumbAttrs = [[NSFileManager defaultManager] attributesOfItemAtPath:thumbPath error:nil];
    if ([thumbAttrs isKindOfClass:[NSDictionary class]]) {
        NSNumber *thumbSizeObj = thumbAttrs[NSFileSize];
        if ([thumbSizeObj isKindOfClass:[NSNumber class]]) {
            thumbSize = thumbSizeObj.unsignedIntValue;
        }
    }

    @try { [videoInfo setValue:videoPath forKey:@"video_path"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:thumbPath forKey:@"thumb_path"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@((unsigned int)sizeObj.unsignedIntValue) forKey:@"video_size"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@((unsigned int)durObj.unsignedIntValue) forKey:@"video_time"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_videoCreateTime"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@((unsigned int)0) forKey:@"video_width"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@((unsigned int)0) forKey:@"video_height"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@(thumbSize) forKey:@"thumb_size"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:chatUserName forKey:@"m_nsSpecifiedChatName"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    WCPLLogInfo(@"[抖音解析] 发送阶段: step=video_info_fallback size=%u dur=%u thumb=%u",
                (unsigned int)sizeObj.unsignedIntValue,
                (unsigned int)durObj.unsignedIntValue,
                thumbSize);
    return videoInfo;
}

static BOOL wcpl_douyin_isPlayableVideoAtPath(NSString *videoPath) {
    NSString *video = wcpl_douyin_trimString(videoPath);
    if (video.length == 0) {
        return NO;
    }

    NSFileManager *fm = [NSFileManager defaultManager];
    NSDictionary *attrs = [fm attributesOfItemAtPath:video error:nil];
    if (![attrs isKindOfClass:[NSDictionary class]]) {
        return NO;
    }
    NSNumber *sizeObj = attrs[NSFileSize];
    unsigned long long fileSize = [sizeObj isKindOfClass:[NSNumber class]] ? sizeObj.unsignedLongLongValue : 0;
    if (fileSize < 64 * 1024) {
        return NO;
    }

    AVURLAsset *asset = [AVURLAsset URLAssetWithURL:[NSURL fileURLWithPath:video] options:nil];
    NSArray<AVAssetTrack *> *videoTracks = [asset tracksWithMediaType:AVMediaTypeVideo];
    if (videoTracks.count == 0) {
        return NO;
    }

    Float64 seconds = CMTimeGetSeconds(asset.duration);
    return (isfinite(seconds) && seconds > 0.0);
}

static BOOL wcpl_douyin_writeFallbackThumb(NSString *thumbPath) {
    if (thumbPath.length == 0) {
        return NO;
    }

    CGSize size = CGSizeMake(360, 640);
    UIGraphicsBeginImageContextWithOptions(size, YES, 1.0);
    [[UIColor colorWithRed:0.12 green:0.12 blue:0.12 alpha:1.0] setFill];
    UIRectFill(CGRectMake(0, 0, size.width, size.height));
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    NSData *jpeg = UIImageJPEGRepresentation(image, 0.75);
    return ([jpeg isKindOfClass:[NSData class]] && jpeg.length > 0 && [jpeg writeToFile:thumbPath atomically:YES]);
}

static NSString *wcpl_douyin_generateThumbForVideo(NSString *videoPath, NSString *workDir) {
    if (videoPath.length == 0 || workDir.length == 0) {
        return nil;
    }

    NSString *thumbPath = [workDir stringByAppendingPathComponent:@"thumb.jpg"];

    AVURLAsset *asset = [AVURLAsset URLAssetWithURL:[NSURL fileURLWithPath:videoPath] options:nil];
    AVAssetImageGenerator *generator = [[AVAssetImageGenerator alloc] initWithAsset:asset];
    generator.appliesPreferredTrackTransform = YES;
    generator.maximumSize = CGSizeMake(720, 720);

    NSError *error = nil;
    CMTime time = CMTimeMakeWithSeconds(0.1, 600);
    CGImageRef frame = [generator copyCGImageAtTime:time actualTime:NULL error:&error];
    if (!frame) {
        error = nil;
        frame = [generator copyCGImageAtTime:kCMTimeZero actualTime:NULL error:&error];
    }

    BOOL wrote = NO;
    if (frame) {
        UIImage *image = [UIImage imageWithCGImage:frame];
        CGImageRelease(frame);
        NSData *jpeg = UIImageJPEGRepresentation(image, 0.82);
        wrote = ([jpeg isKindOfClass:[NSData class]] && jpeg.length > 0 && [jpeg writeToFile:thumbPath atomically:YES]);
    }

    if (!wrote) {
        wrote = wcpl_douyin_writeFallbackThumb(thumbPath);
    }

    return wrote ? thumbPath : nil;
}

static const NSUInteger kWCPLDouyinDownloadRetryPerURL = 1;
static const NSTimeInterval kWCPLDouyinDownloadRetryDelay = 0.35;

typedef void (^WCPLDouyinParseCompletion)(NSArray<NSString *> * _Nullable videoURLs, NSString * _Nullable errorMessage);
typedef void (^WCPLDouyinDownloadCompletion)(NSString * _Nullable videoPath,
                                             NSString * _Nullable thumbPath,
                                             NSString * _Nullable workDir,
                                             NSString * _Nullable errorMessage);

static void wcpl_douyin_requestVideoURL(NSString *douyinLink,
                                        NSString *chatUserName,
                                        unsigned long long sessionToken,
                                        WCPLDouyinParseCompletion completion) {
    NSString *link = wcpl_douyin_trimString(douyinLink);
    if (link.length == 0) {
        if (completion) {
            completion(nil, @"抖音链接为空");
        }
        return;
    }

    NSURLComponents *components = [NSURLComponents componentsWithString:@"https://dy.cenai.de/api/hybrid/video_data"];
    components.queryItems = @[
        [NSURLQueryItem queryItemWithName:@"url" value:link],
        [NSURLQueryItem queryItemWithName:@"minimal" value:@"false"]
    ];
    NSURL *requestURL = components.URL;
    if (!requestURL) {
        if (completion) {
            completion(nil, @"API 地址无效");
        }
        return;
    }

    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:requestURL];
    request.HTTPMethod = @"GET";
    request.timeoutInterval = 15.0;

    __block NSURLSessionDataTask *task = nil;
    task = [[NSURLSession sharedSession] dataTaskWithRequest:request
                                           completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
        wcpl_douyin_unregisterTaskForSession(chatUserName, sessionToken, task);
        if (!wcpl_douyin_isSessionActive(chatUserName, sessionToken)) {
            return;
        }
        if (error) {
            if (completion) {
                completion(nil, [NSString stringWithFormat:@"请求失败: %@", error.localizedDescription ?: @"未知错误"]);
            }
            return;
        }

        NSInteger statusCode = 0;
        if ([response isKindOfClass:[NSHTTPURLResponse class]]) {
            statusCode = ((NSHTTPURLResponse *)response).statusCode;
        }

        if (![data isKindOfClass:[NSData class]] || data.length == 0) {
            if (completion) {
                completion(nil, @"API 返回为空");
            }
            return;
        }

        NSError *jsonError = nil;
        id jsonObject = [NSJSONSerialization JSONObjectWithData:data options:0 error:&jsonError];
        if (jsonError || !jsonObject) {
            NSString *raw = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
            NSString *reason = wcpl_douyin_trimString(raw);
            if (completion) {
                completion(nil, reason.length > 0 ? [NSString stringWithFormat:@"响应解析失败: %@", reason] : @"响应解析失败");
            }
            return;
        }

        NSArray<NSString *> *videoURLs = wcpl_douyin_extractVideoURLsFromJSON(jsonObject);
        if (videoURLs.count > 0) {
            if (completion) {
                completion(videoURLs, nil);
            }
            return;
        }

        NSString *errorMessage = wcpl_douyin_errorMessageFromJSON(jsonObject);
        if (errorMessage.length == 0 && statusCode > 0 && statusCode != 200) {
            errorMessage = [NSString stringWithFormat:@"HTTP %ld", (long)statusCode];
        }
        if (errorMessage.length == 0) {
            errorMessage = @"未解析到视频链接";
        }

        if (completion) {
            completion(nil, errorMessage);
        }
    }];

    wcpl_douyin_registerTaskForSession(chatUserName, sessionToken, task);
    [task resume];
}

static NSArray<NSString *> *wcpl_douyin_sanitizeVideoURLCandidates(NSArray<NSString *> *videoURLCandidates) {
    NSMutableArray<NSString *> *candidates = [NSMutableArray array];
    if (![videoURLCandidates isKindOfClass:[NSArray class]]) {
        return @[];
    }
    for (id item in videoURLCandidates) {
        if ([item isKindOfClass:[NSString class]]) {
            wcpl_douyin_appendUniqueURLCandidate(candidates, (NSString *)item);
        }
    }
    return [candidates copy];
}

static void wcpl_douyin_downloadVideoAttempt(NSArray<NSString *> *videoURLCandidates,
                                             NSUInteger candidateIndex,
                                             NSUInteger retryIndex,
                                             NSString *lastErrorMessage,
                                             NSString *chatUserName,
                                             unsigned long long sessionToken,
                                             WCPLDouyinDownloadCompletion completion) {
    if (!wcpl_douyin_isSessionActive(chatUserName, sessionToken)) {
        return;
    }
    if (!(candidateIndex < videoURLCandidates.count)) {
        if (completion) {
            completion(nil, nil, nil, lastErrorMessage.length > 0 ? lastErrorMessage : @"视频下载失败");
        }
        return;
    }

    NSString *urlText = wcpl_douyin_trimString(videoURLCandidates[candidateIndex]);
    NSURL *url = [NSURL URLWithString:urlText ?: @""];
    if (!url || !url.scheme.length) {
        wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                         candidateIndex + 1,
                                         0,
                                         @"视频下载地址无效",
                                         chatUserName,
                                         sessionToken,
                                         completion);
        return;
    }

    __block NSURLSessionDownloadTask *task = nil;
    task = [[NSURLSession sharedSession] downloadTaskWithURL:url
                                          completionHandler:^(NSURL *location, NSURLResponse *response, NSError *error) {
        wcpl_douyin_unregisterTaskForSession(chatUserName, sessionToken, task);
        if (!wcpl_douyin_isSessionActive(chatUserName, sessionToken)) {
            return;
        }
        if (error) {
            NSString *message = [NSString stringWithFormat:@"视频下载失败: %@", error.localizedDescription ?: @"未知错误"];
            if (retryIndex < kWCPLDouyinDownloadRetryPerURL) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLDouyinDownloadRetryDelay * NSEC_PER_SEC)),
                               dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),
                               ^{
                    wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                                     candidateIndex,
                                                     retryIndex + 1,
                                                     message,
                                                     chatUserName,
                                                     sessionToken,
                                                     completion);
                });
            } else {
                wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                                 candidateIndex + 1,
                                                 0,
                                                 message,
                                                 chatUserName,
                                                 sessionToken,
                                                 completion);
            }
            return;
        }

        NSInteger statusCode = 0;
        if ([response isKindOfClass:[NSHTTPURLResponse class]]) {
            statusCode = ((NSHTTPURLResponse *)response).statusCode;
            if (statusCode < 200 || statusCode >= 300) {
                NSString *message = [NSString stringWithFormat:@"视频下载失败: HTTP %ld", (long)statusCode];
                BOOL retryableStatus = (statusCode == 408 || statusCode == 429 || statusCode >= 500);
                if (retryableStatus && retryIndex < kWCPLDouyinDownloadRetryPerURL) {
                    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLDouyinDownloadRetryDelay * NSEC_PER_SEC)),
                                   dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),
                                   ^{
                        wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                                         candidateIndex,
                                                         retryIndex + 1,
                                                         message,
                                                         chatUserName,
                                                         sessionToken,
                                                         completion);
                    });
                } else {
                    wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                                     candidateIndex + 1,
                                                     0,
                                                     message,
                                                     chatUserName,
                                                     sessionToken,
                                                     completion);
                }
                return;
            }
        }

        if (!location) {
            NSString *message = @"视频下载失败: 无临时文件";
            if (retryIndex < kWCPLDouyinDownloadRetryPerURL) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLDouyinDownloadRetryDelay * NSEC_PER_SEC)),
                               dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),
                               ^{
                    wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                                     candidateIndex,
                                                     retryIndex + 1,
                                                     message,
                                                     chatUserName,
                                                     sessionToken,
                                                     completion);
                });
            } else {
                wcpl_douyin_downloadVideoAttempt(videoURLCandidates,
                                                 candidateIndex + 1,
                                                 0,
                                                 message,
                                                 chatUserName,
                                                 sessionToken,
                                                 completion);
            }
            return;
        }

        NSString *workDir = wcpl_douyin_createWorkingDirectory();
        if (workDir.length == 0) {
            if (completion) {
                completion(nil, nil, nil, @"创建临时目录失败");
            }
            return;
        }

        NSString *extension = wcpl_douyin_trimString(response.suggestedFilename.pathExtension);
        if (extension.length == 0) {
            extension = wcpl_douyin_trimString(url.pathExtension);
        }
        if (extension.length == 0) {
            extension = @"mp4";
        }

        NSString *uuid = [[NSUUID UUID] UUIDString] ?: [NSString stringWithFormat:@"%u", arc4random()];
        NSString *fileName = [NSString stringWithFormat:@"douyin_%@.%@", uuid, extension];
        NSString *videoPath = [workDir stringByAppendingPathComponent:fileName];
        NSFileManager *fm = [NSFileManager defaultManager];
        NSError *moveError = nil;
        [fm removeItemAtPath:videoPath error:nil];
        [fm moveItemAtURL:location toURL:[NSURL fileURLWithPath:videoPath] error:&moveError];
        if (moveError || ![fm fileExistsAtPath:videoPath]) {
            if (completion) {
                completion(nil, nil, workDir, @"移动下载视频失败");
            }
            return;
        }

        NSString *thumbPath = wcpl_douyin_generateThumbForVideo(videoPath, workDir);
        if (thumbPath.length == 0) {
            if (completion) {
                completion(nil, nil, workDir, @"生成视频封面失败");
            }
            return;
        }

        if (!wcpl_douyin_isPlayableVideoAtPath(videoPath)) {
            if (completion) {
                completion(nil, nil, workDir, @"下载内容不是可发送的视频");
            }
            return;
        }

        if (completion) {
            completion(videoPath, thumbPath, workDir, nil);
        }
    }];

    wcpl_douyin_registerTaskForSession(chatUserName, sessionToken, task);
    [task resume];
}

static void wcpl_douyin_downloadVideo(NSArray<NSString *> *videoURLCandidates,
                                      NSString *chatUserName,
                                      unsigned long long sessionToken,
                                      WCPLDouyinDownloadCompletion completion) {
    NSArray<NSString *> *candidates = wcpl_douyin_sanitizeVideoURLCandidates(videoURLCandidates);
    if (candidates.count == 0) {
        if (completion) {
            completion(nil, nil, nil, @"视频下载地址无效");
        }
        return;
    }

    wcpl_douyin_downloadVideoAttempt(candidates, 0, 0, nil, chatUserName, sessionToken, completion);
}

static BOOL wcpl_douyin_sendVideoByLogicController(UIViewController *chatVC,
                                                   NSString *fromUser,
                                                   NSString *chatUser,
                                                   id videoInfo) {
    if (!chatVC || fromUser.length == 0 || chatUser.length == 0 || !videoInfo) {
        return NO;
    }

    id logic = nil;
    if ([chatVC respondsToSelector:@selector(m_logicController)]) {
        @try {
            logic = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(m_logicController));
        } @catch (__unused NSException *exception) {
            logic = nil;
        }
    }
    if (!logic) {
        @try {
            logic = [chatVC valueForKey:@"m_logicController"];
        } @catch (__unused NSException *exception) {
            logic = nil;
        }
    }

    if (!(logic && [logic respondsToSelector:@selector(AddVideoMsg:ToUsr:VideoInfo:)])) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id, id))objc_msgSend)(logic, @selector(AddVideoMsg:ToUsr:VideoInfo:), fromUser, chatUser, videoInfo);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[抖音解析] 逻辑控制器发送视频异常: %@", exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_douyin_invokeVideoSelectorSafely(id messageMgr,
                                                  NSString *selectorName,
                                                  NSString *fromUser,
                                                  NSString *chatUser,
                                                  id videoInfo,
                                                  id *resultOut) {
    SEL selector = NSSelectorFromString(selectorName);
    if (!(messageMgr && selector && [messageMgr respondsToSelector:selector])) {
        return NO;
    }

    NSMethodSignature *sig = [messageMgr methodSignatureForSelector:selector];
    if (!sig) {
        return NO;
    }

    BOOL needMsgType = [selectorName isEqualToString:@"AddVideoMsg:ToUsr:VideoInfo:MsgType:"];
    NSUInteger expectedArgs = needMsgType ? 6 : 5;
    if (sig.numberOfArguments != expectedArgs) {
        WCPLLogWarning(@"[抖音解析] %@ 跳过: args=%lu expected=%lu",
                       selectorName,
                       (unsigned long)sig.numberOfArguments,
                       (unsigned long)expectedArgs);
        return NO;
    }

    NSInvocation *inv = [NSInvocation invocationWithMethodSignature:sig];
    [inv setTarget:messageMgr];
    [inv setSelector:selector];
    id fromUserArg = fromUser;
    id chatUserArg = chatUser;
    id videoInfoArg = videoInfo;
    [inv setArgument:&fromUserArg atIndex:2];
    [inv setArgument:&chatUserArg atIndex:3];
    [inv setArgument:&videoInfoArg atIndex:4];
    if (needMsgType) {
        unsigned int msgType = 43;
        [inv setArgument:&msgType atIndex:5];
    }

    @try {
        [inv invoke];
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[抖音解析] %@ 调用异常: %@", selectorName, exception.reason ?: @"unknown");
        return NO;
    }

    if (resultOut) {
        *resultOut = nil;
        const char *retType = sig.methodReturnType;
        if (retType && retType[0] == '@') {
            __unsafe_unretained id tmp = nil;
            [inv getReturnValue:&tmp];
            *resultOut = tmp;
        }
    }

    return YES;
}

static BOOL wcpl_douyin_sendVideoToSession(NSString *videoPath,
                                           NSString *thumbPath,
                                           NSString *sessionUserName,
                                           UIViewController *chatVC) {
    if (![NSThread isMainThread]) {
        __block BOOL sent = NO;
        dispatch_sync(dispatch_get_main_queue(), ^{
            sent = wcpl_douyin_sendVideoToSession(videoPath, thumbPath, sessionUserName, chatVC);
        });
        return sent;
    }

    NSString *video = wcpl_douyin_trimString(videoPath);
    NSString *thumb = wcpl_douyin_trimString(thumbPath);
    NSString *chatUser = wcpl_douyin_trimString(sessionUserName);
    if (video.length == 0 || thumb.length == 0 || chatUser.length == 0) {
        return NO;
    }
    WCPLLogInfo(@"[抖音解析] 发送阶段: step=enter chat=%@ video=%@",
                wcpl_douyin_redactedString(chatUser),
                wcpl_douyin_redactedPath(video));

    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:video] || ![fm fileExistsAtPath:thumb]) {
        WCPLLogWarning(@"[抖音解析] 发送失败: 本地视频或封面不存在");
        return NO;
    }

    NSString *selfUser = wcpl_douyin_currentSelfUserName();
    if (selfUser.length == 0) {
        WCPLLogWarning(@"[抖音解析] 发送失败: selfUserName 为空");
        return NO;
    }
    WCPLLogInfo(@"[抖音解析] 发送阶段: step=self_user_ok self=%@", wcpl_douyin_redactedString(selfUser));

    Class captureClass = objc_getClass("CaptureVideoInfo");
    if (!captureClass) {
        WCPLLogWarning(@"[抖音解析] 发送失败: CaptureVideoInfo 类不可用");
        return NO;
    }
    WCPLLogInfo(@"[抖音解析] 发送阶段: step=capture_class_ok class=%@", NSStringFromClass(captureClass));

    id videoInfo = nil;
    if (kWCPLDouyinEnableNativeVideoInfoFactory) {
        videoInfo = wcpl_douyin_createCaptureVideoInfoNative(captureClass, video, thumb);
    }
    BOOL nativeVideoInfoUsed = (videoInfo != nil);
    if (!videoInfo) {
        videoInfo = wcpl_douyin_createCaptureVideoInfoFallback(captureClass, video, thumb, chatUser);
    }
    if (!videoInfo) {
        WCPLLogWarning(@"[抖音解析] 发送失败: CaptureVideoInfo 构建失败");
        return NO;
    }
    @try { [videoInfo setValue:chatUser forKey:@"m_nsSpecifiedChatName"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try { [videoInfo setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_videoCreateTime"]; } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    unsigned int videoSize = wcpl_douyin_safeUnsignedIntForKey(videoInfo, @"video_size", 0);
    unsigned int videoDuration = wcpl_douyin_safeUnsignedIntForKey(videoInfo, @"video_time", 1);
    unsigned int thumbSize = wcpl_douyin_safeUnsignedIntForKey(videoInfo, @"thumb_size", 0);
    WCPLLogInfo(@"[抖音解析] 发送阶段: step=video_info_ready mode=%@ size=%u dur=%u thumb=%u",
                nativeVideoInfoUsed ? @"native_factory" : @"light_fallback",
                videoSize,
                videoDuration,
                thumbSize);

    // 优先走逻辑控制器路径，避免不同版本 CMessageMgr selector 签名差异导致闪退。
    WCPLLogInfo(@"[抖音解析] 发送尝试: path=logic_controller chat=%@ video=%@",
                wcpl_douyin_redactedString(chatUser),
                wcpl_douyin_redactedPath(video));
    BOOL sentByLogicController = wcpl_douyin_sendVideoByLogicController(chatVC, selfUser, chatUser, videoInfo);
    if (sentByLogicController) {
        WCPLLogInfo(@"[抖音解析] 视频发送走逻辑控制器成功: chat=%@", wcpl_douyin_redactedString(chatUser));
        return YES;
    }
    WCPLLogWarning(@"[抖音解析] 逻辑控制器发送失败，尝试 CMessageMgr 安全兜底");

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        WCPLLogWarning(@"[抖音解析] 发送失败: CMessageMgr 不可用");
        return NO;
    }

    BOOL queueAvailableBefore = NO;
    unsigned long long queueBefore = wcpl_douyin_sendQueueCount(&queueAvailableBefore);

    NSArray<NSString *> *selectorNames = @[
        @"AddVideoMsg:ToUsr:VideoInfo:MsgType:",
        @"AddVideoMsg:ToUsr:VideoInfo:",
        @"AddShortVideoMsg:ToUsr:VideoInfo:"
    ];

    for (NSString *selectorName in selectorNames) {
        if (![messageMgr respondsToSelector:NSSelectorFromString(selectorName)]) {
            continue;
        }

        id result = nil;
        BOOL invoked = wcpl_douyin_invokeVideoSelectorSafely(messageMgr,
                                                             selectorName,
                                                             selfUser,
                                                             chatUser,
                                                             videoInfo,
                                                             &result);
        if (!invoked) {
            continue;
        }

        BOOL queueAvailableAfter = NO;
        unsigned long long queueAfter = wcpl_douyin_sendQueueCount(&queueAvailableAfter);
        BOOL queueIncreased = (queueAvailableBefore && queueAvailableAfter && queueAfter > queueBefore);

        if ([result isKindOfClass:%c(CMessageWrap)]) {
            CMessageWrap *wrap = (CMessageWrap *)result;
            if (wrap.m_uiMesLocalID > 0 || wrap.m_n64MesSvrID > 0 || queueIncreased) {
                WCPLLogInfo(@"[抖音解析] CMessageMgr 发送成功: selector=%@", selectorName);
                return YES;
            }
        }

        if (result || queueIncreased) {
            WCPLLogInfo(@"[抖音解析] CMessageMgr 发送成功(弱判定): selector=%@", selectorName);
            return YES;
        }
    }

    return NO;
}

static BOOL wcpl_douyin_shouldShowActionForCell(id cell) {
    if (![WCPLConfigCenter shared].douyinParserEnable) {
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_douyin_messageWrapFromCell(cell);
    if (!msgWrap) {
        return NO;
    }

    NSString *content = wcpl_douyin_trimString(msgWrap.m_nsContent);
    if (content.length == 0) {
        return NO;
    }

    return (wcpl_douyin_extractLinkFromText(content).length > 0);
}

static UIColor *wcpl_douyin_menuIconTintColor(void) {
    return [UIColor colorWithWhite:1.0 alpha:1.0];
}

static UIImage *wcpl_douyin_menuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M10 3V15.5C10 17.433 8.433 19 6.5 19C4.567 19 3 17.433 3 15.5C3 13.567 4.567 12 6.5 12C7.289 12 8.015 12.246 8.605 12.664' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M10 6.5C12.5 6.5 14.5 8.5 14.5 11' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "<circle cx='18' cy='16' r='4' stroke='#FFFFFF' stroke-width='1.5'/>"
            "<path d='M18 14V18M18 18L16.5 16.5M18 18L19.5 16.5' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "</svg>";
        NSData *svgData = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id svgImage = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                svgImage = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, svgData);
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
        if ([svgImage isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)svgImage;
        }

        UIImage *symbol = nil;
        if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
            UIImageSymbolConfiguration *config =
                [UIImageSymbolConfiguration configurationWithPointSize:16
                                                                weight:UIImageSymbolWeightRegular
                                                                 scale:UIImageSymbolScaleMedium];
            symbol = [UIImage systemImageNamed:@"link.badge.plus" withConfiguration:config];
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"play.square.stack" withConfiguration:config];
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"link" withConfiguration:config];
            }
        }
        if (!symbol && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            symbol = [UIImage systemImageNamed:@"link.badge.plus"];
        }
        if (!symbol && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            symbol = [UIImage systemImageNamed:@"play.square.stack"];
        }
        if (!symbol && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            symbol = [UIImage systemImageNamed:@"link"];
        }
        if (!symbol && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            symbol = [UIImage systemImageNamed:@"play.rectangle"];
        }
        if (!icon && [symbol isKindOfClass:[UIImage class]]) {
            icon = symbol;
        }
        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        }
    });
    return icon;
}

static void wcpl_douyin_applyMenuItemIcon(id menuItem, UIImage *icon) {
    if (!menuItem || !icon) {
        return;
    }

    UIImage *finalIcon = icon;
    if ([finalIcon respondsToSelector:@selector(imageWithTintColor:)]) {
        @try {
            finalIcon = [finalIcon imageWithTintColor:wcpl_douyin_menuIconTintColor()];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([finalIcon respondsToSelector:@selector(imageWithRenderingMode:)]) {
        finalIcon = [finalIcon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    }

    if ([menuItem respondsToSelector:@selector(setIconImage:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(menuItem, @selector(setIconImage:), finalIcon);
            return;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    @try {
        [menuItem setValue:finalIcon forKey:@"iconImage"];
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

static id wcpl_douyin_createMenuItemIfNeeded(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    UIImage *icon = wcpl_douyin_menuIconImage();
    id menuItem = nil;
    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:kWCPLDouyinParserMenuTitle icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if ([menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        if (!menuItem) {
            @try {
                menuItem = [[menuItemClass alloc] initWithTitle:kWCPLDouyinParserMenuTitle target:cell action:action];
            } @catch (__unused NSException *exception) {
                menuItem = nil;
            }
        }
    }

    if (menuItem && icon) {
        wcpl_douyin_applyMenuItemIcon(menuItem, icon);
    }

    return menuItem;
}

static NSArray *wcpl_douyin_injectMenuItemIfNeeded(id cell, NSArray *items) {
    if (![WCPLConfigCenter shared].douyinParserEnable) {
        return items;
    }

    if (!wcpl_douyin_shouldShowActionForCell(cell)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL action = @selector(wcpl_handleDouyinParseMenuItem:);
    NSMutableArray *mutableItems = [items isKindOfClass:[NSArray class]] ? [items mutableCopy] : [NSMutableArray array];

    for (id item in mutableItems) {
        if ([item isKindOfClass:menuItemClass] && [item respondsToSelector:@selector(action)]) {
            @try {
                SEL existingAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
                if (existingAction == action) {
                    return [mutableItems copy];
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    id menuItem = wcpl_douyin_createMenuItemIfNeeded(menuItemClass, cell, action);
    if (menuItem) {
        [mutableItems addObject:menuItem];
    }

    return [mutableItems copy];
}

static void wcpl_douyin_hideMenuFromCell(id cell) {
    @try {
        UIMenuController *menuController = [UIMenuController sharedMenuController];
        SEL hideMenuSelector = NSSelectorFromString(@"hideMenuFromView:");
        if (menuController && [menuController respondsToSelector:hideMenuSelector]) {
            ((void (*)(id, SEL, id))objc_msgSend)(menuController, hideMenuSelector, cell);
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

static void wcpl_douyin_processLink(NSString *douyinLink, NSString *chatUserName, UIViewController *chatVC) {
    NSString *link = wcpl_douyin_trimString(douyinLink);
    NSString *chat = wcpl_douyin_trimString(chatUserName);
    if (link.length == 0 || chat.length == 0) {
        return;
    }

    unsigned long long sessionToken = wcpl_douyin_beginSession(chat);
    WCPLLogInfo(@"[抖音解析] 开始处理: chat=%@ link=%@ token=%llu",
                wcpl_douyin_redactedString(chat),
                wcpl_douyin_redactedString(link),
                sessionToken);
    wcpl_douyin_showToast(@"正在解析抖音链接...", NO);

    wcpl_douyin_requestVideoURL(link, chat, sessionToken, ^(NSArray<NSString *> *videoURLs, NSString *errorMessage) {
        if (!wcpl_douyin_isSessionActive(chat, sessionToken)) {
            return;
        }
        if (videoURLs.count == 0) {
            NSString *errorText = errorMessage.length > 0 ? errorMessage : @"抖音解析失败";
            wcpl_douyin_showToast(errorText, YES);
            WCPLLogWarning(@"[抖音解析] 解析失败: link=%@ error=%@ token=%llu",
                           wcpl_douyin_redactedString(link),
                           wcpl_douyin_redactedString(errorText),
                           sessionToken);
            wcpl_douyin_finishSession(chat, sessionToken);
            return;
        }

        wcpl_douyin_showToast(@"正在下载视频...", NO);
        wcpl_douyin_downloadVideo(videoURLs, chat, sessionToken, ^(NSString *videoPath, NSString *thumbPath, NSString *workDir, NSString *downloadError) {
            if (!wcpl_douyin_isSessionActive(chat, sessionToken)) {
                wcpl_douyin_cleanupPathsAfterDelay(@[videoPath ?: @"", thumbPath ?: @"", workDir ?: @""], 0);
                return;
            }
            if (videoPath.length == 0 || thumbPath.length == 0) {
                wcpl_douyin_showToast(downloadError.length > 0 ? downloadError : @"视频下载失败", YES);
                wcpl_douyin_cleanupPathsAfterDelay(@[workDir ?: @""], 0);
                NSString *firstCandidate = videoURLs.count > 0 ? videoURLs.firstObject : @"";
                WCPLLogWarning(@"[抖音解析] 下载失败: candidates=%lu first=%@ error=%@ token=%llu",
                               (unsigned long)videoURLs.count,
                               wcpl_douyin_redactedString(firstCandidate),
                               wcpl_douyin_redactedString(downloadError ?: @"unknown"),
                               sessionToken);
                wcpl_douyin_finishSession(chat, sessionToken);
                return;
            }

            WCPLLogInfo(@"[抖音解析] 下载完成: video=%@ thumb=%@ token=%llu",
                        wcpl_douyin_redactedPath(videoPath),
                        wcpl_douyin_redactedPath(thumbPath),
                        sessionToken);
            wcpl_douyin_showToast(@"正在发送视频...", NO);
            BOOL sent = wcpl_douyin_sendVideoToSession(videoPath, thumbPath, chat, chatVC);
            if (sent) {
                wcpl_douyin_showToast(@"视频发送成功", NO);
                // 发送链路在部分版本存在异步读取，延长清理时间避免过早删除触发异常。
                wcpl_douyin_cleanupPathsAfterDelay(@[videoPath, thumbPath, workDir ?: @""], 180.0);
                WCPLLogInfo(@"[抖音解析] 发送成功: chat=%@ video=%@ token=%llu",
                            wcpl_douyin_redactedString(chat),
                            wcpl_douyin_redactedPath(videoPath),
                            sessionToken);
            } else {
                wcpl_douyin_showToast(@"视频发送失败", YES);
                wcpl_douyin_cleanupPathsAfterDelay(@[videoPath, thumbPath, workDir ?: @""], 0);
                WCPLLogWarning(@"[抖音解析] 发送失败: chat=%@ video=%@ token=%llu",
                               wcpl_douyin_redactedString(chat),
                               wcpl_douyin_redactedPath(videoPath),
                               sessionToken);
            }
            wcpl_douyin_finishSession(chat, sessionToken);
        });
    });
}

static void wcpl_douyin_handleInputCommand(id inputTool, NSString *payload, NSString *chatUserHint) {
    if (![WCPLConfigCenter shared].douyinParserEnable) {
        wcpl_douyin_showToast(@"抖音解析功能已关闭", YES);
        return;
    }

    NSString *commandPayload = wcpl_douyin_trimString(payload);
    if (commandPayload.length == 0) {
        wcpl_douyin_showToast(@"用法: /dy + 抖音文案或链接", YES);
        return;
    }

    NSString *douyinLink = wcpl_douyin_extractLinkFromText(commandPayload);
    if (douyinLink.length == 0) {
        wcpl_douyin_showToast(@"未找到可解析的抖音链接", YES);
        return;
    }

    NSString *chatUserName = wcpl_douyin_trimString(chatUserHint);
    if (chatUserName.length == 0) {
        chatUserName = wcpl_douyin_chatUserNameFromInputTool(inputTool);
    }
    if (chatUserName.length == 0) {
        wcpl_douyin_showToast(@"无法识别当前会话", YES);
        return;
    }

    UIViewController *chatVC = wcpl_douyin_chatViewControllerFromInputTool(inputTool);
    WCPLLogInfo(@"[抖音解析] 命令触发: chat=%@ payloadLen=%lu",
                wcpl_douyin_redactedString(chatUserName),
                (unsigned long)commandPayload.length);
    wcpl_douyin_processLink(douyinLink, chatUserName, chatVC);
}

static void wcpl_douyin_handleCommandNotification(NSNotification *notification) {
    NSDictionary *userInfo = [notification.userInfo isKindOfClass:[NSDictionary class]] ? notification.userInfo : nil;
    id inputTool = userInfo[@"inputTool"];
    NSString *payload = wcpl_douyin_trimString([userInfo[@"payload"] isKindOfClass:[NSString class]] ? userInfo[@"payload"] : nil);
    NSString *chatUser = wcpl_douyin_trimString([userInfo[@"chatUser"] isKindOfClass:[NSString class]] ? userInfo[@"chatUser"] : nil);
    wcpl_douyin_handleInputCommand(inputTool, payload, chatUser);
}

static void wcpl_douyin_handleParseAction(id cell) {
    if (![WCPLConfigCenter shared].douyinParserEnable) {
        wcpl_douyin_showToast(@"抖音解析功能已关闭", YES);
        return;
    }

    CMessageWrap *msgWrap = wcpl_douyin_messageWrapFromCell(cell);
    NSString *content = wcpl_douyin_trimString(msgWrap.m_nsContent);
    NSString *douyinLink = wcpl_douyin_extractLinkFromText(content);
    if (douyinLink.length == 0) {
        wcpl_douyin_showToast(@"未找到可解析的抖音链接", YES);
        return;
    }

    NSString *chatUserName = wcpl_douyin_chatUserNameFromCellAndWrap(cell, msgWrap);
    if (chatUserName.length == 0) {
        wcpl_douyin_showToast(@"无法识别当前会话", YES);
        return;
    }

    UIViewController *chatVC = wcpl_douyin_viewControllerFromCell(cell);
    wcpl_douyin_processLink(douyinLink, chatUserName, chatVC);
}

%hook CommonMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_douyin_injectMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleDouyinParseMenuItem:)) {
        return wcpl_douyin_shouldShowActionForCell(self);
    }
    return %orig;
}

%new
- (void)wcpl_handleDouyinParseMenuItem:(id)sender {
    (void)sender;
    wcpl_douyin_hideMenuFromCell(self);
    wcpl_douyin_handleParseAction(self);
}

%end

%hook TextMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_douyin_injectMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleDouyinParseMenuItem:)) {
        return wcpl_douyin_shouldShowActionForCell(self);
    }
    return %orig;
}

%new
- (void)wcpl_handleDouyinParseMenuItem:(id)sender {
    (void)sender;
    wcpl_douyin_hideMenuFromCell(self);
    wcpl_douyin_handleParseAction(self);
}

%end

%ctor {
    @autoreleasepool {
        WCPLLogInfo(@"[抖音解析] Hook initialized (native video send)");
        [[NSNotificationCenter defaultCenter] addObserverForName:kWCPLDouyinParserCommandNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:^(NSNotification *note) {
            wcpl_douyin_handleCommandNotification(note);
        }];
    }
}
