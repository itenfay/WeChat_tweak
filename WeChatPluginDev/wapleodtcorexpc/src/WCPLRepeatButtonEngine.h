#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRepeatButtonEngine : NSObject

+ (void)updateForCell:(UIView *)cellView;
+ (void)cleanupForCell:(UIView *)cellView;

@end

NS_ASSUME_NONNULL_END
