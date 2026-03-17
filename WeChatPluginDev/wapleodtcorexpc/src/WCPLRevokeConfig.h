//
// WCPLRevokeConfig.h
//

#import "WCPLUserDefaultsBackedConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRevokeConfig : WCPLUserDefaultsBackedConfig

+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

@property (assign, nonatomic) BOOL revokeEnable;

@end

NS_ASSUME_NONNULL_END
