//
// WCPLLoginConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLLoginConfig : NSObject

+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

// 模拟 iPad 登录（作用于 DeviceInfo +isiPad 判定）
@property (assign, nonatomic) BOOL emulateIPadLoginEnable;

@end

NS_ASSUME_NONNULL_END
