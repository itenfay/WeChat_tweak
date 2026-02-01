#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, WCHookSettingItemKind) {
    WCHookSettingItemKindToggle,
    WCHookSettingItemKindNavigation,
};

@class WCHookSettingsManager;

FOUNDATION_EXPORT NSString *const WCHookPluginName;
FOUNDATION_EXPORT NSString *const WCHookPluginVersion;

FOUNDATION_EXPORT WCHookSettingsManager *WCHookSettings(void);

@interface WCHookSettingItem : NSObject

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly, nullable) NSString *subtitle;
@property (nonatomic, copy, readonly, nullable) NSString *detail;
@property (nonatomic, assign, readonly) WCHookSettingItemKind kind;
@property (nonatomic, assign, getter=isOn) BOOL on;
@property (nonatomic, copy, nullable) void (^toggleHandler)(BOOL on);
@property (nonatomic, copy, nullable) void (^actionHandler)(void);

+ (instancetype)toggleItemWithIdentifier:(NSString *)identifier
                                   title:(NSString *)title
                                subtitle:(nullable NSString *)subtitle
                                     on:(BOOL)on
                           toggleHandler:(void (^)(BOOL on))toggleHandler;

+ (instancetype)navigationItemWithIdentifier:(NSString *)identifier
                                       title:(NSString *)title
                                      detail:(nullable NSString *)detail
                               actionHandler:(dispatch_block_t)actionHandler;

- (void)wchook_handleToggleControl:(id)sender;
- (void)wchook_handleSelection:(nullable id)sender;

- (instancetype)init NS_UNAVAILABLE;

@end

@interface WCHookSettingSection : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *headerTitle;
@property (nonatomic, copy, readonly, nullable) NSString *footerTitle;
@property (nonatomic, strong, readonly) NSArray<WCHookSettingItem *> *items;

+ (instancetype)sectionWithHeader:(nullable NSString *)headerTitle
                           footer:(nullable NSString *)footerTitle
                            items:(NSArray<WCHookSettingItem *> *)items;

- (instancetype)init NS_UNAVAILABLE;

@end

@interface WCHookSettingsManager : NSObject

+ (instancetype)sharedManager;

- (NSArray<WCHookSettingSection *> *)currentSections;
- (BOOL)isEnabledForKey:(NSString *)key;
- (void)setEnabled:(BOOL)enabled forKey:(NSString *)key;
- (NSString *)summaryTextForSwipeQuote;

@end

NS_ASSUME_NONNULL_END
