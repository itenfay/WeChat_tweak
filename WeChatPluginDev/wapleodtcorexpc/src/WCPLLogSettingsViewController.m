#import "WCPLLogSettingsViewController.h"

#import "WeChatRedEnvelop.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLLogUploader.h"
#import "WCPLCrashReporter.h"
#import "WCPLRealtimeLogUploader.h"
#import <objc/runtime.h>

@interface WCPLLogSettingsViewController ()

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;

@end

@implementation WCPLLogSettingsViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        CGFloat tabY = WCPLStatusBarAndNavigationBarHeight;
        CGFloat tabW = WCPLScreenWidth;
        CGFloat tabH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
        _tableViewMgr = [[objc_getClass("WCTableViewManager") alloc] initWithFrame:CGRectMake(0, tabY, tabW, tabH) style:UITableViewStyleGrouped];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"日志设置";
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0]}];

    [self reloadTableData];

    MMTableView *tableView = [self.tableViewMgr getTableView];
    [self.view addSubview:tableView];
    self.view.backgroundColor = tableView.backgroundColor;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self reloadTableData];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

- (void)reloadTableData {
    [self.tableViewMgr clearAllSection];

    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"日志与调试"];
    [section addCell:[self createDebugLogSwitchCell]];
    if ([WCPLLogger sharedLogger].enabled) {
        [section addCell:[self createLogLevelCell]];
    }
    [section addCell:[self createDebugLogCell]];
    [section addCell:[self createRealtimeDebugLogUploadSwitchCell]];
    [section addCell:[self createCrashLogSwitchCell]];
    [section addCell:[self createCrashAutoUploadSwitchCell]];
    [section addCell:[self createLogUploadURLCell]];

    [self.tableViewMgr addSection:section];

    MMTableView *tableView = [self.tableViewMgr getTableView];
    [tableView reloadData];
}

- (NSString *)wcpl_logLevelName:(WCPLLogLevel)level {
    switch (level) {
        case WCPLLogLevelDebug: return @"调试 (Debug)";
        case WCPLLogLevelInfo: return @"信息 (Info)";
        case WCPLLogLevelWarning: return @"警告 (Warn)";
        case WCPLLogLevelError: return @"错误 (Error)";
        case WCPLLogLevelNone:
        default: return @"关闭";
    }
}

- (WCTableViewNormalCellManager *)createDebugLogSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingDebugLog:) target:self title:@"启用调试日志" on:[WCPLLogger sharedLogger].enabled];
}

- (void)settingDebugLog:(UISwitch *)sender {
    [WCPLLogger sharedLogger].enabled = sender.on;

    if (sender.on) {
        [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
        NSString *logPath = [[WCPLLogger sharedLogger] logFilePath];
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"调试日志已启用"
                                                                       message:[NSString stringWithFormat:@"日志文件路径:\n%@\n\n可通过文件管理器查看", logPath]
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
    } else {
        [[WCPLRealtimeLogUploader sharedUploader] stop];
    }

    [self reloadTableData];
}

- (WCTableViewNormalCellManager *)createLogLevelCell {
    WCPLLogLevel level = [WCPLLogger currentLevel];
    NSString *name = [self wcpl_logLevelName:level];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showLogLevelPicker) target:self title:@"日志等级" rightValue:name accessoryType:1];
}

- (void)showLogLevelPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"日志等级"
                                                                   message:@"等级越低越详细；关闭将停止写入文件日志"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    __weak typeof(self) weakSelf = self;
    void (^applyLevel)(WCPLLogLevel) = ^(WCPLLogLevel level) {
        __strong typeof(weakSelf) self = weakSelf;
        if (!self) return;

        [WCPLLogger setLogLevel:level];
        if (level == WCPLLogLevelNone) {
            [[WCPLRealtimeLogUploader sharedUploader] stop];
        } else if ([WCPLRealtimeLogUploader sharedUploader].enabled) {
            [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
        }
        [self reloadTableData];
    };

    NSArray<NSDictionary *> *items = @[
        @{@"title": @"调试 (Debug) - 最详细", @"level": @(WCPLLogLevelDebug)},
        @{@"title": @"信息 (Info)", @"level": @(WCPLLogLevelInfo)},
        @{@"title": @"警告 (Warn)", @"level": @(WCPLLogLevelWarning)},
        @{@"title": @"错误 (Error)", @"level": @(WCPLLogLevelError)},
        @{@"title": @"关闭", @"level": @(WCPLLogLevelNone)},
    ];

    for (NSDictionary *item in items) {
        NSString *title = item[@"title"];
        NSNumber *levelNum = item[@"level"];
        if (![title isKindOfClass:[NSString class]] || ![levelNum respondsToSelector:@selector(integerValue)]) {
            continue;
        }
        UIAlertActionStyle style = ([levelNum integerValue] == WCPLLogLevelNone) ? UIAlertActionStyleDestructive : UIAlertActionStyleDefault;
        [alert addAction:[UIAlertAction actionWithTitle:title style:style handler:^(__unused UIAlertAction *action) {
            applyLevel((WCPLLogLevel)[levelNum integerValue]);
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createDebugLogCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showDebugLog) target:self title:@"查看调试日志" rightValue:@"" accessoryType:1];
}

- (WCTableViewNormalCellManager *)createRealtimeDebugLogUploadSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRealtimeDebugLogUpload:) target:self title:@"实时上传调试日志" on:[WCPLRealtimeLogUploader sharedUploader].enabled];
}

- (void)settingRealtimeDebugLogUpload:(UISwitch *)sender {
    if (sender.on && ![WCPLLogger sharedLogger].enabled) {
        sender.on = NO;
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"未启用日志"
                                                                       message:@"请先开启调试日志"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    [WCPLRealtimeLogUploader sharedUploader].enabled = sender.on;
    if (sender.on) {
        [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
    } else {
        [[WCPLRealtimeLogUploader sharedUploader] stop];
    }
}

- (WCTableViewNormalCellManager *)createCrashLogSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingCrashLog:) target:self title:@"启用崩溃日志" on:[WCPLCrashReporter sharedReporter].enabled];
}

- (void)settingCrashLog:(UISwitch *)sender {
    WCPLCrashReporter *reporter = [WCPLCrashReporter sharedReporter];
    reporter.enabled = sender.on;
    if (sender.on) {
        [reporter installIfNeeded];
    }
}

- (WCTableViewNormalCellManager *)createCrashAutoUploadSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingCrashAutoUpload:) target:self title:@"崩溃后自动上传" on:[WCPLCrashReporter sharedReporter].autoUploadEnabled];
}

- (void)settingCrashAutoUpload:(UISwitch *)sender {
    WCPLCrashReporter *reporter = [WCPLCrashReporter sharedReporter];
    reporter.autoUploadEnabled = sender.on;
    if (sender.on) {
        [reporter tryUploadPendingReport];
    }
}

- (WCTableViewNormalCellManager *)createLogUploadURLCell {
    NSString *urlString = [WCPLLogUploader currentUploadURLString] ?: @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showLogUploadURLInput) target:self title:@"日志上传地址" rightValue:urlString accessoryType:1];
}

- (void)showDebugLog {
    WCPLLogger *logger = [WCPLLogger sharedLogger];
    NSString *logPath = [logger logFilePath];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"调试日志"
                                                                   message:[NSString stringWithFormat:@"日志文件位置:\n%@", logPath]
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *viewAction = [UIAlertAction actionWithTitle:@"查看最近日志" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        NSString *recentLog = [logger readRecentLog:100];
        [self showLogContent:recentLog];
    }];

    UIAlertAction *uploadAction = [UIAlertAction actionWithTitle:@"上传日志到本地(HTTP)" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [self uploadDebugLogToLocalServer];
    }];

    UIAlertAction *copyPathAction = [UIAlertAction actionWithTitle:@"复制文件路径" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
        pasteboard.string = logPath;

        UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                               message:@"日志文件路径已复制到剪贴板"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:successAlert animated:YES completion:nil];
    }];

    UIAlertAction *clearAction = [UIAlertAction actionWithTitle:@"清空日志" style:UIAlertActionStyleDestructive handler:^(__unused UIAlertAction *action) {
        UIAlertController *confirmAlert = [UIAlertController alertControllerWithTitle:@"确认清空"
                                                                              message:@"确定要清空所有调试日志吗？"
                                                                       preferredStyle:UIAlertControllerStyleAlert];
        [confirmAlert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        [confirmAlert addAction:[UIAlertAction actionWithTitle:@"清空" style:UIAlertActionStyleDestructive handler:^(__unused UIAlertAction *action) {
            [logger clearLog];
            UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                                   message:@"日志已清空"
                                                                            preferredStyle:UIAlertControllerStyleAlert];
            [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:successAlert animated:YES completion:nil];
        }]];
        [self presentViewController:confirmAlert animated:YES completion:nil];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:viewAction];
    [alert addAction:uploadAction];
    [alert addAction:copyPathAction];
    [alert addAction:clearAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)uploadDebugLogToLocalServer {
    if (![WCPLLogger sharedLogger].enabled) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"未启用日志"
                                                                       message:@"请先开启调试日志"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    NSString *urlString = [WCPLLogUploader currentUploadURLString];
    if (![WCPLLogUploader isValidUploadURLString:urlString]) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"地址无效"
                                                                       message:urlString
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    NSString *logPath = [[WCPLLogger sharedLogger] logFilePath];
    NSDictionary *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:logPath error:nil];
    unsigned long long logSize = [attributes fileSize];
    if (logSize == 0) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"日志为空"
                                                                       message:@"没有可上传的日志内容"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    WCPLLog(@"准备上传日志: url=%@ size=%llu path=%@", urlString, logSize, logPath);

    [WCPLLogUploader uploadLogFileAtPath:logPath logName:@"wcpl_debug.log" completion:^(BOOL success, NSInteger statusCode, NSError *error) {
        if (!success || error) {
            NSString *message = error.localizedDescription ?: @"未知错误";
            if (!error && statusCode != 0) {
                message = [NSString stringWithFormat:@"服务器返回状态码: %ld", (long)statusCode];
            }
            WCPLLog(@"日志上传失败: url=%@ status=%ld error=%@", urlString, (long)statusCode, message);
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上传失败"
                                                                           message:message
                                                                    preferredStyle:UIAlertControllerStyleAlert];
            [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:alert animated:YES completion:nil];
            return;
        }

        WCPLLog(@"日志上传成功: status=%ld", (long)statusCode);
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上传成功"
                                                                       message:@"日志已发送到本地服务器"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
    }];
}

- (void)showLogContent:(NSString *)content {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"最近日志 (最后100行)"
                                                                   message:content
                                                            preferredStyle:UIAlertControllerStyleAlert];

    UIAlertAction *copyAction = [UIAlertAction actionWithTitle:@"复制日志" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
        pasteboard.string = content;

        UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                               message:@"日志内容已复制到剪贴板"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:successAlert animated:YES completion:nil];
    }];

    UIAlertAction *closeAction = [UIAlertAction actionWithTitle:@"关闭" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:copyAction];
    [alert addAction:closeAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showLogUploadURLInput {
    NSString *current = [WCPLLogUploader currentUploadURLString] ?: @"";
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"日志上传地址"
                                                                   message:@"用于上传调试/崩溃日志"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"例如: http://192.168.1.10:8099/wcpl_log";
        textField.keyboardType = UIKeyboardTypeURL;
        textField.autocorrectionType = UITextAutocorrectionTypeNo;
        textField.text = current;
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (trimmed.length == 0) {
            [self showErrorAlert:@"请输入有效的地址"];
            return;
        }
        if (![WCPLLogUploader isValidUploadURLString:trimmed]) {
            [self showErrorAlert:@"地址无效，请包含协议和主机名"];
            return;
        }
        [WCPLLogUploader setCurrentUploadURLString:trimmed];
        [self reloadTableData];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showErrorAlert:(NSString *)message {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"错误"
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

@end
