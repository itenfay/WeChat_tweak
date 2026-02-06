#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WCPLGroupPickerViewControllerDelegate <NSObject>

- (void)groupPickerDidCancel;
- (void)groupPickerDidFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

@interface WCPLGroupPickerViewController : UIViewController

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers;

@property (nonatomic, weak) id<WCPLGroupPickerViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *titleText;

@end

NS_ASSUME_NONNULL_END
