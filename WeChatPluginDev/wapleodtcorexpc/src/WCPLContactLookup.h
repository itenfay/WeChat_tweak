//
// WCPLContactLookup.h
//
// 统一的联系人查找入口：
// - 优先从 ServiceCenter 获取 CContactMgr 查询（支持 DB / Cache），避免依赖外部传入对象指针。
// - 为稳定性考虑，不再在此处回退遍历 ContactsDataLogic（外部参数保留仅用于兼容签名）。
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
