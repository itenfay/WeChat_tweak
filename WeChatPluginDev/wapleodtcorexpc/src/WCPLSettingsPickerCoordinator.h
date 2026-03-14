#import "WCPLSettingViewController.h"
#import "WCPLUnifiedMultiSelectViewController.h"

@interface WCPLSettingViewController (WCPLSettingsPickerCoordinator) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (void)wcpl_presentUnifiedSelectorWithType:(WCPLUnifiedMultiSelectType)selectType
                                      title:(NSString *)title
                                   selected:(NSArray<NSString *> *)selected
                                     onDone:(void (^)(NSArray<NSString *> *userNames))onDone;
- (void)wcpl_presentSimpleAlertWithTitle:(NSString *)title message:(NSString *)message;
- (void)settingDelay;
- (void)showRedEnvelopNotifyTargetPicker;
- (void)showAutoReplyInputWithTitle:(NSString *)title
                            current:(NSString *)current
                         completion:(void (^)(NSString *value))completion;
- (void)showGroupScopePicker;
- (void)showQuitMonitorScopePicker;
- (void)showRepeatButtonSizePicker;
- (void)showSwipeSensitivityPicker;
- (void)wcpl_presentRepeatCustomImagePicker;
- (void)showRepeatCustomImageActionSheet;
- (void)confirmResetRepeatCustomImage;
- (void)showActionPickerWithTitle:(NSString *)title
                           isSelf:(BOOL)isSelf
                       completion:(void (^)(NSInteger action))completion;

@end
