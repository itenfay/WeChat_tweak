#import "WCPLPickerPresenterBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WCPLFriendPickerViewControllerDelegate <NSObject>

- (void)friendPickerDidCancel;
- (void)friendPickerDidFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

@interface WCPLFriendPickerViewController : WCPLPickerPresenterBaseViewController

@property (nonatomic, weak) id<WCPLFriendPickerViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
