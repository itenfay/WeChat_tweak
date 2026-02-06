#import <UIKit/UIKit.h>

@protocol WCPLFriendPickerViewControllerDelegate <NSObject>

- (void)friendPickerDidCancel;
- (void)friendPickerDidFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

NS_ASSUME_NONNULL_BEGIN

@interface WCPLFriendPickerViewController : UIViewController

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers;

@property (nonatomic, weak) id<WCPLFriendPickerViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *titleText;

@end

NS_ASSUME_NONNULL_END
