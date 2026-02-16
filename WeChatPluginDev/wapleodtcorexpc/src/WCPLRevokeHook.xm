#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_extractBetweenTokens(NSString *text, NSString *startToken, NSString *endToken) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    if (![startToken isKindOfClass:[NSString class]] || startToken.length == 0) return nil;
    if (![endToken isKindOfClass:[NSString class]] || endToken.length == 0) return nil;

    NSRange startRange = [text rangeOfString:startToken];
    if (startRange.location == NSNotFound) return nil;

    NSUInteger searchStart = NSMaxRange(startRange);
    if (searchStart >= text.length) return nil;

    NSRange endRange = [text rangeOfString:endToken options:0 range:NSMakeRange(searchStart, text.length - searchStart)];
    if (endRange.location == NSNotFound || endRange.location < searchStart) return nil;

    NSRange valueRange = NSMakeRange(searchStart, endRange.location - searchStart);
    if (NSMaxRange(valueRange) > text.length) return nil;

    return wcpl_trimString([text substringWithRange:valueRange]);
}

static NSString *wcpl_extractXmlTagValue(NSString *xml, NSString *tagName) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) return nil;
    if (![tagName isKindOfClass:[NSString class]] || tagName.length == 0) return nil;

    NSString *startToken = [NSString stringWithFormat:@"<%@>", tagName];
    NSString *endToken = [NSString stringWithFormat:@"</%@>", tagName];
    return wcpl_extractBetweenTokens(xml, startToken, endToken);
}

static long long wcpl_extractLongLongFromXmlTag(NSString *xml, NSString *tagName) {
    NSString *value = wcpl_extractXmlTagValue(xml, tagName);
    if (value.length == 0) return 0;

    NSScanner *scanner = [NSScanner scannerWithString:value];
    long long result = 0;
    if (![scanner scanLongLong:&result]) return 0;
    return result;
}

static NSString *wcpl_stripCDATAIfNeeded(NSString *text) {
    NSString *cdata = wcpl_extractBetweenTokens(text, @"<![CDATA[", @"]]>");
    return cdata ?: wcpl_trimString(text);
}

static NSString *wcpl_sanitizeInlineText(NSString *text, NSUInteger maxLen) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;

    value = [[value stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
             stringByReplacingOccurrencesOfString:@"\n" withString:@" "];

    if (maxLen > 0 && value.length > maxLen) {
        value = [[value substringToIndex:maxLen] stringByAppendingString:@"…"];
    }
    return value;
}

static NSString *wcpl_revokeTimeTextFromTimestamp(unsigned int timestamp) {
    NSDate *date = timestamp > 0 ? [NSDate dateWithTimeIntervalSince1970:timestamp] : [NSDate date];

    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [NSLocale localeWithLocaleIdentifier:@"zh_CN"];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    });

    return [formatter stringFromDate:date] ?: @"";
}

static NSString *wcpl_stripWrappedQuotes(NSString *text) {
    NSString *value = wcpl_trimString(text);
    if (value.length < 2) return value;

    NSArray<NSArray<NSString *> *> *quotePairs = @[
        @[@"\"", @"\""],
        @[@"“", @"”"],
        @[@"'", @"'"],
        @[@"‘", @"’"]
    ];
    for (NSArray<NSString *> *pair in quotePairs) {
        NSString *left = pair.firstObject;
        NSString *right = pair.lastObject;
        if ([value hasPrefix:left] && [value hasSuffix:right] && value.length > left.length + right.length) {
            return [value substringWithRange:NSMakeRange(left.length, value.length - left.length - right.length)];
        }
    }
    return value;
}

static NSString *wcpl_extractRevokerNameFromReplaceText(NSString *replaceText) {
    NSString *text = wcpl_trimString(replaceText);
    if (text.length == 0) return nil;

    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"(?:\\\"|“)([^\\\"”]+?)(?:\\\"|”)撤回了"
                                                                           options:0
                                                                             error:&error];
    if (!error && regex) {
        NSTextCheckingResult *match = [regex firstMatchInString:text options:0 range:NSMakeRange(0, text.length)];
        if (match.numberOfRanges >= 2) {
            NSString *name = [text substringWithRange:[match rangeAtIndex:1]];
            return wcpl_sanitizeInlineText(wcpl_stripWrappedQuotes(name), 40);
        }
    }

    NSRange revokeRange = [text rangeOfString:@"撤回了一条消息"];
    if (revokeRange.location != NSNotFound && revokeRange.location > 0) {
        NSString *prefix = [text substringToIndex:revokeRange.location];
        NSRange colonRange = [prefix rangeOfString:@"：" options:NSBackwardsSearch];
        if (colonRange.location != NSNotFound && NSMaxRange(colonRange) < prefix.length) {
            prefix = [prefix substringFromIndex:NSMaxRange(colonRange)];
        }
        return wcpl_sanitizeInlineText(wcpl_stripWrappedQuotes(prefix), 40);
    }

    return nil;
}

static NSString *wcpl_extractRevokedContentFromReplaceText(NSString *replaceText) {
    NSString *text = wcpl_trimString(replaceText);
    if (text.length == 0) return nil;

    NSArray<NSString *> *tokens = @[@"原消息：", @"原消息:"];
    for (NSString *token in tokens) {
        NSRange tokenRange = [text rangeOfString:token];
        if (tokenRange.location == NSNotFound || NSMaxRange(tokenRange) >= text.length) continue;
        NSString *suffix = [text substringFromIndex:NSMaxRange(tokenRange)];
        NSString *result = wcpl_sanitizeInlineText(suffix, 180);
        if (result.length > 0) return result;
    }

    return nil;
}

static NSString *wcpl_displayNameForUserName(NSString *userName) {
    NSString *trimmedUser = wcpl_trimString(userName);
    if (trimmedUser.length == 0) return nil;

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    id contact = nil;
    if (contactMgr && [contactMgr respondsToSelector:@selector(getContactByName:)]) {
        @try {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), trimmedUser);
        } @catch (__unused NSException *exceptionGetContact) {
            contact = nil;
        }
    }
    if (!contact) return trimmedUser;

    NSArray<NSString *> *selectors = @[@"m_nsRemark", @"m_nsNickName", @"m_nsUsrName"];
    for (NSString *selectorName in selectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![contact respondsToSelector:selector]) continue;

        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, selector);
            NSString *name = wcpl_sanitizeInlineText(wcpl_stripWrappedQuotes(value), 40);
            if (name.length > 0) return name;
        } @catch (__unused NSException *exceptionName) {
        }
    }

    return trimmedUser;
}

static NSString *wcpl_revokeActorUserNameFromMessageWrap(CMessageWrap *msgWrap, NSString *session) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return nil;

    BOOL isChatroom = ([session rangeOfString:@"@chatroom"].location != NSNotFound);
    NSString *candidate = nil;
    if (isChatroom) {
        candidate = wcpl_trimString(msgWrap.m_nsRealChatUsr);
    }
    if (candidate.length == 0) {
        candidate = wcpl_trimString(msgWrap.m_nsFromUsr);
    }
    if (candidate.length == 0 || [candidate hasSuffix:@"@chatroom"]) return nil;

    return candidate;
}

static id wcpl_getMessageMgr(void) {
    return WCPLGetService(objc_getClass("CMessageMgr"));
}

static CMessageWrap *wcpl_revokeMsgWrapFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:%c(CMessageWrap)]) return (CMessageWrap *)obj;

    if ([obj respondsToSelector:@selector(msgWrap)]) {
        @try {
            id wrap = [obj performSelector:@selector(msgWrap)];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exceptionMsgWrap) {
        }
    }

    return nil;
}

static NSString *wcpl_revokeChatNameFromObject(id obj) {
    if (!obj) return nil;

    if ([obj respondsToSelector:@selector(nsChatName)]) {
        @try {
            id chatName = [obj performSelector:@selector(nsChatName)];
            if ([chatName isKindOfClass:[NSString class]]) {
                return wcpl_trimString(chatName);
            }
        } @catch (__unused NSException *exceptionChatName) {
        }
    }

    return nil;
}

static BOOL wcpl_isSelfRevokeMessage(CMessageWrap *msgWrap) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return NO;

    @try {
        return [%c(CMessageWrap) isSenderFromMsgWrap:msgWrap];
    } @catch (__unused NSException *exceptionSender) {
        return NO;
    }
}

static NSString *wcpl_digestForMessageWrap(CMessageWrap *msgWrap) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return nil;

    unsigned int type = msgWrap.m_uiMessageType;
    switch (type) {
        case 1:
            return wcpl_sanitizeInlineText(msgWrap.m_nsContent, 120);
        case 3:
            return @"[图片]";
        case 34:
            return @"[语音]";
        case 43:
            return @"[视频]";
        case 47:
            return @"[表情]";
        case 49:
            return @"[应用消息]";
        default:
            return [NSString stringWithFormat:@"[类型:%u]", type];
    }
}

static UIColor *wcpl_revokeTimeColor(void) {
    return [UIColor colorWithRed:250.0 / 255.0
                           green:81.0 / 255.0
                            blue:81.0 / 255.0
                           alpha:1.0];
}

static BOOL wcpl_isRevokeTipDisplayText(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) return NO;
    return ([content rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
            [content rangeOfString:@"已拦截撤回"].location != NSNotFound);
}

static BOOL wcpl_extractLeadingTimestampRange(NSString *text, NSRange *timeRangeOut) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return NO;

    static NSRegularExpression *regex = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSError *error = nil;
        regex = [NSRegularExpression regularExpressionWithPattern:@"^\\s*(\\d{4}-\\d{2}-\\d{2}\\s+\\d{2}:\\d{2}:\\d{2})"
                                                          options:0
                                                            error:&error];
        if (error) regex = nil;
    });
    if (!regex) return NO;

    NSTextCheckingResult *match = [regex firstMatchInString:text options:0 range:NSMakeRange(0, text.length)];
    if (match.numberOfRanges < 2) return NO;

    NSRange range = [match rangeAtIndex:1];
    if (range.location == NSNotFound || range.length == 0) return NO;

    if (timeRangeOut) *timeRangeOut = range;
    return YES;
}

static BOOL wcpl_revokeTimeRangeForDisplayText(NSString *text, NSRange *timeRangeOut) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return NO;

    NSRange firstBreak = [text rangeOfString:@"\n"];
    if (firstBreak.location != NSNotFound && firstBreak.location > 0) {
        NSString *firstLine = [text substringToIndex:firstBreak.location];
        NSRange firstLineRange = NSMakeRange(0, firstLine.length);

        static NSRegularExpression *strictRegex = nil;
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            NSError *error = nil;
            strictRegex = [NSRegularExpression regularExpressionWithPattern:@"^\\d{4}-\\d{2}-\\d{2}\\s+\\d{2}:\\d{2}:\\d{2}$"
                                                                    options:0
                                                                      error:&error];
            if (error) strictRegex = nil;
        });

        if (strictRegex && [strictRegex numberOfMatchesInString:firstLine options:0 range:NSMakeRange(0, firstLine.length)] > 0) {
            if (timeRangeOut) *timeRangeOut = firstLineRange;
            return YES;
        }
    }

    NSRange leadingRange = NSMakeRange(NSNotFound, 0);
    if (wcpl_extractLeadingTimestampRange(text, &leadingRange) && leadingRange.length > 0) {
        if (timeRangeOut) *timeRangeOut = leadingRange;
        return YES;
    }

    return NO;
}

static BOOL wcpl_setColorForStyleWithSelector(id style, SEL selector, UIColor *color) {
    if (!style || !selector || !color) return NO;
    if (![style respondsToSelector:selector]) return NO;

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(style, selector, color);
        return YES;
    } @catch (__unused NSException *exceptionSetStyle) {
        return NO;
    }
}

static BOOL wcpl_setColorForStyleWithKey(id style, NSString *key, UIColor *color) {
    if (!style || ![key isKindOfClass:[NSString class]] || key.length == 0 || !color) return NO;

    @try {
        [style setValue:color forKey:key];
        return YES;
    } @catch (__unused NSException *exceptionSetStyleKVC) {
        return NO;
    }
}

static NSString *wcpl_styleContentText(id style) {
    if (!style) return nil;

    NSArray<NSString *> *selectorNames = @[@"nsContent", @"m_nsContent", @"content", @"text", @"string"];
    for (NSString *selectorName in selectorNames) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![style respondsToSelector:selector]) continue;

        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(style, selector);
            if ([value isKindOfClass:[NSString class]]) {
                return (NSString *)value;
            }
        } @catch (__unused NSException *exceptionSelector) {
        }
    }

    NSArray<NSString *> *keys = @[@"nsContent", @"m_nsContent", @"content", @"text", @"string"];
    for (NSString *key in keys) {
        @try {
            id value = [style valueForKey:key];
            if ([value isKindOfClass:[NSString class]]) {
                return (NSString *)value;
            }
        } @catch (__unused NSException *exceptionKVC) {
        }
    }

    return nil;
}

static BOOL wcpl_applyRevokeColorToStyle(id style) {
    if (!style) return NO;

    UIColor *color = wcpl_revokeTimeColor();
    BOOL changed = NO;

    NSArray<NSString *> *selectorNames = @[
        @"setOTextColor:",
        @"setODrawColor:",
        @"setODrawHLColor:",
        @"setTextColor:",
        @"setDrawColor:",
        @"setDrawHLColor:",
        @"setM_textColor:"
    ];
    for (NSString *selectorName in selectorNames) {
        if (wcpl_setColorForStyleWithSelector(style, NSSelectorFromString(selectorName), color)) {
            changed = YES;
        }
    }

    if (!changed) {
        NSArray<NSString *> *keys = @[@"oTextColor", @"oDrawColor", @"oDrawHLColor", @"textColor", @"drawColor", @"drawHLColor", @"m_textColor"];
        for (NSString *key in keys) {
            if (wcpl_setColorForStyleWithKey(style, key, color)) {
                changed = YES;
            }
        }
    }

    return changed;
}

static BOOL wcpl_tintRevokeTimeForStyles(NSArray *styles, NSRange timeRange) {
    if (![styles isKindOfClass:[NSArray class]] || styles.count == 0) return NO;
    if (timeRange.location == NSNotFound || timeRange.length == 0) return NO;

    NSUInteger consumed = 0;
    NSUInteger timeRangeEnd = NSMaxRange(timeRange);
    BOOL didTint = NO;
    BOOL hasUnknownStyleText = NO;

    for (id style in styles) {
        if (!style) continue;

        NSString *styleText = wcpl_styleContentText(style);
        if (![styleText isKindOfClass:[NSString class]] || styleText.length == 0) {
            hasUnknownStyleText = YES;
            continue;
        }

        NSRange styleRange = NSMakeRange(consumed, styleText.length);
        consumed += styleText.length;

        if (styleRange.location >= timeRangeEnd) break;
        if (NSMaxRange(styleRange) <= timeRange.location) continue;

        if (wcpl_applyRevokeColorToStyle(style)) {
            didTint = YES;
        }
    }

    if (!didTint && hasUnknownStyleText) {
        for (id style in styles) {
            if (wcpl_applyRevokeColorToStyle(style)) {
                didTint = YES;
            }
        }
    }

    return didTint;
}

static id wcpl_revokeRichTextViewFromCell(id cell) {
    if (!cell) return nil;

    if ([cell respondsToSelector:@selector(getRichTextView)]) {
        @try {
            id view = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(getRichTextView));
            if (view) return view;
        } @catch (__unused NSException *exceptionGetRichTextView) {
        }
    }

    NSArray<NSString *> *keys = @[@"m_richTextView", @"richTextView"];
    for (NSString *key in keys) {
        @try {
            id view = [cell valueForKey:key];
            if (view) return view;
        } @catch (__unused NSException *exceptionRichTextKVC) {
        }
    }

    return nil;
}

static void wcpl_applyRevokeTimeTintToRichTextView(id richTextView, NSString *content) {
    if (!richTextView || ![content isKindOfClass:[NSString class]] || content.length == 0) return;

    NSRange timeRange = NSMakeRange(NSNotFound, 0);
    if (!wcpl_revokeTimeRangeForDisplayText(content, &timeRange) || timeRange.length == 0) return;

    BOOL didTint = NO;

    if ([richTextView respondsToSelector:@selector(arrStyles)]) {
        @try {
            id styles = ((id (*)(id, SEL))objc_msgSend)(richTextView, @selector(arrStyles));
            didTint = wcpl_tintRevokeTimeForStyles(styles, timeRange);
        } @catch (__unused NSException *exceptionStyles) {
            didTint = NO;
        }
    }

    if (!didTint && [richTextView respondsToSelector:@selector(setAttributedText:)]) {
        @try {
            NSMutableAttributedString *attr = [[NSMutableAttributedString alloc] initWithString:content];
            if (NSMaxRange(timeRange) <= attr.length) {
                [attr addAttribute:NSForegroundColorAttributeName value:wcpl_revokeTimeColor() range:timeRange];
                ((void (*)(id, SEL, id))objc_msgSend)(richTextView, @selector(setAttributedText:), attr);
                didTint = YES;
            }
        } @catch (__unused NSException *exceptionSetAttr) {
            didTint = NO;
        }
    }

    if (!didTint) return;

    if ([richTextView respondsToSelector:@selector(forceDisplayInSync)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(richTextView, @selector(forceDisplayInSync));
        } @catch (__unused NSException *exceptionForceDisplay) {
        }
    }

    if ([richTextView respondsToSelector:@selector(setNeedsDisplay)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(richTextView, @selector(setNeedsDisplay));
        } @catch (__unused NSException *exceptionNeedsDisplay) {
        }
    }
}

static CMessageWrap *wcpl_messageWrapFromCellForRevoke(id cell) {
    if (!cell) return nil;

    NSArray<NSString *> *selectors = @[@"getCurrentMessageWrap", @"messageWrap", @"getMediaWrap"];
    for (NSString *selectorName in selectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![cell respondsToSelector:selector]) continue;

        @try {
            id wrap = ((id (*)(id, SEL))objc_msgSend)(cell, selector);
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exceptionSelector) {
        }
    }

    id viewModel = nil;
    if ([cell respondsToSelector:@selector(viewModel)]) {
        @try {
            viewModel = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(viewModel));
        } @catch (__unused NSException *exceptionViewModel) {
            viewModel = nil;
        }
    }
    if (!viewModel) return nil;

    NSArray<NSString *> *viewModelSelectors = @[@"messageWrap", @"msgWrap"];
    for (NSString *selectorName in viewModelSelectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![viewModel respondsToSelector:selector]) continue;

        @try {
            id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, selector);
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exceptionViewModelSelector) {
        }
    }

    NSArray<NSString *> *viewModelKeys = @[@"messageWrap", @"msgWrap"];
    for (NSString *key in viewModelKeys) {
        @try {
            id wrap = [viewModel valueForKey:key];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exceptionViewModelKVC) {
        }
    }

    return nil;
}

static id wcpl_revokeTimeLabelFromCell(id cell) {
    if (!cell) return nil;

    NSArray<NSString *> *selectorNames = @[@"msgTimeLabel", @"getMsgTimeLabel", @"timeLabel", @"getTimeLabel"];
    for (NSString *selectorName in selectorNames) {
        SEL selector = NSSelectorFromString(selectorName);
        if (![cell respondsToSelector:selector]) continue;

        @try {
            id label = ((id (*)(id, SEL))objc_msgSend)(cell, selector);
            if (label && [label respondsToSelector:@selector(setTextColor:)]) {
                return label;
            }
        } @catch (__unused NSException *exceptionLabelSelector) {
        }
    }

    NSArray<NSString *> *keys = @[@"m_msgTimeLabel", @"msgTimeLabel", @"m_timeLabel", @"timeLabel"];
    for (NSString *key in keys) {
        @try {
            id label = [cell valueForKey:key];
            if (label && [label respondsToSelector:@selector(setTextColor:)]) {
                return label;
            }
        } @catch (__unused NSException *exceptionLabelKVC) {
        }
    }

    return nil;
}

static void wcpl_applyRevokeColorToTimeLabel(id label) {
    if (!label || ![label respondsToSelector:@selector(setTextColor:)]) return;

    UIColor *color = wcpl_revokeTimeColor();
    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(label, @selector(setTextColor:), color);
    } @catch (__unused NSException *exceptionSetColor) {
        return;
    }

    if (![label respondsToSelector:@selector(attributedText)] || ![label respondsToSelector:@selector(setAttributedText:)]) return;

    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(label, @selector(attributedText));
        if (![value isKindOfClass:[NSAttributedString class]]) return;

        NSAttributedString *source = (NSAttributedString *)value;
        if (source.length == 0) return;

        NSRange timeRange = NSMakeRange(NSNotFound, 0);
        NSString *rawText = source.string;
        if (!wcpl_revokeTimeRangeForDisplayText(rawText, &timeRange) || timeRange.length == 0) {
            return;
        }
        if (NSMaxRange(timeRange) > source.length) return;

        NSMutableAttributedString *mutableAttr = [[NSMutableAttributedString alloc] initWithAttributedString:source];
        [mutableAttr addAttribute:NSForegroundColorAttributeName value:color range:timeRange];
        ((void (*)(id, SEL, id))objc_msgSend)(label, @selector(setAttributedText:), mutableAttr);
    } @catch (__unused NSException *exceptionAttr) {
    }
}

static void wcpl_applyRevokeTimeColorToMessageCell(id cell) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCellForRevoke(cell);
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return;

    NSString *content = wcpl_trimString(msgWrap.m_nsContent);
    if (!wcpl_isRevokeTipDisplayText(content)) return;

    id timeLabel = wcpl_revokeTimeLabelFromCell(cell);
    wcpl_applyRevokeColorToTimeLabel(timeLabel);

    id richTextView = wcpl_revokeRichTextViewFromCell(cell);
    wcpl_applyRevokeTimeTintToRichTextView(richTextView, content);
}

static BOOL wcpl_handleRevokeMessage(CMessageWrap *revokeWrap, NSString *chatNameHint) {
    if (![revokeWrap isKindOfClass:%c(CMessageWrap)]) return NO;
    if (wcpl_isSelfRevokeMessage(revokeWrap)) return NO;

    NSString *xml = revokeWrap.m_nsContent;
    if (xml.length == 0) return NO;

    BOOL looksLikeRevoke = ([xml rangeOfString:@"revokemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                            [xml rangeOfString:@"replacemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                            [xml rangeOfString:@"撤回"].location != NSNotFound ||
                            [xml rangeOfString:@"recalled" options:NSCaseInsensitiveSearch].location != NSNotFound);
    if (!looksLikeRevoke) return NO;

    NSString *session = wcpl_extractXmlTagValue(xml, @"session");
    if (session.length == 0) session = wcpl_trimString(chatNameHint);
    if (session.length == 0) session = wcpl_trimString(revokeWrap.m_nsFromUsr) ?: wcpl_trimString(revokeWrap.m_nsToUsr);
    if (session.length == 0) return NO;

    NSString *replaceRaw = wcpl_extractXmlTagValue(xml, @"replacemsg");
    NSString *replaceText = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(replaceRaw), 180);

    long long revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"newmsgid");
    if (revokedMsgId <= 0) revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"msgid");

    CMessageWrap *revokedMsgWrap = nil;
    id messageMgr = wcpl_getMessageMgr();
    if (revokedMsgId > 0 && messageMgr && [messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
        id msg = [messageMgr GetMsg:session n64SvrID:revokedMsgId];
        if ([msg isKindOfClass:%c(CMessageWrap)]) {
            revokedMsgWrap = (CMessageWrap *)msg;
        }
    }

    NSString *revokedDigest = wcpl_digestForMessageWrap(revokedMsgWrap);
    NSString *revokedContent = revokedDigest;
    if (revokedContent.length == 0) {
        revokedContent = wcpl_extractRevokedContentFromReplaceText(replaceText);
    }
    revokedContent = wcpl_sanitizeInlineText(revokedContent, 180);
    if (revokedContent.length == 0) revokedContent = @"[未知消息]";

    NSString *actorName = wcpl_extractRevokerNameFromReplaceText(replaceText);
    if (actorName.length == 0) {
        NSString *actorUserName = wcpl_revokeActorUserNameFromMessageWrap(revokedMsgWrap, session);
        actorName = wcpl_displayNameForUserName(actorUserName);
    }
    actorName = wcpl_sanitizeInlineText(wcpl_stripWrappedQuotes(actorName), 40);
    if (actorName.length == 0) actorName = @"对方";

    NSString *timeText = wcpl_revokeTimeTextFromTimestamp(revokeWrap.m_uiCreateTime);
    NSString *tipText = [NSString stringWithFormat:@"%@\n\"%@\"撤回了一条消息\n%@",
                         timeText ?: @"",
                         actorName,
                         revokedContent];

    CMessageWrap *msgWrap = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];
    [msgWrap setM_uiStatus:0x4];
    [msgWrap setM_nsContent:tipText];
    [msgWrap setM_uiCreateTime:[revokeWrap m_uiCreateTime]];
    [msgWrap setM_nsToUsr:session];
    [msgWrap setM_nsFromUsr:session];

    if ([msgWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsRealChatUsr:), nil);
        } @catch (__unused NSException *exceptionRealUsr) {
        }
    }

    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0 Unique:0x1];
        return YES;
    }
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0];
        return YES;
    }
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap];
        return YES;
    }

    return NO;
}

%hook CMessageMgr

- (void)onRevokeMsg:(CMessageWrap *)arg1 {
    if (![WCPLConfigCenter shared].revoke.revokeEnable) {
        %orig;
        return;
    }

    @try {
        if (wcpl_handleRevokeMessage(arg1, nil)) {
            return;
        }
    } @catch (NSException *exception) {
        WCPLLogError(@"Exception in CMessageMgr.onRevokeMsg: %@", exception);
        %orig;
        return;
    }

    %orig;
}

%end

%hook MessageRevokeMgr

- (void)onRevokeMsg:(id)arg1 {
    if (![WCPLConfigCenter shared].revoke.revokeEnable) {
        %orig;
        return;
    }

    @try {
        CMessageWrap *revokeWrap = wcpl_revokeMsgWrapFromObject(arg1);
        NSString *chatName = wcpl_revokeChatNameFromObject(arg1);
        if (wcpl_handleRevokeMessage(revokeWrap, chatName)) {
            return;
        }
    } @catch (NSException *exception) {
        WCPLLogError(@"Exception in MessageRevokeMgr.onRevokeMsg: %@", exception);
    }

    %orig;
}

- (void)replaceRevokedMsg:(id)arg1 {
    if (![WCPLConfigCenter shared].revoke.revokeEnable) {
        %orig;
        return;
    }

    CMessageWrap *revokeWrap = wcpl_revokeMsgWrapFromObject(arg1);
    if (revokeWrap && !wcpl_isSelfRevokeMessage(revokeWrap)) {
        return;
    }

    %orig;
}

- (void)deleteLocalProcessRevokeMsgWithToast:(id)arg1 {
    if (![WCPLConfigCenter shared].revoke.revokeEnable) {
        %orig;
        return;
    }

    CMessageWrap *revokeWrap = wcpl_revokeMsgWrapFromObject(arg1);
    if (revokeWrap && !wcpl_isSelfRevokeMessage(revokeWrap)) {
        return;
    }

    %orig;
}

%end

%hook SystemMessageCellView

- (void)updateStatus {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

- (void)layoutContentView {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

%end

%hook TextMessageCellView

- (void)updateStatus {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

- (void)layoutContentView {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

%end

%hook CommonMessageCellView

- (void)updateStatus {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

- (void)layoutContentView {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

%end

%hook BaseMessageCellView

- (void)updateStatus {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

- (void)layoutContentView {
    %orig;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(self);
    } @catch (__unused NSException *exception) {
    }
}

%end
