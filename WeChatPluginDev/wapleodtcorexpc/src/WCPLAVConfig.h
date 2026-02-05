//
// WCPLAVConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLAVConfig : NSObject

+ (instancetype)sharedConfig;

// 第三方转发/画中画等功能总开关（原 TPOn）
@property (assign, nonatomic) BOOL thirdPartyPlaybackEnabled;

// 旧命名（保持向后兼容）
@property (assign, nonatomic) BOOL TPOn __attribute__((deprecated("Use thirdPartyPlaybackEnabled")));

@end

NS_ASSUME_NONNULL_END

