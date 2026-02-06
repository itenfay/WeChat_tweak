#import <UIKit/UIKit.h>

@protocol WCPLGroupPickerViewControllerDelegate <NSObject>

- (void)groupPickerDidCancel;
- (void)groupPickerDidFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

NS_ASSUME_NONNULL_BEGIN

@interface WCPLGroupPickerViewController : UIViewController

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers;

@property (nonatomic, weak) id<WCPLGroupPickerViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *titleText;

@end

NS_ASSUME_NONNULL_END
