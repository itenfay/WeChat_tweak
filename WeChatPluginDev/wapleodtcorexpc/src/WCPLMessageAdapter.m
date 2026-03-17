//
// WCPLMessageAdapter.m
//

#import "WCPLMessageAdapter.h"

#import "WCPLContactAdapter.h"
#import "WCPLNavigationAdapter.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenterAdapter.h"
#import <objc/message.h>

static NSString *wcpl_messageAdapterTrimText(id value) {
    NSString *text = WCPLTrimText(value);
    return text.length > 0 ? text : nil;
}

static id wcpl_messageAdapterInvokeNoArg(id target, SEL selector) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL))objc_msgSend)(target, selector);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

id WCPLMessageAdapterChatContact(id controller) {
    if (!controller) {
        return nil;
    }

    SEL getContactSelector = @selector(GetContact);
    if ([controller respondsToSelector:getContactSelector]) {
        @try {
            id contact = ((id (*)(id, SEL))objc_msgSend)(controller, getContactSelector);
            if (contact) {
                return contact;
            }
        } @catch (__unused NSException *exception) {
            return nil;
        }
    }

    NSArray<NSString *> *keys = @[@"contact", @"m_contact"];
    for (NSString *key in keys) {
        @try {
            id contact = [controller valueForKey:key];
            if (contact) {
                return contact;
            }
        } @catch (__unused NSException *exception) {
            continue;
        }
    }

    return nil;
}

NSString *WCPLMessageAdapterChatUserName(id controller) {
    return WCPLContactAdapterSafeUserName(WCPLMessageAdapterChatContact(controller));
}

NSString *WCPLMessageAdapterCurrentChatName(id controller) {
    NSString *chatName = wcpl_messageAdapterTrimText(wcpl_messageAdapterInvokeNoArg(controller, @selector(getCurrentChatName)));
    if (chatName.length > 0) {
        return chatName;
    }
    return WCPLMessageAdapterChatUserName(controller);
}

id WCPLMessageAdapterLogicController(id controller) {
    id logicController = wcpl_messageAdapterInvokeNoArg(controller, @selector(m_logicController));
    if (logicController) {
        return logicController;
    }
    return wcpl_messageAdapterInvokeNoArg(controller, @selector(logicController));
}

id WCPLMessageAdapterToolView(id controller) {
    return wcpl_messageAdapterInvokeNoArg(controller, @selector(toolView));
}

id WCPLMessageAdapterCurrentLogicController(void) {
    id logicManager = WCPLServiceCenterAdapterGetServiceNamed(@"MMMsgLogicManager");
    return wcpl_messageAdapterInvokeNoArg(logicManager, @selector(GetCurrentLogicController));
}

NSString *WCPLMessageAdapterInputTextFromToolView(id toolView) {
    NSString *inputText = wcpl_messageAdapterTrimText(wcpl_messageAdapterInvokeNoArg(toolView, @selector(inputText)));
    if (inputText.length > 0) {
        return inputText;
    }
    return wcpl_messageAdapterTrimText(wcpl_messageAdapterInvokeNoArg(toolView, @selector(text)));
}

UIView *WCPLMessageAdapterLoadedChatView(id controller) {
    return WCPLNavigationAdapterLoadedView(controller);
}

UINavigationController *WCPLMessageAdapterNavigationController(id controller) {
    return WCPLNavigationAdapterNavigationController(controller);
}

NSUInteger WCPLMessageAdapterNavigationDepth(id controller) {
    return WCPLNavigationAdapterNavigationDepth(controller);
}

BOOL WCPLMessageAdapterIsOnNavigationStack(id controller) {
    return WCPLNavigationAdapterIsOnNavigationStack(controller);
}
