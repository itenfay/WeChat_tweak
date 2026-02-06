#import <UIKit/UIKit.h>

@class WCPLPickerItem;

typedef NS_ENUM(NSUInteger, WCPLContactGroupPickerMode) {
    WCPLContactGroupPickerModeSingle = 0,
    WCPLContactGroupPickerModeMulti = 1,
};

typedef BOOL (^WCPLPickerItemFilterBlock)(WCPLPickerItem *item);
typedef void (^WCPLPickerCancelBlock)(void);
typedef void (^WCPLPickerSingleSelectBlock)(WCPLPickerItem *item);
typedef void (^WCPLPickerFinishBlock)(NSArray<WCPLPickerItem *> *selectedItems,
                                      NSArray<NSString *> *selectedIdentifiers);

NS_ASSUME_NONNULL_BEGIN

@interface WCPLContactGroupPickerViewController : UIViewController

- (instancetype)initWithItems:(NSArray<WCPLPickerItem *> *)items
                   pickerMode:(WCPLContactGroupPickerMode)pickerMode
       preselectedIdentifiers:(nullable NSSet<NSString *> *)preselectedIdentifiers;

@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, assign) BOOL enableTypeSegment;
@property (nonatomic, assign) BOOL enableSectionByType;
@property (nonatomic, copy, nullable) WCPLPickerItemFilterBlock itemFilter;
@property (nonatomic, copy, nullable) WCPLPickerCancelBlock onCancel;
@property (nonatomic, copy, nullable) WCPLPickerSingleSelectBlock onSelect;
@property (nonatomic, copy, nullable) WCPLPickerFinishBlock onFinish;

- (NSArray<NSString *> *)selectedIdentifiers;
- (NSArray<WCPLPickerItem *> *)selectedItems;

@end

NS_ASSUME_NONNULL_END
