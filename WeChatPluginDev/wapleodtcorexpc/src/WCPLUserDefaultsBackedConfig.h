//
// WCPLUserDefaultsBackedConfig.h
//
// NSUserDefaults 持久化配置的轻量基类：收口 sharedConfig/defaults 注入与基础读写模板。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLUserDefaultsBackedConfig : NSObject

@property (nonatomic, strong, readonly) NSUserDefaults *defaults;

+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults NS_DESIGNATED_INITIALIZER;

/// 子类覆盖：从 defaults 读取并归一化字段。
- (void)wcpl_loadFromDefaults;

/// 读取模板：当 key 未写入时使用默认值；可选把默认值写回 defaults。
- (BOOL)wcpl_boolForKey:(NSString *)key defaultValue:(BOOL)defaultValue writeBack:(BOOL)writeBack;
- (NSInteger)wcpl_integerForKey:(NSString *)key defaultValue:(NSInteger)defaultValue writeBack:(BOOL)writeBack;
- (double)wcpl_doubleForKey:(NSString *)key defaultValue:(double)defaultValue writeBack:(BOOL)writeBack;
- (NSString * _Nullable)wcpl_stringForKey:(NSString *)key defaultValue:(NSString * _Nullable)defaultValue writeBack:(BOOL)writeBack;

@end

NS_ASSUME_NONNULL_END
