//
// WCPLTextMessageSender.m
//

#import "WCPLTextMessageSender.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import "WeChatRedEnvelop.h"
#import <dispatch/dispatch.h>
#import <objc/message.h>
#import <objc/runtime.h>

NSString *WCPLTrimMessageText(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    static NSCharacterSet *trimSet = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableCharacterSet *set = [[NSCharacterSet whitespaceAndNewlineCharacterSet] mutableCopy];
        [set addCharactersInString:@"\u00A0\u200B\u200C\u200D\u200E\u200F\u2060\uFEFF"];
        trimSet = [set copy];
    });
    NSString *trimmed = [text stringByTrimmingCharactersInSet:trimSet];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_tm_utf16HexPreview(NSString *text, NSUInteger maxUnits) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0 || maxUnits == 0) return @"";
    NSUInteger len = MIN(text.length, maxUnits);
    NSMutableString *result = [NSMutableString stringWithCapacity:len * 5];
    for (NSUInteger i = 0; i < len; i++) {
        unichar ch = [text characterAtIndex:i];
        [result appendFormat:@"%04X", ch];
        if (i + 1 < len) {
            [result appendString:@" "];
        }
    }
    if (text.length > len) {
        [result appendString:@" …"];
    }
    return result;
}

static NSString *wcpl_tm_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return WCPLTrimMessageText((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return WCPLTrimMessageText(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return WCPLTrimMessageText((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return WCPLTrimMessageText((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

@interface WCPLTextMessageSender ()
- (BOOL)wcpl_sendTextOnMainThread:(NSString *)text toSession:(NSString *)sessionUserName;
@end

@implementation WCPLTextMessageSender

+ (instancetype)sharedSender {
    static WCPLTextMessageSender *sender = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sender = [WCPLTextMessageSender new];
    });
    return sender;
}

- (NSString *)selfUserName {
    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr || ![contactMgr respondsToSelector:@selector(getSelfContact)]) {
        return nil;
    }
    id selfContact = nil;
    @try {
        selfContact = [contactMgr getSelfContact];
    } @catch (__unused NSException *exception) {
        selfContact = nil;
    }
    return wcpl_tm_safeUserNameFromObject(selfContact);
}

- (BOOL)sendText:(NSString *)text toSession:(NSString *)sessionUserName {
    if (![NSThread isMainThread]) {
        __block BOOL ok = NO;
        dispatch_sync(dispatch_get_main_queue(), ^{
            ok = [self wcpl_sendTextOnMainThread:text toSession:sessionUserName];
        });
        return ok;
    }
    return [self wcpl_sendTextOnMainThread:text toSession:sessionUserName];
}

- (BOOL)wcpl_sendTextOnMainThread:(NSString *)text toSession:(NSString *)sessionUserName {
    NSString *session = WCPLTrimMessageText(sessionUserName);
    NSString *content = WCPLTrimMessageText(text);
    if (session.length == 0 || content.length == 0) return NO;

    NSString *selfUserName = [self selfUserName];
    if (selfUserName.length == 0) return NO;

    Class wrapClass = objc_getClass("CMessageWrap");
    if (!wrapClass) return NO;

    CMessageWrap *msgWrap = nil;
    Class logicClass = objc_getClass("BaseMsgContentLogicController");
    if (logicClass) {
        BaseMsgContentLogicController *logic = nil;
        @try {
            logic = [[logicClass alloc] init];
        } @catch (__unused NSException *exception) {
            logic = nil;
        }

        if (logic && [logic respondsToSelector:@selector(FormTextMsg:withText:)]) {
            @try {
                CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
                if (contactMgr && [contactMgr respondsToSelector:@selector(getContactByName:)]) {
                    id contact = [contactMgr getContactByName:session];
                    if (contact) {
                        logic.m_contact = contact;
                    }
                }
            } @catch (__unused NSException *exception) {
            }

            @try {
                id wrap = [logic FormTextMsg:session withText:content];
                if ([wrap isKindOfClass:wrapClass]) {
                    CMessageWrap *tmpWrap = (CMessageWrap *)wrap;
                    if (tmpWrap.m_uiMessageType == 1) {
                        msgWrap = tmpWrap;
                    }
                }
            } @catch (__unused NSException *exception) {
                msgWrap = nil;
            }
        }
    }

    if (!msgWrap) {
        if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:nsFromUsr:)]) {
            msgWrap = [[wrapClass alloc] initWithMsgType:1 nsFromUsr:selfUserName];
        } else if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
            msgWrap = [[wrapClass alloc] initWithMsgType:1];
            @try {
                [msgWrap setM_nsFromUsr:selfUserName];
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if (!msgWrap) return NO;

    @try {
        [msgWrap setM_nsToUsr:session];
        if ([msgWrap respondsToSelector:@selector(setM_nsContent:)]) {
            [msgWrap setM_nsContent:content];
        }
        if ([msgWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
            [msgWrap setM_nsPushContent:content];
        }
        if ([msgWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
            [msgWrap setM_nsFromUsr:selfUserName];
        }

        if ([session rangeOfString:@"@chatroom"].location != NSNotFound) {
            NSString *msgSource = WCPLTrimMessageText(msgWrap.m_nsMsgSource);
            if (msgSource.length == 0) {
                msgWrap.m_nsMsgSource = @"<msgsource><atuserlist><![CDATA[]]></atuserlist></msgsource>";
            }
            if ([msgWrap respondsToSelector:@selector(ChangeForChatRoom)]) {
                [msgWrap ChangeForChatRoom];
            }
        }

        if ([msgWrap respondsToSelector:@selector(ChangeForMsgSource)]) {
            [msgWrap ChangeForMsgSource];
        }
        if ([msgWrap respondsToSelector:@selector(UpdateMsgSource)]) {
            [msgWrap UpdateMsgSource];
        }
        if ([msgWrap respondsToSelector:@selector(UpdateContent:)]) {
            [msgWrap UpdateContent:content];
        }
        if ([msgWrap respondsToSelector:@selector(changeForPlainTextMsg)]) {
            [msgWrap changeForPlainTextMsg];
        }
        if ([msgWrap respondsToSelector:@selector(ChangeForPushContent)]) {
            [msgWrap ChangeForPushContent];
        }
        if ([msgWrap respondsToSelector:@selector(ChangeForDisplay)]) {
            [msgWrap ChangeForDisplay];
        }
        if ([msgWrap respondsToSelector:@selector(setM_nsContent:)]) {
            [msgWrap setM_nsContent:content];
        }
        if ([msgWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
            [msgWrap setM_nsPushContent:content];
        }
        @try {
            [msgWrap setValue:content forKey:@"m_nsLastDisplayContent"];
        } @catch (__unused NSException *exception) {
        }
        if ([msgWrap respondsToSelector:@selector(setM_uiStatus:)]) {
            [msgWrap setM_uiStatus:1];
        }
        [msgWrap setM_uiCreateTime:(unsigned int)[[NSDate date] timeIntervalSince1970]];
    } @catch (__unused NSException *exception) {
        return NO;
    }

    NSString *wrapContent = nil;
    NSString *displayContent = nil;
    @try {
        wrapContent = WCPLTrimMessageText(msgWrap.m_nsContent);
        if ([msgWrap respondsToSelector:@selector(GetDisplayContent)]) {
            id value = ((id (*)(id, SEL))objc_msgSend)(msgWrap, @selector(GetDisplayContent));
            if ([value isKindOfClass:[NSString class]]) {
                displayContent = WCPLTrimMessageText((NSString *)value);
            }
        }
    } @catch (__unused NSException *exception) {
        wrapContent = nil;
        displayContent = nil;
    }

    WCPLLog(@"发送文本准备: to=%@ textLen=%lu textHex=%@ wrapLen=%lu displayLen=%lu displayHex=%@",
            session,
            (unsigned long)content.length,
            wcpl_tm_utf16HexPreview(content, 24),
            (unsigned long)wrapContent.length,
            (unsigned long)displayContent.length,
            wcpl_tm_utf16HexPreview(displayContent, 24));

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    Class messageMgrClass = objc_getClass("CMessageMgr");
    if (messageMgr && messageMgrClass) {
        Ivar bypIvar = class_getInstanceVariable(messageMgrClass, "m_bypSendMessageMgr");
        id bypMgr = bypIvar ? object_getIvar(messageMgr, bypIvar) : nil;
        if (!bypMgr) {
            @try {
                bypMgr = [messageMgr valueForKey:@"m_bypSendMessageMgr"];
            } @catch (__unused NSException *exception) {
                bypMgr = nil;
            }
        }
        if (!bypMgr) {
            @try {
                bypMgr = [messageMgr valueForKey:@"bypSendMessageMgr"];
            } @catch (__unused NSException *exception) {
                bypMgr = nil;
            }
        }
        if (bypMgr && [bypMgr respondsToSelector:@selector(StartSendMsg:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(bypMgr, @selector(StartSendMsg:), msgWrap);
                WCPLLog(@"发送文本完成: via=byp to=%@", session);
                return YES;
            } @catch (__unused NSException *exception) {
            }
        }
    }

    id sendMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (sendMgr && [sendMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)]) {
        BOOL ok = NO;
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(sendMgr, @selector(AddMsgToSendTable:MsgWrap:), session, msgWrap);
            if ([sendMgr respondsToSelector:@selector(SendMsg)]) {
                ((void (*)(id, SEL))objc_msgSend)(sendMgr, @selector(SendMsg));
            }
            WCPLLog(@"发送文本完成: via=sendMgr to=%@", session);
            ok = YES;
        } @catch (__unused NSException *exception) {
            ok = NO;
        }
        if (ok) return YES;
    }

    return NO;
}

@end

