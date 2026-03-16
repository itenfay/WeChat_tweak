//
// WCPLUserDefaultsBackedConfig.m
//

#import "WCPLUserDefaultsBackedConfig.h"

#import <objc/runtime.h>

@implementation WCPLUserDefaultsBackedConfig {
    NSUserDefaults *_defaults;
}

+ (instancetype)sharedConfig {
    @synchronized(self) {
        id instance = objc_getAssociatedObject(self, _cmd);
        if (instance) {
            return instance;
        }

        instance = [[self alloc] initWithDefaults:[NSUserDefaults standardUserDefaults]];
        if (instance) {
            objc_setAssociatedObject(self, _cmd, instance, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return instance;
    }
}

+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults {
    return [[self alloc] initWithDefaults:defaults];
}

- (instancetype)init {
    return [self initWithDefaults:[NSUserDefaults standardUserDefaults]];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    if (self = [super init]) {
        _defaults = defaults ?: [NSUserDefaults standardUserDefaults];
        [self wcpl_loadFromDefaults];
    }
    return self;
}

- (NSUserDefaults *)defaults {
    return _defaults;
}

- (void)wcpl_loadFromDefaults {
    // 子类覆盖
}

- (BOOL)wcpl_boolForKey:(NSString *)key defaultValue:(BOOL)defaultValue writeBack:(BOOL)writeBack {
    if (![key isKindOfClass:[NSString class]] || key.length == 0) {
        return defaultValue;
    }

    NSNumber *value = [self.defaults objectForKey:key];
    if (!value) {
        if (writeBack) {
            [self.defaults setBool:defaultValue forKey:key];
        }
        return defaultValue;
    }

    return value.boolValue;
}

- (NSInteger)wcpl_integerForKey:(NSString *)key defaultValue:(NSInteger)defaultValue writeBack:(BOOL)writeBack {
    if (![key isKindOfClass:[NSString class]] || key.length == 0) {
        return defaultValue;
    }

    NSNumber *value = [self.defaults objectForKey:key];
    if (!value) {
        if (writeBack) {
            [self.defaults setInteger:defaultValue forKey:key];
        }
        return defaultValue;
    }
    return value.integerValue;
}

- (double)wcpl_doubleForKey:(NSString *)key defaultValue:(double)defaultValue writeBack:(BOOL)writeBack {
    if (![key isKindOfClass:[NSString class]] || key.length == 0) {
        return defaultValue;
    }

    NSNumber *value = [self.defaults objectForKey:key];
    if (!value) {
        if (writeBack) {
            [self.defaults setDouble:defaultValue forKey:key];
        }
        return defaultValue;
    }
    return value.doubleValue;
}

- (NSString * _Nullable)wcpl_stringForKey:(NSString *)key
                            defaultValue:(NSString * _Nullable)defaultValue
                               writeBack:(BOOL)writeBack {
    if (![key isKindOfClass:[NSString class]] || key.length == 0) {
        return defaultValue;
    }

    NSString *value = [self.defaults stringForKey:key];
    if (value.length > 0) {
        return value;
    }
    if (writeBack && defaultValue.length > 0) {
        [self.defaults setObject:defaultValue forKey:key];
    }
    return defaultValue;
}

@end
