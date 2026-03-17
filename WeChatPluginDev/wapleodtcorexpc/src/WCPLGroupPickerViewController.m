//
// WCPLGroupPickerViewController.m
//

#import "WCPLGroupPickerViewController.h"

#import "WCPLPickerItem.h"

@implementation WCPLGroupPickerViewController

- (NSString *)wcpl_defaultTitleText {
    return @"群聊选择";
}

- (BOOL)wcpl_shouldIncludeItem:(WCPLPickerItem *)item {
    return item.type == WCPLPickerItemTypeGroup;
}

- (void)wcpl_notifyCancel {
    id<WCPLGroupPickerViewControllerDelegate> delegate = self.delegate;
    if (delegate && [delegate respondsToSelector:@selector(groupPickerDidCancel)]) {
        [delegate groupPickerDidCancel];
    }
}

- (void)wcpl_notifyFinishWithIdentifiers:(NSArray<NSString *> *)identifiers {
    id<WCPLGroupPickerViewControllerDelegate> delegate = self.delegate;
    if (delegate && [delegate respondsToSelector:@selector(groupPickerDidFinishWithIdentifiers:)]) {
        [delegate groupPickerDidFinishWithIdentifiers:identifiers ?: @[]];
    }
}

@end

