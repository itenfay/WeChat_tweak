#import "WCPLPickerPresenterBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WCPLGroupPickerViewControllerDelegate <NSObject>

- (void)groupPickerDidCancel;
- (void)groupPickerDidFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

@interface WCPLGroupPickerViewController : WCPLPickerPresenterBaseViewController

@property (nonatomic, weak) id<WCPLGroupPickerViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
