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
    if (startToken.length == 0 || endToken.length == 0) return nil;

    NSRange startRange = [text rangeOfString:startToken];
    if (startRange.location == NSNotFound) return nil;

    NSUInteger searchStart = startRange.location + startRange.length;
    if (searchStart >= text.length) return nil;

    NSRange endRange = [text rangeOfString:endToken options:0 range:NSMakeRange(searchStart, text.length - searchStart)];
    if (endRange.location == NSNotFound) return nil;
    if (endRange.location < searchStart) return nil;

    NSRange valueRange = NSMakeRange(searchStart, endRange.location - searchStart);
    if (valueRange.location == NSNotFound || NSMaxRange(valueRange) > text.length) return nil;

    NSString *value = [text substringWithRange:valueRange];
    return wcpl_trimString(value);
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
    NSString *cdataValue = wcpl_extractBetweenTokens(text, @"<![CDATA[", @"]]>");
    return cdataValue ?: wcpl_trimString(text);
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
        } @catch (__unused NSException *exception) {
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
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static BOOL wcpl_isSelfRevokeMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) return NO;
    @try {
        return [%c(CMessageWrap) isSenderFromMsgWrap:msgWrap];
    } @catch (__unused NSException *exception) {
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
    if (session.length == 0) {
        session = wcpl_trimString(chatNameHint);
    }
    if (session.length == 0) {
        session = wcpl_trimString(revokeWrap.m_nsFromUsr) ?: wcpl_trimString(revokeWrap.m_nsToUsr);
    }
    if (session.length == 0) return NO;

    NSString *replaceRaw = wcpl_extractXmlTagValue(xml, @"replacemsg");
    NSString *replaceText = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(replaceRaw), 160);

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

    NSString *tipText = replaceText.length > 0 ? [NSString stringWithFormat:@"已拦截撤回：%@", replaceText]
                                               : @"已拦截一条撤回消息";
    if (revokedDigest.length > 0) {
        tipText = [NSString stringWithFormat:@"%@ 原消息：%@", tipText, revokedDigest];
    }

    CMessageWrap *msgWrap = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];
    [msgWrap setM_uiStatus:0x4];
    [msgWrap setM_nsContent:tipText];
    [msgWrap setM_uiCreateTime:[revokeWrap m_uiCreateTime]];

    if (wcpl_trimString(revokeWrap.m_nsToUsr)) {
        [msgWrap setM_nsToUsr:revokeWrap.m_nsToUsr];
    }
    if (wcpl_trimString(revokeWrap.m_nsFromUsr)) {
        [msgWrap setM_nsFromUsr:revokeWrap.m_nsFromUsr];
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
        WCPLLogError(@"Exception in onRevokeMsg hook: %@", exception);
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
        WCPLLogError(@"Exception in MessageRevokeMgr onRevokeMsg: %@", exception);
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
