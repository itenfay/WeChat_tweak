//
// WCPLContactLookup.m
//

#import "WCPLContactLookup.h"
#import "WeChatRedEnvelop.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>

static NSString *wcpl_userNameFromObject(id obj);

static NSString *wcpl_trimUserName(NSString *value) {
    if (![value isKindOfClass:[NSString class]]) {
        return @"";
    }
    return [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

static BOOL wcpl_isContactObject(id obj) {
    Class contactClass = objc_getClass("CContact");
    return (contactClass && obj && [obj isKindOfClass:contactClass]);
}

static BOOL wcpl_isMatchedContactObject(id obj, NSString *targetUserNameLowercase) {
    if (!wcpl_isContactObject(obj) || targetUserNameLowercase.length == 0) {
        return NO;
    }
    return [[wcpl_userNameFromObject(obj) lowercaseString] isEqualToString:targetUserNameLowercase];
}

static void wcpl_logUnexpectedContactType(id obj, NSString *scene, NSString *targetUserName) {
    if (!obj || ![scene isKindOfClass:[NSString class]]) {
        return;
    }

    static NSUInteger anomalyLogCount = 0;
    if (anomalyLogCount >= 8) {
        return;
    }
    anomalyLogCount += 1;

    NSString *className = NSStringFromClass([obj class]);
    NSString *resolved = wcpl_userNameFromObject(obj);
    WCPLLogWarning(@"联系人查找异常对象: scene=%@ target=%@ class=%@ resolved=%@",
                   scene,
                   targetUserName ?: @"(nil)",
                   className ?: @"(nil)",
                   resolved ?: @"(nil)");
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

    NSString *targetLower = [targetUserName lowercaseString];

    id direct = allContacts[targetUserName];
    if (wcpl_isMatchedContactObject(direct, targetLower)) {
        return direct;
    }
    if (direct && [[wcpl_userNameFromObject(direct) lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(direct)) {
        wcpl_logUnexpectedContactType(direct, @"dict_direct", targetUserName);
    }

    for (id value in allContacts.allValues) {
        if (wcpl_isMatchedContactObject(value, targetLower)) {
            return value;
        }
        if (value && [[wcpl_userNameFromObject(value) lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(value)) {
            wcpl_logUnexpectedContactType(value, @"dict_value", targetUserName);
        }
    }

    for (id key in allContacts.allKeys) {
        if (wcpl_isMatchedContactObject(key, targetLower)) {
            return key;
        }
        if (key && [[wcpl_userNameFromObject(key) lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(key)) {
            wcpl_logUnexpectedContactType(key, @"dict_key", targetUserName);
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
            if (wcpl_isMatchedContactObject(contact, targetLower)) {
                return contact;
            }
            if (contact && [[wcpl_userNameFromObject(contact) lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(contact)) {
                wcpl_logUnexpectedContactType(contact, selectorName, targetUserName);
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
            if (wcpl_isContactObject(found)) {
                return (CContact *)found;
            }
            if (found) {
                wcpl_logUnexpectedContactType(found, @"dict_result", target);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    CContactMgr *mgr = contactMgr;
    if (!mgr) {
        mgr = WCPLGetService(objc_getClass("CContactMgr"));
    }

    id foundFromMgr = wcpl_findContactFromContactMgr(mgr, target);
    if (wcpl_isContactObject(foundFromMgr)) {
        return (CContact *)foundFromMgr;
    }
    if (foundFromMgr) {
        wcpl_logUnexpectedContactType(foundFromMgr, @"mgr_result", target);
    }

    return nil;
}
