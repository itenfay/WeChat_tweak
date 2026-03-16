//
// WCPLContactLookup.m
//

#import "WCPLContactLookup.h"

#import "WCPLContactAdapter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"
#import "WCPLTypeGuard.h"
#import "WCPLWeChatContactHeaders.h"
#import <objc/runtime.h>
#import <objc/message.h>

static NSString *wcpl_trimUserName(id value) {
    return WCPLNonEmptyStringOrNil(value) ?: @"";
}

static BOOL wcpl_isContactObject(id obj) {
    Class contactClass = objc_getClass("CContact");
    return (contactClass && obj && [obj isKindOfClass:contactClass]);
}

static BOOL wcpl_isMatchedContactObject(id obj, NSString *targetUserNameLowercase) {
    if (!wcpl_isContactObject(obj) || targetUserNameLowercase.length == 0) {
        return NO;
    }
    NSString *userName = WCPLContactAdapterSafeUserName(obj);
    return (userName.length > 0 && [[userName lowercaseString] isEqualToString:targetUserNameLowercase]);
}

static void wcpl_logUnexpectedContactType(id obj, NSString *scene, NSString *targetUserName) {
    (void)obj;
    (void)scene;
    (void)targetUserName;
}

__attribute__((unused)) static id wcpl_findContactFromDictionary(NSDictionary *allContacts, NSString *targetUserName) {
    NSDictionary *contactMap = WCPLDictionaryOrNil(allContacts);
    if (contactMap.count == 0 || targetUserName.length == 0) {
        return nil;
    }

    NSString *targetLower = [targetUserName lowercaseString];

    id direct = contactMap[targetUserName];
    if (wcpl_isMatchedContactObject(direct, targetLower)) {
        return direct;
    }
    NSString *directUserName = WCPLContactAdapterSafeUserName(direct);
    if (directUserName.length > 0 && [[directUserName lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(direct)) {
        wcpl_logUnexpectedContactType(direct, @"dict_direct", targetUserName);
    }

    for (id value in contactMap.allValues) {
        if (wcpl_isMatchedContactObject(value, targetLower)) {
            return value;
        }
        NSString *valueUserName = WCPLContactAdapterSafeUserName(value);
        if (valueUserName.length > 0 && [[valueUserName lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(value)) {
            wcpl_logUnexpectedContactType(value, @"dict_value", targetUserName);
        }
    }

    for (id key in contactMap.allKeys) {
        if (wcpl_isMatchedContactObject(key, targetLower)) {
            return key;
        }
        NSString *keyUserName = WCPLContactAdapterSafeUserName(key);
        if (keyUserName.length > 0 && [[keyUserName lowercaseString] isEqualToString:targetLower] && !wcpl_isContactObject(key)) {
            wcpl_logUnexpectedContactType(key, @"dict_key", targetUserName);
        }
    }

    return nil;
}

__attribute__((unused)) static id wcpl_findContactFromContactMgr(CContactMgr *contactMgr, NSString *targetUserName) {
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
            NSString *contactUserName = WCPLContactAdapterSafeUserName(contact);
            if (contactUserName.length > 0 &&
                [[contactUserName lowercaseString] isEqualToString:targetLower] &&
                !wcpl_isContactObject(contact)) {
                wcpl_logUnexpectedContactType(contact, selectorName, targetUserName);
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

CContact *WCPLFindContactByUserName(NSString *userName, CContactMgr *contactMgr, ContactsDataLogic *dataLogic) {
    (void)dataLogic;

    NSString *target = wcpl_trimUserName(userName);
    if (target.length == 0) return nil;
    if (![NSThread isMainThread]) {
        NSString *targetCopy = [target copy];
        __block CContact *resolved = nil;
        BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, ^{
            resolved = WCPLFindContactByUserName(targetCopy, contactMgr, dataLogic);
        });
        if (!didFinish) {
            return nil;
        }
        return resolved;
    }

    // 稳定性优先：仅保留轻量联系人查询，避免复杂容器遍历触发野指针崩溃。
    // 如后续确认稳定，可再逐步恢复 dictionary/cache 兜底逻辑。
    id mgr = contactMgr;
    if (!mgr) {
        @try {
            mgr = WCPLGetService(objc_getClass("CContactMgr"));
        } @catch (__unused NSException *exceptionService) {
            mgr = nil;
        }
    }
    if (!mgr) return nil;

    NSArray<NSString *> *selectors =
        @[@"getContactByName:", @"getContactByNameFromDB:", @"getContactByNameFromCache:", @"getContactForSearchByName:"];
    for (NSString *selectorName in selectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!selector || ![mgr respondsToSelector:selector]) {
            continue;
        }
        @try {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(mgr, selector, target);
            if (wcpl_isContactObject(contact)) {
                return (CContact *)contact;
            }
        } @catch (__unused NSException *exceptionGetContact) { WCPLCatchLog(exceptionGetContact); }
    }
    return nil;
}
