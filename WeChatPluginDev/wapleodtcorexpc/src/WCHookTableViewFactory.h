#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WCTableViewManager;
@class UITableView;

@interface WCHookTableViewFactory : NSObject

+ (Class _Nullable)wchook_classNamed:(NSString *)className;
+ (nullable WCTableViewManager *)tableManagerWithFrame:(CGRect)frame style:(UITableViewStyle)style;
+ (nullable id)sectionWithHeader:(nullable NSString *)header footer:(nullable NSString *)footer;
+ (nullable id)defaultSection;
+ (nullable id)switchCellWithTitle:(NSString *)title
                        descriptor:(nullable NSString *)descriptor
                                on:(BOOL)isOn
                            target:(id)target
                            action:(SEL)selector;
+ (nullable id)navigationCellWithTitle:(NSString *)title
                                detail:(nullable NSString *)detail
                                target:(id)target
                                action:(SEL)selector
                        accessoryType:(UITableViewCellAccessoryType)accessoryType;
+ (void)addSection:(id)section toManager:(WCTableViewManager *)manager;
+ (void)addCell:(id)cell toSection:(id)section;
+ (void)reloadTableView:(UITableView *)tableView;

@end

NS_ASSUME_NONNULL_END
