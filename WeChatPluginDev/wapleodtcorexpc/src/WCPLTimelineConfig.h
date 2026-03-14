//
// WCPLTimelineConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLTimelineConfig : NSObject

+ (instancetype)sharedConfig;
+ (instancetype)configWithDefaults:(NSUserDefaults *)defaults;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;

// 屏蔽朋友圈广告（对应 GroupTool isBrandTimelineOpen）
@property (assign, nonatomic) BOOL blockTimelineBrandAdsEnable;

@end

NS_ASSUME_NONNULL_END
