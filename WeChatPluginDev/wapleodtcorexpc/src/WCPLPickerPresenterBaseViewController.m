//
// WCPLPickerPresenterBaseViewController.m
//

#import "WCPLPickerPresenterBaseViewController.h"

#import "WCPLContactGroupPickerViewController.h"
#import "WCPLOnceFlag.h"
#import "WCPLPickerDataProvider.h"
#import "WCPLPickerItem.h"
#import "WCPLPureHelpers.h"

@interface WCPLPickerPresenterBaseViewController ()
{
    WCPLOnceFlag _resultOnce;
}

@property (nonatomic, copy) NSArray<NSString *> *selectedIdentifiers;
@property (nonatomic, assign) BOOL didReceiveResult;
@property (nonatomic, copy, nullable) NSArray<NSString *> *pendingResultIdentifiers;

@end

@implementation WCPLPickerPresenterBaseViewController

static NSArray<NSString *> *wcpl_sanitizedPickerIdentifiers(id identifiers) {
    return WCPLSanitizeIdentifierArray(identifiers);
}

- (instancetype)initWithSelectedIdentifiers:(NSArray<NSString *> *)selectedIdentifiers {
    self = [super initWithNibName:nil bundle:nil];
    if (self) {
        WCPLOnceFlagReset(&_resultOnce);
        _selectedIdentifiers = wcpl_sanitizedPickerIdentifiers(selectedIdentifiers);
    }
    return self;
}

- (NSString *)wcpl_defaultTitleText {
    return @"选择";
}

- (BOOL)wcpl_shouldIncludeItem:(WCPLPickerItem *)item {
    (void)item;
    return YES;
}

- (void)wcpl_notifyCancel {
}

- (void)wcpl_notifyFinishWithIdentifiers:(NSArray<NSString *> *)identifiers {
    (void)identifiers;
}

- (BOOL)wcpl_handlePendingResultIfNeeded {
    if (self.presentedViewController || !self.didReceiveResult) {
        return NO;
    }

    NSArray<NSString *> *result = self.pendingResultIdentifiers;
    [self dismissViewControllerAnimated:NO completion:^{
        if (result) {
            [self wcpl_notifyFinishWithIdentifiers:result];
        } else {
            [self wcpl_notifyCancel];
        }
    }];
    return YES;
}

- (void)wcpl_presentPicker {
    NSArray<WCPLPickerItem *> *allItems = [WCPLPickerDataProvider allPickerItems];
    NSSet<NSString *> *selectedSet = [NSSet setWithArray:self.selectedIdentifiers ?: @[]];

    WCPLContactGroupPickerViewController *picker = [[WCPLContactGroupPickerViewController alloc] initWithItems:allItems
                                                                                                     pickerMode:WCPLContactGroupPickerModeMulti
                                                                                         preselectedIdentifiers:selectedSet];
    picker.titleText = self.titleText.length > 0 ? self.titleText : [self wcpl_defaultTitleText];
    picker.enableTypeSegment = YES;
    picker.enableSectionByType = NO;

    __weak typeof(self) weakSelf = self;
    picker.itemFilter = ^BOOL(WCPLPickerItem *item) {
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) {
            return NO;
        }
        return [strongSelf wcpl_shouldIncludeItem:item];
    };

    picker.onFinish = ^(NSArray<WCPLPickerItem *> *selectedItems, NSArray<NSString *> *selectedIdentifiers) {
        __unused NSArray<WCPLPickerItem *> *unusedItems = selectedItems;
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        if (!WCPLOnceFlagTryFire(&strongSelf->_resultOnce)) {
            return;
        }
        strongSelf.didReceiveResult = YES;
        strongSelf.pendingResultIdentifiers = wcpl_sanitizedPickerIdentifiers(selectedIdentifiers);
    };
    picker.onCancel = ^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        if (!WCPLOnceFlagTryFire(&strongSelf->_resultOnce)) {
            return;
        }
        strongSelf.didReceiveResult = YES;
        strongSelf.pendingResultIdentifiers = nil;
    };

    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:picker];
    navigationController.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:navigationController animated:NO completion:nil];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];

    if ([self wcpl_handlePendingResultIfNeeded]) {
        return;
    }

    if (self.presentedViewController) {
        return;
    }
    [self wcpl_presentPicker];
}

@end
