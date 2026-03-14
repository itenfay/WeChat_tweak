//
// WCPLContactAdapter.m
//

#import "WCPLContactAdapter.h"

#import "WCPLContactLookup.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenterAdapter.h"
#import "WCPLWeChatContactHeaders.h"
#import <objc/message.h>

static NSString *wcpl_contactAdapterTrimUserName(id value) {
    NSString *userName = WCPLTrimText(value);
    return userName.length > 0 ? userName : nil;
}

static id wcpl_contactAdapterInvokeMessageContactLookup(id target, id messageWrap) {
    if (!(target && messageWrap)) {
        return nil;
    }

    SEL selector = @selector(getMessageChatContactByMessageWrap:);
    if (![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL, id))objc_msgSend)(target, selector, messageWrap);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

NSString *WCPLContactAdapterSafeUserName(id obj) {
    if (!obj) {
        return nil;
    }

    NSString *directUserName = wcpl_contactAdapterTrimUserName(obj);
    if (directUserName.length > 0) {
        return directUserName;
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            NSString *userName = wcpl_contactAdapterTrimUserName(value);
            if (userName.length > 0) {
                return userName;
            }
        } @catch (__unused NSException *exception) {
            return nil;
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        return wcpl_contactAdapterTrimUserName(value);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

CContact *WCPLContactAdapterFindContactByUserName(NSString *userName) {
    NSString *targetUserName = wcpl_contactAdapterTrimUserName(userName);
    if (targetUserName.length == 0) {
        return nil;
    }
    return WCPLFindContactByUserName(targetUserName, nil, nil);
}

id WCPLContactAdapterMessageChatContact(id messageWrap) {
    id contactManager = WCPLServiceCenterAdapterGetService(objc_getClass("CContactMgr"));
    return wcpl_contactAdapterInvokeMessageContactLookup(contactManager, messageWrap);
}

id WCPLContactAdapterMessageChatContactFromController(id controller, id messageWrap) {
    id contact = wcpl_contactAdapterInvokeMessageContactLookup(controller, messageWrap);
    if (contact) {
        return contact;
    }
    return WCPLContactAdapterMessageChatContact(messageWrap);
}

BOOL WCPLContactAdapterContactMatchesUserName(id contact, NSString *expectedUserName) {
    if (!contact) {
        return NO;
    }

    NSString *targetUserName = wcpl_contactAdapterTrimUserName(expectedUserName);
    if (targetUserName.length == 0) {
        return YES;
    }

    NSString *contactUserName = WCPLContactAdapterSafeUserName(contact);
    return (contactUserName.length > 0 && [contactUserName isEqualToString:targetUserName]);
}

id WCPLContactAdapterCurrentSelfContact(void) {
    id contactManager = WCPLServiceCenterAdapterGetService(objc_getClass("CContactMgr"));
    if (!(contactManager && [contactManager respondsToSelector:@selector(getSelfContact)])) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL))objc_msgSend)(contactManager, @selector(getSelfContact));
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

NSString *WCPLContactAdapterCurrentSelfUserName(void) {
    return WCPLContactAdapterSafeUserName(WCPLContactAdapterCurrentSelfContact());
}
