//
// WCPLSettingsTableViewManagerFactory.h
//
// 设置页 WCTableViewManager 创建入口：统一 frame 计算与创建方式。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WCTableViewManager;

FOUNDATION_EXPORT WCTableViewManager * _Nullable WCPLCreateSettingsTableViewManager(UITableViewStyle style);

NS_ASSUME_NONNULL_END

