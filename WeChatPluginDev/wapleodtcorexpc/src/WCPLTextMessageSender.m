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

static BOOL wcpl_tm_isVisuallyEmpty(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return YES;

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

    if (!invisibleRegex) return NO;

    NSString *stripped = [invisibleRegex stringByReplacingMatchesInString:text
                                                                  options:0
                                                                    range:NSMakeRange(0, text.length)
                                                             withTemplate:@""];
    return stripped.length == 0;
}

NSString * _Nullable WCPLTrimMessageText(NSString * _Nullable text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    static NSCharacterSet *trimSet = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableCharacterSet *set = [[NSCharacterSet whitespaceAndNewlineCharacterSet] mutableCopy];
        [set addCharactersInString:@"\u00A0\u200B\u200C\u200D\u200E\u200F\u2060\uFEFF"];
        trimSet = [set copy];
    });
    NSString *trimmed = [text stringByTrimmingCharactersInSet:trimSet];
    if (trimmed.length == 0) return nil;
    return wcpl_tm_isVisuallyEmpty(trimmed) ? nil : trimmed;
}

static BOOL wcpl_tm_isChatRoom(NSString *sessionUserName) {
    return [sessionUserName rangeOfString:@"@chatroom"].location != NSNotFound;
}

static id wcpl_tm_getBypSendMessageMgr(id messageMgr) {
    if (!messageMgr) return nil;

    Class messageMgrClass = objc_getClass("CMessageMgr");
    if (messageMgrClass) {
        Ivar bypIvar = class_getInstanceVariable(messageMgrClass, "m_bypSendMessageMgr");
        if (bypIvar) {
            return object_getIvar(messageMgr, bypIvar);
        }
    }

    @try {
        return [messageMgr valueForKey:@"m_bypSendMessageMgr"];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

@interface WCPLTextMessageSender ()
- (BOOL)wcpl_sendTextOnMainThread:(nullable NSString *)text toSession:(nullable NSString *)sessionUserName;
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

- (nullable NSString *)selfUserName {
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
    if (!selfContact || ![selfContact respondsToSelector:@selector(m_nsUsrName)]) {
        return nil;
    }
    NSString *userName = nil;
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsUsrName));
        if ([value isKindOfClass:[NSString class]]) {
            userName = (NSString *)value;
        }
    } @catch (__unused NSException *exception) {
        userName = nil;
    }
    return WCPLTrimMessageText(userName);
}

- (BOOL)sendText:(nullable NSString *)text toSession:(nullable NSString *)sessionUserName {
    if (![NSThread isMainThread]) {
        __block BOOL ok = NO;
        dispatch_sync(dispatch_get_main_queue(), ^{
            ok = [self wcpl_sendTextOnMainThread:text toSession:sessionUserName];
        });
        return ok;
    }
    return [self wcpl_sendTextOnMainThread:text toSession:sessionUserName];
}

- (BOOL)wcpl_sendTextOnMainThread:(nullable NSString *)text toSession:(nullable NSString *)sessionUserName {
    NSString *session = WCPLTrimMessageText(sessionUserName);
    NSString *content = WCPLTrimMessageText(text);
    if (session.length == 0 || content.length == 0) return NO;

    NSString *selfUserName = [self selfUserName];
    if (selfUserName.length == 0) return NO;

    Class wrapClass = objc_getClass("CMessageWrap");
    if (!wrapClass) return NO;

    CMessageWrap *msgWrap = nil;
    @try {
        if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:nsFromUsr:)]) {
            msgWrap = [[wrapClass alloc] initWithMsgType:1 nsFromUsr:selfUserName];
        } else if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
            msgWrap = [[wrapClass alloc] initWithMsgType:1];
        }
    } @catch (__unused NSException *exception) {
        msgWrap = nil;
    }

    if (!msgWrap) return NO;

    @try {
        msgWrap.m_nsToUsr = session;
        msgWrap.m_nsFromUsr = selfUserName;
        msgWrap.m_nsContent = content;
        msgWrap.m_nsPushContent = content;
        msgWrap.m_uiStatus = 1;
        msgWrap.m_uiCreateTime = (unsigned int)[[NSDate date] timeIntervalSince1970];

        if (wcpl_tm_isChatRoom(session)) {
            if (WCPLTrimMessageText(msgWrap.m_nsMsgSource).length == 0) {
                msgWrap.m_nsMsgSource = @"<msgsource><atuserlist><![CDATA[]]></atuserlist></msgsource>";
            }
            if ([msgWrap respondsToSelector:@selector(ChangeForChatRoom)]) {
                [msgWrap ChangeForChatRoom];
            }
        }
        if ([msgWrap respondsToSelector:@selector(changeForPlainTextMsg)]) {
            [msgWrap changeForPlainTextMsg];
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
        if ([msgWrap respondsToSelector:@selector(ChangeForPushContent)]) {
            [msgWrap ChangeForPushContent];
        }
        if ([msgWrap respondsToSelector:@selector(ChangeForDisplay)]) {
            [msgWrap ChangeForDisplay];
        }
    } @catch (__unused NSException *exception) {
        return NO;
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    id bypMgr = wcpl_tm_getBypSendMessageMgr(messageMgr);
    if (bypMgr && [bypMgr respondsToSelector:@selector(StartSendMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(bypMgr, @selector(StartSendMsg:), msgWrap);
            return YES;
        } @catch (__unused NSException *exception) {
        }
    }

    id sendMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (sendMgr && [sendMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(sendMgr, @selector(AddMsgToSendTable:MsgWrap:), session, msgWrap);
            if ([sendMgr respondsToSelector:@selector(SendMsg)]) {
                ((void (*)(id, SEL))objc_msgSend)(sendMgr, @selector(SendMsg));
            }
            return YES;
        } @catch (__unused NSException *exception) {
        }
    }

    return NO;
}

@end
