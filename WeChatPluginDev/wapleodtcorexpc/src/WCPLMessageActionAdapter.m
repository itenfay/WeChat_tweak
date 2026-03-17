//
// WCPLMessageActionAdapter.m
//

#import "WCPLMessageActionAdapter.h"

#import "WCPLLogger.h"
#import "WCPLServiceCenterAdapter.h"
#import "WCPLTypeGuard.h"
#import <objc/message.h>
#import <objc/runtime.h>

static id wcpl_messageActionAdapterInvokeNoArg(id target, SEL selector) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL))objc_msgSend)(target, selector);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_messageActionAdapterInvokeOneArg(id target, SEL selector, id arg) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL, id))objc_msgSend)(target, selector, arg);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static BOOL wcpl_messageActionAdapterInvokeVoidOneArg(id target, SEL selector, id arg) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(target, selector, arg);
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

static BOOL wcpl_messageActionAdapterTryForwardViaManager(id forwardManager,
                                                          id messageWrap,
                                                          id fromViewController,
                                                          id contact,
                                                          NSString **routeUsedOut) {
    if (!(forwardManager && messageWrap && fromViewController)) {
        return NO;
    }

    SEL forwardToContactSelector = NSSelectorFromString(@"forwardMessage:fromViewController:toContact:");
    if (contact && [forwardManager respondsToSelector:forwardToContactSelector]) {
        @try {
            ((void (*)(id, SEL, id, id, id))objc_msgSend)(forwardManager,
                                                           forwardToContactSelector,
                                                           messageWrap,
                                                           fromViewController,
                                                           contact);
            if (routeUsedOut) {
                *routeUsedOut = @"ForwardMessageMgr.toContact";
            }
            return YES;
        } @catch (NSException *exception) {
            WCPLCatchLog(exception);
        }
    }

    SEL forwardSelector = NSSelectorFromString(@"forwardMessage:fromViewController:");
    if (![forwardManager respondsToSelector:forwardSelector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(forwardManager,
                                                   forwardSelector,
                                                   messageWrap,
                                                   fromViewController);
        if (routeUsedOut) {
            *routeUsedOut = @"ForwardMessageMgr.default";
        }
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

static BOOL wcpl_messageActionAdapterTryForwardViaUtilityClass(id messageWrap,
                                                               id contact,
                                                               NSString **routeUsedOut) {
    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    if (!(forwardUtilClass && messageWrap && contact)) {
        return NO;
    }

    SEL sendMsgSelector = @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:);
    if ([forwardUtilClass respondsToSelector:sendMsgSelector]) {
        @try {
            ((id (*)(id, SEL, id, id, unsigned int, id))objc_msgSend)(forwardUtilClass,
                                                                       sendMsgSelector,
                                                                       messageWrap,
                                                                       contact,
                                                                       (unsigned int)0,
                                                                       nil);
            if (routeUsedOut) {
                *routeUsedOut = @"ForwardMsgUtil.SendMsg";
            }
            return YES;
        } @catch (NSException *exception) {
            WCPLCatchLog(exception);
        }
    }

    SEL forward4Selector = @selector(ForwardMsg:ToContact:Scene:forwardType:);
    if ([forwardUtilClass respondsToSelector:forward4Selector]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                                   forward4Selector,
                                                                                   messageWrap,
                                                                                   contact,
                                                                                   (unsigned int)0,
                                                                                   (unsigned int)0);
            if (routeUsedOut) {
                *routeUsedOut = @"ForwardMsgUtil.ForwardMsg4";
            }
            return YES;
        } @catch (NSException *exception) {
            WCPLCatchLog(exception);
        }
    }

    SEL forward3Selector = @selector(ForwardMsg:ToContact:Scene:);
    if (![forwardUtilClass respondsToSelector:forward3Selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                 forward3Selector,
                                                                 messageWrap,
                                                                 contact,
                                                                 (unsigned int)0);
        if (routeUsedOut) {
            *routeUsedOut = @"ForwardMsgUtil.ForwardMsg3";
        }
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

static BOOL wcpl_messageActionAdapterTryForwardViaLMUtils(id messageWrap,
                                                          id contact,
                                                          NSString **routeUsedOut) {
    Class lmUtilsClass = objc_getClass("LMUtils");
    SEL selector = @selector(ForwardMsg:ToContact:);
    if (!(lmUtilsClass && messageWrap && contact)) {
        return NO;
    }

    if ([lmUtilsClass respondsToSelector:selector]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(lmUtilsClass, selector, messageWrap, contact);
            if (routeUsedOut) {
                *routeUsedOut = @"LMUtils.class";
            }
            return YES;
        } @catch (NSException *exception) {
            WCPLCatchLog(exception);
        }
    }

    id instance = nil;
    @try {
        instance = [[lmUtilsClass alloc] init];
    } @catch (__unused NSException *exception) {
        instance = nil;
    }
    if (!instance || ![instance respondsToSelector:selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(instance, selector, messageWrap, contact);
        if (routeUsedOut) {
            *routeUsedOut = @"LMUtils.instance";
        }
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

id WCPLMessageActionAdapterMessageManager(void) {
    return WCPLServiceCenterAdapterGetServiceNamed(@"CMessageMgr");
}

id WCPLMessageActionAdapterSendMessageManager(void) {
    return WCPLServiceCenterAdapterGetServiceNamed(@"SendMessageMgr");
}

id WCPLMessageActionAdapterForwardManager(void) {
    return WCPLServiceCenterAdapterGetServiceNamed(@"ForwardMessageMgr");
}

id WCPLMessageActionAdapterResolveEmoticonWrap(id messageWrap, NSString *emoticonMD5) {
    id emoticonManager = WCPLServiceCenterAdapterGetServiceNamed(@"CEmoticonMgr");
    NSString *md5 = WCPLNonEmptyStringOrNil(emoticonMD5);
    if (!emoticonManager) {
        return nil;
    }

    id emoticonWrap = nil;
    if (md5.length == 32) {
        emoticonWrap = wcpl_messageActionAdapterInvokeOneArg(emoticonManager, @selector(getEmoticonWrapByMd5:), md5);
    }
    if (!emoticonWrap) {
        emoticonWrap = wcpl_messageActionAdapterInvokeOneArg(emoticonManager,
                                                             @selector(getEmoticonWrapByMessageWrap:),
                                                             messageWrap);
    }
    if (emoticonWrap) {
        return emoticonWrap;
    }

    id content = wcpl_messageActionAdapterInvokeNoArg(messageWrap, @selector(m_nsContent));
    return wcpl_messageActionAdapterInvokeOneArg(emoticonManager, @selector(getEmoticonWrapByContent:), content);
}

BOOL WCPLMessageActionAdapterSendEmoticon(id emoticonWrap, id logicController, id chatController) {
    if (!emoticonWrap) {
        return NO;
    }
    if (wcpl_messageActionAdapterInvokeVoidOneArg(logicController, @selector(SendEmoticonMessage:), emoticonWrap)) {
        return YES;
    }
    return wcpl_messageActionAdapterInvokeVoidOneArg(chatController,
                                                     @selector(SendEmoticonMesssageToolView:),
                                                     emoticonWrap);
}

BOOL WCPLMessageActionAdapterDeleteMessage(NSString *chatName, id messageWrap) {
    id messageManager = WCPLMessageActionAdapterMessageManager();
    NSString *targetChatName = WCPLNonEmptyStringOrNil(chatName);
    if (!(messageManager && targetChatName.length > 0 && messageWrap)) {
        return NO;
    }

    SEL selector = @selector(DelMsg:MsgWrap:);
    if (![messageManager respondsToSelector:selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(messageManager, selector, targetChatName, messageWrap);
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

BOOL WCPLMessageActionAdapterRevokeMessage(NSString *chatName, id messageWrap, unsigned int counter) {
    id messageManager = WCPLMessageActionAdapterMessageManager();
    NSString *targetChatName = WCPLNonEmptyStringOrNil(chatName);
    if (!(messageManager && targetChatName.length > 0 && messageWrap)) {
        return NO;
    }

    SEL selector = @selector(RevokeMsg:MsgWrap:Counter:);
    if (![messageManager respondsToSelector:selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(messageManager,
                                                                 selector,
                                                                 targetChatName,
                                                                 messageWrap,
                                                                 counter);
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

BOOL WCPLMessageActionAdapterForwardMessage(id messageWrap,
                                            id fromViewController,
                                            id contact,
                                            NSString **routeUsedOut) {
    if (routeUsedOut) {
        *routeUsedOut = nil;
    }

    if (wcpl_messageActionAdapterTryForwardViaManager(WCPLMessageActionAdapterForwardManager(),
                                                      messageWrap,
                                                      fromViewController,
                                                      contact,
                                                      routeUsedOut)) {
        return YES;
    }
    if (wcpl_messageActionAdapterTryForwardViaUtilityClass(messageWrap, contact, routeUsedOut)) {
        return YES;
    }
    return wcpl_messageActionAdapterTryForwardViaLMUtils(messageWrap, contact, routeUsedOut);
}
