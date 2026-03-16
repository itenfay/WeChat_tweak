// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLUserNameHelpers.h"

static NSString *wcpl_emoticonMD5FromMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }

    NSString *md5 = wcpl_trimTextForRepeat(msgWrap.m_nsEmoticonMD5);
    if (md5.length == 32) {
        return md5;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<md5><![CDATA[",
        @"<md5>",
        @"md5=\""
    ];

    for (NSString *start in patterns) {
        NSString *end = [start isEqualToString:@"md5=\""] ? @"\"" : ([start isEqualToString:@"<md5>"] ? @"</md5>" : @"]]></md5>");
        NSString *value = wcpl_extractXMLValue(content, start, end);
        if (value.length == 32) {
            return value;
        }
    }

    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"[a-fA-F0-9]{32}" options:0 error:nil];
    NSTextCheckingResult *match = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (!match || match.range.location == NSNotFound) {
        return nil;
    }
    return [content substringWithRange:match.range];
}

static NSString *wcpl_chatNameForMessage(CMessageWrap *msgWrap, BaseMsgContentViewController *chatVC) {
    NSString *chatName = WCPLMessageAdapterCurrentChatName(chatVC);
    if (chatName.length > 0) {
        return chatName;
    }
    if (msgWrap.m_nsFromUsr.length > 0) {
        return msgWrap.m_nsFromUsr;
    }
    return msgWrap.m_nsToUsr;
}

static NSString *wcpl_chatUserNameForController(BaseMsgContentViewController *chatVC) {
    if (!chatVC) {
        return nil;
    }

    NSString *chatName = wcpl_trimTextForRepeat(WCPLMessageAdapterCurrentChatName(chatVC));
    if (chatName.length > 0) {
        return chatName;
    }
    return wcpl_trimTextForRepeat(WCPLMessageAdapterChatUserName(chatVC));
}

static BOOL wcpl_shouldSkipCellGestureEnhancements(BaseMsgContentViewController *chatVC,
                                                   NSString **reasonOut,
                                                   NSString **chatNameOut) {
    NSString *chatName = wcpl_chatUserNameForController(chatVC);
    if (chatNameOut) {
        *chatNameOut = chatName;
    }
    if (reasonOut) {
        *reasonOut = nil;
    }

    if (WCPLIsFileHelperUserName(chatName)) {
        if (reasonOut) {
            *reasonOut = @"filehelper_skip";
        }
        return YES;
    }

    return NO;
}

static NSString *wcpl_repeatMessageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return @"nil";
    }

    long long stablePrimaryID = 0;
    if (msgWrap.m_n64MesSvrID > 0) {
        stablePrimaryID = msgWrap.m_n64MesSvrID;
    } else if (msgWrap.m_uiMesLocalID > 0) {
        stablePrimaryID = (long long)msgWrap.m_uiMesLocalID;
    } else {
        stablePrimaryID = (long long)msgWrap.m_uiCreateTime;
    }

    return [NSString stringWithFormat:@"m_%lld", stablePrimaryID];
}

static NSString *wcpl_repeatMessageDebugInfo(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return @"nil";
    }
    return [NSString stringWithFormat:@"local=%u svr=%lld type=%u",
            msgWrap.m_uiMesLocalID,
            msgWrap.m_n64MesSvrID,
            msgWrap.m_uiMessageType];
}

static inline NSString *wcpl_repeatCachedDebugInfo(CMessageWrap *msgWrap, NSString **cache) {
    if (!cache) {
        return wcpl_repeatMessageDebugInfo(msgWrap);
    }
    if (!*cache) {
        *cache = wcpl_repeatMessageDebugInfo(msgWrap);
    }
    return *cache;
}

static NSDateFormatter *wcpl_messageTimeFormatter(void) {
    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [NSLocale autoupdatingCurrentLocale];
        formatter.dateFormat = @"HH:mm:ss";
    });
    return formatter;
}

static NSString *wcpl_messageTimeTextForTimestamp(unsigned int timestamp) {
    if (timestamp == 0) {
        return nil;
    }

    NSDate *date = [NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)timestamp];
    if (![date isKindOfClass:[NSDate class]]) {
        return nil;
    }

    NSString *text = nil;
    @try {
        text = [wcpl_messageTimeFormatter() stringFromDate:date];
    } @catch (__unused NSException *exception) {
        text = nil;
    }
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    return text;
}

static void wcpl_logLongPressCompatDecision(id cell,
                                            WCPLGestureConfig *config,
                                            UIPanGestureRecognizer *gesture,
                                            NSString *branchDecision,
                                            NSString *fallbackReason) {
    if (!gesture) {
        return;
    }

    WCPLLogInfo(@"issue_id=%@ module=WCPLGestureHook scene=message_long_press_menu input={cell=%p,swipeEnable=%d,quoteEnable=%d,rightEnable=%d,cancels=%d,delaysBegan=%d,delaysEnded=%d} branch_decision=%@ error=%@ fallback_reason=%@",
                @"wx-bugfix-longpress-menu-20260207",
                cell,
                config ? (config.swipeGestureEnable ? 1 : 0) : -1,
                config ? (config.swipeQuoteEnable ? 1 : 0) : -1,
                config ? (config.swipeRightEnable ? 1 : 0) : -1,
                gesture.cancelsTouchesInView ? 1 : 0,
                gesture.delaysTouchesBegan ? 1 : 0,
                gesture.delaysTouchesEnded ? 1 : 0,
                branchDecision ?: @"unknown",
                @"none",
                fallbackReason ?: @"none");
}
