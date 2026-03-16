//
// WCPLPickerPresenterBaseViewController.h
//
// Friend/Group picker 容器 VC 的公共基类：统一展示/结果回调状态机。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WCPLPickerItem;

@interface WCPLPickerPresenterBaseViewController : UIViewController

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers;

@property (nonatomic, copy) NSString *titleText;

@end

@interface WCPLPickerPresenterBaseViewController (WCPLSubclassing)

/// 子类覆盖：默认标题。
- (NSString *)wcpl_defaultTitleText;

/// 子类覆盖：picker item 过滤规则。
- (BOOL)wcpl_shouldIncludeItem:(WCPLPickerItem *)item;

/// 子类覆盖：取消回调（最多触发一次）。
- (void)wcpl_notifyCancel;

/// 子类覆盖：完成回调（最多触发一次）。
- (void)wcpl_notifyFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

NS_ASSUME_NONNULL_END

