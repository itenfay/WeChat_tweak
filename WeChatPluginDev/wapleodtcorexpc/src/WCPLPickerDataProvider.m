#import "WCPLPickerDataProvider.h"
#import "WCPLPickerItem.h"
#import "WeChatRedEnvelop.h"
#import "WCPLServiceCenter.h"
#import <objc/message.h>

@implementation WCPLPickerDataProvider

+ (NSArray<WCPLPickerItem *> *)allPickerItems {
    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) {
        return @[];
    }

    NSMutableArray *sourceContacts = [NSMutableArray array];
    NSArray<NSNumber *> *listTypes = @[@0, @1, @2, @3, @4, @5, @6, @7, @8, @9];
    NSArray<NSNumber *> *contactTypes = @[@0, @1, @2, @3, @4, @5, @6, @7, @8, @9];
    NSMutableSet<NSString *> *seenContactIdentifier = [NSMutableSet set];

    for (NSNumber *listType in listTypes) {
        for (NSNumber *contactType in contactTypes) {
            NSArray *contacts = [self wcpl_contactListFromManager:contactMgr
                                                         listType:(unsigned int)listType.unsignedIntValue
                                                      contactType:(unsigned int)contactType.unsignedIntValue];
            if (contacts.count == 0) {
                continue;
            }
            for (id contact in contacts) {
                if (!contact) {
                    continue;
                }
                NSString *identifier = [self wcpl_userNameFromContact:contact];
                if (identifier.length == 0 || [seenContactIdentifier containsObject:identifier]) {
                    continue;
                }
                [seenContactIdentifier addObject:identifier];
                [sourceContacts addObject:contact];
            }
        }
    }

    NSMutableOrderedSet<NSString *> *seen = [NSMutableOrderedSet orderedSet];
    NSMutableArray<WCPLPickerItem *> *results = [NSMutableArray array];

    for (id contact in sourceContacts) {
        NSString *identifier = [self wcpl_userNameFromContact:contact];
        if (identifier.length == 0 || [seen containsObject:identifier]) {
            continue;
        }

        WCPLPickerItemType type = [identifier rangeOfString:@"@chatroom"].location != NSNotFound
                                 ? WCPLPickerItemTypeGroup
                                 : WCPLPickerItemTypeUser;
        NSString *displayName = [self wcpl_displayNameFromContact:contact fallback:identifier];
        NSString *subtitle = type == WCPLPickerItemTypeGroup ? @"群聊" : @"联系人";

        WCPLPickerItem *item = [[WCPLPickerItem alloc] initWithIdentifier:identifier
                                                               displayName:displayName
                                                                  subtitle:subtitle
                                                                      type:type];
        [results addObject:item];
        [seen addObject:identifier];
    }

    [results sortUsingComparator:^NSComparisonResult(WCPLPickerItem *obj1, WCPLPickerItem *obj2) {
        if (obj1.type != obj2.type) {
            return obj1.type < obj2.type ? NSOrderedAscending : NSOrderedDescending;
        }
        return [obj1.displayName compare:obj2.displayName options:NSCaseInsensitiveSearch];
    }];

    return results.copy;
}

+ (NSArray *)wcpl_contactListFromManager:(CContactMgr *)contactMgr
                                listType:(unsigned int)listType
                             contactType:(unsigned int)contactType {
    if (!contactMgr) {
        return @[];
    }

    NSArray *contacts = nil;
    @try {
        if ([contactMgr respondsToSelector:@selector(getContactList:contactType:needLoadExt:)]) {
            contacts = ((id (*)(id, SEL, unsigned int, unsigned int, BOOL))objc_msgSend)(contactMgr,
                                                                                           @selector(getContactList:contactType:needLoadExt:),
                                                                                           listType,
                                                                                           contactType,
                                                                                           NO);
        } else if ([contactMgr respondsToSelector:@selector(getContactList:contactType:)]) {
            contacts = ((id (*)(id, SEL, unsigned int, unsigned int))objc_msgSend)(contactMgr,
                                                                                    @selector(getContactList:contactType:),
                                                                                    listType,
                                                                                    contactType);
        }
    } @catch (__unused NSException *exception) {
        contacts = nil;
    }

    return [contacts isKindOfClass:[NSArray class]] ? contacts : @[];
}

+ (NSString *)wcpl_userNameFromContact:(id)contact {
    if (!contact) {
        return @"";
    }

    NSString *userName = nil;
    @try {
        id value = [contact valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            userName = value;
        }
    } @catch (__unused NSException *exception) {
        userName = nil;
    }

    if (![userName isKindOfClass:[NSString class]]) {
        return @"";
    }

    NSString *trimmed = [userName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : @"";
}

+ (NSString *)wcpl_displayNameFromContact:(id)contact fallback:(NSString *)fallback {
    if (!contact) {
        return fallback;
    }

    NSString *displayName = nil;
    @try {
        if ([contact respondsToSelector:@selector(getContactDisplayName)]) {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(getContactDisplayName));
            if ([value isKindOfClass:[NSString class]]) {
                displayName = value;
            }
        }
    } @catch (__unused NSException *exception) {
        displayName = nil;
    }

    if (displayName.length == 0) {
        @try {
            if ([contact respondsToSelector:@selector(m_nsNickName)]) {
                id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsNickName));
                if ([value isKindOfClass:[NSString class]]) {
                    displayName = value;
                }
            }
        } @catch (__unused NSException *exception2) {
            displayName = nil;
        }
    }

    NSString *trimmed = [displayName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : fallback;
}

@end
