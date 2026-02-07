//
// WCPLContactLookup.m
//

#import "WCPLContactLookup.h"
#import "WeChatRedEnvelop.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>

static NSString *wcpl_trimUserName(NSString *value) {
    if (![value isKindOfClass:[NSString class]]) {
        return @"";
    }
    return [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

static NSString *wcpl_userNameFromObject(id obj) {
    if (!obj) {
        return @"";
    }

    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimUserName((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            id value = [obj valueForKey:@"m_nsUsrName"];
            if ([value isKindOfClass:[NSString class]]) {
                NSString *name = wcpl_trimUserName((NSString *)value);
                if (name.length > 0) {
                    return name;
                }
            }
        } @catch (__unused NSException *exception) {
        }

        if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
            @try {
                id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
                if ([value isKindOfClass:[NSString class]]) {
                    NSString *name = wcpl_trimUserName((NSString *)value);
                    if (name.length > 0) {
                        return name;
                    }
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    return @"";
}

static id wcpl_findContactFromDictionary(NSDictionary *allContacts, NSString *targetUserName) {
    if (![allContacts isKindOfClass:[NSDictionary class]] || allContacts.count == 0 || targetUserName.length == 0) {
        return nil;
    }

    id direct = allContacts[targetUserName];
    if ([wcpl_userNameFromObject(direct) isEqualToString:targetUserName]) {
        return direct;
    }

    for (id value in allContacts.allValues) {
        if ([wcpl_userNameFromObject(value) isEqualToString:targetUserName]) {
            return value;
        }
    }

    for (id key in allContacts.allKeys) {
        if ([wcpl_userNameFromObject(key) isEqualToString:targetUserName]) {
            return key;
        }
    }

    return nil;
}

static id wcpl_findContactFromContactMgr(CContactMgr *contactMgr, NSString *targetUserName) {
    if (!contactMgr || targetUserName.length == 0) {
        return nil;
    }

    NSString *targetLower = [targetUserName lowercaseString];

    NSArray<NSString *> *selectors = @[@"getContactByName:", @"getContactByNameFromDB:", @"getContactByNameFromCache:"];
    for (NSString *selectorName in selectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!selector || ![contactMgr respondsToSelector:selector]) {
            continue;
        }
        @try {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, selector, targetUserName);
            if ([[wcpl_userNameFromObject(contact) lowercaseString] isEqualToString:targetLower]) {
                return contact;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

CContact *WCPLFindContactByUserName(NSString *userName, CContactMgr *contactMgr, ContactsDataLogic *dataLogic) {
    NSString *target = wcpl_trimUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    if (![NSThread isMainThread]) {
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            WCPLLogWarning(@"联系人查找在非主线程调用，已跳过兜底以保证稳定性");
        });
        return nil;
    }

    ContactsDataLogic *logic = dataLogic;
    if (logic && [logic respondsToSelector:@selector(getAllContactsDictionary)]) {
        @try {
            NSDictionary *all = [logic getAllContactsDictionary];
            id found = wcpl_findContactFromDictionary(all, target);
            if (found) {
                return (CContact *)found;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    CContactMgr *mgr = contactMgr;
    if (!mgr) {
        mgr = WCPLGetService(objc_getClass("CContactMgr"));
    }

    id foundFromMgr = wcpl_findContactFromContactMgr(mgr, target);
    if (foundFromMgr) {
        return (CContact *)foundFromMgr;
    }

    return nil;
}
