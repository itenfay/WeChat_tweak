#import <Foundation/Foundation.h>

@class WCPLPickerItem;

NS_ASSUME_NONNULL_BEGIN

@interface WCPLPickerDataProvider : NSObject

+ (NSArray<WCPLPickerItem *> *)allPickerItems;

@end

NS_ASSUME_NONNULL_END
