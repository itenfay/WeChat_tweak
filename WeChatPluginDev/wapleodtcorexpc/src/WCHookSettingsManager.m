#import "WCHookSettingsManager.h"

#import <objc/message.h>

NSString *const WCHookPluginName = @"WCHook";
NSString *const WCHookPluginVersion = @"1.8.22";
static NSString *const WCHookSettingItemTypeToggle = @"toggle";
static NSString *const WCHookSettingItemTypeNavigation = @"navigation";

WCHookSettingsManager *WCHookSettings(void) {
    return [WCHookSettingsManager sharedManager];
}

static NSString *const WCHookSettingConfigKeyIdentifier = @"identifier";
static NSString *const WCHookSettingConfigKeyHeader = @"header";
static NSString *const WCHookSettingConfigKeyFooter = @"footer";
static NSString *const WCHookSettingConfigKeyItems = @"items";
static NSString *const WCHookSettingConfigKeyType = @"type";
static NSString *const WCHookSettingConfigKeyTitle = @"title";
static NSString *const WCHookSettingConfigKeySubtitle = @"subtitle";
static NSString *const WCHookSettingConfigKeyDetail = @"detail";
static NSString *const WCHookSettingConfigKeyDefaultsKey = @"defaultsKey";
static NSString *const WCHookSettingConfigKeyDefaultValue = @"defaultValue";
static NSString *const WCHookSettingConfigKeyNotification = @"notification";

static NSString *WCHookPreferencesPath(void) {
    static NSString *preferencesPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *homeDirectory = NSHomeDirectory();
        NSString *directory = [homeDirectory stringByAppendingPathComponent:@"Library/Preferences"];
        preferencesPath = [[directory stringByAppendingPathComponent:@"com.vita.wchook.plist"] copy];
    });
    return preferencesPath;
}

static NSArray<NSDictionary *> *WCHookSettingsConfiguration(void) {
    static NSArray<NSDictionary *> *configuration = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        configuration = @[
            @{
                WCHookSettingConfigKeyIdentifier : @"chat",
                WCHookSettingConfigKeyHeader : @"聊天界面",
                WCHookSettingConfigKeyFooter : @"",
                WCHookSettingConfigKeyItems : @[
                    @{
                        WCHookSettingConfigKeyIdentifier : @"WCHookSwipeQuote",
                        WCHookSettingConfigKeyType : WCHookSettingItemTypeToggle,
                        WCHookSettingConfigKeyTitle : @"消息左滑引用",
                        WCHookSettingConfigKeySubtitle : @"向左滑动即可快速引用回复",
                        WCHookSettingConfigKeyDefaultsKey : @"com.wchook.swipeQuoteEnabled",
                        WCHookSettingConfigKeyDefaultValue : @NO,
                        WCHookSettingConfigKeyNotification : @"com.wchook.notification.swipeQuoteStateDidChange",
                    },
                    @{
                        WCHookSettingConfigKeyIdentifier : @"WCHookTapReferJump",
                        WCHookSettingConfigKeyType : WCHookSettingItemTypeToggle,
                        WCHookSettingConfigKeyTitle : @"引用消息点击跳转",
                        WCHookSettingConfigKeySubtitle : @"点击引用提示快速定位原文",
                        WCHookSettingConfigKeyDefaultsKey : @"com.wchook.tapReferJumpEnabled",
                        WCHookSettingConfigKeyDefaultValue : @NO,
                    },
                ],
            },
            @{
                WCHookSettingConfigKeyIdentifier : @"about",
                WCHookSettingConfigKeyHeader : @"关于",
                WCHookSettingConfigKeyItems : @[
                    @{
                        WCHookSettingConfigKeyIdentifier : @"com.wchook.settings.about",
                        WCHookSettingConfigKeyType : WCHookSettingItemTypeNavigation,
                        WCHookSettingConfigKeyTitle : @"WCHook",
                        WCHookSettingConfigKeyDetail : WCHookPluginVersion,
                    },
                    @{
                        WCHookSettingConfigKeyIdentifier : @"com.wchook.settings.developer",
                        WCHookSettingConfigKeyType : WCHookSettingItemTypeNavigation,
                        WCHookSettingConfigKeyTitle : @"Developed by Vita",
                    },
                ],
            },
        ];
    });
    return configuration;
}

#pragma mark - WCHookSettingItem

@interface WCHookSettingItem ()

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *detail;
@property (nonatomic, assign) WCHookSettingItemKind kind;

@end

@implementation WCHookSettingItem

+ (instancetype)toggleItemWithIdentifier:(NSString *)identifier
                                   title:(NSString *)title
                                subtitle:(NSString *)subtitle
                                     on:(BOOL)on
                           toggleHandler:(void (^)(BOOL on))toggleHandler {
    WCHookSettingItem *item = [[self alloc] initPrivate];
    item.identifier = identifier;
    item.title = title;
    item.subtitle = subtitle;
    item.kind = WCHookSettingItemKindToggle;
    item.on = on;
    item.toggleHandler = [toggleHandler copy];
    return item;
}

+ (instancetype)navigationItemWithIdentifier:(NSString *)identifier
                                       title:(NSString *)title
                                      detail:(NSString *)detail
                               actionHandler:(dispatch_block_t)actionHandler {
    WCHookSettingItem *item = [[self alloc] initPrivate];
    item.identifier = identifier;
    item.title = title;
    item.detail = detail;
    item.kind = WCHookSettingItemKindNavigation;
    item.actionHandler = [actionHandler copy];
    return item;
}

- (void)wchook_handleToggleControl:(id)sender {
    BOOL isOn = self.on;
    SEL isOnSelector = @selector(isOn);
    if ([sender respondsToSelector:isOnSelector]) {
        isOn = ((BOOL (*)(id, SEL))objc_msgSend)(sender, isOnSelector);
    }
    self.on = isOn;
    if (self.toggleHandler) {
        self.toggleHandler(isOn);
    }
}

- (void)wchook_handleSelection:(__unused id)sender {
    if (self.actionHandler) {
        self.actionHandler();
    }
}

- (instancetype)initPrivate {
    self = [super init];
    return self;
}

@end

#pragma mark - WCHookSettingSection

@interface WCHookSettingSection ()

@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic, strong) NSArray<WCHookSettingItem *> *items;

@end

@implementation WCHookSettingSection

+ (instancetype)sectionWithHeader:(NSString *)headerTitle
                           footer:(NSString *)footerTitle
                            items:(NSArray<WCHookSettingItem *> *)items {
    WCHookSettingSection *section = [[self alloc] initPrivate];
    section.headerTitle = headerTitle;
    section.footerTitle = footerTitle;
    section.items = items ?: @[];
    return section;
}

- (instancetype)initPrivate {
    self = [super init];
    return self;
}

@end

#pragma mark - WCHookSettingsManager

@interface WCHookSettingsManager ()

@property (nonatomic, strong) NSMutableDictionary<NSString *, id> *settingsStore;
- (nullable NSDictionary *)wchook_toggleConfigurationForIdentifier:(NSString *)identifier;
- (void)wchook_loadSettingsStore;
- (void)wchook_saveSettingsStore;

@end

@implementation WCHookSettingsManager

+ (instancetype)sharedManager {
    static WCHookSettingsManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] initPrivate];
    });
    return instance;
}

- (instancetype)initPrivate {
    self = [super init];
    if (self) {
        [self wchook_loadSettingsStore];
    }
    return self;
}

- (NSArray<WCHookSettingSection *> *)currentSections {
    NSMutableArray<WCHookSettingSection *> *sections = [NSMutableArray array];
    for (NSDictionary *sectionConfig in WCHookSettingsConfiguration()) {
        NSArray *itemConfigs = sectionConfig[WCHookSettingConfigKeyItems];
        NSMutableArray<WCHookSettingItem *> *items = [NSMutableArray arrayWithCapacity:itemConfigs.count];
        for (NSDictionary *itemConfig in itemConfigs) {
            WCHookSettingItem *item = [self wchook_settingItemFromConfiguration:itemConfig];
            if (item) {
                [items addObject:item];
            }
        }
        if (items.count == 0) {
            continue;
        }
        NSString *header = sectionConfig[WCHookSettingConfigKeyHeader];
        NSString *footer = sectionConfig[WCHookSettingConfigKeyFooter];
        WCHookSettingSection *section = [WCHookSettingSection sectionWithHeader:header
                                                                         footer:footer
                                                                          items:items.copy];
        [sections addObject:section];
    }
    return sections.copy;
}

- (BOOL)isEnabledForKey:(NSString *)key {
    NSDictionary *configuration = [self wchook_toggleConfigurationForIdentifier:key];
    return [self wchook_currentToggleValueForConfiguration:configuration];
}

- (void)setEnabled:(BOOL)enabled forKey:(NSString *)key {
    NSDictionary *configuration = [self wchook_toggleConfigurationForIdentifier:key];
    [self wchook_handleToggleForConfiguration:configuration newValue:enabled];
}

- (NSString *)summaryTextForSwipeQuote {
    BOOL swipeEnabled = [self isEnabledForKey:@"WCHookSwipeQuote"];
    BOOL tapEnabled = [self isEnabledForKey:@"WCHookTapReferJump"];
    NSString *swipeText = swipeEnabled ? @"开启" : @"关闭";
    NSString *tapText = tapEnabled ? @"开启" : @"关闭";
    return [NSString stringWithFormat:@"左滑引用:%@ | 引用跳转:%@", swipeText, tapText];
}

- (NSDictionary *)wchook_itemConfigurationForIdentifier:(NSString *)identifier {
    if (identifier.length == 0) {
        return nil;
    }
    for (NSDictionary *sectionConfig in WCHookSettingsConfiguration()) {
        for (NSDictionary *itemConfig in sectionConfig[WCHookSettingConfigKeyItems]) {
            if ([identifier isEqualToString:itemConfig[WCHookSettingConfigKeyIdentifier]]) {
                return itemConfig;
            }
        }
    }
    return nil;
}

- (NSDictionary *)wchook_toggleConfigurationForIdentifier:(NSString *)identifier {
    NSDictionary *configuration = [self wchook_itemConfigurationForIdentifier:identifier];
    if (!configuration) {
        return nil;
    }
    NSString *type = configuration[WCHookSettingConfigKeyType];
    if (type.length > 0 && ![type isEqualToString:WCHookSettingItemTypeToggle]) {
        return nil;
    }
    return configuration;
}

- (WCHookSettingItem *)wchook_settingItemFromConfiguration:(NSDictionary *)configuration {
    if (!configuration) {
        return nil;
    }

    NSString *identifier = configuration[WCHookSettingConfigKeyIdentifier];
    NSString *title = configuration[WCHookSettingConfigKeyTitle];
    NSString *type = configuration[WCHookSettingConfigKeyType];
    if (identifier.length == 0 || title.length == 0 || type.length == 0) {
        return nil;
    }

    if ([type isEqualToString:WCHookSettingItemTypeToggle]) {
        NSString *subtitle = configuration[WCHookSettingConfigKeySubtitle];
        BOOL isOn = [self wchook_currentToggleValueForConfiguration:configuration];
        __weak typeof(self) weakSelf = self;
        return [WCHookSettingItem toggleItemWithIdentifier:identifier
                                                     title:title
                                                  subtitle:subtitle
                                                       on:isOn
                                             toggleHandler:^(BOOL on) {
            [weakSelf wchook_handleToggleForConfiguration:configuration newValue:on];
        }];
    }

    if ([type isEqualToString:WCHookSettingItemTypeNavigation]) {
        NSString *detail = configuration[WCHookSettingConfigKeyDetail];
        return [WCHookSettingItem navigationItemWithIdentifier:identifier
                                                         title:title
                                                        detail:detail
                                                 actionHandler:nil];
    }

    return nil;
}

- (BOOL)wchook_currentToggleValueForConfiguration:(NSDictionary *)configuration {
    if (!configuration) {
        return NO;
    }

    NSString *defaultsKey = configuration[WCHookSettingConfigKeyDefaultsKey];
    NSNumber *defaultValue = configuration[WCHookSettingConfigKeyDefaultValue];
    if (defaultsKey.length == 0) {
        return defaultValue.boolValue;
    }

    @synchronized(self) {
        id storedValue = self.settingsStore[defaultsKey];
        if (storedValue) {
            if ([storedValue isKindOfClass:[NSString class]]) {
                return ((NSString *)storedValue).boolValue;
            }
            if ([storedValue isKindOfClass:[NSNumber class]]) {
                return ((NSNumber *)storedValue).boolValue;
            }
        }
    }

    if (defaultValue) {
        return defaultValue.boolValue;
    }

    return NO;
}

- (void)wchook_handleToggleForConfiguration:(NSDictionary *)configuration newValue:(BOOL)newValue {
    if (!configuration) {
        return;
    }

    NSString *defaultsKey = configuration[WCHookSettingConfigKeyDefaultsKey];
    BOOL current = [self wchook_currentToggleValueForConfiguration:configuration];
    if (current == newValue) {
        return;
    }

    if (defaultsKey.length > 0) {
        @synchronized(self) {
            if (!self.settingsStore) {
                self.settingsStore = [NSMutableDictionary dictionary];
            }
            self.settingsStore[defaultsKey] = @(newValue);
            [self wchook_saveSettingsStore];
        }
    }

    NSString *notificationName = configuration[WCHookSettingConfigKeyNotification];
    if (notificationName.length > 0) {
        [[NSNotificationCenter defaultCenter] postNotificationName:notificationName object:nil];
    }
}

- (void)wchook_loadSettingsStore {
    NSString *path = WCHookPreferencesPath();
    NSDictionary *stored = [NSDictionary dictionaryWithContentsOfFile:path];
    if ([stored isKindOfClass:[NSDictionary class]]) {
        self.settingsStore = [stored mutableCopy];
    } else {
        self.settingsStore = [NSMutableDictionary dictionary];
    }
}

- (void)wchook_saveSettingsStore {
    NSString *path = WCHookPreferencesPath();
    if (path.length == 0) {
        return;
    }

    NSString *directory = [path stringByDeletingLastPathComponent];
    NSFileManager *fileManager = [NSFileManager defaultManager];
    if (directory.length > 0 && ![fileManager fileExistsAtPath:directory]) {
        [fileManager createDirectoryAtPath:directory withIntermediateDirectories:YES attributes:nil error:nil];
    }

    NSDictionary *immutable = [self.settingsStore copy];
    [immutable writeToFile:path atomically:YES];
}

@end
