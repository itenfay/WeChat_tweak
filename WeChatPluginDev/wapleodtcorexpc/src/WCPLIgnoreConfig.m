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
        _chatIgnoreInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLChatIgnoreInfo];
        _userIgnoreInfo = [self wcpl_loadThreadSafeIgnoreDictionaryForKey:kWCPLUserIgnoreInfo];
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

- (void)setChatIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)chatIgnoreInfo {
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(chatIgnoreInfo);
    _chatIgnoreInfo = [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
}

- (void)setUserIgnoreInfo:(NSMutableDictionary<NSString *,NSNumber *> *)userIgnoreInfo {
    NSDictionary *sanitized = WCPLSanitizeIgnoreDictionary(userIgnoreInfo);
    _userIgnoreInfo = [[WCPLThreadSafeMutableDictionary alloc] initWithDictionary:sanitized];
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

@end
