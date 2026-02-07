//
// WCPLContactLookup.h
//
// 统一的联系人查找入口：
// - 优先从 ContactsDataLogic 的联系人字典取值。
// - 若未命中，再使用 CContactMgr 的稳定查询路径（含 DB / Cache / 联系人列表遍历）。
// - 为稳定性考虑，仅允许在主线程执行兜底查找；非主线程直接返回 nil。
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
