//
// WCPLContactAdapter.m
//

#import "WCPLContactAdapter.h"

#import "WCPLContactLookup.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenterAdapter.h"
#import "WCPLWeChatContactHeaders.h"
#import <objc/message.h>
#import <objc/runtime.h>

static NSString *wcpl_contactAdapterTrimUserName(id value) {
    NSString *userName = WCPLTrimText(value);
    return userName.length > 0 ? userName : nil;
}

static NSString *wcpl_contactAdapterReadUserNameFromSelector(id obj, SEL selector) {
    if (!(obj && selector) || ![obj respondsToSelector:selector]) {
        return nil;
    }

    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(obj, selector);
        return wcpl_contactAdapterTrimUserName(value);
    } @catch (__unused NSException *exception) {
        return nil;
    }
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

static NSString *wcpl_contactAdapterReadStringField(id target, SEL selector) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return wcpl_contactAdapterTrimUserName(((id (*)(id, SEL))objc_msgSend)(target, selector));
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

    SEL selectors[] = {
        @selector(m_nsUsrName),
        @selector(m_nsUserName),
        @selector(userName),
        @selector(username),
        @selector(m_nsChatRoomName),
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        NSString *userName = wcpl_contactAdapterReadUserNameFromSelector(obj, selectors[idx]);
        if (userName.length > 0) {
            return userName;
        }
    }

    NSArray<NSString *> *kvcKeys = @[
        @"m_nsUsrName",
        @"m_nsUserName",
        @"userName",
        @"username",
        @"m_nsChatRoomName",
    ];
    for (NSString *key in kvcKeys) {
        @try {
            NSString *userName = wcpl_contactAdapterTrimUserName([obj valueForKey:key]);
            if (userName.length > 0) {
                return userName;
            }
        } @catch (__unused NSException *exception) {
            continue;
        }
    }

    return nil;
}

NSString *WCPLContactAdapterChatRoomMemberList(id contact) {
    return wcpl_contactAdapterReadStringField(contact, @selector(m_nsChatRoomMemList));
}

CContact *WCPLContactAdapterFindContactByUserName(NSString *userName) {
    NSString *targetUserName = wcpl_contactAdapterTrimUserName(userName);
    if (targetUserName.length == 0) {
        return nil;
    }
    return WCPLFindContactByUserName(targetUserName, nil, nil);
}

NSString *WCPLContactAdapterDisplayNameForContact(id contact, NSString *fallbackUserName) {
    NSString *fallback = wcpl_contactAdapterTrimUserName(fallbackUserName);
    if (fallback.length == 0) {
        fallback = WCPLContactAdapterSafeUserName(contact);
    }

    if (!contact) {
        return fallback;
    }

    NSArray<NSString *> *selectors = @[@"m_nsRemark", @"m_nsNickName", @"m_nsAliasName", @"m_nsUsrName"];
    for (NSString *selectorName in selectors) {
        NSString *displayName = wcpl_contactAdapterReadStringField(contact, NSSelectorFromString(selectorName));
        if (displayName.length > 0) {
            return displayName;
        }
    }

    return fallback;
}

NSString *WCPLContactAdapterDisplayNameForUserName(NSString *userName) {
    NSString *target = wcpl_contactAdapterTrimUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    CContact *contact = WCPLContactAdapterFindContactByUserName(target);
    return WCPLContactAdapterDisplayNameForContact(contact, target);
}

id WCPLContactAdapterMessageChatContact(id messageWrap) {
    id contactManager = WCPLServiceCenterAdapterGetService(objc_lookUpClass("CContactMgr"));
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

BOOL WCPLContactAdapterIsChatRoomUserName(NSString *userName) {
    NSString *trimmedUserName = wcpl_contactAdapterTrimUserName(userName);
    if (trimmedUserName.length == 0) {
        return NO;
    }

    Class contactClass = objc_lookUpClass("CContact");
    if (contactClass && [contactClass respondsToSelector:@selector(IsChatRoomContact:)]) {
        @try {
            return ((BOOL (*)(id, SEL, id))objc_msgSend)(contactClass,
                                                         @selector(IsChatRoomContact:),
                                                         trimmedUserName);
        } @catch (__unused NSException *exception) {
            return NO;
        }
    }

    return WCPLIsChatRoomName(trimmedUserName);
}

id WCPLContactAdapterCurrentSelfContact(void) {
    id contactManager = WCPLServiceCenterAdapterGetService(objc_lookUpClass("CContactMgr"));
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
