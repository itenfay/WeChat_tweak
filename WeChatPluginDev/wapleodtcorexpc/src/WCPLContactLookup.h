//
// WCPLContactLookup.h
//
// 在不同 WeChat 版本中，部分聊天对象可能无法通过 CContactMgr 直接取到；
// 这里提供一个统一的查找入口，优先使用 CContactMgr，失败后回退到 ContactsDataLogic。
//

#import <Foundation/Foundation.h>

@class CContact;
@class CContactMgr;
@class ContactsDataLogic;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT CContact * _Nullable WCPLFindContactByUserName(NSString * _Nullable userName,
                                                                 CContactMgr * _Nullable contactMgr,
                                                                 ContactsDataLogic * _Nullable dataLogic);

NS_ASSUME_NONNULL_END

