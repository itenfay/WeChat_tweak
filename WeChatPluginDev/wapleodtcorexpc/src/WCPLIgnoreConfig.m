//
// WCPLIgnoreConfig.m
//

#import "WCPLIgnoreConfig.h"
#import "WCPLConfigSanitizer.h"
#import "WCPLSharedConfigHelpers.h"
#import "WCPLThreadSafeMutableDictionary.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLChatIgnoreInfo          = @"kWCPLChatIgnoreInfo";
static NSString *const kWCPLUserIgnoreEnable        = @"kWCPLUserIgnoreEnable";
static NSString *const kWCPLUserIgnoreInfo          = @"kWCPLUserIgnoreInfo";
static NSString *const kWCPLQuitMonitorEnable       = @"kWCPLQuitMonitorEnable";
static NSString *const kWCPLQuitMonitorScope        = @"kWCPLQuitMonitorScope";
static NSString *const kWCPLQuitMonitorWhitelistInfo = @"kWCPLQuitMonitorWhitelistInfo";

@interface WCPLIgnoreConfig ()

@property (nonatomic, strong) NSUserDefaults *defaults;

@end

@implementation WCPLIgnoreConfig

+ (instancetype)sharedConfig {
    static WCPLIgnoreConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLIgnoreConfig configWithDefaults:[NSUserDefaults standardUserDefaults]];
    });
    return config;
}

- (instancetype)init {
    return [self initWithDefaults:[NSUserDefaults standardUserDefaults]];
}

+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults {
    return [[self alloc] initWithDefaults:defaults];
}

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults {
    if (self = [super init]) {
        _defaults = defaults ?: [NSUserDefaults standardUserDefaults];
        _userIgnoreEnable = [_defaults boolForKey:kWCPLUserIgnoreEnable];
        NSNumber *quitMonitorEnableObj = [_defaults objectForKey:kWCPLQuitMonitorEnable];
        _quitMonitorEnable = quitMonitorEnableObj ? quitMonitorEnableObj.boolValue : NO;
        _chatIgnoreInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLChatIgnoreInfo];
        _userIgnoreInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLUserIgnoreInfo];
        _quitMonitorWhitelistInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLQuitMonitorWhitelistInfo];

        NSNumber *scopeObj = [_defaults objectForKey:kWCPLQuitMonitorScope];
        _quitMonitorScope = (WCPLQuitMonitorScope)WCPLResolveQuitMonitorScope(scopeObj,
                                                                              _quitMonitorWhitelistInfo);

        [_defaults setBool:_quitMonitorEnable forKey:kWCPLQuitMonitorEnable];
        [_defaults setInteger:_quitMonitorScope forKey:kWCPLQuitMonitorScope];
    }
    return self;
}

- (NSMutableDictionary<NSString *,NSNumber *> *)wcpl_loadThreadSafeIgnoreDictionaryForKey:(NSString *)key {
    NSDictionary *raw = [self.defaults objectForKey:key];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(raw);
    return [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
}

- (void)setUserIgnoreEnable:(BOOL)userIgnoreEnable {
    _userIgnoreEnable = userIgnoreEnable;
    [self.defaults setBool:userIgnoreEnable forKey:kWCPLUserIgnoreEnable];
}

- (void)setQuitMonitorEnable:(BOOL)quitMonitorEnable {
    _quitMonitorEnable = quitMonitorEnable;
    [self.defaults setBool:quitMonitorEnable forKey:kWCPLQuitMonitorEnable];
}

- (void)setQuitMonitorScope:(WCPLQuitMonitorScope)quitMonitorScope {
    WCPLQuitMonitorScope normalized = quitMonitorScope;
    if (normalized != WCPLQuitMonitorScopeAll && normalized != WCPLQuitMonitorScopeWhitelist) {
        normalized = WCPLQuitMonitorScopeWhitelist;
    }
    _quitMonitorScope = normalized;
    [self.defaults setInteger:normalized forKey:kWCPLQuitMonitorScope];
}

- (void)setChatIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)chatIgnoreInfo {
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(chatIgnoreInfo);
    _chatIgnoreInfo = [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
}

- (void)setUserIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)userIgnoreInfo {
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(userIgnoreInfo);
    _userIgnoreInfo = [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
}

- (void)setQuitMonitorWhitelistInfo:(NSMutableDictionary<NSString *,NSNumber *> *)quitMonitorWhitelistInfo {
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(quitMonitorWhitelistInfo);
    _quitMonitorWhitelistInfo = [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
}

- (void)saveChatIgnoreNameListToLocalFile {
    NSDictionary *snapshot = [_chatIgnoreInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_chatIgnoreInfo dictionaryRepresentation]
        : [_chatIgnoreInfo copy];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(snapshot);
    [self.defaults setObject:sanitized forKey:kWCPLChatIgnoreInfo];
}

- (void)saveUserIgnoreNameListToLocalFile {
    NSDictionary *snapshot = [_userIgnoreInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_userIgnoreInfo dictionaryRepresentation]
        : [_userIgnoreInfo copy];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(snapshot);
    [self.defaults setObject:sanitized forKey:kWCPLUserIgnoreInfo];
}

- (void)saveQuitMonitorWhitelistToLocalFile {
    NSDictionary *snapshot = [_quitMonitorWhitelistInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_quitMonitorWhitelistInfo dictionaryRepresentation]
        : [_quitMonitorWhitelistInfo copy];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(snapshot);
    [self.defaults setObject:sanitized forKey:kWCPLQuitMonitorWhitelistInfo];
}

@end
