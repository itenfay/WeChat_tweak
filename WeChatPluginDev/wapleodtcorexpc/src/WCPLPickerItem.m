#import "WCPLPickerItem.h"

@implementation WCPLPickerItem

- (instancetype)initWithIdentifier:(NSString *)identifier
                       displayName:(NSString *)displayName
                          subtitle:(NSString *)subtitle
                              type:(WCPLPickerItemType)type {
    self = [super init];
    if (self) {
        _identifier = [identifier copy] ?: @"";
        _displayName = [displayName copy] ?: @"";
        _subtitle = [subtitle copy];
        _type = type;
        _selectable = YES;
    }
    return self;
}

@end
