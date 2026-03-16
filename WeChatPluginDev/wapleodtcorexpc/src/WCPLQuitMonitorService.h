#import <Foundation/Foundation.h>

@class CContactMgr;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void WCPLQuitMonitorHandleContactChange(CContactMgr * _Nullable contactMgr,
                                                          id _Nullable roomContact,
                                                          NSString * _Nullable oldMemberList,
                                                          id _Nullable newContact,
                                                          id _Nullable explicitNewMemberList,
                                                          NSString * _Nullable sourceTag);

NS_ASSUME_NONNULL_END
