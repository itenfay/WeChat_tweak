#import "WCPLSettingsPickerCoordinator.h"

#import "WCPLConfigCenter.h"
#import "WCPLContactGroupPickerViewController.h"
#import "WCPLGestureActionHelpers.h"
#import "WCPLLogger.h"
#import "WCPLPickerDataProvider.h"
#import "WCPLPickerItem.h"
#import "WCPLPureHelpers.h"
#import "WCPLRepeatButtonAssetManager.h"
#import "WCPLWeChatUIHeaders.h"
#import <objc/runtime.h>

@interface WCPLSettingViewController (WCPLSettingsPickerCoordinatorPrivate)

@property (nonatomic, strong, nullable) UIImagePickerController *wcplRepeatImagePicker;
@property (nonatomic, assign) BOOL wcplPendingEnableRepeatCustomImageAfterPick;

- (void)reloadTableData;
- (void)resetRepeatCustomImage;
- (void)showBlackList;
- (void)showGroupDenyList;
- (void)showQuitMonitorWhitelistSelector;

@end

static UIAlertAction *wcpl_settingsPickerAction(NSString *title,
                                                UIAlertActionStyle style,
                                                void (^handler)(void)) {
    return [UIAlertAction actionWithTitle:title
                                    style:style
                                  handler:^(__unused UIAlertAction *action) {
        if (handler) {
            handler();
        }
    }];
}

@implementation WCPLSettingViewController (WCPLSettingsPickerCoordinator)

- (void)wcpl_presentUnifiedSelectorWithType:(WCPLUnifiedMultiSelectType)selectType
                                      title:(NSString *)title
                                   selected:(NSArray<NSString *> *)selected
                                     onDone:(void (^)(NSArray<NSString *> *userNames))onDone {
    NSArray<WCPLPickerItem *> *allItems = [WCPLPickerDataProvider allPickerItems];
    NSSet<NSString *> *selectedSet = [NSSet setWithArray:WCPLSanitizeIdentifierArray(selected)];

    WCPLContactGroupPickerViewController *picker = [[WCPLContactGroupPickerViewController alloc] initWithItems:allItems
                                                                                                     pickerMode:WCPLContactGroupPickerModeMulti
                                                                                         preselectedIdentifiers:selectedSet];
    picker.titleText = title;
    picker.enableTypeSegment = NO;
    picker.enableSectionByType = NO;
    picker.itemFilter = ^BOOL(WCPLPickerItem *item) {
        if (![item isKindOfClass:[WCPLPickerItem class]]) {
            return NO;
        }
        return (selectType == WCPLUnifiedMultiSelectTypeChatroom)
            ? item.type == WCPLPickerItemTypeGroup
            : item.type == WCPLPickerItemTypeUser;
    };

    __weak typeof(self) weakSelf = self;
    picker.onFinish = ^(__unused NSArray<WCPLPickerItem *> *selectedItems, NSArray<NSString *> *selectedIdentifiers) {
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        if (onDone) {
            onDone(selectedIdentifiers ?: @[]);
        }
        [strongSelf reloadTableData];
    };

    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:picker];
    [self presentViewController:navigationController animated:YES completion:nil];
}

- (void)wcpl_presentSimpleAlertWithTitle:(NSString *)title message:(NSString *)message {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:wcpl_settingsPickerAction(@"知道了", UIAlertActionStyleDefault, nil)];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)settingDelay {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"延迟抢红包(秒)"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"延迟时长";
        textField.keyboardType = UIKeyboardTypeNumberPad;
    }];

    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定"
                                              style:UIAlertActionStyleDefault
                                            handler:^(__unused UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        [WCPLRedEnvelopConfig sharedConfig].delaySeconds = [text integerValue];
        [self reloadTableData];
    }]];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showRedEnvelopNotifyTargetPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"抢包通知"
                                                                   message:@"抢到红包后发送通知（私聊/群聊都生效）"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:wcpl_settingsPickerAction(@"关闭", UIAlertActionStyleDefault, ^{
        [WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget = WCPLRedEnvelopNotifyTargetDisabled;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"发送给自己", UIAlertActionStyleDefault, ^{
        [WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget = WCPLRedEnvelopNotifyTargetSelf;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"发送给文件传输助手", UIAlertActionStyleDefault, ^{
        [WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget = WCPLRedEnvelopNotifyTargetFileHelper;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showAutoReplyInputWithTitle:(NSString *)title
                            current:(NSString *)current
                         completion:(void (^)(NSString *value))completion {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:@"抢到红包后在当前聊天窗口自动发送（留空表示关闭）"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"请输入自动回复内容（留空关闭）";
        textField.text = current ?: @"";
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定"
                                              style:UIAlertActionStyleDefault
                                            handler:^(__unused UIAlertAction *action) {
        NSString *value = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (completion) {
            completion(trimmed);
        }
    }]];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showGroupScopePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"群聊红包生效范围"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:wcpl_settingsPickerAction(@"全部群聊", UIAlertActionStyleDefault, ^{
        [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopScope = 0;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"仅白名单", UIAlertActionStyleDefault, ^{
        [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopScope = 1;
        [self reloadTableData];
        [self showBlackList];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"排除黑名单", UIAlertActionStyleDefault, ^{
        [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopScope = 2;
        [self reloadTableData];
        [self showGroupDenyList];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showQuitMonitorScopePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"退群监控生效范围"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:wcpl_settingsPickerAction(@"全部群聊", UIAlertActionStyleDefault, ^{
        [WCPLConfigCenter shared].ignore.quitMonitorScope = WCPLQuitMonitorScopeAll;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"仅白名单", UIAlertActionStyleDefault, ^{
        [WCPLConfigCenter shared].ignore.quitMonitorScope = WCPLQuitMonitorScopeWhitelist;
        [self reloadTableData];
        [self showQuitMonitorWhitelistSelector];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showRepeatCustomImageActionSheet {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"自定义复读按钮图片"
                                                                   message:@"上传后会自动处理为圆形按钮图，并按按钮尺寸加载。"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:wcpl_settingsPickerAction(@"从相册选择", UIAlertActionStyleDefault, ^{
        [self wcpl_presentRepeatCustomImagePicker];
    })];

    if (config.repeatButtonCustomImageRelativePath.length > 0) {
        [alert addAction:wcpl_settingsPickerAction(@"恢复默认 +1", UIAlertActionStyleDestructive, ^{
            [self confirmResetRepeatCustomImage];
        })];
    }

    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)confirmResetRepeatCustomImage {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"恢复默认按钮"
                                                                   message:@"清除已上传图片并回退到默认 +1 样式。"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [alert addAction:wcpl_settingsPickerAction(@"确认恢复", UIAlertActionStyleDestructive, ^{
        [self resetRepeatCustomImage];
    })];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)wcpl_presentRepeatCustomImagePicker {
    if (![UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypePhotoLibrary]) {
        [self wcpl_presentSimpleAlertWithTitle:@"无法打开相册" message:@"当前环境不支持从相册选择图片。"];
        return;
    }

    UIImagePickerController *picker = [[UIImagePickerController alloc] init];
    picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
    picker.delegate = self;
    picker.modalPresentationStyle = UIModalPresentationFullScreen;
    self.wcplRepeatImagePicker = picker;
    [self presentViewController:picker animated:YES completion:nil];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [picker dismissViewControllerAnimated:YES completion:^{
        self.wcplRepeatImagePicker = nil;
        self.wcplPendingEnableRepeatCustomImageAfterPick = NO;
        [self reloadTableData];
    }];
}

- (void)imagePickerController:(UIImagePickerController *)picker
didFinishPickingMediaWithInfo:(NSDictionary *)info {
    UIImage *pickedImage = info[UIImagePickerControllerEditedImage];
    if (![pickedImage isKindOfClass:[UIImage class]]) {
        pickedImage = info[UIImagePickerControllerOriginalImage];
    }

    [picker dismissViewControllerAnimated:YES completion:^{
        self.wcplRepeatImagePicker = nil;

        if (![pickedImage isKindOfClass:[UIImage class]]) {
            [self wcpl_presentSimpleAlertWithTitle:@"图片无效" message:@"未获取到有效图片，请重新选择。"];
            self.wcplPendingEnableRepeatCustomImageAfterPick = NO;
            [self reloadTableData];
            return;
        }

        NSError *saveError = nil;
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        BOOL saved = [[WCPLRepeatButtonAssetManager sharedManager] saveCustomButtonImage:pickedImage
                                                                               forConfig:config
                                                                                   error:&saveError];
        if (saved) {
            config.repeatButtonCustomImageEnable = YES;
            [self wcpl_presentSimpleAlertWithTitle:@"上传成功" message:@"复读按钮图片已更新。"];
            WCPLLogInfo(@"Repeat custom image updated: path=%@ revision=%ld",
                        config.repeatButtonCustomImageRelativePath ?: @"<nil>",
                        (long)config.repeatButtonCustomImageRevision);
        } else {
            NSString *errorText = saveError.localizedDescription ?: @"未知错误";
            [self wcpl_presentSimpleAlertWithTitle:@"上传失败" message:errorText];
            WCPLLogWarning(@"Repeat custom image update failed: %@", errorText);
        }

        self.wcplPendingEnableRepeatCustomImageAfterPick = NO;
        [self reloadTableData];
    }];
}

- (void)showRepeatButtonSizePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"复读按钮大小"
                                                                   message:@"范围 16~30，数值越大按钮越大"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    NSArray<NSNumber *> *sizes = @[@16, @18, @20, @22, @24, @26, @28, @30];
    for (NSNumber *size in sizes) {
        NSString *title = [NSString stringWithFormat:@"%@", size];
        [alert addAction:wcpl_settingsPickerAction(title, UIAlertActionStyleDefault, ^{
            WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
            config.repeatButtonSize = size.doubleValue;
            if (config.repeatButtonCustomImageEnable && config.repeatButtonCustomImageRelativePath.length > 0) {
                [[WCPLRepeatButtonAssetManager sharedManager] displayImageForConfig:config
                                                                         buttonSize:config.repeatButtonSize
                                                                              scale:[UIScreen mainScreen].scale];
                [[NSNotificationCenter defaultCenter] postNotificationName:kWCPLRepeatButtonAssetDidChangeNotification object:nil];
            }
            WCPLLogInfo(@"Repeat bubble size changed: %@", title);
            [self reloadTableData];
        })];
    }

    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showSwipeSensitivityPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"手势灵敏度"
                                                                   message:@"高=更容易触发，低=更不易误触"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:wcpl_settingsPickerAction(@"低 (不易误触)", UIAlertActionStyleDefault, ^{
        [WCPLConfigCenter shared].gesture.swipeSensitivityLevel = 0;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"中 (默认)", UIAlertActionStyleDefault, ^{
        [WCPLConfigCenter shared].gesture.swipeSensitivityLevel = 1;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"高 (更灵敏)", UIAlertActionStyleDefault, ^{
        [WCPLConfigCenter shared].gesture.swipeSensitivityLevel = 2;
        [self reloadTableData];
    })];
    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showActionPickerWithTitle:(NSString *)title
                           isSelf:(BOOL)isSelf
                       completion:(void (^)(NSInteger action))completion {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:wcpl_settingsPickerAction(WCPLGestureActionName(WCPLGestureActionQuote, isSelf),
                                              UIAlertActionStyleDefault, ^{
        if (completion) completion(WCPLGestureActionQuote);
    })];
    [alert addAction:wcpl_settingsPickerAction(WCPLGestureActionName(WCPLGestureActionRepeat, isSelf),
                                              UIAlertActionStyleDefault, ^{
        if (completion) completion(WCPLGestureActionRepeat);
    })];
    [alert addAction:wcpl_settingsPickerAction(WCPLGestureActionName(WCPLGestureActionForward, isSelf),
                                              UIAlertActionStyleDefault, ^{
        if (completion) completion(WCPLGestureActionForward);
    })];
    [alert addAction:wcpl_settingsPickerAction(WCPLGestureActionName(WCPLGestureActionDisabled, isSelf),
                                              UIAlertActionStyleDefault, ^{
        if (completion) completion(WCPLGestureActionDisabled);
    })];
    [alert addAction:wcpl_settingsPickerAction(WCPLGestureActionName(WCPLGestureActionDelete, isSelf),
                                              UIAlertActionStyleDestructive, ^{
        if (completion) completion(WCPLGestureActionDelete);
    })];

    if (isSelf) {
        [alert addAction:wcpl_settingsPickerAction(WCPLGestureActionName(WCPLGestureActionRevoke, isSelf),
                                                  UIAlertActionStyleDestructive, ^{
            if (completion) completion(WCPLGestureActionRevoke);
        })];
    }

    [alert addAction:wcpl_settingsPickerAction(@"取消", UIAlertActionStyleCancel, nil)];
    [self presentViewController:alert animated:YES completion:nil];
}

@end
