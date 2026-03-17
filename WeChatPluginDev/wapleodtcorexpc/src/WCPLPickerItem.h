#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, WCPLPickerItemType) {
    WCPLPickerItemTypeUser = 0,
    WCPLPickerItemTypeGroup = 1,
};

NS_ASSUME_NONNULL_BEGIN

@interface WCPLPickerItem : NSObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy, nullable) NSString *subtitle;
@property (nonatomic, assign) WCPLPickerItemType type;
@property (nonatomic, strong, nullable) NSURL *avatarURL;
@property (nonatomic, strong, nullable) UIImage *avatarImage;
@property (nonatomic, assign, getter=isSelectable) BOOL selectable;

- (instancetype)initWithIdentifier:(NSString *)identifier
                       displayName:(NSString *)displayName
                          subtitle:(nullable NSString *)subtitle
                              type:(WCPLPickerItemType)type;

@end

NS_ASSUME_NONNULL_END
