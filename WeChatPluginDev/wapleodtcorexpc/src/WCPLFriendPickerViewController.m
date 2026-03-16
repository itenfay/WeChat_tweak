//
// WCPLFriendPickerViewController.m
//

#import "WCPLFriendPickerViewController.h"

#import "WCPLPickerItem.h"

@implementation WCPLFriendPickerViewController

- (NSString *)wcpl_defaultTitleText {
    return @"屏蔽好友";
}

- (BOOL)wcpl_shouldIncludeItem:(WCPLPickerItem *)item {
    return item.type == WCPLPickerItemTypeUser;
}

- (void)wcpl_notifyCancel {
    id<WCPLFriendPickerViewControllerDelegate> delegate = self.delegate;
    if (delegate && [delegate respondsToSelector:@selector(friendPickerDidCancel)]) {
        [delegate friendPickerDidCancel];
    }
}

- (void)wcpl_notifyFinishWithIdentifiers:(NSArray<NSString *> *)identifiers {
    id<WCPLFriendPickerViewControllerDelegate> delegate = self.delegate;
    if (delegate && [delegate respondsToSelector:@selector(friendPickerDidFinishWithIdentifiers:)]) {
        [delegate friendPickerDidFinishWithIdentifiers:identifiers ?: @[]];
    }
}

@end

