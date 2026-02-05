//
// WCPLLocationConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLLocationConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) double fakeLatitude;
@property (assign, nonatomic) double fakeLongitude;
@property (assign, nonatomic) BOOL fakeLocEnable;

// 旧命名（保持向后兼容）
@property (assign, nonatomic) double lat __attribute__((deprecated("Use fakeLatitude")));
@property (assign, nonatomic) double lng __attribute__((deprecated("Use fakeLongitude")));

@end

NS_ASSUME_NONNULL_END

