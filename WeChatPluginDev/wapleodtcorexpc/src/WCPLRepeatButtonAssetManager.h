//
// WCPLRepeatButtonAssetManager.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WCPLGestureConfig;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString *const kWCPLRepeatButtonAssetDidChangeNotification;
FOUNDATION_EXTERN NSInteger const kWCPLRepeatButtonAssetSchemaVersionCurrent;

@interface WCPLRepeatButtonAssetManager : NSObject

+ (instancetype)sharedManager;

// 上传图片后调用：会生成本地图并写回配置
- (BOOL)saveCustomButtonImage:(UIImage *)image
                    forConfig:(WCPLGestureConfig *)config
                        error:(NSError * _Nullable * _Nullable)error;

// 读取当前按钮尺寸对应的显示图（按需懒生成并缓存）
- (nullable UIImage *)displayImageForConfig:(WCPLGestureConfig *)config
                                 buttonSize:(CGFloat)buttonSize
                                      scale:(CGFloat)scale;

// 清空自定义图片，回退到默认 +1 样式
- (void)resetCustomButtonImageForConfig:(WCPLGestureConfig *)config;

// 升级迁移（路径归一化、历史数据兼容）
- (void)migrateIfNeededForConfig:(WCPLGestureConfig *)config;

@end

NS_ASSUME_NONNULL_END
