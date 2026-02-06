#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WCPLFriendPickerViewControllerDelegate <NSObject>

- (void)friendPickerDidCancel;
- (void)friendPickerDidFinishWithIdentifiers:(NSArray<NSString *> *)identifiers;

@end

@interface WCPLFriendPickerViewController : UIViewController

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers;

@property (nonatomic, weak) id<WCPLFriendPickerViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *titleText;

@end

NS_ASSUME_NONNULL_END
