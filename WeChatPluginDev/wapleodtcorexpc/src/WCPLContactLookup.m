//
// WCPLContactLookup.m
//

#import "WCPLContactLookup.h"
#import "WeChatRedEnvelop.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

static NSString *wcpl_trimUserName(NSString *value) {
    if (![value isKindOfClass:[NSString class]]) {
        return @"";
    }
    return [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

static NSString *wcpl_safeContactUserName(id contact) {
    if (!contact) return @"";
    @try {
        id value = [contact valueForKey:@"m_nsUsrName"];
        return wcpl_trimUserName(value);
    } @catch (__unused NSException *exception) {
        return @"";
    }
}

static CContact *wcpl_findContactInObject(id obj, NSString *targetUserName, Class contactClass, NSUInteger depth) {
    if (!obj || targetUserName.length == 0 || depth > 4) {
        return nil;
    }

    if (contactClass && [obj isKindOfClass:contactClass]) {
        NSString *userName = wcpl_safeContactUserName(obj);
        return [userName isEqualToString:targetUserName] ? (CContact *)obj : nil;
    }

    if ([obj isKindOfClass:[NSArray class]]) {
        for (id item in (NSArray *)obj) {
            CContact *found = wcpl_findContactInObject(item, targetUserName, contactClass, depth + 1);
            if (found) return found;
        }
        return nil;
    }

    if ([obj isKindOfClass:[NSSet class]]) {
        for (id item in (NSSet *)obj) {
            CContact *found = wcpl_findContactInObject(item, targetUserName, contactClass, depth + 1);
            if (found) return found;
        }
        return nil;
    }

    if ([obj isKindOfClass:[NSDictionary class]]) {
        NSDictionary *dict = (NSDictionary *)obj;

        id direct = dict[targetUserName];
        if (direct) {
            CContact *found = wcpl_findContactInObject(direct, targetUserName, contactClass, depth + 1);
            if (found) return found;
        }

        for (id value in dict.allValues) {
            CContact *found = wcpl_findContactInObject(value, targetUserName, contactClass, depth + 1);
            if (found) return found;
        }
        return nil;
    }

    return nil;
}

CContact *WCPLFindContactByUserName(NSString *userName, CContactMgr *contactMgr, ContactsDataLogic *dataLogic) {
    NSString *target = wcpl_trimUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    Class contactClass = objc_getClass("CContact");
    CContact *contact = nil;

    if (contactMgr && [contactMgr respondsToSelector:@selector(getContactByName:)]) {
        contact = [contactMgr getContactByName:target];
        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
            contact = [contactMgr getContactByNameFromDB:target];
        }
        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
            contact = [contactMgr getContactByNameFromCache:target];
        }
    }

    if (contact && contactClass && ![contact isKindOfClass:contactClass]) {
        WCPLLog(@"联系人查找异常类型(CContactMgr): %@ (%@)", NSStringFromClass([contact class]), target);
        contact = nil;
    }
    if (contact) {
        return contact;
    }

    if (!dataLogic) {
        return nil;
    }

    id allContacts = nil;
    if ([dataLogic respondsToSelector:@selector(getAllContactsDictionary)]) {
        @try {
            allContacts = [dataLogic getAllContactsDictionary];
        } @catch (__unused NSException *exception) {
            allContacts = nil;
        }
    }
    if (!allContacts && [dataLogic respondsToSelector:@selector(getAllContacts)]) {
        @try {
            allContacts = [dataLogic getAllContacts];
        } @catch (__unused NSException *exception) {
            allContacts = nil;
        }
    }

    CContact *found = wcpl_findContactInObject(allContacts, target, contactClass, 0);
    if (found) {
        return found;
    }

    return nil;
}
