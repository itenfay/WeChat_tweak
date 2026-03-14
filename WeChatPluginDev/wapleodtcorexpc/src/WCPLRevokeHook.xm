#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatMessageHeaders.h"
#import "WCPLConfigCenter.h"
#import "WCPLHookGovernance.h"
#import "WCPLServiceCenter.h"
#import "WCPLAlertTextHelpers.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLRevokeAnchor.h"
#import <objc/runtime.h>
#import <objc/message.h>

static void wcpl_applyRevokeTimeColorToMessageCell(id cell);
static BOOL wcpl_revokeWasHandledRecently(NSString *dedupKey);
static void wcpl_revokeRememberHandled(NSString *dedupKey);

static NSString *wcpl_trimString(NSString *text) {
    return WCPLTrimText(text);
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
    return WCPLExtractXMLValue(xml, startToken, endToken);
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
    return WCPLSanitizeInlineText(text, maxLen);
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
    return WCPLExtractRevokerNameFromReplaceText(replaceText);
}

static NSString *wcpl_extractRevokedContentFromReplaceText(NSString *replaceText) {
    return WCPLExtractRevokedContentFromReplaceText(replaceText);
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
        } @catch (__unused NSException *exceptionName) { WCPLCatchLog(exceptionName); }
    }

    return trimmedUser;
}

static NSString *wcpl_revokeActorUserNameFromMessageWrap(CMessageWrap *msgWrap, NSString *session) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return nil;

    BOOL isChatroom = WCPLIsChatRoomName(session);
    NSString *candidate = nil;
    if (isChatroom) {
        candidate = wcpl_trimString(msgWrap.m_nsRealChatUsr);
    }
    if (candidate.length == 0) {
        candidate = wcpl_trimString(msgWrap.m_nsFromUsr);
    }
    if (candidate.length == 0 || WCPLIsChatRoomName(candidate)) return nil;

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
        } @catch (__unused NSException *exceptionMsgWrap) { WCPLCatchLog(exceptionMsgWrap); }
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
        } @catch (__unused NSException *exceptionChatName) { WCPLCatchLog(exceptionChatName); }
    }

    return nil;
}

static NSString *wcpl_selfUserName(void) {
    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!(contactMgr && [contactMgr respondsToSelector:@selector(getSelfContact)])) {
        return nil;
    }

    id selfContact = nil;
    @try {
        selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
    } @catch (__unused NSException *exceptionSelfContact) {
        selfContact = nil;
    }
    if (!selfContact) {
        return nil;
    }

    if ([selfContact respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id userName = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsUsrName));
            NSString *trimmed = wcpl_trimString(userName);
            if (trimmed.length > 0) return trimmed;
        } @catch (__unused NSException *exceptionUserName) { WCPLCatchLog(exceptionUserName); }
    }

    @try {
        id userName = [selfContact valueForKey:@"m_nsUsrName"];
        NSString *trimmed = wcpl_trimString(userName);
        if (trimmed.length > 0) return trimmed;
    } @catch (__unused NSException *exceptionUserNameKVC) { WCPLCatchLog(exceptionUserNameKVC); }

    return nil;
}

static BOOL wcpl_revokeReplaceTextLooksSelf(NSString *replaceText) {
    NSString *text = wcpl_trimString(replaceText);
    if (text.length == 0) return NO;

    NSArray<NSString *> *selfTokens = @[
        @"你撤回了一条消息",
        @"你撤回了一则消息",
        @"You recalled a message",
        @"You recalled this message"
    ];
    for (NSString *token in selfTokens) {
        if ([text rangeOfString:token options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL wcpl_isSelfRevokeMessage(CMessageWrap *msgWrap) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return NO;

    @try {
        if ([%c(CMessageWrap) isSenderFromMsgWrap:msgWrap]) {
            return YES;
        }
    } @catch (__unused NSException *exceptionSender) { WCPLCatchLog(exceptionSender); }

    NSString *xml = wcpl_trimString(msgWrap.m_nsContent);
    if (xml.length > 0) {
        NSString *replaceRaw = wcpl_extractXmlTagValue(xml, @"replacemsg");
        NSString *replaceText = wcpl_stripCDATAIfNeeded(replaceRaw);
        if (wcpl_revokeReplaceTextLooksSelf(replaceText)) {
            return YES;
        }

        NSString *selfUserName = wcpl_selfUserName();
        if (selfUserName.length > 0) {
            NSString *actorFromXml = wcpl_trimString(wcpl_extractXmlTagValue(xml, @"fromusr"));
            NSString *actorFromWrap = wcpl_trimString(msgWrap.m_nsRealChatUsr);
            if (actorFromWrap.length == 0) {
                actorFromWrap = wcpl_trimString(msgWrap.m_nsFromUsr);
            }

            if ((actorFromXml.length > 0 && [actorFromXml isEqualToString:selfUserName]) ||
                (actorFromWrap.length > 0 && [actorFromWrap isEqualToString:selfUserName])) {
                return YES;
            }
        }
    }

    return NO;
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
        case 49: {
            // 引用回复在微信底层通常也是 49(AppMsg) + <type>57</type> + <refermsg>。
            // 撤回提示仅需要展示“本次回复的文本”，不需要带引用内容。
            NSString *content = msgWrap.m_nsContent;
            NSString *trimmed = wcpl_trimString(content);
            if (trimmed.length > 0 &&
                ([trimmed rangeOfString:@"<refermsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                 [trimmed rangeOfString:@"<type>57</type>" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                 [trimmed rangeOfString:@"<type><![CDATA[57]]></type>" options:NSCaseInsensitiveSearch].location != NSNotFound)) {

                // 只在 <refermsg> 之前提取 <title>/<des>，避免误取到被引用消息里嵌套的 AppMsg 标题。
                NSString *header = trimmed;
                NSRange referRange = [trimmed rangeOfString:@"<refermsg" options:NSCaseInsensitiveSearch];
                if (referRange.location != NSNotFound && referRange.location > 0) {
                    header = [trimmed substringToIndex:referRange.location];
                }

                NSString *titleRaw = wcpl_extractXmlTagValue(header, @"title");
                NSString *title = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(titleRaw), 120);
                if (title.length > 0) {
                    return title;
                }

                NSString *desRaw = wcpl_extractXmlTagValue(header, @"des");
                NSString *des = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(desRaw), 120);
                if (des.length > 0) {
                    return des;
                }
            }
            return @"[应用消息]";
        }
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

static BOOL wcpl_shouldTintAlertTipDisplayText(NSString *content) {
    return WCPLShouldTintAlertTipDisplayText(content);
}

static NSString *wcpl_alertTipDisplayTextFromContent(NSString *content) {
    return WCPLAlertTipDisplayTextFromContent(content);
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
        } @catch (__unused NSException *exceptionSelector) { WCPLCatchLog(exceptionSelector); }
    }

    NSArray<NSString *> *keys = @[@"nsContent", @"m_nsContent", @"content", @"text", @"string"];
    for (NSString *key in keys) {
        @try {
            id value = [style valueForKey:key];
            if ([value isKindOfClass:[NSString class]]) {
                return (NSString *)value;
            }
        } @catch (__unused NSException *exceptionKVC) { WCPLCatchLog(exceptionKVC); }
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
        } @catch (__unused NSException *exceptionGetRichTextView) { WCPLCatchLog(exceptionGetRichTextView); }
    }

    NSArray<NSString *> *keys = @[@"m_richTextView", @"richTextView"];
    for (NSString *key in keys) {
        @try {
            id view = [cell valueForKey:key];
            if (view) return view;
        } @catch (__unused NSException *exceptionRichTextKVC) { WCPLCatchLog(exceptionRichTextKVC); }
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
            NSAttributedString *sourceAttr = nil;
            if ([richTextView respondsToSelector:@selector(attributedText)]) {
                @try {
                    id attrValue = ((id (*)(id, SEL))objc_msgSend)(richTextView, @selector(attributedText));
                    if ([attrValue isKindOfClass:[NSAttributedString class]]) {
                        sourceAttr = (NSAttributedString *)attrValue;
                    }
                } @catch (__unused NSException *exceptionGetAttr) {
                    sourceAttr = nil;
                }
            }

            NSMutableAttributedString *attr = sourceAttr.length > 0
                ? [[NSMutableAttributedString alloc] initWithAttributedString:sourceAttr]
                : [[NSMutableAttributedString alloc] initWithString:content];
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
        } @catch (__unused NSException *exceptionForceDisplay) { WCPLCatchLog(exceptionForceDisplay); }
    }

    if ([richTextView respondsToSelector:@selector(setNeedsDisplay)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(richTextView, @selector(setNeedsDisplay));
        } @catch (__unused NSException *exceptionNeedsDisplay) { WCPLCatchLog(exceptionNeedsDisplay); }
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
        } @catch (__unused NSException *exceptionSelector) { WCPLCatchLog(exceptionSelector); }
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
        } @catch (__unused NSException *exceptionViewModelSelector) { WCPLCatchLog(exceptionViewModelSelector); }
    }

    NSArray<NSString *> *viewModelKeys = @[@"messageWrap", @"msgWrap"];
    for (NSString *key in viewModelKeys) {
        @try {
            id wrap = [viewModel valueForKey:key];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exceptionViewModelKVC) { WCPLCatchLog(exceptionViewModelKVC); }
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
        } @catch (__unused NSException *exceptionLabelSelector) { WCPLCatchLog(exceptionLabelSelector); }
    }

    NSArray<NSString *> *keys = @[@"m_msgTimeLabel", @"msgTimeLabel", @"m_timeLabel", @"timeLabel"];
    for (NSString *key in keys) {
        @try {
            id label = [cell valueForKey:key];
            if (label && [label respondsToSelector:@selector(setTextColor:)]) {
                return label;
            }
        } @catch (__unused NSException *exceptionLabelKVC) { WCPLCatchLog(exceptionLabelKVC); }
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
    } @catch (__unused NSException *exceptionAttr) { WCPLCatchLog(exceptionAttr); }
}

static void wcpl_applyRevokeTimeColorToMessageCell(id cell) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCellForRevoke(cell);
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return;

    NSString *content = wcpl_alertTipDisplayTextFromContent(msgWrap.m_nsContent);
    if (!wcpl_shouldTintAlertTipDisplayText(content)) return;

    id timeLabel = wcpl_revokeTimeLabelFromCell(cell);
    wcpl_applyRevokeColorToTimeLabel(timeLabel);

    id richTextView = wcpl_revokeRichTextViewFromCell(cell);
    wcpl_applyRevokeTimeTintToRichTextView(richTextView, content);
}

static NSMutableDictionary<NSString *, NSNumber *> *wcpl_revokeHandledMap(void) {
    static NSMutableDictionary<NSString *, NSNumber *> *map = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = [[NSMutableDictionary alloc] init];
    });
    return map;
}

static NSTimeInterval wcpl_revokeHandledNow(void) {
    return [[NSDate date] timeIntervalSince1970];
}

static void wcpl_pruneExpiredHandledRevokeKeysLocked(NSMutableDictionary<NSString *, NSNumber *> *map,
                                                     NSTimeInterval now) {
    NSMutableArray<NSString *> *expiredKeys = nil;
    for (NSString *key in map) {
        NSNumber *expiry = map[key];
        if (expiry.doubleValue > now) continue;
        if (!expiredKeys) {
            expiredKeys = [NSMutableArray array];
        }
        [expiredKeys addObject:key];
    }
    if (expiredKeys.count == 0) return;
    [map removeObjectsForKeys:expiredKeys];
}

static BOOL wcpl_revokeWasHandledRecently(NSString *dedupKey) {
    if (![dedupKey isKindOfClass:[NSString class]] || dedupKey.length == 0) return NO;

    NSMutableDictionary<NSString *, NSNumber *> *map = wcpl_revokeHandledMap();
    @synchronized (map) {
        NSTimeInterval now = wcpl_revokeHandledNow();
        wcpl_pruneExpiredHandledRevokeKeysLocked(map, now);
        NSNumber *expiry = map[dedupKey];
        return (expiry.doubleValue > now);
    }
}

static void wcpl_revokeRememberHandled(NSString *dedupKey) {
    if (![dedupKey isKindOfClass:[NSString class]] || dedupKey.length == 0) return;

    static const NSTimeInterval kWCPLRevokeDedupTTL = 8.0;

    NSMutableDictionary<NSString *, NSNumber *> *map = wcpl_revokeHandledMap();
    @synchronized (map) {
        NSTimeInterval now = wcpl_revokeHandledNow();
        wcpl_pruneExpiredHandledRevokeKeysLocked(map, now);
        map[dedupKey] = @(now + kWCPLRevokeDedupTTL);
    }
}

static BOOL wcpl_handleRevokeMessage(CMessageWrap *revokeWrap, NSString *chatNameHint) {
    if (![revokeWrap isKindOfClass:%c(CMessageWrap)]) return NO;
    if (wcpl_isSelfRevokeMessage(revokeWrap)) {
        WCPLLogDebug(@"[防撤回] skip self revoke");
        return NO;
    }

    NSString *xml = revokeWrap.m_nsContent;
    if (xml.length == 0) return NO;

    BOOL looksLikeRevoke = ([xml rangeOfString:@"revokemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                            [xml rangeOfString:@"replacemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                            [xml rangeOfString:@"撤回"].location != NSNotFound ||
                            [xml rangeOfString:@"recalled" options:NSCaseInsensitiveSearch].location != NSNotFound);
    if (!looksLikeRevoke) return NO;

    NSString *session = wcpl_extractXmlTagValue(xml, @"session");
    NSMutableArray<NSString *> *sessionCandidates = [NSMutableArray array];
    void (^appendSession)(NSString *) = ^(NSString *value) {
        NSString *trimmed = wcpl_trimString(value);
        if (trimmed.length == 0) return;
        for (NSString *existing in sessionCandidates) {
            if ([existing isEqualToString:trimmed]) return;
        }
        [sessionCandidates addObject:trimmed];
    };
    appendSession(session);
    appendSession(chatNameHint);
    // 系统撤回提示的 From/To 在不同版本里含义不稳定；优先 ToUsr，避免误用 self 用户名导致查库失败。
    appendSession(revokeWrap.m_nsToUsr);
    appendSession(revokeWrap.m_nsFromUsr);

    session = sessionCandidates.firstObject;
    if (session.length == 0) return NO;

    NSString *replaceRaw = wcpl_extractXmlTagValue(xml, @"replacemsg");
    NSString *replaceText = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(replaceRaw), 180);

    long long revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"newmsgid");
    if (revokedMsgId <= 0) revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"msgid");
    NSString *dedupKey = WCPLBuildRevokeDedupKey(session, revokedMsgId, revokeWrap.m_uiCreateTime, replaceText);
    if (wcpl_revokeWasHandledRecently(dedupKey)) {
        WCPLLogDebug(@"[防撤回] skip duplicate revoke: key=%@", dedupKey);
        return YES;
    }

    CMessageWrap *revokedMsgWrap = nil;
    id messageMgr = wcpl_getMessageMgr();
    if (revokedMsgId > 0 && messageMgr && [messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
        for (NSString *candidateSession in sessionCandidates) {
            id msg = [messageMgr GetMsg:candidateSession n64SvrID:revokedMsgId];
            if ([msg isKindOfClass:%c(CMessageWrap)]) {
                revokedMsgWrap = (CMessageWrap *)msg;
                break;
            }
        }
    }

    NSString *revokedDigest = wcpl_digestForMessageWrap(revokedMsgWrap);
    NSString *revokedContent = revokedDigest;
    if (revokedContent.length == 0) {
        revokedContent = wcpl_extractRevokedContentFromReplaceText(replaceText);
    }
    revokedContent = wcpl_sanitizeInlineText(revokedContent, 180);
    // 兼容“表情包撤回”场景：
    // 有些机型/版本撤回 XML 无法反查到原消息，且 replacemsg 也不给可用摘要，
    // 这时历史实现会显示「[未知消息]」。按需求改为默认展示「[表情]」，避免误导用户。
    if (revokedContent.length == 0 ||
        (!revokedMsgWrap &&
         ([revokedContent rangeOfString:@"未知消息"].location != NSNotFound ||
          [revokedContent rangeOfString:@"[未知"].location != NSNotFound ||
          [revokedContent rangeOfString:@"[类型:"].location != NSNotFound))) {
        revokedContent = @"[表情]";
    }

    NSString *actorName = wcpl_extractRevokerNameFromReplaceText(replaceText);
    if (actorName.length == 0) {
        NSString *actorUserName = wcpl_revokeActorUserNameFromMessageWrap(revokedMsgWrap, session);
        actorName = wcpl_displayNameForUserName(actorUserName);
    }
    actorName = wcpl_sanitizeInlineText(wcpl_stripWrappedQuotes(actorName), 40);
    if (actorName.length == 0) actorName = @"对方";

    WCPLRevokeAnchorSource anchorSource = WCPLRevokeAnchorSourceRevokeEvent;
    WCPLRevokeAnchorFields anchorFields =
        WCPLResolveRevokeAnchorFields(revokeWrap.m_uiCreateTime,
                                      revokeWrap.m_uiSvrCreateTime,
                                      revokeWrap.m_sequenceId,
                                      revokedMsgWrap ? revokedMsgWrap.m_uiCreateTime : 0,
                                      revokedMsgWrap ? revokedMsgWrap.m_uiSvrCreateTime : 0,
                                      revokedMsgWrap ? revokedMsgWrap.m_sequenceId : 0,
                                      (revokedMsgWrap != nil),
                                      &anchorSource);

    NSString *timeText = wcpl_revokeTimeTextFromTimestamp(revokeWrap.m_uiCreateTime);
    NSString *tipText = [NSString stringWithFormat:@"%@\n\"%@\"撤回了一条消息\n%@",
                         timeText ?: @"",
                         actorName,
                         revokedContent];

    CMessageWrap *msgWrap = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];
    [msgWrap setM_uiStatus:0x4];
    [msgWrap setM_nsContent:tipText];
    [msgWrap setM_uiCreateTime:anchorFields.createTime];
    [msgWrap setM_uiSvrCreateTime:anchorFields.svrCreateTime];
    [msgWrap setM_sequenceId:anchorFields.sequenceId];
    [msgWrap setM_nsToUsr:session];
    [msgWrap setM_nsFromUsr:session];

    WCPLLogInfo(@"[防撤回] 本地提示锚点: session=%@ source=%@ revokedLocal=%u revokedSvr=%llu create=%u svrCreate=%u seq=%u -> tipCreate=%u tipSvrCreate=%u tipSeq=%u",
                session ?: @"",
                WCPLRevokeAnchorSourceDescription(anchorSource),
                revokedMsgWrap ? revokedMsgWrap.m_uiMesLocalID : 0,
                (unsigned long long)(revokedMsgWrap ? revokedMsgWrap.m_n64MesSvrID : 0),
                revokedMsgWrap ? revokedMsgWrap.m_uiCreateTime : 0,
                revokedMsgWrap ? revokedMsgWrap.m_uiSvrCreateTime : 0,
                revokedMsgWrap ? revokedMsgWrap.m_sequenceId : 0,
                anchorFields.createTime,
                anchorFields.svrCreateTime,
                anchorFields.sequenceId);

    if ([msgWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsRealChatUsr:), nil);
        } @catch (__unused NSException *exceptionRealUsr) { WCPLCatchLog(exceptionRealUsr); }
    }

    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0 Unique:0x1];
        wcpl_revokeRememberHandled(dedupKey);
        WCPLLogInfo(@"[防撤回] 本地提示入库成功: path=AddLocalMsg_fixTime_unique local=%u svr=%llu create=%u svrCreate=%u seq=%u",
                    msgWrap.m_uiMesLocalID,
                    (unsigned long long)msgWrap.m_n64MesSvrID,
                    msgWrap.m_uiCreateTime,
                    msgWrap.m_uiSvrCreateTime,
                    msgWrap.m_sequenceId);
        return YES;
    }
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0];
        wcpl_revokeRememberHandled(dedupKey);
        WCPLLogInfo(@"[防撤回] 本地提示入库成功: path=AddLocalMsg_fixTime local=%u svr=%llu create=%u svrCreate=%u seq=%u",
                    msgWrap.m_uiMesLocalID,
                    (unsigned long long)msgWrap.m_n64MesSvrID,
                    msgWrap.m_uiCreateTime,
                    msgWrap.m_uiSvrCreateTime,
                    msgWrap.m_sequenceId);
        return YES;
    }
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap];
        wcpl_revokeRememberHandled(dedupKey);
        WCPLLogInfo(@"[防撤回] 本地提示入库成功: path=AddLocalMsg local=%u svr=%llu create=%u svrCreate=%u seq=%u",
                    msgWrap.m_uiMesLocalID,
                    (unsigned long long)msgWrap.m_n64MesSvrID,
                    msgWrap.m_uiCreateTime,
                    msgWrap.m_uiSvrCreateTime,
                    msgWrap.m_sequenceId);
        return YES;
    }

    return NO;
}

static NSString *const kWCPLHookFeatureRevoke = @"revoke";

static void wcpl_revokeHookLog(NSString *className,
                               NSString *selectorName,
                               NSString *stage,
                               NSString *decision,
                               WCPLHookOrigPolicy policy,
                               NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureRevoke,
                           className,
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static void wcpl_revokeApplyTimeColorWithGovernance(id cell, NSString *className, NSString *selectorName) {
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;
    @try {
        wcpl_applyRevokeTimeColorToMessageCell(cell);
    } @catch (NSException *exception) {
        wcpl_revokeHookLog(className,
                           selectorName,
                           @"feature",
                           @"exception",
                           kOrigPolicy,
                           exception.reason ?: @"unknown");
    }
}

%hook CMessageMgr

- (void)onRevokeMsg:(CMessageWrap *)arg1 {
    static NSString *const kHookSelector = @"onRevokeMsg:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyConditionalShortCircuit;

    if (![WCPLConfigCenter shared].revoke.revokeEnable) {
        wcpl_revokeHookLog(@"CMessageMgr",
                           kHookSelector,
                           @"pre_filter",
                           @"skip_feature",
                           kOrigPolicy,
                           @"reason=feature_disabled");
        %orig;
        return;
    }

    @try {
        if (wcpl_handleRevokeMessage(arg1, nil)) {
            wcpl_revokeHookLog(@"CMessageMgr",
                               kHookSelector,
                               @"feature",
                               @"short_circuit",
                               kOrigPolicy,
                               @"reason=handled_by_plugin");
            return;
        }
    } @catch (NSException *exception) {
        WCPLLogError(@"Exception in CMessageMgr.onRevokeMsg: %@", exception);
        wcpl_revokeHookLog(@"CMessageMgr",
                           kHookSelector,
                           @"feature",
                           @"exception",
                           kOrigPolicy,
                           exception.reason ?: @"unknown");
        %orig;
        return;
    }

    wcpl_revokeHookLog(@"CMessageMgr",
                       kHookSelector,
                       @"fallback",
                       @"pass_through",
                       kOrigPolicy,
                       @"reason=not_handled");
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
    wcpl_revokeApplyTimeColorWithGovernance(self, @"SystemMessageCellView", @"updateStatus");
}

- (void)layoutContentView {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"SystemMessageCellView", @"layoutContentView");
}

%end

%hook TextMessageCellView

- (void)updateStatus {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"TextMessageCellView", @"updateStatus");
}

- (void)layoutContentView {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"TextMessageCellView", @"layoutContentView");
}

%end

%hook CommonMessageCellView

- (void)updateStatus {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"CommonMessageCellView", @"updateStatus");
}

- (void)layoutContentView {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"CommonMessageCellView", @"layoutContentView");
}

%end

%hook BaseMessageCellView

- (void)updateStatus {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"BaseMessageCellView", @"updateStatus");
}

- (void)layoutContentView {
    %orig;
    wcpl_revokeApplyTimeColorWithGovernance(self, @"BaseMessageCellView", @"layoutContentView");
}

%end
