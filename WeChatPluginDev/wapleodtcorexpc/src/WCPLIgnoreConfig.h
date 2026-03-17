//
// WCPLIgnoreConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, WCPLQuitMonitorScope) {
    /// 监控全部群聊
    WCPLQuitMonitorScopeAll = 0,
    /// 仅监控白名单群聊
    WCPLQuitMonitorScopeWhitelist = 1,
};

@interface WCPLIgnoreConfig : NSObject

+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

// 屏蔽联系人消息（总开关 + 名单）
@property (assign, nonatomic) BOOL userIgnoreEnable;
// 退群监控开关（检测群成员列表减少并在群内插入本地提示）
@property (assign, nonatomic) BOOL quitMonitorEnable;
// 退群监控生效范围（对齐抢红包：全部群聊 / 白名单）
@property (assign, nonatomic) WCPLQuitMonitorScope quitMonitorScope;
// 退群监控白名单（仅在 quitMonitorScope=Whitelist 时生效）
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *quitMonitorWhitelistInfo;
@property (copy, nonatomic, nullable) NSString *curUsrName;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *chatIgnoreInfo;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *userIgnoreInfo;

- (void)saveChatIgnoreNameListToLocalFile;
- (void)saveUserIgnoreNameListToLocalFile;
- (void)saveQuitMonitorWhitelistToLocalFile;

@end

NS_ASSUME_NONNULL_END
