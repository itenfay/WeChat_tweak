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

    (void)contactMgr;
    (void)dataLogic;

    // 稳定性优先：该兜底路径在部分版本会触发底层野指针崩溃。
    // 分组/联系人预选流程已优先走 ContactsDataLogic；此处仅保守返回 nil。
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WCPLLog(@"联系人兜底查找已禁用(稳定性保护)");
    });

    return nil;
}
