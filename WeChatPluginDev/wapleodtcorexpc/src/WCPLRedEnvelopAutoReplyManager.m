//
// WCPLRedEnvelopAutoReplyManager.m
//

#import "WCPLRedEnvelopAutoReplyManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import "WeChatRedEnvelop.h"
#import <dispatch/dispatch.h>
#import <objc/message.h>
#import <objc/runtime.h>

static NSString *wcpl_rea_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_rea_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_rea_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_rea_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_rea_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_rea_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

static NSString *wcpl_rea_getSelfUserName(void) {
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
    return wcpl_rea_safeUserNameFromObject(selfContact);
}

static NSString *wcpl_rea_dedupeKey(NSString *sendId, NSString *timingIdentifier, NSString *sessionUserName) {
    NSString *sid = wcpl_rea_trimString(sendId);
    NSString *tid = wcpl_rea_trimString(timingIdentifier);
    NSString *session = wcpl_rea_trimString(sessionUserName);

    if (sid.length > 0 && tid.length > 0) {
        return [NSString stringWithFormat:@"%@|%@", sid, tid];
    }
    if (sid.length > 0) {
        return sid;
    }
    if (tid.length > 0 && session.length > 0) {
        return [NSString stringWithFormat:@"%@|%@", tid, session];
    }
    return tid.length > 0 ? tid : session;
}

static CMessageWrap *wcpl_rea_formTextWrap(NSString *sessionUserName, NSString *text) {
    NSString *session = wcpl_rea_trimString(sessionUserName);
    NSString *content = wcpl_rea_trimString(text);
    if (session.length == 0 || content.length == 0) return nil;

    Class logicClass = objc_getClass("BaseMsgContentLogicController");
    if (logicClass) {
        BaseMsgContentLogicController *logic = nil;
        @try {
            logic = [[logicClass alloc] init];
        } @catch (__unused NSException *exception) {
            logic = nil;
        }

        if (logic) {
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

            if ([logic respondsToSelector:@selector(FormTextMsg:withText:)]) {
                @try {
                    id wrap = [logic FormTextMsg:session withText:content];
                    if ([wrap isKindOfClass:objc_getClass("CMessageWrap")]) {
                        return (CMessageWrap *)wrap;
                    }
                } @catch (__unused NSException *exception) {
                }
            }
        }
    }

    NSString *selfUserName = wcpl_rea_getSelfUserName();
    if (selfUserName.length == 0) return nil;

    Class wrapClass = objc_getClass("CMessageWrap");
    if (!wrapClass) return nil;

    CMessageWrap *msgWrap = nil;
    if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:nsFromUsr:)]) {
        msgWrap = [[wrapClass alloc] initWithMsgType:1 nsFromUsr:selfUserName];
    } else if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        msgWrap = [[wrapClass alloc] initWithMsgType:1];
        @try {
            [msgWrap setM_nsFromUsr:selfUserName];
        } @catch (__unused NSException *exception) {
        }
    }

    if (!msgWrap) return nil;

    @try {
        [msgWrap setM_nsToUsr:session];
        if ([msgWrap respondsToSelector:@selector(setM_nsContent:)]) {
            [msgWrap setM_nsContent:content];
        }
        if ([msgWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
            [msgWrap setM_nsPushContent:content];
        }
        if ([session rangeOfString:@"@chatroom"].location != NSNotFound) {
            NSString *msgSource = wcpl_rea_trimString(msgWrap.m_nsMsgSource);
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
        if ([msgWrap respondsToSelector:@selector(setM_uiStatus:)]) {
            [msgWrap setM_uiStatus:1];
        }
        [msgWrap setM_uiCreateTime:(unsigned int)[[NSDate date] timeIntervalSince1970]];
    } @catch (__unused NSException *exception) {
        return nil;
    }

    return msgWrap;
}

static BOOL wcpl_rea_sendTextMessageNative(NSString *sessionUserName, NSString *text) {
    NSString *session = wcpl_rea_trimString(sessionUserName);
    NSString *content = wcpl_rea_trimString(text);
    if (session.length == 0 || content.length == 0) return NO;

    CMessageWrap *msgWrap = wcpl_rea_formTextWrap(session, content);
    if (!msgWrap) return NO;

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    Class messageMgrClass = objc_getClass("CMessageMgr");
    if (messageMgr && messageMgrClass) {
        Ivar bypIvar = class_getInstanceVariable(messageMgrClass, "m_bypSendMessageMgr");
        id bypMgr = bypIvar ? object_getIvar(messageMgr, bypIvar) : nil;
        if (bypMgr && [bypMgr respondsToSelector:@selector(StartSendMsg:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(bypMgr, @selector(StartSendMsg:), msgWrap);
                return YES;
            } @catch (__unused NSException *exception) {
            }
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
            return NO;
        }
    }

    return NO;
}

@interface WCPLRedEnvelopAutoReplyManager ()

@property (nonatomic) dispatch_queue_t syncQueue;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSDate *> *recentReplyMap;

@end

@implementation WCPLRedEnvelopAutoReplyManager

+ (instancetype)sharedManager {
    static WCPLRedEnvelopAutoReplyManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [WCPLRedEnvelopAutoReplyManager new];
    });
    return manager;
}

- (instancetype)init {
    if (self = [super init]) {
        _syncQueue = dispatch_queue_create("com.wcpl.redenvelop.autoreply", DISPATCH_QUEUE_SERIAL);
        _recentReplyMap = [NSMutableDictionary dictionary];
    }
    return self;
}

- (BOOL)wcpl_shouldSkipForKey:(NSString *)key now:(NSDate *)now {
    if (key.length == 0 || !now) return NO;

    __block BOOL skip = NO;
    dispatch_sync(self.syncQueue, ^{
        NSDate *last = self.recentReplyMap[key];
        if (last && [now timeIntervalSinceDate:last] < 8.0) {
            skip = YES;
            return;
        }

        if (self.recentReplyMap.count > 200) {
            [self.recentReplyMap removeAllObjects];
        }
        self.recentReplyMap[key] = now;
    });
    return skip;
}

- (void)wcpl_removeKeyIfNeeded:(NSString *)key {
    if (key.length == 0) return;
    dispatch_async(self.syncQueue, ^{
        [self.recentReplyMap removeObjectForKey:key];
    });
}

- (void)handleRedEnvelopOpenResultSuccess:(BOOL)success
                         sessionUserName:(NSString *)sessionUserName
                                 isGroup:(BOOL)isGroup
                                  sendId:(NSString *)sendId
                        timingIdentifier:(NSString *)timingIdentifier {
    if (!success) return;

    NSString *session = wcpl_rea_trimString(sessionUserName);
    if (session.length == 0) return;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *replyText = wcpl_rea_trimString(isGroup ? config.groupRedEnvelopAutoReplyText : config.privateRedEnvelopAutoReplyText);
    if (replyText.length == 0) return;

    NSString *key = wcpl_rea_dedupeKey(sendId, timingIdentifier, session);
    NSDate *now = [NSDate date];
    if ([self wcpl_shouldSkipForKey:key now:now]) {
        WCPLLog(@"红包自动回复: 去重跳过 session=%@ isGroup=%d key=%@",
                session,
                isGroup,
                key ?: @"");
        return;
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL ok = wcpl_rea_sendTextMessageNative(session, replyText);
        WCPLLog(@"红包自动回复: session=%@ isGroup=%d textLen=%lu ok=%d",
                session,
                isGroup,
                (unsigned long)replyText.length,
                ok);
        if (!ok) {
            [self wcpl_removeKeyIfNeeded:key];
        }
    });
}

@end

