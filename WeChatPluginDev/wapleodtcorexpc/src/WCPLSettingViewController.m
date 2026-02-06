//
// WCPLSettingViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLSettingViewController.h"
#import "WCPLConfigCenter.h"
#import "WCPLMultiSelectGroupsViewController.h"
#import "WCPLMultiSelectContactsViewController.h"
#import "WCPLFuncService.h"
#import "WCPLServiceCenter.h"
#import "WeChatRedEnvelop.h"
#import "WCPLLogger.h"
#import "WCPLLogUploader.h"
#import "WCPLCrashReporter.h"
#import "WCPLRealtimeLogUploader.h"
#import <objc/runtime.h>
#import <objc/message.h>

typedef NS_ENUM(NSUInteger, WCPLGroupSelectContext) {
    WCPLGroupSelectContextNone = 0,
    WCPLGroupSelectContextBlackList,
    WCPLGroupSelectContextIgnoreChatroom,
    WCPLGroupSelectContextRedEnvelopDenyList,
};

@interface WCPLSettingViewController () <MultiSelectGroupsViewControllerDelegate, WCPLMultiSelectContactsViewControllerDelegate>

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;
@property (nonatomic, assign) WCPLGroupSelectContext groupSelectContext;

@end

@implementation WCPLSettingViewController

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
    
    [self initTitle];
    [self reloadTableData];
    
    MMTableView *tableView = [self.tableViewMgr getTableView];
    [self.view addSubview:tableView];

    self.view.backgroundColor = tableView.backgroundColor;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:animated];
    [self reloadTableData];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    [self stopLoading];
}

- (void)initTitle {
    self.title = @"微信辣椒 by guanxi";
    
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0]}];
    self.navigationItem.leftBarButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithImageName:@"ui-resource_back" target:self action:@selector(onBack:) style:0 accessibility:nil];
}

- (void)onBack:(UIBarButtonItem *)item {
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)reloadTableData {
    [self.tableViewMgr clearAllSection];

    [self addBasicSettingSection];
    [self addAdvanceSettingSection];
    [self addMessageIgnoreSettingSection];
    [self addOtherSettingSection];
    [self addSwipeQuoteSettingSection];

    MMTableView *tableView = [self.tableViewMgr getTableView];
    [tableView reloadData];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

#pragma mark - BasicSetting

- (void)addBasicSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"红包功能"];
    
    [section addCell:[self createAutoReceiveRedEnvelopCell]];

    if ([WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable) {
        [section addCell:[self createPrivateRedEnvelopCell]];
        if ([WCPLRedEnvelopConfig sharedConfig].privateRedEnvelopEnable) {
            [section addCell:[self createPrivateAutoReplyCell]];
        }

        [section addCell:[self createGroupRedEnvelopCell]];
        if ([WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopEnable) {
            [section addCell:[self createGroupAutoReplyCell]];
            [section addCell:[self createGroupScopeCell]];
            [section addCell:[self createReceiveSelfRedEnvelopCell]];
        }

        [section addCell:[self createDelaySettingCell]];
        [section addCell:[self createRedEnvelopNotifyTargetCell]];
    }
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createAutoReceiveRedEnvelopCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(switchRedEnvelop:) target:self title:@"自动领取红包" on:[WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable];
}

- (void)switchRedEnvelop:(UISwitch *)envelopSwitch {
    [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable = envelopSwitch.on;
    [self reloadTableData];
}

- (WCTableViewNormalCellManager *)createReceiveSelfRedEnvelopCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingReceiveSelfRedEnvelop:) target:self title:@"领取自己的群红包" on:[WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop];
}

- (void)settingReceiveSelfRedEnvelop:(UISwitch *)receiveSwitch {
    [WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop = receiveSwitch.on;
}

- (WCTableViewNormalCellManager *)createDelaySettingCell {
    NSInteger delaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;
    NSString *delayString  = delaySeconds == 0 ? @"不延迟" : [NSString stringWithFormat:@"%ld 秒", (long)delaySeconds];
    
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingDelay) target:self title:@"延迟抢红包" rightValue:delayString accessoryType:1];
}

- (void)settingDelay {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"延迟抢红包(秒)"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"延迟时长";
        textField.keyboardType = UIKeyboardTypeNumberPad;
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        [WCPLRedEnvelopConfig sharedConfig].delaySeconds = [text integerValue];
        [self reloadTableData];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (NSString *)wcpl_redEnvelopNotifyTargetDisplayText {
    switch ([WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget) {
        case WCPLRedEnvelopNotifyTargetSelf:
            return @"发送给自己";
        case WCPLRedEnvelopNotifyTargetFileHelper:
            return @"发送给文件传输助手";
        case WCPLRedEnvelopNotifyTargetDisabled:
        default:
            return @"关闭";
    }
}

- (WCTableViewNormalCellManager *)createRedEnvelopNotifyTargetCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showRedEnvelopNotifyTargetPicker) target:self title:@"抢包通知" rightValue:[self wcpl_redEnvelopNotifyTargetDisplayText] accessoryType:1];
}

- (void)showRedEnvelopNotifyTargetPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"抢包通知"
                                                                   message:@"抢到红包后发送通知（私聊/群聊都生效）"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:[UIAlertAction actionWithTitle:@"关闭" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget = WCPLRedEnvelopNotifyTargetDisabled;
        [self reloadTableData];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"发送给自己" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget = WCPLRedEnvelopNotifyTargetSelf;
        [self reloadTableData];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"发送给文件传输助手" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].redEnvelopNotifyTarget = WCPLRedEnvelopNotifyTargetFileHelper;
        [self reloadTableData];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - Red Envelop Advanced (Private/Group)

- (WCTableViewNormalCellManager *)createPrivateRedEnvelopCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingPrivateRedEnvelop:) target:self title:@"私聊红包" on:[WCPLRedEnvelopConfig sharedConfig].privateRedEnvelopEnable];
}

- (NSString *)wcpl_autoReplyPreviewText:(NSString *)text {
    if (![text isKindOfClass:[NSString class]]) {
        return @"未设置";
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (trimmed.length == 0) {
        return @"未设置";
    }
    if (trimmed.length > 10) {
        return [[trimmed substringToIndex:10] stringByAppendingString:@"…"];
    }
    return trimmed;
}

- (WCTableViewNormalCellManager *)createPrivateAutoReplyCell {
    NSString *preview = [self wcpl_autoReplyPreviewText:[WCPLRedEnvelopConfig sharedConfig].privateAutoReplyText];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showPrivateAutoReplyInput) target:self title:@"私聊自动回复" rightValue:preview accessoryType:1];
}

- (void)settingPrivateRedEnvelop:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].privateRedEnvelopEnable = sender.on;
    [self reloadTableData];
}

- (void)showPrivateAutoReplyInput {
    [self showAutoReplyInputWithTitle:@"私聊自动回复"
                              current:[WCPLRedEnvelopConfig sharedConfig].privateAutoReplyText
                           completion:^(NSString *value) {
        [WCPLRedEnvelopConfig sharedConfig].privateAutoReplyText = value;
        [self reloadTableData];
    }];
}

- (WCTableViewNormalCellManager *)createGroupRedEnvelopCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingGroupRedEnvelop:) target:self title:@"群聊红包" on:[WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopEnable];
}

- (WCTableViewNormalCellManager *)createGroupAutoReplyCell {
    NSString *preview = [self wcpl_autoReplyPreviewText:[WCPLRedEnvelopConfig sharedConfig].groupAutoReplyText];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showGroupAutoReplyInput) target:self title:@"群聊自动回复" rightValue:preview accessoryType:1];
}

- (void)settingGroupRedEnvelop:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopEnable = sender.on;
    [self reloadTableData];
}

- (void)showGroupAutoReplyInput {
    [self showAutoReplyInputWithTitle:@"群聊自动回复"
                              current:[WCPLRedEnvelopConfig sharedConfig].groupAutoReplyText
                           completion:^(NSString *value) {
        [WCPLRedEnvelopConfig sharedConfig].groupAutoReplyText = value;
        [self reloadTableData];
    }];
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

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        NSString *value = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (completion) {
            completion(trimmed);
        }
    }]];

    [self presentViewController:alert animated:YES completion:nil];
}

- (NSString *)wcpl_groupScopeDisplayText {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    switch (config.groupRedEnvelopScope) {
        case 0:
            return @"全部群聊";
        case 2: {
            NSUInteger count = config.blockedGroupList.count;
            return count == 0 ? @"黑名单 (未选)" : [NSString stringWithFormat:@"黑名单 (%lu)", (unsigned long)count];
        }
        case 1:
        default: {
            NSUInteger count = config.allowedGroupList.count;
            return count == 0 ? @"白名单 (未选)" : [NSString stringWithFormat:@"白名单 (%lu)", (unsigned long)count];
        }
    }
}

- (WCTableViewNormalCellManager *)createGroupScopeCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showGroupScopePicker) target:self title:@"生效范围" rightValue:[self wcpl_groupScopeDisplayText] accessoryType:1];
}

- (void)showGroupScopePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"群聊红包生效范围"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *allAction = [UIAlertAction actionWithTitle:@"全部群聊" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopScope = 0;
        [self reloadTableData];
    }];

    UIAlertAction *whiteAction = [UIAlertAction actionWithTitle:@"仅白名单" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopScope = 1;
        [self reloadTableData];
        [self showBlackList];
    }];

    UIAlertAction *blackAction = [UIAlertAction actionWithTitle:@"排除黑名单" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopScope = 2;
        [self reloadTableData];
        [self showGroupDenyList];
    }];

    [alert addAction:allAction];
    [alert addAction:whiteAction];
    [alert addAction:blackAction];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - Advanced Setting

- (void)addAdvanceSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"红包高级功能"];
    
    [section addCell:[self createQueueCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createQueueCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingReceiveByQueue:) target:self title:@"防止同时抢多个红包" on:[WCPLRedEnvelopConfig sharedConfig].serialReceive];
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [WCPLRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

- (WCTableViewNormalCellManager *)createBlackListCell {
    if ([WCPLRedEnvelopConfig sharedConfig].allowedGroupList.count == 0) {
        return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlackList) target:self title:@"群聊白名单" rightValue:@"未选择" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)[WCPLRedEnvelopConfig sharedConfig].allowedGroupList.count];
        return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlackList) target:self title:@"群聊白名单" rightValue:blackListCountStr accessoryType:1];
    }
}

- (void)showBlackList {
    WCPLCrashBreadcrumb(@"打开群聊白名单");
    self.groupSelectContext = WCPLGroupSelectContextBlackList;
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSArray *selected = [self wcpl_sanitizedUserNamesFromArray:config.allowedGroupList];
    id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLBlackList"];
    NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
    WCPLLogInfo(@"[设置] 打开白名单: inMemory=%lu storedType=%@ storedCount=%lu",
                (unsigned long)selected.count,
                stored ? NSStringFromClass([stored class]) : @"(nil)",
                (unsigned long)storedCount);

    WCPLMultiSelectGroupsViewController *multiSGVC = [[WCPLMultiSelectGroupsViewController alloc] initWithBlackList:selected];
    multiSGVC.delegate = self;
    multiSGVC.titleText = @"白名单";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSGVC];
    [self presentViewController:nc animated:YES completion:nil];
}

- (void)showGroupDenyList {
    WCPLCrashBreadcrumb(@"打开群聊黑名单");
    self.groupSelectContext = WCPLGroupSelectContextRedEnvelopDenyList;
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSArray *selected = [self wcpl_sanitizedUserNamesFromArray:config.blockedGroupList];
    id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLGroupDenyList"];
    NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
    WCPLLogInfo(@"[设置] 打开黑名单: inMemory=%lu storedType=%@ storedCount=%lu",
                (unsigned long)selected.count,
                stored ? NSStringFromClass([stored class]) : @"(nil)",
                (unsigned long)storedCount);

    WCPLMultiSelectGroupsViewController *multiSGVC = [[WCPLMultiSelectGroupsViewController alloc] initWithBlackList:selected];
    multiSGVC.delegate = self;
    multiSGVC.titleText = @"黑名单";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSGVC];
    [self presentViewController:nc animated:YES completion:nil];
}

#pragma mark - Other

- (void)addOtherSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"其他"];

    [section addCell:[self createAbortRemokeMessageCell]];
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
}

- (WCTableViewNormalCellManager *)createAbortRemokeMessageCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[WCPLConfigCenter shared].revoke.revokeEnable];
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [WCPLConfigCenter shared].revoke.revokeEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createDebugLogCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showDebugLog) target:self title:@"查看调试日志" rightValue:@"" accessoryType:1];
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

- (void)showDebugLog {
    WCPLLogger *logger = [WCPLLogger sharedLogger];
    NSString *logPath = [logger logFilePath];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"调试日志"
                                                                   message:[NSString stringWithFormat:@"日志文件位置:\n%@", logPath]
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    // 查看最近100行日志
    UIAlertAction *viewAction = [UIAlertAction actionWithTitle:@"查看最近日志" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *recentLog = [logger readRecentLog:100];
        [self showLogContent:recentLog];
    }];

    // 上传日志到本地
    UIAlertAction *uploadAction = [UIAlertAction actionWithTitle:@"上传日志到本地(HTTP)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self uploadDebugLogToLocalServer];
    }];

    // 复制日志文件路径
    UIAlertAction *copyPathAction = [UIAlertAction actionWithTitle:@"复制文件路径" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
        pasteboard.string = logPath;

        UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                               message:@"日志文件路径已复制到剪贴板"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:successAlert animated:YES completion:nil];
    }];

    // 清空日志
    UIAlertAction *clearAction = [UIAlertAction actionWithTitle:@"清空日志" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        UIAlertController *confirmAlert = [UIAlertController alertControllerWithTitle:@"确认清空"
                                                                               message:@"确定要清空所有调试日志吗？"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [confirmAlert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        [confirmAlert addAction:[UIAlertAction actionWithTitle:@"清空" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
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

    // 复制日志内容
    UIAlertAction *copyAction = [UIAlertAction actionWithTitle:@"复制日志" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
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
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
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

- (void)addMessageIgnoreSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息屏蔽" Footer:@"开启后可在好友资料页/群聊资料页开启屏蔽，屏蔽后不再接收其消息提醒。"];

    [section addCell:[self createUserIgnoreEnableCell]];
    [section addCell:[self createIgnoredChatroomCountCell]];
    [section addCell:[self createIgnoredUserCountCell]];

    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createUserIgnoreEnableCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingUserIgnoreEnable:) target:self title:@"启用消息屏蔽" on:[WCPLConfigCenter shared].ignore.userIgnoreEnable];
}

- (void)settingUserIgnoreEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].ignore.userIgnoreEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createIgnoredChatroomCountCell {
    NSArray *chatrooms = [self ignoredChatroomUserNames];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showIgnoredChatroomList) target:self title:@"已屏蔽群聊" rightValue:[NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count] accessoryType:1];
}

- (WCTableViewNormalCellManager *)createIgnoredUserCountCell {
    NSArray *users = [self ignoredUserNames];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showIgnoredUserList) target:self title:@"已屏蔽好友" rightValue:[NSString stringWithFormat:@"%lu", (unsigned long)users.count] accessoryType:1];
}

- (NSArray<NSString *> *)ignoredChatroomUserNames {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.chatIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location != NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)ignoredUserNames {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.userIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location == NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)wcpl_userNamesFromSelection:(NSArray *)selection {
    if (![selection isKindOfClass:[NSArray class]]) {
        return @[];
    }
    NSMutableOrderedSet<NSString *> *names = [NSMutableOrderedSet orderedSet];
    Class contactClass = NSClassFromString(@"CContact");
    for (id obj in selection) {
        NSString *name = nil;
        if ([obj isKindOfClass:[NSString class]]) {
            name = (NSString *)obj;
        } else if (contactClass && [obj isKindOfClass:contactClass]) {
            @try {
                name = [obj valueForKey:@"m_nsUsrName"];
            } @catch (__unused NSException *exception) {
                name = nil;
            }
        } else {
            @try {
                name = [obj valueForKey:@"m_nsUsrName"];
            } @catch (__unused NSException *exception) {
                name = nil;
            }
        }
        if ([name isKindOfClass:[NSString class]]) {
            name = [name stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        }
        if (name.length > 0) {
            [names addObject:name];
        }
    }
    return names.array;
}

- (NSArray<NSString *> *)wcpl_sanitizedUserNamesFromArray:(NSArray *)names {
    if (![names isKindOfClass:[NSArray class]]) {
        return @[];
    }
    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSet];
    for (id obj in names) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *value = [(NSString *)obj stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (value.length > 0) {
            [results addObject:value];
        }
    }
    return results.array;
}

- (NSMutableDictionary *)wcpl_multiSelectDictionaryWithUserNames:(NSArray<NSString *> *)names {
    if (![names isKindOfClass:[NSArray class]] || names.count == 0) {
        return [NSMutableDictionary dictionary];
    }
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    Class contactClass = objc_getClass("CContact");
    for (NSString *userName in names) {
        if (![userName isKindOfClass:[NSString class]] || userName.length == 0) {
            continue;
        }
        id contact = [contactMgr getContactByName:userName];
        if (!contact || (contactClass && ![contact isKindOfClass:contactClass])) {
            continue;
        }
        NSString *usrName = nil;
        @try {
            usrName = [contact valueForKey:@"m_nsUsrName"];
        } @catch (__unused NSException *exception) {
            usrName = userName;
        }
        if (!usrName) {
            usrName = userName;
        }
        dict[usrName] = contact;
    }
    return dict;
}

- (BOOL)wcpl_applyMultiSelectDictionaryWithUserNames:(NSArray<NSString *> *)names toController:(id)controller {
    if (!controller) {
        return NO;
    }
    NSMutableDictionary *selectedDict = [self wcpl_multiSelectDictionaryWithUserNames:names];
    if (selectedDict.count == 0) {
        return YES;
    }
    @try {
        if ([controller respondsToSelector:@selector(setM_dicMultiSelect:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_dicMultiSelect:), selectedDict);
        } else {
            [controller setValue:selectedDict forKey:@"m_dicMultiSelect"];
        }
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

- (BOOL)wcpl_presentMultiSelectContactsControllerWithTitle:(NSString *)title
                                             onlyChatRoom:(BOOL)onlyChatRoom
                                                    scene:(unsigned int)scene
                                       selectedUserNames:(NSArray<NSString *> *)selected {
    Class controllerClass = NSClassFromString(@"MultiSelectContactsViewController");
    if (!controllerClass) {
        return NO;
    }
    id controller = [[controllerClass alloc] init];
    if (!controller) {
        return NO;
    }
    NSArray<NSString *> *sanitizedSelected = [self wcpl_sanitizedUserNamesFromArray:selected];

    if ([controller respondsToSelector:@selector(setM_delegate:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_delegate:), self);
    } else {
        @try {
            [controller setValue:self forKey:@"m_delegate"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_uiGroupScene:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(controller, @selector(setM_uiGroupScene:), scene);
    } else {
        @try {
            [controller setValue:@(scene) forKey:@"m_uiGroupScene"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_onlyChatRoom:)]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, @selector(setM_onlyChatRoom:), onlyChatRoom);
    } else {
        @try {
            [controller setValue:@(onlyChatRoom) forKey:@"m_onlyChatRoom"];
        } @catch (__unused NSException *exception) {
        }
    }

    if (![self wcpl_applyMultiSelectDictionaryWithUserNames:sanitizedSelected toController:controller]) {
        return NO;
    }

    if ([controller respondsToSelector:@selector(setTitle:)] && title.length > 0) {
        ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setTitle:), title);
    } else {
        @try {
            if (title.length > 0) {
                [controller setValue:title forKey:@"m_nsViewControllerTitle"];
                [controller setValue:title forKey:@"m_viewcontrllerTitle"];
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }
    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:controller];
    [self presentViewController:nc animated:YES completion:nil];
    return YES;
}

- (BOOL)wcpl_presentGroupSelectContactsControllerWithTitle:(NSString *)title
                                       selectedUserNames:(NSArray<NSString *> *)selected {
    Class controllerClass = NSClassFromString(@"GroupSelectContactsViewController");
    if (!controllerClass) {
        return NO;
    }
    id controller = [[controllerClass alloc] init];
    if (!controller) {
        return NO;
    }
    NSArray<NSString *> *sanitizedSelected = [self wcpl_sanitizedUserNamesFromArray:selected];

    if ([controller respondsToSelector:@selector(setM_delegate:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_delegate:), self);
    } else {
        @try {
            [controller setValue:self forKey:@"m_delegate"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_bShowSearchBar:)]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, @selector(setM_bShowSearchBar:), YES);
    } else {
        @try {
            [controller setValue:@(YES) forKey:@"m_bShowSearchBar"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_uiDataScene:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(controller, @selector(setM_uiDataScene:), 5);
    } else {
        @try {
            [controller setValue:@(5) forKey:@"m_uiDataScene"];
        } @catch (__unused NSException *exception) {
        }
    }

    if (![self wcpl_applyMultiSelectDictionaryWithUserNames:sanitizedSelected toController:controller]) {
        return NO;
    }

    if (title.length > 0) {
        if ([controller respondsToSelector:@selector(setM_viewControllerTitle:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_viewControllerTitle:), title);
        } else {
            @try {
                [controller setValue:title forKey:@"m_viewControllerTitle"];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([controller respondsToSelector:@selector(setM_rightBarButtonTitle:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_rightBarButtonTitle:), @"确定");
        } else {
            @try {
                [controller setValue:@"确定" forKey:@"m_rightBarButtonTitle"];
            } @catch (__unused NSException *exception) {
            }
        }
    }

    UIViewController *presentController = nil;
    if ([controller isKindOfClass:[UIViewController class]]) {
        presentController = controller;
    } else if ([controller respondsToSelector:@selector(getViewController)]) {
        @try {
            id viewController = [controller performSelector:@selector(getViewController)];
            if ([viewController isKindOfClass:[UIViewController class]]) {
                presentController = viewController;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (!presentController) {
        return NO;
    }

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:presentController];
    [self presentViewController:nc animated:YES completion:nil];
    return YES;
}

- (void)showIgnoredChatroomList {
    WCPLCrashBreadcrumb(@"打开已屏蔽群聊列表");
    self.groupSelectContext = WCPLGroupSelectContextIgnoreChatroom;
    NSArray *selected = [self wcpl_sanitizedUserNamesFromArray:[self ignoredChatroomUserNames]];

    WCPLMultiSelectGroupsViewController *multiSGVC = [[WCPLMultiSelectGroupsViewController alloc] initWithBlackList:selected];
    multiSGVC.delegate = self;
    multiSGVC.titleText = @"屏蔽群聊";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSGVC];
    [self presentViewController:nc animated:YES completion:nil];
}

- (void)showIgnoredUserList {
    WCPLCrashBreadcrumb(@"打开已屏蔽好友列表");
    self.groupSelectContext = WCPLGroupSelectContextNone;
    NSArray *selected = [self wcpl_sanitizedUserNamesFromArray:[self ignoredUserNames]];
    WCPLMultiSelectContactsViewController *multiSCVC = [[WCPLMultiSelectContactsViewController alloc] initWithSelectedContacts:selected];
    multiSCVC.delegate = self;
    multiSCVC.titleText = @"屏蔽好友";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSCVC];
    [self presentViewController:nc animated:YES completion:nil];
}

- (void)updateChatIgnoreInfoWithChatrooms:(NSArray *)chatrooms {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *chatroom in chatrooms) {
        if ([chatroom rangeOfString:@"@chatroom"].location != NSNotFound) {
            dict[chatroom] = @(YES);
        }
    }
    config.chatIgnoreInfo = dict;
    [config saveChatIgnoreNameListToLocalFile];
}

- (void)updateUserIgnoreInfoWithUsers:(NSArray *)users {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *user in users) {
        if ([user rangeOfString:@"@chatroom"].location == NSNotFound) {
            dict[user] = @(YES);
        }
    }
    config.userIgnoreInfo = dict;
    [config saveUserIgnoreNameListToLocalFile];
}

#pragma mark - Swipe Quote Setting

- (void)addSwipeQuoteSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息手势"];

    // 消息手势总开关
    [section addCell:[self createSwipeGestureSwitchCell]];

    // 消息气泡复读按钮开关（与手势开关独立）
    [section addCell:[self createRepeatButtonSwitchCell]];

    // 只有启用总开关时才显示详细设置
    if ([WCPLConfigCenter shared].gesture.swipeGestureEnable) {
        // 灵敏度
        [section addCell:[self createSwipeSensitivityCell]];

        // 左滑功能开关
        [section addCell:[self createSwipeQuoteSwitchCell]];

        // 只有启用左滑功能时才显示详细设置
        if ([WCPLConfigCenter shared].gesture.swipeQuoteEnable) {
            [section addCell:[self createSwipeLeftOtherActionCell]];
            [section addCell:[self createSwipeLeftSelfActionCell]];
        }

        // 右滑功能开关
        [section addCell:[self createSwipeRightSwitchCell]];

        // 只有启用右滑功能时才显示详细设置
        if ([WCPLConfigCenter shared].gesture.swipeRightEnable) {
            [section addCell:[self createSwipeRightOtherActionCell]];
            [section addCell:[self createSwipeRightSelfActionCell]];
        }

        // 引用消息点击跳转
        [section addCell:[self createTapReferJumpSwitchCell]];
    }

    [self.tableViewMgr addSection:section];
}

- (NSString *)swipeSensitivityNameForLevel:(NSInteger)level {
    switch (level) {
        case 0: return @"低";
        case 2: return @"高";
        case 1:
        default: return @"中";
    }
}

- (WCTableViewNormalCellManager *)createSwipeGestureSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeGesture:) target:self title:@"启用消息手势" on:[WCPLConfigCenter shared].gesture.swipeGestureEnable];
}

- (WCTableViewNormalCellManager *)createRepeatButtonSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatButton:) target:self title:@"  气泡复读按钮" on:[WCPLConfigCenter shared].gesture.repeatButtonEnable];
}

- (WCTableViewNormalCellManager *)createSwipeSensitivityCell {
    NSInteger level = [WCPLConfigCenter shared].gesture.swipeSensitivityLevel;
    NSString *name = [self swipeSensitivityNameForLevel:level];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeSensitivityPicker) target:self title:@"  手势灵敏度" rightValue:name accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeQuoteSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeQuote:) target:self title:@"  消息左滑功能" on:[WCPLConfigCenter shared].gesture.swipeQuoteEnable];
}

- (WCTableViewNormalCellManager *)createSwipeRightSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeRight:) target:self title:@"  消息右滑功能" on:[WCPLConfigCenter shared].gesture.swipeRightEnable];
}

- (WCTableViewNormalCellManager *)createTapReferJumpSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingTapReferJump:) target:self title:@"  引用消息点击跳转" on:[WCPLConfigCenter shared].gesture.tapReferJumpEnable];
}

// 获取对方消息操作名称（引用、删除）
- (NSString *)actionNameForOtherMessage:(NSInteger)action {
    switch (action) {
        case 0: return @"引用";
        case 2: return @"删除";
        default: return @"引用";
    }
}

// 获取己方消息操作名称（引用、删除、撤回）
- (NSString *)actionNameForSelfMessage:(NSInteger)action {
    switch (action) {
        case 0: return @"引用";
        case 2: return @"删除";
        case 3: return @"撤回";
        default: return @"引用";
    }
}

- (WCTableViewNormalCellManager *)createSwipeLeftOtherActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeLeftOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeLeftOtherActionPicker) target:self title:@"      左滑对方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeLeftSelfActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeLeftSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeLeftSelfActionPicker) target:self title:@"      左滑己方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeRightOtherActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeRightOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeRightOtherActionPicker) target:self title:@"      右滑对方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeRightSelfActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeRightSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeRightSelfActionPicker) target:self title:@"      右滑己方消息" rightValue:actionName accessoryType:1];
}

- (void)settingSwipeGesture:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.swipeGestureEnable = sender.on;
    WCPLLogInfo(@"Swipe gesture feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingRepeatButton:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatButtonEnable = sender.on;
    WCPLLogInfo(@"Repeat bubble button changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingSwipeQuote:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.swipeQuoteEnable = sender.on;
    WCPLLogInfo(@"Swipe left feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingSwipeRight:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.swipeRightEnable = sender.on;
    WCPLLogInfo(@"Swipe right feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingTapReferJump:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.tapReferJumpEnable = sender.on;
    WCPLLogInfo(@"Tap refer jump feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)showSwipeSensitivityPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"手势灵敏度"
                                                                   message:@"高=更容易触发，低=更不易误触"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *lowAction = [UIAlertAction actionWithTitle:@"低 (不易误触)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLConfigCenter shared].gesture.swipeSensitivityLevel = 0;
        [self reloadTableData];
    }];

    UIAlertAction *midAction = [UIAlertAction actionWithTitle:@"中 (默认)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLConfigCenter shared].gesture.swipeSensitivityLevel = 1;
        [self reloadTableData];
    }];

    UIAlertAction *highAction = [UIAlertAction actionWithTitle:@"高 (更灵敏)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLConfigCenter shared].gesture.swipeSensitivityLevel = 2;
        [self reloadTableData];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:lowAction];
    [alert addAction:midAction];
    [alert addAction:highAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

// 左滑对方消息操作选择器
- (void)showSwipeLeftOtherActionPicker {
    [self showActionPickerWithTitle:@"左滑对方消息操作"
                           isSelf:NO
                       completion:^(NSInteger action) {
        [WCPLConfigCenter shared].gesture.swipeLeftOtherAction = action;
        [self reloadTableData];
    }];
}

// 左滑己方消息操作选择器
- (void)showSwipeLeftSelfActionPicker {
    [self showActionPickerWithTitle:@"左滑己方消息操作"
                           isSelf:YES
                       completion:^(NSInteger action) {
        [WCPLConfigCenter shared].gesture.swipeLeftSelfAction = action;
        [self reloadTableData];
    }];
}

// 右滑对方消息操作选择器
- (void)showSwipeRightOtherActionPicker {
    [self showActionPickerWithTitle:@"右滑对方消息操作"
                           isSelf:NO
                       completion:^(NSInteger action) {
        [WCPLConfigCenter shared].gesture.swipeRightOtherAction = action;
        [self reloadTableData];
    }];
}

// 右滑己方消息操作选择器
- (void)showSwipeRightSelfActionPicker {
    [self showActionPickerWithTitle:@"右滑己方消息操作"
                           isSelf:YES
                       completion:^(NSInteger action) {
        [WCPLConfigCenter shared].gesture.swipeRightSelfAction = action;
        [self reloadTableData];
    }];
}

// 通用操作选择器
- (void)showActionPickerWithTitle:(NSString *)title isSelf:(BOOL)isSelf completion:(void(^)(NSInteger action))completion {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    // 引用
    UIAlertAction *quoteAction = [UIAlertAction actionWithTitle:@"引用" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(0);
    }];

    // 删除
    UIAlertAction *deleteAction = [UIAlertAction actionWithTitle:@"删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        if (completion) completion(2);
    }];

    [alert addAction:quoteAction];
    [alert addAction:deleteAction];

    // 己方消息额外有撤回选项
    if (isSelf) {
        UIAlertAction *revokeAction = [UIAlertAction actionWithTitle:@"撤回" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
            if (completion) completion(3);
        }];
        [alert addAction:revokeAction];
    }

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createDebugLogSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingDebugLog:) target:self title:@"启用调试日志" on:[WCPLLogger sharedLogger].enabled];
}

- (void)settingDebugLog:(UISwitch *)sender {
    [WCPLLogger sharedLogger].enabled = sender.on;

    if (sender.on) {
        [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
        // 显示日志文件路径提示
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

// 显示错误提示
- (void)showErrorAlert:(NSString *)message {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"错误"
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self reloadTableData];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - MultiSelectGroupsViewControllerDelegate

- (void)onMultiSelectGroupCancel {
    self.groupSelectContext = WCPLGroupSelectContextNone;
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    NSArray *userNames = [self wcpl_userNamesFromSelection:arg1];
    WCPLLogInfo(@"[设置] MultiSelectGroupReturn: ctx=%lu selected=%lu",
                (unsigned long)self.groupSelectContext,
                (unsigned long)userNames.count);
    if (self.groupSelectContext == WCPLGroupSelectContextIgnoreChatroom) {
        [self updateChatIgnoreInfoWithChatrooms:userNames];
    } else if (self.groupSelectContext == WCPLGroupSelectContextRedEnvelopDenyList) {
        [WCPLRedEnvelopConfig sharedConfig].blockedGroupList = userNames;
        id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLGroupDenyList"];
        NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
        WCPLLogInfo(@"[设置] 黑名单写入后读取: storedType=%@ storedCount=%lu",
                    stored ? NSStringFromClass([stored class]) : @"(nil)",
                    (unsigned long)storedCount);
    } else {
        [WCPLRedEnvelopConfig sharedConfig].allowedGroupList = userNames;
        id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLBlackList"];
        NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
        WCPLLogInfo(@"[设置] 白名单写入后读取: storedType=%@ storedCount=%lu",
                    stored ? NSStringFromClass([stored class]) : @"(nil)",
                    (unsigned long)storedCount);
    }
    [self reloadTableData];
    self.groupSelectContext = WCPLGroupSelectContextNone;
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - WCPLMultiSelectContactsViewControllerDelegate

- (void)onMultiSelectContactCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectContactReturn:(NSArray *)arg1 {
    NSArray *userNames = [self wcpl_userNamesFromSelection:arg1];
    if (self.groupSelectContext == WCPLGroupSelectContextIgnoreChatroom) {
        [self updateChatIgnoreInfoWithChatrooms:userNames];
    } else if (self.groupSelectContext == WCPLGroupSelectContextBlackList) {
        [WCPLRedEnvelopConfig sharedConfig].allowedGroupList = userNames;
    } else {
        [self updateUserIgnoreInfoWithUsers:userNames];
    }
    [self reloadTableData];
    self.groupSelectContext = WCPLGroupSelectContextNone;
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - GroupSelectContactsViewControllerDelegate

- (void)onGroupMultiSelectContactReturn:(NSArray *)arg1 {
    [self onMultiSelectContactReturn:arg1];
}

- (void)onGroupSelectContactReturn:(id)arg1 {
    if (!arg1) {
        [self onMultiSelectContactCancel];
        return;
    }
    [self onMultiSelectContactReturn:@[arg1]];
}

- (_Bool)onShouldSelectContact:(id)arg1 {
    return YES;
}

@end
