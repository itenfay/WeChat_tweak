//
// WCPLContactLookup.m
//

#import "WCPLContactLookup.h"
#import "WeChatRedEnvelop.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

static NSString *wcpl_trimUserName(NSString *value) {
    if (![value isKindOfClass:[NSString class]]) {
        return @"";
    }
    return [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

CContact *WCPLFindContactByUserName(NSString *userName, CContactMgr *contactMgr, ContactsDataLogic *dataLogic) {
    NSString *target = wcpl_trimUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    // 兼容外部调用：避免使用调用方传入的 mgr/dataLogic（可能为悬空指针），统一从 ServiceCenter 获取。
    (void)contactMgr;
    (void)dataLogic;

    Class contactClass = objc_getClass("CContact");
    CContact *contact = nil;

    CContactMgr *mgr = (CContactMgr *)WCPLGetService(objc_getClass("CContactMgr"));
    if (mgr && [mgr respondsToSelector:@selector(getContactByName:)]) {
        @try {
            contact = [mgr getContactByName:target];
        } @catch (__unused NSException *exception) {
            contact = nil;
        }
        if (!contact && [mgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
            @try {
                contact = [mgr getContactByNameFromDB:target];
            } @catch (__unused NSException *exception) {
                contact = nil;
            }
        }
        if (!contact && [mgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
            @try {
                contact = [mgr getContactByNameFromCache:target];
            } @catch (__unused NSException *exception) {
                contact = nil;
            }
        }
    }

    if (contact && contactClass && ![contact isKindOfClass:contactClass]) {
        WCPLLog(@"联系人查找异常类型(CContactMgr): %@ (%@)", NSStringFromClass([contact class]), target);
        contact = nil;
    }
    if (contact) {
        return contact;
    }

    return nil;
}
