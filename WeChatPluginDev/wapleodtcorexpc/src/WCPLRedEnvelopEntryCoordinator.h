#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRedEnvelopEntryContext : NSObject

@property (nonatomic, copy, nullable) NSString *nativeUrl;
@property (nonatomic, copy, nullable) NSString *sessionUserName;
@property (nonatomic, strong, nullable) id selfContact;
@property (nonatomic, assign, getter=isGroupSender) BOOL groupSender;

@end

FOUNDATION_EXPORT void WCPLHandleRedEnvelopEntry(WCPLRedEnvelopEntryContext * _Nullable context);

NS_ASSUME_NONNULL_END
