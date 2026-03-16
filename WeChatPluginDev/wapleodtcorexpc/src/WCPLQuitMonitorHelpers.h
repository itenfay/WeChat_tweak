#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSArray<NSString *> *WCPLQuitMonitorMembersFromRawList(NSString * _Nullable rawList);
FOUNDATION_EXPORT NSArray<NSString *> *WCPLQuitMonitorRemovedMembers(NSArray<NSString *> * _Nullable oldMembers,
                                                                    NSArray<NSString *> * _Nullable newMembers,
                                                                    NSString * _Nullable selfUserName);
FOUNDATION_EXPORT NSString * _Nullable WCPLQuitMonitorBuildEventKey(NSString * _Nullable roomUserName,
                                                                    NSArray<NSString *> * _Nullable removedMembers);

NS_ASSUME_NONNULL_END
