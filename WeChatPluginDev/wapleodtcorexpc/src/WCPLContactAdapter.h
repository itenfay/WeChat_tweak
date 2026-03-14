//
// WCPLContactAdapter.h
//
// 联系人域适配层，统一 Hook 侧联系人访问入口。
//

#import <Foundation/Foundation.h>

@class CContact;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * _Nullable WCPLContactAdapterSafeUserName(id _Nullable obj);
FOUNDATION_EXPORT CContact * _Nullable WCPLContactAdapterFindContactByUserName(NSString * _Nullable userName);
FOUNDATION_EXPORT id _Nullable WCPLContactAdapterMessageChatContact(id _Nullable messageWrap);
FOUNDATION_EXPORT id _Nullable WCPLContactAdapterMessageChatContactFromController(id _Nullable controller,
                                                                                  id _Nullable messageWrap);
FOUNDATION_EXPORT BOOL WCPLContactAdapterContactMatchesUserName(id _Nullable contact,
                                                                NSString * _Nullable expectedUserName);
FOUNDATION_EXPORT id _Nullable WCPLContactAdapterCurrentSelfContact(void);
FOUNDATION_EXPORT NSString * _Nullable WCPLContactAdapterCurrentSelfUserName(void);

NS_ASSUME_NONNULL_END
