//
// WCPLIgnoreConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLIgnoreConfig : NSObject

+ (instancetype)sharedConfig;

// 屏蔽联系人消息（总开关 + 名单）
@property (assign, nonatomic) BOOL userIgnoreEnable;
@property (copy, nonatomic, nullable) NSString *curUsrName;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *chatIgnoreInfo;
@property (strong, nonatomic) NSMutableDictionary<NSString *,NSNumber *> *userIgnoreInfo;

- (void)saveChatIgnoreNameListToLocalFile;
- (void)saveUserIgnoreNameListToLocalFile;

@end

NS_ASSUME_NONNULL_END

