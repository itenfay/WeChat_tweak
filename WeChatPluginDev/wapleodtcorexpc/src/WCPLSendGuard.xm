#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>

#import "WCPLLogger.h"
#import "WCPLFuncService.h"

#import <objc/message.h>

static NSString *const kWCPLDouyinParserCommandNotification = @"WCPLDouyinParserCommandNotification";
static BOOL wcpl_sg_isFromSelfMsgWrap(id msgWrap);

static id wcpl_sg_invokeObject(id obj, SEL sel) {
    if (!obj || !sel) return nil;
    if (![obj respondsToSelector:sel]) return nil;
    @try {
        return ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static BOOL wcpl_sg_isVisuallyEmpty(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return YES;
    }

    static NSRegularExpression *invisibleRegex = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSError *error = nil;
        invisibleRegex = [NSRegularExpression regularExpressionWithPattern:@"[\\p{Z}\\p{Cc}\\p{Cf}\\p{M}]"
                                                                   options:0
                                                                     error:&error];
        if (error) {
            invisibleRegex = nil;
        }
    });

    if (!invisibleRegex) {
        return NO;
    }

    NSString *stripped = [invisibleRegex stringByReplacingMatchesInString:text
                                                                  options:0
                                                                    range:NSMakeRange(0, text.length)
                                                             withTemplate:@""];
    return stripped.length == 0;
}

static NSString *wcpl_sg_sanitizeText(id value) {
    NSString *text = nil;

    if ([value isKindOfClass:[NSString class]]) {
        text = (NSString *)value;
    } else if ([value respondsToSelector:@selector(string)]) {
        id s = wcpl_sg_invokeObject(value, @selector(string));
        if ([s isKindOfClass:[NSString class]]) {
            text = (NSString *)s;
        }
    } else if ([value respondsToSelector:@selector(text)]) {
        id s = wcpl_sg_invokeObject(value, @selector(text));
        if ([s isKindOfClass:[NSString class]]) {
            text = (NSString *)s;
        }
    } else if ([value respondsToSelector:@selector(stringValue)]) {
        id s = wcpl_sg_invokeObject(value, @selector(stringValue));
        if ([s isKindOfClass:[NSString class]]) {
            text = (NSString *)s;
        }
    }

    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }

    static NSCharacterSet *trimSet = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableCharacterSet *set = [[NSCharacterSet whitespaceAndNewlineCharacterSet] mutableCopy];
        [set addCharactersInString:@"\u00A0\u200B\u200C\u200D\u200E\u200F\u2060\uFEFF"];
        trimSet = [set copy];
    });

    NSString *trimmed = [text stringByTrimmingCharactersInSet:trimSet];
    if (trimmed.length == 0) {
        return nil;
    }
    return wcpl_sg_isVisuallyEmpty(trimmed) ? nil : trimmed;
}

static id wcpl_sg_safeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }
    @try {
        return [obj valueForKey:key];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static NSInteger wcpl_sg_safeIntegerForKey(id obj, NSString *key) {
    id value = wcpl_sg_safeValueForKey(obj, key);
    if ([value respondsToSelector:@selector(integerValue)]) {
        @try {
            return (NSInteger)[value integerValue];
        } @catch (__unused NSException *exception) {
            return 0;
        }
    }
    return 0;
}

static NSUInteger wcpl_sg_safeContentLength(id value) {
    if (!value) {
        return 0;
    }
    if ([value isKindOfClass:[NSString class]]) {
        return ((NSString *)value).length;
    }
    if ([value respondsToSelector:@selector(length)]) {
        @try {
            return ((NSUInteger (*)(id, SEL))objc_msgSend)(value, @selector(length));
        } @catch (__unused NSException *exception) {
            return 0;
        }
    }
    return 0;
}

static BOOL wcpl_sg_looksLikeVoiceXml(NSString *sanitizedContent) {
    if (![sanitizedContent isKindOfClass:[NSString class]] || sanitizedContent.length == 0) {
        return NO;
    }
    if ([sanitizedContent rangeOfString:@"<voicemsg" options:NSCaseInsensitiveSearch].location == NSNotFound) {
        return NO;
    }
    if ([sanitizedContent rangeOfString:@"<msg" options:NSCaseInsensitiveSearch].location == NSNotFound) {
        return NO;
    }
    return YES;
}

static BOOL __unused wcpl_sg_isVoiceXmlText(id msgWrap, NSString *sanitizedContent) {
    if (!msgWrap || sanitizedContent.length == 0) return NO;

    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    if (msgType != 1) return NO;

    return wcpl_sg_looksLikeVoiceXml(sanitizedContent);
}

static NSString *wcpl_sg_contentSnippet(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return @"";
    }
    NSUInteger limit = 180;
    if (content.length <= limit) {
        return content;
    }
    return [[content substringToIndex:limit] stringByAppendingString:@"..."];
}

static NSString *wcpl_sg_rawStringValue(id value) {
    return [value isKindOfClass:[NSString class]] ? (NSString *)value : nil;
}

static BOOL wcpl_sg_hasDouyinCommandPrefixFast(id rawValue) {
    NSString *text = wcpl_sg_rawStringValue(rawValue);
    if (text.length < 3) {
        return NO;
    }
    if ([text characterAtIndex:0] != '/') {
        return NO;
    }

    unichar c1 = [text characterAtIndex:1];
    unichar c2 = [text characterAtIndex:2];
    if (c1 >= 'A' && c1 <= 'Z') c1 = (unichar)(c1 + ('a' - 'A'));
    if (c2 >= 'A' && c2 <= 'Z') c2 = (unichar)(c2 + ('a' - 'A'));
    return (c1 == 'd' && c2 == 'y');
}

static BOOL wcpl_sg_looksLikeVoiceXmlRaw(id rawValue) {
    NSString *text = wcpl_sg_rawStringValue(rawValue);
    if (text.length == 0) {
        return NO;
    }
    if ([text rangeOfString:@"<voicemsg" options:NSCaseInsensitiveSearch].location == NSNotFound) {
        return NO;
    }
    if ([text rangeOfString:@"<msg" options:NSCaseInsensitiveSearch].location == NSNotFound) {
        return NO;
    }
    return YES;
}

static NSString *wcpl_sg_extractDouyinCommandPayload(NSString *sanitizedContent) {
    if (![sanitizedContent isKindOfClass:[NSString class]] || sanitizedContent.length < 3) {
        return nil;
    }
    if (![[sanitizedContent lowercaseString] hasPrefix:@"/dy"]) {
        return nil;
    }

    NSString *payload = @"";
    if (sanitizedContent.length > 3) {
        payload = [sanitizedContent substringFromIndex:3] ?: @"";
        payload = [payload stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] ?: @"";
    }
    return payload;
}

static BOOL wcpl_sg_isDuplicateDouyinCommand(NSString *chatUser, NSString *payload) {
    static NSString *lastKey = nil;
    static CFAbsoluteTime lastTs = 0;
    NSString *key = [NSString stringWithFormat:@"%@|%@", chatUser ?: @"", payload ?: @""];
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();

    @synchronized([NSObject class]) {
        BOOL duplicated = (lastKey && [lastKey isEqualToString:key] && (now - lastTs) < 1.2);
        lastKey = [key copy];
        lastTs = now;
        return duplicated;
    }
}

static void wcpl_sg_postDouyinCommand(id inputTool, NSString *rawText, NSString *payload, NSString *chatUser) {
    if (wcpl_sg_isDuplicateDouyinCommand(chatUser, payload)) {
        return;
    }

    NSMutableDictionary *userInfo = [NSMutableDictionary dictionary];
    if ([rawText isKindOfClass:[NSString class]]) {
        userInfo[@"rawText"] = rawText;
    }
    if ([payload isKindOfClass:[NSString class]]) {
        userInfo[@"payload"] = payload;
    }
    if ([chatUser isKindOfClass:[NSString class]] && chatUser.length > 0) {
        userInfo[@"chatUser"] = chatUser;
    }
    if (inputTool) {
        userInfo[@"inputTool"] = inputTool;
    }
    [[NSNotificationCenter defaultCenter] postNotificationName:kWCPLDouyinParserCommandNotification
                                                        object:inputTool
                                                      userInfo:[userInfo copy]];
}

static BOOL wcpl_sg_tryHandleDouyinCommandFromMsgWrap(id msgWrap, NSString *content, NSString *stage) {
    if (!msgWrap || !wcpl_sg_isFromSelfMsgWrap(msgWrap)) {
        return NO;
    }

    NSString *payload = wcpl_sg_extractDouyinCommandPayload(content);
    if (payload == nil) {
        return NO;
    }

    NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr"));
    WCPLLogInfo(@"[抖音解析] 输入命令兜底拦截: stage=%@ chat=%@ payloadLen=%lu snippet=%@",
                stage ?: @"",
                toUsr ?: @"",
                (unsigned long)payload.length,
                wcpl_sg_contentSnippet(payload));

    dispatch_async(dispatch_get_main_queue(), ^{
        wcpl_sg_postDouyinCommand(nil, content, payload, toUsr);
    });
    return YES;
}

static BOOL wcpl_sg_looksLikeQuoteAppMsg(NSString *sanitizedContent) {
    if (![sanitizedContent isKindOfClass:[NSString class]] || sanitizedContent.length == 0) {
        return NO;
    }
    if ([sanitizedContent rangeOfString:@"<appmsg" options:NSCaseInsensitiveSearch].location == NSNotFound) {
        return NO;
    }
    if ([sanitizedContent rangeOfString:@"<refermsg" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    if ([sanitizedContent rangeOfString:@"<refermsgsvrid" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    return NO;
}

static BOOL wcpl_sg_looksLikeHongbaoPayload(NSString *sanitizedContent) {
    if (![sanitizedContent isKindOfClass:[NSString class]] || sanitizedContent.length == 0) {
        return NO;
    }
    if ([sanitizedContent rangeOfString:@"红包"].location != NSNotFound) {
        return YES;
    }
    if ([sanitizedContent rangeOfString:@"hongbao" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    if ([sanitizedContent rangeOfString:@"receivehongbao" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    if ([sanitizedContent rangeOfString:@"wxhb_" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    return NO;
}

static void wcpl_sg_logQuoteDiagnostic(NSString *stage,
                                       NSInteger msgType,
                                       NSString *toUsr,
                                       NSString *fromUsr,
                                       NSString *content) {
    if (msgType != 49) {
        return;
    }
    BOOL hasRefer = wcpl_sg_looksLikeQuoteAppMsg(content);
    WCPLLogDebug(@"引用消息诊断: stage=%@ type=%ld to=%@ from=%@ len=%lu hasRefer=%d snippet=%@",
                 stage ?: @"",
                 (long)msgType,
                 toUsr ?: @"",
                 fromUsr ?: @"",
                 (unsigned long)content.length,
                 hasRefer ? 1 : 0,
                 wcpl_sg_contentSnippet(content));
}

static BOOL wcpl_sg_isFromSelfMsgWrap(id msgWrap) {
    if (!msgWrap) return NO;

    Class wrapCls = objc_getClass("CMessageWrap");
    SEL isSenderSel = @selector(isSenderFromMsgWrap:);
    if (wrapCls && [wrapCls respondsToSelector:isSenderSel]) {
        @try {
            return ((BOOL (*)(id, SEL, id))objc_msgSend)(wrapCls, isSenderSel, msgWrap);
        } @catch (__unused NSException *exception) {
        }
    }

    id flag = wcpl_sg_safeValueForKey(msgWrap, @"m_bFromMe");
    if ([flag respondsToSelector:@selector(boolValue)]) {
        @try {
            return [flag boolValue];
        } @catch (__unused NSException *exception) {
        }
    }

    return NO;
}

static BOOL wcpl_sg_shouldBlockLocalEmptyTextBubble(id session, id msgWrap, NSString *stage) {
    if (!msgWrap) return NO;
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    if (msgType != 1) return NO;
    if (!wcpl_sg_isFromSelfMsgWrap(msgWrap)) return NO;

    id originContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
    NSString *content = wcpl_sg_sanitizeText(originContent);
    if (wcpl_sg_looksLikeVoiceXml(content)) {
        NSString *sessionName = wcpl_sg_sanitizeText(session) ?: @"";
        NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"";
        NSString *fromUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"";
        WCPLLogWarning(@"拦截本地语音XML文本气泡: stage=%@ session=%@ to=%@ from=%@ len=%lu snippet=%@",
                       stage ?: @"",
                       sessionName,
                       toUsr,
                       fromUsr,
                       (unsigned long)content.length,
                       wcpl_sg_contentSnippet(content));
        return YES;
    }
    if (content.length > 0) return NO;

    NSString *sessionName = wcpl_sg_sanitizeText(session) ?: @"";
    NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"";
    NSString *fromUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"";
    NSString *contentClass = originContent ? NSStringFromClass([originContent class]) : @"nil";

    WCPLLogWarning(@"拦截本地空文本气泡: stage=%@ session=%@ to=%@ from=%@ contentClass=%@",
                   stage ?: @"",
                   sessionName,
                   toUsr,
                   fromUsr,
                   contentClass);
    return YES;
}

static NSString *wcpl_sg_extractTextFromInputTool(id inputTool) {
    if (!inputTool) {
        return nil;
    }

    NSArray<NSString *> *selectorNames = @[@"GetCurrentText", @"inputText", @"text"];
    for (NSString *selectorName in selectorNames) {
        SEL sel = NSSelectorFromString(selectorName);
        id value = wcpl_sg_invokeObject(inputTool, sel);
        NSString *sanitized = wcpl_sg_sanitizeText(value);
        if (sanitized.length > 0) {
            return sanitized;
        }
    }

    id textView = wcpl_sg_safeValueForKey(inputTool, @"textView");
    if (textView) {
        NSString *sanitized = wcpl_sg_sanitizeText(wcpl_sg_invokeObject(textView, @selector(text)));
        if (sanitized.length > 0) {
            return sanitized;
        }
    }

    return nil;
}

static NSString *wcpl_sg_chatUserFromChatController(id chatController, id inputTool) {
    NSString *chatName = wcpl_sg_sanitizeText(wcpl_sg_invokeObject(chatController, @selector(getCurrentChatName)));
    if (chatName.length > 0) {
        return chatName;
    }

    id contact = wcpl_sg_invokeObject(chatController, @selector(GetContact));
    chatName = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(contact, @"m_nsUsrName"));
    if (chatName.length > 0) {
        return chatName;
    }

    chatName = wcpl_sg_sanitizeText(wcpl_sg_invokeObject(inputTool, @selector(getChatUsername)));
    if (chatName.length > 0) {
        return chatName;
    }

    id inputContact = wcpl_sg_safeValueForKey(inputTool, @"contact");
    chatName = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(inputContact, @"m_nsUsrName"));
    if (chatName.length > 0) {
        return chatName;
    }

    return nil;
}

static BOOL wcpl_sg_tryHandleDouyinCommandFromInputTool(id chatController, id inputTool, NSString *stage) {
    NSString *content = wcpl_sg_extractTextFromInputTool(inputTool);
    if (content.length == 0) {
        content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(chatController, @"m_text"));
    }
    NSString *payload = wcpl_sg_extractDouyinCommandPayload(content);
    if (payload == nil) {
        return NO;
    }

    NSString *chatUser = wcpl_sg_chatUserFromChatController(chatController, inputTool);
    WCPLLogInfo(@"[抖音解析] 上游命令拦截: stage=%@ chat=%@ payloadLen=%lu snippet=%@",
                stage ?: @"",
                chatUser ?: @"",
                (unsigned long)payload.length,
                wcpl_sg_contentSnippet(payload));

    if ([inputTool respondsToSelector:@selector(resetText)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(inputTool, @selector(resetText));
        } @catch (__unused NSException *exception) {
        }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        wcpl_sg_postDouyinCommand(inputTool, content, payload, chatUser);
    });
    return YES;
}

%hook BaseMsgContentViewController

- (void)SendTextMessageToolView:(id)arg1 {
    if (wcpl_sg_tryHandleDouyinCommandFromInputTool(self, arg1, @"BaseMsgContentViewController.SendTextMessageToolView")) {
        return;
    }
    %orig;
}

- (void)sendToolViewText {
    id inputTool = wcpl_sg_safeValueForKey(self, @"toolView");
    if (wcpl_sg_tryHandleDouyinCommandFromInputTool(self, inputTool, @"BaseMsgContentViewController.sendToolViewText")) {
        return;
    }
    %orig;
}

%end

%hook MMInputToolView

- (void)sendMsgWithText:(id)arg1 {
    NSString *rawText = wcpl_sg_rawStringValue(arg1);
    NSString *fallbackText = nil;
    if (rawText.length == 0) {
        fallbackText = wcpl_sg_sanitizeText(arg1);
    }
    NSString *textForCheck = rawText.length > 0 ? rawText : fallbackText;
    if (textForCheck.length == 0) {
        WCPLLogDebug(@"拦截空文本发送: MMInputToolView.sendMsgWithText");
        return;
    }
    if (wcpl_sg_looksLikeVoiceXmlRaw(textForCheck)) {
        WCPLLogWarning(@"拦截语音XML文本发送: MMInputToolView.sendMsgWithText len=%lu snippet=%@",
                       (unsigned long)textForCheck.length,
                       wcpl_sg_contentSnippet(textForCheck));
        return;
    }

    NSString *dyPayload = nil;
    NSString *sanitizedForCommand = nil;
    if (wcpl_sg_hasDouyinCommandPrefixFast(textForCheck)) {
        sanitizedForCommand = wcpl_sg_sanitizeText(textForCheck);
        dyPayload = wcpl_sg_extractDouyinCommandPayload(sanitizedForCommand);
    }
    if (dyPayload != nil) {
        WCPLLogInfo(@"[抖音解析] 输入框命令触发: payloadLen=%lu snippet=%@",
                    (unsigned long)dyPayload.length,
                    wcpl_sg_contentSnippet(dyPayload));
        id toolView = (id)self;
        if ([toolView respondsToSelector:@selector(resetText)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(toolView, @selector(resetText));
            } @catch (__unused NSException *exception) {
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            wcpl_sg_postDouyinCommand(toolView, sanitizedForCommand, dyPayload, nil);
        });
        return;
    }

    id textToSend = rawText.length > 0 ? arg1 : fallbackText;
    %orig(textToSend);
}

%end

%hook BypSendMessageMgr

- (void)StartSendMsg:(id)arg1 {
    id msgWrap = arg1;
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    if (msgType == 1) {
        id rawContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
        NSString *rawText = wcpl_sg_rawStringValue(rawContent);
        if (rawText.length > 0) {
            WCPLLogDebug(@"BypStartSend 文本发送诊断: len=%lu snippet=%@",
                         (unsigned long)rawText.length,
                         wcpl_sg_contentSnippet(rawText));
        }
        if (wcpl_sg_isFromSelfMsgWrap(msgWrap) && wcpl_sg_looksLikeVoiceXmlRaw(rawContent)) {
            WCPLLogWarning(@"拦截语音XML文本发送: BypSendMessageMgr.StartSendMsg from=%@ to=%@",
                           wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"",
                           wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"");
            return;
        }
        if ([rawContent isKindOfClass:[NSString class]] && rawText.length == 0) {
            WCPLLogDebug(@"拦截空文本发送: BypSendMessageMgr.StartSendMsg");
            return;
        }
    }

    %orig;
}

%end

%hook SendMessageMgr

- (void)AddMsgToSendTable:(id)arg1 MsgWrap:(id)arg2 {
    id msgWrap = arg2;
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");

    NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"";
    NSString *fromUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"";
    BOOL ignoredByRule = [WCPLFuncService shouldIgnoreMessageWrap:msgWrap];
    if (ignoredByRule) {
        WCPLLogWarning(@"命中忽略规则但继续发送: stage=SendMessageMgr.AddMsgToSendTable type=%ld to=%@ from=%@",
                       (long)msgType,
                       toUsr,
                       fromUsr);
    }

    if (msgType == 1) {
        id rawContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
        NSString *rawText = wcpl_sg_rawStringValue(rawContent);
        if (wcpl_sg_isFromSelfMsgWrap(msgWrap) && wcpl_sg_looksLikeVoiceXmlRaw(rawContent)) {
            WCPLLogWarning(@"拦截语音XML文本入队: SendMessageMgr.AddMsgToSendTable to=%@ from=%@", toUsr, fromUsr);
            return;
        }
        if ([rawContent isKindOfClass:[NSString class]] && rawText.length == 0) {
            WCPLLogWarning(@"拦截空文本入队: SendMessageMgr.AddMsgToSendTable to=%@ from=%@", toUsr, fromUsr);
            return;
        }
        if (wcpl_sg_hasDouyinCommandPrefixFast(rawContent)) {
            NSString *commandContent = wcpl_sg_sanitizeText(rawContent);
            if (wcpl_sg_tryHandleDouyinCommandFromMsgWrap(msgWrap,
                                                          commandContent,
                                                          @"SendMessageMgr.AddMsgToSendTable")) {
                return;
            }
        }

        WCPLLogDebug(@"文本入队: SendMessageMgr type=%ld len=%lu to=%@ from=%@ snippet=%@",
                     (long)msgType,
                     (unsigned long)rawText.length,
                     toUsr,
                     fromUsr,
                     wcpl_sg_contentSnippet(rawText));
    } else {
        id rawContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
        NSUInteger contentLength = wcpl_sg_safeContentLength(rawContent);
        NSString *contentClass = rawContent ? NSStringFromClass([rawContent class]) : @"nil";
        NSString *content = wcpl_sg_sanitizeText(rawContent);
        WCPLLogDebug(@"消息入队: SendMessageMgr type=%ld contentLen=%lu contentClass=%@ to=%@ from=%@",
                     (long)msgType,
                     (unsigned long)contentLength,
                     contentClass,
                     toUsr,
                     fromUsr);
        wcpl_sg_logQuoteDiagnostic(@"SendMessageMgr.AddMsgToSendTable", msgType, toUsr, fromUsr, content);
    }

    %orig;
}

%end

%hook CMessageMgr

- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 {
    id msgWrap = arg2;
    if ([WCPLFuncService shouldIgnoreMessageWrap:msgWrap]) {
        return;
    }
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"";
    NSString *fromUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"";
    if (msgType == 1) {
        id rawContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
        NSString *rawText = wcpl_sg_rawStringValue(rawContent);
        if (rawText.length > 0) {
            WCPLLogDebug(@"CMessageMgr.AddMsg 文本诊断: to=%@ from=%@ len=%lu snippet=%@",
                         toUsr,
                         fromUsr,
                         (unsigned long)rawText.length,
                         wcpl_sg_contentSnippet(rawText));
        }
        if (wcpl_sg_isFromSelfMsgWrap(msgWrap) && wcpl_sg_looksLikeVoiceXmlRaw(rawContent)) {
            WCPLLogWarning(@"拦截语音XML文本AddMsg: CMessageMgr.AddMsg to=%@ from=%@", toUsr, fromUsr);
            return;
        }
        if (wcpl_sg_hasDouyinCommandPrefixFast(rawContent)) {
            NSString *commandContent = wcpl_sg_sanitizeText(rawContent);
            if (wcpl_sg_tryHandleDouyinCommandFromMsgWrap(msgWrap, commandContent, @"CMessageMgr.AddMsg")) {
                return;
            }
        }
    } else if (msgType == 34) {
        NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
        WCPLLogDebug(@"CMessageMgr.AddMsg 语音诊断: to=%@ from=%@ len=%lu snippet=%@",
                     toUsr,
                     fromUsr,
                     (unsigned long)content.length,
                     wcpl_sg_contentSnippet(content));
    } else if (msgType == 49) {
        NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
        wcpl_sg_logQuoteDiagnostic(@"CMessageMgr.AddMsg", msgType, toUsr, fromUsr, content);
    }
    %orig;
}

- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2 {
    id msgWrap = arg2;
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"";
    NSString *fromUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"";
    NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
    BOOL maybeHongbao = wcpl_sg_looksLikeHongbaoPayload(content);

    if ([WCPLFuncService shouldIgnoreMessageWrap:msgWrap]) {
        WCPLLogDebug(@"AsyncOnAddMsg 诊断(忽略): type=%ld to=%@ from=%@ len=%lu hongbao=%d",
                     (long)msgType,
                     toUsr,
                     fromUsr,
                     (unsigned long)content.length,
                     maybeHongbao ? 1 : 0);
        return;
    }

    WCPLLogDebug(@"AsyncOnAddMsg 诊断: type=%ld to=%@ from=%@ len=%lu hongbao=%d",
                 (long)msgType,
                 toUsr,
                 fromUsr,
                 (unsigned long)content.length,
                 maybeHongbao ? 1 : 0);

    if (msgType == 1 && wcpl_sg_looksLikeVoiceXml(content)) {
        WCPLLogWarning(@"拦截语音XML文本AsyncOnAddMsg: to=%@ from=%@ len=%lu snippet=%@",
                       toUsr,
                       fromUsr,
                       (unsigned long)content.length,
                       wcpl_sg_contentSnippet(content));
        return;
    }

    if (wcpl_sg_looksLikeVoiceXml(content)) {
        WCPLLogDebug(@"AsyncOnAddMsg 语音XML诊断: type=%ld to=%@ from=%@ len=%lu snippet=%@",
                     (long)msgType,
                     toUsr,
                     fromUsr,
                     (unsigned long)content.length,
                     wcpl_sg_contentSnippet(content));
    }
    wcpl_sg_logQuoteDiagnostic(@"CMessageMgr.AsyncOnAddMsg", msgType, toUsr, fromUsr, content);

    %orig;
}

- (void)AsyncOnPreAddMsg:(id)arg1 MsgWrap:(id)arg2 {
    id msgWrap = arg2;
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    NSString *toUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsToUsr")) ?: @"";
    NSString *fromUsr = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsFromUsr")) ?: @"";
    NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
    BOOL maybeHongbao = wcpl_sg_looksLikeHongbaoPayload(content);

    if ([WCPLFuncService shouldIgnoreMessageWrap:msgWrap]) {
        WCPLLogDebug(@"AsyncOnPreAddMsg 诊断(忽略): type=%ld to=%@ from=%@ len=%lu hongbao=%d",
                     (long)msgType,
                     toUsr,
                     fromUsr,
                     (unsigned long)content.length,
                     maybeHongbao ? 1 : 0);
        return;
    }

    WCPLLogDebug(@"AsyncOnPreAddMsg 诊断: type=%ld to=%@ from=%@ len=%lu hongbao=%d",
                 (long)msgType,
                 toUsr,
                 fromUsr,
                 (unsigned long)content.length,
                 maybeHongbao ? 1 : 0);

    if (msgType == 1 && wcpl_sg_looksLikeVoiceXml(content)) {
        WCPLLogWarning(@"拦截语音XML文本AsyncOnPreAddMsg: to=%@ from=%@ len=%lu snippet=%@",
                       toUsr,
                       fromUsr,
                       (unsigned long)content.length,
                       wcpl_sg_contentSnippet(content));
        return;
    }

    if (wcpl_sg_looksLikeVoiceXml(content)) {
        WCPLLogDebug(@"AsyncOnPreAddMsg 语音XML诊断: type=%ld to=%@ from=%@ len=%lu snippet=%@",
                     (long)msgType,
                     toUsr,
                     fromUsr,
                     (unsigned long)content.length,
                     wcpl_sg_contentSnippet(content));
    }
    wcpl_sg_logQuoteDiagnostic(@"CMessageMgr.AsyncOnPreAddMsg", msgType, toUsr, fromUsr, content);

    %orig;
}

- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 {
    if ([WCPLFuncService shouldIgnoreMessageWrap:arg2]) {
        return;
    }
    if (wcpl_sg_shouldBlockLocalEmptyTextBubble(arg1, arg2, @"AddLocalMsg")) {
        return;
    }
    %orig;
}

- (void)AddUniqueLocalMsg:(id)arg1 MsgWrap:(id)arg2 {
    if ([WCPLFuncService shouldIgnoreMessageWrap:arg2]) {
        return;
    }
    if (wcpl_sg_shouldBlockLocalEmptyTextBubble(arg1, arg2, @"AddUniqueLocalMsg")) {
        return;
    }
    %orig;
}

- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 {
    if ([WCPLFuncService shouldIgnoreMessageWrap:arg2]) {
        return;
    }
    if (wcpl_sg_shouldBlockLocalEmptyTextBubble(arg1, arg2, @"AddLocalMsg_fixTime")) {
        return;
    }
    %orig;
}

- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 Unique:(_Bool)arg5 {
    if ([WCPLFuncService shouldIgnoreMessageWrap:arg2]) {
        return;
    }
    if (wcpl_sg_shouldBlockLocalEmptyTextBubble(arg1, arg2, @"AddLocalMsg_fixTime_unique")) {
        return;
    }
    %orig;
}

%end
