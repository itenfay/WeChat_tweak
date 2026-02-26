//
// WCPLIgnoreConfig.m
//

#import "WCPLIgnoreConfig.h"
#import "WCPLConfigSanitizer.h"
#import "WCPLThreadSafeMutableDictionary.h"
#import <dispatch/dispatch.h>

static NSString *const kWCPLChatIgnoreInfo          = @"kWCPLChatIgnoreInfo";
static NSString *const kWCPLUserIgnoreEnable        = @"kWCPLUserIgnoreEnable";
static NSString *const kWCPLUserIgnoreInfo          = @"kWCPLUserIgnoreInfo";
static NSString *const kWCPLQuitMonitorEnable       = @"kWCPLQuitMonitorEnable";
static NSString *const kWCPLQuitMonitorScope        = @"kWCPLQuitMonitorScope";
static NSString *const kWCPLQuitMonitorWhitelistInfo = @"kWCPLQuitMonitorWhitelistInfo";

@interface WCPLIgnoreConfig ()
@end

@implementation WCPLIgnoreConfig

+ (instancetype)sharedConfig {
    static WCPLIgnoreConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [WCPLIgnoreConfig new];
    });
    return config;
}

- (instancetype)init {
    if (self = [super init]) {
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        _userIgnoreEnable = [defaults boolForKey:kWCPLUserIgnoreEnable];
        NSNumber *quitMonitorEnableObj = [defaults objectForKey:kWCPLQuitMonitorEnable];
        _quitMonitorEnable = quitMonitorEnableObj ? quitMonitorEnableObj.boolValue : NO;
        _chatIgnoreInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLChatIgnoreInfo];
        _userIgnoreInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLUserIgnoreInfo];
        _quitMonitorWhitelistInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLQuitMonitorWhitelistInfo];

        __block NSUInteger validWhitelistCount = 0;
        [_quitMonitorWhitelistInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
            if (![key isKindOfClass:[NSString class]]) {
                return;
            }
            if ([key rangeOfString:@"@chatroom"].location == NSNotFound) {
                return;
            }
            if (![obj respondsToSelector:@selector(boolValue)] || !obj.boolValue) {
                return;
            }
            validWhitelistCount += 1;
        }];

        NSNumber *scopeObj = [defaults objectForKey:kWCPLQuitMonitorScope];
        WCPLQuitMonitorScope defaultScope =
            (validWhitelistCount > 0) ? WCPLQuitMonitorScopeWhitelist : WCPLQuitMonitorScopeAll;
        NSInteger rawScope = scopeObj ? scopeObj.integerValue : defaultScope;
        if (rawScope != WCPLQuitMonitorScopeAll && rawScope != WCPLQuitMonitorScopeWhitelist) {
            rawScope = defaultScope;
        }
        _quitMonitorScope = (WCPLQuitMonitorScope)rawScope;

        [defaults setBool:_quitMonitorEnable forKey:kWCPLQuitMonitorEnable];
        [defaults setInteger:_quitMonitorScope forKey:kWCPLQuitMonitorScope];
    }
    return self;
}

- (NSMutableDictionary<NSString *,NSNumber *> *)wcpl_loadThreadSafeIgnoreDictionaryForKey:(NSString *)key {
    NSDictionary *raw = [[NSUserDefaults standardUserDefaults] objectForKey:key];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(raw);
    return [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
}

- (void)setUserIgnoreEnable:(BOOL)userIgnoreEnable {
    _userIgnoreEnable = userIgnoreEnable;
    [[NSUserDefaults standardUserDefaults] setBool:userIgnoreEnable forKey:kWCPLUserIgnoreEnable];
}

- (void)setQuitMonitorEnable:(BOOL)quitMonitorEnable {
    _quitMonitorEnable = quitMonitorEnable;
    [[NSUserDefaults standardUserDefaults] setBool:quitMonitorEnable forKey:kWCPLQuitMonitorEnable];
}

- (void)setQuitMonitorScope:(WCPLQuitMonitorScope)quitMonitorScope {
    WCPLQuitMonitorScope normalized = quitMonitorScope;
    if (normalized != WCPLQuitMonitorScopeAll && normalized != WCPLQuitMonitorScopeWhitelist) {
        normalized = WCPLQuitMonitorScopeWhitelist;
    }
    _quitMonitorScope = normalized;
    [[NSUserDefaults standardUserDefaults] setInteger:normalized forKey:kWCPLQuitMonitorScope];
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
    [[NSUserDefaults standardUserDefaults] setObject:sanitized forKey:kWCPLChatIgnoreInfo];
}

- (void)saveUserIgnoreNameListToLocalFile {
    NSDictionary *snapshot = [_userIgnoreInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_userIgnoreInfo dictionaryRepresentation]
        : [_userIgnoreInfo copy];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(snapshot);
    [[NSUserDefaults standardUserDefaults] setObject:sanitized forKey:kWCPLUserIgnoreInfo];
}

- (void)saveQuitMonitorWhitelistToLocalFile {
    NSDictionary *snapshot = [_quitMonitorWhitelistInfo isKindOfClass:[WCPLThreadSafeMutableDictionary class]]
        ? [(WCPLThreadSafeMutableDictionary *)_quitMonitorWhitelistInfo dictionaryRepresentation]
        : [_quitMonitorWhitelistInfo copy];
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(snapshot);
    [[NSUserDefaults standardUserDefaults] setObject:sanitized forKey:kWCPLQuitMonitorWhitelistInfo];
}

@end
