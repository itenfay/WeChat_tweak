//
// WCPLIgnoreConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLIgnoreConfig : NSObject

+ (instancetype)sharedConfig;

// 屏蔽联系人消息（总开关 + 名单）
@property (assign, nonatomic) BOOL userIgnoreEnable;
// 退群监控开关（检测群成员列表减少并在群内插入本地提示）
@property (assign, nonatomic) BOOL quitMonitorEnable;
// 退群监控白名单（空=监控全部群；非空=仅监控白名单群）
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *quitMonitorWhitelistInfo;
@property (copy, nonatomic, nullable) NSString *curUsrName;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *chatIgnoreInfo;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *userIgnoreInfo;

- (void)saveChatIgnoreNameListToLocalFile;
- (void)saveUserIgnoreNameListToLocalFile;
- (void)saveQuitMonitorWhitelistToLocalFile;

@end

NS_ASSUME_NONNULL_END
