#import "WCPLGroupPickerViewController.h"
#import "WCPLContactGroupPickerViewController.h"
#import "WCPLPickerDataProvider.h"
#import "WCPLPickerItem.h"

@interface WCPLGroupPickerViewController ()

@property (nonatomic, copy) NSArray<NSString *> *selectedIdentifiers;
@property (nonatomic, assign) BOOL didNotifyResult;
@property (nonatomic, copy, nullable) NSArray<NSString *> *pendingResultIdentifiers;

@end

@implementation WCPLGroupPickerViewController

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers {
    self = [super initWithNibName:nil bundle:nil];
    if (self) {
        _selectedIdentifiers = [self wcpl_sanitizeIdentifiers:selectedIdentifiers];
    }
    return self;
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];

    if (!self.presentedViewController && self.didNotifyResult) {
        NSArray<NSString *> *result = self.pendingResultIdentifiers;
        [self dismissViewControllerAnimated:NO completion:^{
            if (result) {
                if (self.delegate && [self.delegate respondsToSelector:@selector(groupPickerDidFinishWithIdentifiers:)]) {
                    [self.delegate groupPickerDidFinishWithIdentifiers:result];
                }
            } else {
                if (self.delegate && [self.delegate respondsToSelector:@selector(groupPickerDidCancel)]) {
                    [self.delegate groupPickerDidCancel];
                }
            }
        }];
        return;
    }

    if (self.presentedViewController) {
        return;
    }

    NSArray<WCPLPickerItem *> *allItems = [WCPLPickerDataProvider allPickerItems];
    NSSet<NSString *> *selectedSet = [NSSet setWithArray:self.selectedIdentifiers ?: @[]];

    WCPLContactGroupPickerViewController *picker = [[WCPLContactGroupPickerViewController alloc] initWithItems:allItems
                                                                                                     pickerMode:WCPLContactGroupPickerModeMulti
                                                                                         preselectedIdentifiers:selectedSet];
    picker.titleText = self.titleText.length > 0 ? self.titleText : @"群聊选择";
    picker.enableTypeSegment = YES;
    picker.enableSectionByType = NO;
    picker.itemFilter = ^BOOL(WCPLPickerItem *item) {
        return item.type == WCPLPickerItemTypeGroup;
    };

    __weak typeof(self) weakSelf = self;
    picker.onFinish = ^(NSArray<WCPLPickerItem *> *selectedItems, NSArray<NSString *> *selectedIdentifiers) {
        __unused NSArray<WCPLPickerItem *> *unusedItems = selectedItems;
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        strongSelf.didNotifyResult = YES;
        strongSelf.pendingResultIdentifiers = [strongSelf wcpl_sanitizeIdentifiers:selectedIdentifiers];
    };
    picker.onCancel = ^{
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        strongSelf.didNotifyResult = YES;
        strongSelf.pendingResultIdentifiers = nil;
    };

    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:picker];
    navigationController.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:navigationController animated:NO completion:nil];
}

- (NSArray<NSString *> *)wcpl_sanitizeIdentifiers:(NSArray<NSString *> *)identifiers {
    if (![identifiers isKindOfClass:[NSArray class]]) {
        return @[];
    }

    NSMutableOrderedSet<NSString *> *result = [NSMutableOrderedSet orderedSet];
    for (id obj in identifiers) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *value = [(NSString *)obj stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (value.length > 0) {
            [result addObject:value];
        }
    }
    return result.array;
}

@end
