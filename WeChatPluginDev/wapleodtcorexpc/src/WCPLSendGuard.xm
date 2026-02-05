#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>

#import "WCPLLogger.h"

#import <objc/message.h>

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

%hook MMInputToolView

- (void)sendMsgWithText:(id)arg1 {
    NSString *sanitized = wcpl_sg_sanitizeText(arg1);
    if (sanitized.length == 0) {
        WCPLLogDebug(@"拦截空文本发送: MMInputToolView.sendMsgWithText");
        return;
    }
    %orig(sanitized);
}

%end

%hook BypSendMessageMgr

- (void)StartSendMsg:(id)arg1 {
    id msgWrap = arg1;
    NSInteger msgType = wcpl_sg_safeIntegerForKey(msgWrap, @"m_uiMessageType");
    if (msgType == 1) {
        NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
        if (content.length == 0) {
            WCPLLogDebug(@"拦截空文本发送: BypSendMessageMgr.StartSendMsg");
            return;
        }

        id originContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
        if ([originContent isKindOfClass:[NSString class]] && ![originContent isEqualToString:content]) {
            @try {
                [msgWrap setValue:content forKey:@"m_nsContent"];
            } @catch (__unused NSException *exception) {
            }
            @try {
                [msgWrap setValue:content forKey:@"m_nsPushContent"];
            } @catch (__unused NSException *exception) {
            }
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

    if (msgType == 1) {
        NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
        if (content.length == 0) {
            WCPLLogWarning(@"拦截空文本入队: SendMessageMgr.AddMsgToSendTable to=%@ from=%@", toUsr, fromUsr);
            return;
        }

        id originContent = wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent");
        if ([originContent isKindOfClass:[NSString class]] && ![(NSString *)originContent isEqualToString:content]) {
            @try {
                [msgWrap setValue:content forKey:@"m_nsContent"];
            } @catch (__unused NSException *exception) {
            }
            @try {
                [msgWrap setValue:content forKey:@"m_nsPushContent"];
            } @catch (__unused NSException *exception) {
            }
        }

        WCPLLogDebug(@"文本入队: SendMessageMgr type=%ld len=%lu to=%@ from=%@",
                     (long)msgType,
                     (unsigned long)content.length,
                     toUsr,
                     fromUsr);
    } else {
        NSString *content = wcpl_sg_sanitizeText(wcpl_sg_safeValueForKey(msgWrap, @"m_nsContent"));
        if (content.length > 0) {
            WCPLLogDebug(@"消息入队: SendMessageMgr type=%ld contentLen=%lu to=%@ from=%@",
                         (long)msgType,
                         (unsigned long)content.length,
                         toUsr,
                         fromUsr);
        } else {
            WCPLLogDebug(@"消息入队: SendMessageMgr type=%ld contentLen=0 to=%@ from=%@",
                         (long)msgType,
                         toUsr,
                         fromUsr);
        }
    }

    %orig;
}

%end
