//
// WCPLRevokeConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRevokeConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) BOOL revokeEnable;

@end

NS_ASSUME_NONNULL_END
