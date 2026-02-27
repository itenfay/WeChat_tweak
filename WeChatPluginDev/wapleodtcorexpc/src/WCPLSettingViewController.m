//
// WCPLSettingViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLSettingViewController.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLServiceCenter.h"
#import "WCPLUnifiedMultiSelectViewController.h"
#import "WeChatRedEnvelop.h"
#import "WCPLLogger.h"
#import "WCPLCrashReporter.h"
#import "WCPLLogSettingsViewController.h"
#import "WCPLRepeatButtonAssetManager.h"
#import <objc/runtime.h>

typedef NS_ENUM(NSUInteger, WCPLSettingPageType) {
    WCPLSettingPageTypeRoot = 0,
    WCPLSettingPageTypeRedEnvelop,
    WCPLSettingPageTypeMessageIgnore,
    WCPLSettingPageTypeGroupMonitor,
    WCPLSettingPageTypeOther,
    WCPLSettingPageTypeSwipeGesture,
    WCPLSettingPageTypeRepeatBubble,
    WCPLSettingPageTypeLongPressPanel,
    WCPLSettingPageTypePush2Chat,
};

@interface WCPLSettingViewController () <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;
@property (nonatomic, assign) WCPLSettingPageType pageType;
@property (nonatomic, strong, nullable) UIImagePickerController *wcplRepeatImagePicker;
@property (nonatomic, assign) BOOL wcplPendingEnableRepeatCustomImageAfterPick;

- (instancetype)initWithPageType:(WCPLSettingPageType)pageType;
- (void)wcpl_setupTableViewManager;
- (NSString *)wcpl_pageTitle;
- (void)addPush2ChatSettingSection;
- (void)wcpl_presentUnifiedSelectorWithType:(WCPLUnifiedMultiSelectType)selectType
                                      title:(NSString *)title
                                   selected:(NSArray<NSString *> *)selected
                                     onDone:(void (^)(NSArray<NSString *> *userNames))onDone;

@end

@implementation WCPLSettingViewController

- (instancetype)init {
    return [self initWithPageType:WCPLSettingPageTypeRoot];
}

- (instancetype)initWithPageType:(WCPLSettingPageType)pageType {
    if (self = [super initWithNibName:nil bundle:nil]) {
        _pageType = pageType;
        [self wcpl_setupTableViewManager];
    }
    return self;
}

- (void)wcpl_setupTableViewManager {
    if (_tableViewMgr) {
        return;
    }

    CGFloat tabY = WCPLStatusBarAndNavigationBarHeight;
    CGFloat tabW = WCPLScreenWidth;
    CGFloat tabH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
    _tableViewMgr = [[objc_getClass("WCTableViewManager") alloc] initWithFrame:CGRectMake(0, tabY, tabW, tabH) style:UITableViewStyleGrouped];
}

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        _pageType = WCPLSettingPageTypeRoot;
        [self wcpl_setupTableViewManager];
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
    self.title = [self wcpl_pageTitle];
    
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0]}];
    self.navigationItem.leftBarButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithImageName:@"ui-resource_back" target:self action:@selector(onBack:) style:0 accessibility:nil];
}

- (void)onBack:(UIBarButtonItem *)item {
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)reloadTableData {
    [self.tableViewMgr clearAllSection];

    switch (self.pageType) {
        case WCPLSettingPageTypeRoot:
            [self addTopLevelEntrySection];
            break;
        case WCPLSettingPageTypeRedEnvelop:
            [self addBasicSettingSection];
            [self addAdvanceSettingSection];
            break;
        case WCPLSettingPageTypeMessageIgnore:
            [self addMessageIgnoreSettingSection];
            break;
        case WCPLSettingPageTypeGroupMonitor:
            [self addGroupMonitorSettingSection];
            break;
        case WCPLSettingPageTypeOther:
            [self addOtherSettingSection];
            break;
        case WCPLSettingPageTypeSwipeGesture:
            [self addSwipeQuoteSettingSection];
            break;
        case WCPLSettingPageTypeRepeatBubble:
            [self addRepeatBubbleSettingSection];
            break;
        case WCPLSettingPageTypeLongPressPanel:
            [self addLongPressPanelSettingSection];
            break;
        case WCPLSettingPageTypePush2Chat:
            [self addPush2ChatSettingSection];
            break;
    }

    MMTableView *tableView = [self.tableViewMgr getTableView];
    [tableView reloadData];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

- (NSString *)wcpl_pageTitle {
    switch (self.pageType) {
        case WCPLSettingPageTypeRedEnvelop:
            return @"红包功能";
        case WCPLSettingPageTypeMessageIgnore:
            return @"消息屏蔽";
        case WCPLSettingPageTypeGroupMonitor:
            return @"群聊监控";
        case WCPLSettingPageTypeOther:
            return @"其他";
        case WCPLSettingPageTypeSwipeGesture:
            return @"消息手势";
        case WCPLSettingPageTypeRepeatBubble:
            return @"复读气泡";
        case WCPLSettingPageTypeLongPressPanel:
            return @"长按面板";
        case WCPLSettingPageTypePush2Chat:
            return @"消息直达";
        case WCPLSettingPageTypeRoot:
        default:
            return @"微信辣椒 by guanxi";
    }
}

#pragma mark - TopLevelEntry

- (void)addTopLevelEntrySection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"功能分类"];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"消息直达" detail:@"推送直达聊天" selector:@selector(openPush2ChatSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"红包功能" detail:@"自动抢包、提醒、汇总" selector:@selector(openRedEnvelopSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"消息屏蔽" detail:@"屏蔽用户和群聊提醒" selector:@selector(openMessageIgnoreSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"群聊监控" detail:@"退群提示与成员变化提醒" selector:@selector(openGroupMonitorSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"其他" detail:@"防撤回、模拟 iPad、朋友圈广告" selector:@selector(openOtherSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"消息手势" detail:@"左右滑动、双击、引用跳转" selector:@selector(openSwipeGestureSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"复读气泡" detail:@"复读按钮和类型支持" selector:@selector(openRepeatBubbleSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"长按面板" detail:@"复读/小丑/语音转发/抖音解析开关" selector:@selector(openLongPressPanelSettingsEntry)]];
    [section addCell:[self createTopLevelEntryCellWithTitle:@"日志设置" detail:@"调试日志与上传" selector:@selector(openDebugSettings)]];
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createTopLevelEntryCellWithTitle:(NSString *)title
                                                             detail:(NSString *)detail
                                                           selector:(SEL)selector {
    NSString *rightValue = [detail isKindOfClass:[NSString class]] ? detail : @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:selector target:self title:title rightValue:rightValue accessoryType:1];
}

- (void)openRedEnvelopSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeRedEnvelop];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openPush2ChatSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypePush2Chat];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openMessageIgnoreSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeMessageIgnore];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openOtherSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeOther];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openGroupMonitorSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeGroupMonitor];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openSwipeGestureSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeSwipeGesture];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openRepeatBubbleSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeRepeatBubble];
    [self.navigationController pushViewController:controller animated:YES];
}

- (void)openLongPressPanelSettingsEntry {
    WCPLSettingViewController *controller = [[WCPLSettingViewController alloc] initWithPageType:WCPLSettingPageTypeLongPressPanel];
    [self.navigationController pushViewController:controller animated:YES];
}

#pragma mark - Push2Chat

- (void)addPush2ChatSettingSection {
    WCPLPush2ChatConfig *config = [WCPLConfigCenter shared].push2Chat;
    if (!config) {
        return;
    }

    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"功能设置"];
    section.footerTitle = @"注意：\n直达功能需要重启微信后生效";

    [section addCell:[objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingEnableForegroundPush2Chat:)
                                                                    target:self
                                                                     title:@"开启前台直达"
                                                                        on:config.enableForegroundPush]];
    if (config.enableForegroundPush) {
        UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:@[@"全屏", @"半屏"]];
        seg.selectedSegmentIndex = config.foregroundPushMode;
        [seg addTarget:self action:@selector(settingForegroundPush2ChatModeChanged:) forControlEvents:UIControlEventValueChanged];
        id cell = [objc_getClass("WCTableViewCellManager") normalCellForSel:nil target:self title:@"↳ 前台直达模式" rightView:seg];
        [section addCell:cell];
    }

    [section addCell:[objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingEnableBackgroundPush2Chat:)
                                                                    target:self
                                                                     title:@"开启后台直达"
                                                                        on:config.enableBackgroundPush]];
    if (config.enableBackgroundPush) {
        UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:@[@"全屏", @"半屏"]];
        seg.selectedSegmentIndex = config.backgroundPushMode;
        [seg addTarget:self action:@selector(settingBackgroundPush2ChatModeChanged:) forControlEvents:UIControlEventValueChanged];
        id cell = [objc_getClass("WCTableViewCellManager") normalCellForSel:nil target:self title:@"↳ 后台直达模式" rightView:seg];
        [section addCell:cell];
    }

    [self.tableViewMgr addSection:section];
}

- (void)settingEnableForegroundPush2Chat:(UISwitch *)sender {
    [WCPLConfigCenter shared].push2Chat.enableForegroundPush = sender.on;
    [self reloadTableData];
}

- (void)settingEnableBackgroundPush2Chat:(UISwitch *)sender {
    [WCPLConfigCenter shared].push2Chat.enableBackgroundPush = sender.on;
    [self reloadTableData];
}

- (void)settingForegroundPush2ChatModeChanged:(UISegmentedControl *)sender {
    [WCPLConfigCenter shared].push2Chat.foregroundPushMode = sender.selectedSegmentIndex;
}

- (void)settingBackgroundPush2ChatModeChanged:(UISegmentedControl *)sender {
    [WCPLConfigCenter shared].push2Chat.backgroundPushMode = sender.selectedSegmentIndex;
}

#pragma mark - BasicSetting

- (void)addBasicSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"红包功能"];
    
    [section addCell:[self createAutoReceiveRedEnvelopCell]];
    [section addCell:[self createReceiveDonePageSummaryCell]];

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

- (WCTableViewNormalCellManager *)createReceiveDonePageSummaryCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingReceiveDonePageSummary:) target:self title:@"红包详情始终显示" on:[WCPLRedEnvelopConfig sharedConfig].receiveDonePageSummaryEnable];
}

- (void)settingReceiveDonePageSummary:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].receiveDonePageSummaryEnable = sender.on;
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

- (void)showBlackList {
    WCPLCrashBreadcrumb(@"打开群聊白名单");
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:config.allowedGroupList scene:@"allow_list_open"];
    id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLBlackList"];
    NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
    WCPLLogInfo(@"[设置] 打开白名单: inMemory=%lu storedType=%@ storedCount=%lu",
                (unsigned long)selected.count,
                stored ? NSStringFromClass([stored class]) : @"(nil)",
                (unsigned long)storedCount);
    WCPLLogInfo(@"[设置] 白名单使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"白名单"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        NSArray<NSString *> *chatrooms = [strongSelf wcpl_chatroomUserNamesFromArray:userNames
                                                                               scene:@"allow_list_save_unified"];
        [WCPLRedEnvelopConfig sharedConfig].allowedGroupList = chatrooms;
        WCPLLogInfo(@"[设置] 保存红包白名单: count=%lu", (unsigned long)chatrooms.count);
    }];
}

- (void)showGroupDenyList {
    WCPLCrashBreadcrumb(@"打开群聊黑名单");
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:config.blockedGroupList scene:@"deny_list_open"];
    id stored = [[NSUserDefaults standardUserDefaults] objectForKey:@"kWCPLGroupDenyList"];
    NSUInteger storedCount = [stored isKindOfClass:[NSArray class]] ? [(NSArray *)stored count] : 0;
    WCPLLogInfo(@"[设置] 打开黑名单: inMemory=%lu storedType=%@ storedCount=%lu",
                (unsigned long)selected.count,
                stored ? NSStringFromClass([stored class]) : @"(nil)",
                (unsigned long)storedCount);
    WCPLLogInfo(@"[设置] 黑名单使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"黑名单"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        NSArray<NSString *> *chatrooms = [strongSelf wcpl_chatroomUserNamesFromArray:userNames
                                                                               scene:@"deny_list_save_unified"];
        [WCPLRedEnvelopConfig sharedConfig].blockedGroupList = chatrooms;
        WCPLLogInfo(@"[设置] 保存红包黑名单: count=%lu", (unsigned long)chatrooms.count);
    }];
}

#pragma mark - Other

- (void)addOtherSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"其他"];

    [section addCell:[self createTimelineAdBlockCell]];
    [section addCell:[self createEmulateIPadLoginCell]];
    [section addCell:[self createAbortRemokeMessageCell]];
    [section addCell:[self createMessageTimeSwitchCell]];
    [section addCell:[self createMarkAllReadTopRightMenuEnableCell]];

    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createMarkAllReadTopRightMenuEnableCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMarkAllReadTopRightMenuEnable:)
                                                                     target:self
                                                                      title:@"右上角+ 一键已读"
                                                                         on:[WCPLConfigCenter shared].markAllReadTopRightMenuEnable];
}

- (void)settingMarkAllReadTopRightMenuEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].markAllReadTopRightMenuEnable = sender.on;
}

- (void)addLogEntrySection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"日志与调试"];
    [section addCell:[self createLogEntryCell]];
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createLogEntryCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(openDebugSettings) target:self title:@"日志设置" rightValue:@"" accessoryType:1];
}

- (void)openDebugSettings {
    WCPLLogSettingsViewController *controller = [[WCPLLogSettingsViewController alloc] init];
    [self.navigationController pushViewController:controller animated:YES];
}

- (WCTableViewNormalCellManager *)createAbortRemokeMessageCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[WCPLConfigCenter shared].revoke.revokeEnable];
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [WCPLConfigCenter shared].revoke.revokeEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createEmulateIPadLoginCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingEmulateIPadLogin:) target:self title:@"模拟 iPad 登录" on:[WCPLConfigCenter shared].login.emulateIPadLoginEnable];
}

- (void)settingEmulateIPadLogin:(UISwitch *)sender {
    [WCPLConfigCenter shared].login.emulateIPadLoginEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createTimelineAdBlockCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingTimelineAdBlock:) target:self title:@"屏蔽朋友圈广告" on:[WCPLConfigCenter shared].timeline.blockTimelineBrandAdsEnable];
}

- (void)settingTimelineAdBlock:(UISwitch *)sender {
    [WCPLConfigCenter shared].timeline.blockTimelineBrandAdsEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createDouyinParserCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingDouyinParserEnable:)
                                                                     target:self
                                                                      title:@"启用抖音链接解析"
                                                                         on:[WCPLConfigCenter shared].douyinParserEnable];
}

- (void)settingDouyinParserEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].douyinParserEnable = sender.on;
}

- (void)addMessageIgnoreSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息屏蔽" Footer:@"开启后可在用户资料页/群聊资料页开启屏蔽，屏蔽后不再接收其消息提醒。"];

    [section addCell:[self createUserIgnoreEnableCell]];
    [section addCell:[self createIgnoredChatroomCountCell]];
    [section addCell:[self createIgnoredUserCountCell]];
    [section addCell:[self createIgnoreResetCell]];

    [self.tableViewMgr addSection:section];
}

- (void)addGroupMonitorSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"群聊监控" Footer:@"开启后，当检测到群成员退出时，会在对应群会话插入本地提示消息。\n可设置生效范围：全部群聊 / 白名单。"];
    [section addCell:[self createQuitMonitorEnableCell]];
    [section addCell:[self createQuitMonitorScopeCell]];
    if ([WCPLConfigCenter shared].ignore.quitMonitorScope == WCPLQuitMonitorScopeWhitelist) {
        [section addCell:[self createQuitMonitorWhitelistCell]];
    }
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createUserIgnoreEnableCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingUserIgnoreEnable:) target:self title:@"启用消息屏蔽" on:[WCPLConfigCenter shared].ignore.userIgnoreEnable];
}

- (void)settingUserIgnoreEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].ignore.userIgnoreEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createQuitMonitorEnableCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingQuitMonitorEnable:)
                                                                     target:self
                                                                      title:@"退群监控提示"
                                                                         on:[WCPLConfigCenter shared].ignore.quitMonitorEnable];
}

- (void)settingQuitMonitorEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].ignore.quitMonitorEnable = sender.on;
}

- (NSString *)wcpl_quitMonitorScopeDisplayText {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    if (config.quitMonitorScope != WCPLQuitMonitorScopeWhitelist) {
        return @"全部群聊";
    }

    NSUInteger count = [self quitMonitorWhitelistedChatrooms].count;
    return count == 0 ? @"白名单 (未选)" : [NSString stringWithFormat:@"白名单 (%lu)", (unsigned long)count];
}

- (WCTableViewNormalCellManager *)createQuitMonitorScopeCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showQuitMonitorScopePicker)
                                                                     target:self
                                                                      title:@"生效范围"
                                                                 rightValue:[self wcpl_quitMonitorScopeDisplayText]
                                                              accessoryType:1];
}

- (void)showQuitMonitorScopePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"退群监控生效范围"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *allAction = [UIAlertAction actionWithTitle:@"全部群聊" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLConfigCenter shared].ignore.quitMonitorScope = WCPLQuitMonitorScopeAll;
        [self reloadTableData];
    }];

    UIAlertAction *whiteAction = [UIAlertAction actionWithTitle:@"仅白名单" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        [WCPLConfigCenter shared].ignore.quitMonitorScope = WCPLQuitMonitorScopeWhitelist;
        [self reloadTableData];
        [self showQuitMonitorWhitelistSelector];
    }];

    [alert addAction:allAction];
    [alert addAction:whiteAction];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createQuitMonitorWhitelistCell {
    NSArray<NSString *> *chatrooms = [self quitMonitorWhitelistedChatrooms];
    NSString *countText = [NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showQuitMonitorWhitelistSelector)
                                                                     target:self
                                                                      title:@"退群监控白名单"
                                                                 rightValue:countText
                                                              accessoryType:1];
}

- (NSArray<NSString *> *)quitMonitorWhitelistedChatrooms {
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.quitMonitorWhitelistInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location != NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (WCTableViewNormalCellManager *)createIgnoredChatroomCountCell {
    NSArray *chatrooms = [self ignoredChatroomUserNames];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showIgnoredChatroomList) target:self title:@"已屏蔽群聊" rightValue:[NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count] accessoryType:1];
}

- (WCTableViewNormalCellManager *)createIgnoredUserCountCell {
    NSArray *users = [self ignoredUserNames];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showIgnoredUserList) target:self title:@"已屏蔽用户" rightValue:[NSString stringWithFormat:@"%lu", (unsigned long)users.count] accessoryType:1];
}

- (WCTableViewNormalCellManager *)createIgnoreResetCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(resetAllIgnoredUsers) target:self title:@"重置所有屏蔽" rightValue:@"" accessoryType:1];
}

- (void)resetAllIgnoredUsers {
    NSArray<NSString *> *users = [self ignoredUserNames];
    NSArray<NSString *> *chatrooms = [self ignoredChatroomUserNames];
    if (users.count == 0 && chatrooms.count == 0) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"无需重置"
                                                                       message:@"当前没有已屏蔽对象"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    NSString *message = [NSString stringWithFormat:@"将清空已屏蔽用户(%lu)和群聊(%lu)", (unsigned long)users.count, (unsigned long)chatrooms.count];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"重置消息屏蔽"
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"重置" style:UIAlertActionStyleDestructive handler:^(__unused UIAlertAction *action) {
        WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
        config.userIgnoreInfo = [NSMutableDictionary dictionary];
        config.chatIgnoreInfo = [NSMutableDictionary dictionary];
        [config saveUserIgnoreNameListToLocalFile];
        [config saveChatIgnoreNameListToLocalFile];
        [WCPLFuncService syncIgnoredUsersToSystemNotifyStatus:@[] previousIgnoredUsers:users];
        WCPLLogInfo(@"[设置] 消息屏蔽已重置: users=%lu chatrooms=%lu", (unsigned long)users.count, (unsigned long)chatrooms.count);
        [self reloadTableData];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
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

- (NSArray<NSString *> *)wcpl_chatroomUserNamesFromArray:(NSArray<NSString *> *)userNames scene:(NSString *)scene {
    NSArray<NSString *> *sanitized = [self wcpl_sanitizedUserNamesFromArray:userNames];
    if (sanitized.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *chatrooms = [NSMutableArray array];
    NSUInteger dropped = 0;
    for (NSString *userName in sanitized) {
        if ([userName rangeOfString:@"@chatroom"].location != NSNotFound) {
            [chatrooms addObject:userName];
        } else {
            dropped += 1;
        }
    }

    if (dropped > 0) {
        WCPLLogWarning(@"[设置] 过滤非群聊项: scene=%@ dropped=%lu kept=%lu",
                       scene ?: @"",
                       (unsigned long)dropped,
                       (unsigned long)chatrooms.count);
    }
    return chatrooms;
}

- (NSArray<NSString *> *)wcpl_friendUserNamesFromArray:(NSArray<NSString *> *)userNames scene:(NSString *)scene {
    NSArray<NSString *> *sanitized = [self wcpl_sanitizedUserNamesFromArray:userNames];
    if (sanitized.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *friends = [NSMutableArray array];
    NSUInteger dropped = 0;
    for (NSString *userName in sanitized) {
        if ([userName rangeOfString:@"@chatroom"].location == NSNotFound) {
            [friends addObject:userName];
        } else {
            dropped += 1;
        }
    }

    if (dropped > 0) {
        WCPLLogWarning(@"[设置] 过滤群聊项: scene=%@ dropped=%lu kept=%lu",
                       scene ?: @"",
                       (unsigned long)dropped,
                       (unsigned long)friends.count);
    }
    return friends;
}

- (void)showIgnoredChatroomList {
    WCPLCrashBreadcrumb(@"打开已屏蔽群聊列表");
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:[self ignoredChatroomUserNames] scene:@"ignore_chatroom_open"];

    WCPLLogInfo(@"[设置] 屏蔽群聊使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"屏蔽群聊"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf updateChatIgnoreInfoWithChatrooms:userNames];
    }];
}

- (void)showIgnoredUserList {
    WCPLCrashBreadcrumb(@"打开已屏蔽好友列表");
    NSArray *selected = [self wcpl_friendUserNamesFromArray:[self ignoredUserNames] scene:@"ignore_user_open"];
    WCPLLogInfo(@"[设置] 屏蔽好友使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeContact
                                        title:@"屏蔽用户"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf updateUserIgnoreInfoWithUsers:userNames];
    }];
}

- (void)showQuitMonitorWhitelistSelector {
    WCPLCrashBreadcrumb(@"打开退群监控白名单");
    NSArray *selected = [self wcpl_chatroomUserNamesFromArray:[self quitMonitorWhitelistedChatrooms] scene:@"quit_monitor_whitelist_open"];
    WCPLLogInfo(@"[设置] 退群监控白名单使用统一控制器: selected=%lu", (unsigned long)selected.count);

    __weak typeof(self) weakSelf = self;
    [self wcpl_presentUnifiedSelectorWithType:WCPLUnifiedMultiSelectTypeChatroom
                                        title:@"退群监控白名单"
                                     selected:selected
                                       onDone:^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf updateQuitMonitorWhitelistWithChatrooms:userNames];
    }];
}

- (void)wcpl_presentUnifiedSelectorWithType:(WCPLUnifiedMultiSelectType)selectType
                                      title:(NSString *)title
                                   selected:(NSArray<NSString *> *)selected
                                     onDone:(void (^)(NSArray<NSString *> *userNames))onDone {
    WCPLUnifiedMultiSelectViewController *controller = [[WCPLUnifiedMultiSelectViewController alloc] initWithSelectType:selectType
                                                                                                        initialUserNames:selected];
    controller.titleText = title;

    __weak typeof(self) weakSelf = self;
    controller.onCancelBlock = ^{
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        [strongSelf dismissViewControllerAnimated:YES completion:nil];
    };
    controller.onDoneBlock = ^(NSArray<NSString *> *userNames) {
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf) {
            return;
        }
        if (onDone) {
            onDone(userNames);
        }
        [strongSelf reloadTableData];
        [strongSelf dismissViewControllerAnimated:YES completion:nil];
    };

    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:controller];
    [self presentViewController:navigationController animated:YES completion:nil];
}

- (void)updateChatIgnoreInfoWithChatrooms:(NSArray *)chatrooms {
    NSArray<NSString *> *sanitizedChatrooms = [self wcpl_chatroomUserNamesFromArray:chatrooms scene:@"ignore_chatroom_save"];
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *chatroom in sanitizedChatrooms) {
        dict[chatroom] = @(YES);
    }
    config.chatIgnoreInfo = dict;
    [config saveChatIgnoreNameListToLocalFile];
    WCPLLogInfo(@"[设置] 保存屏蔽群聊: count=%lu", (unsigned long)sanitizedChatrooms.count);
}

- (void)updateUserIgnoreInfoWithUsers:(NSArray *)users {
    NSArray<NSString *> *previousUsers = [self ignoredUserNames];
    NSArray<NSString *> *sanitizedUsers = [self wcpl_friendUserNamesFromArray:users scene:@"ignore_user_save"];
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *user in sanitizedUsers) {
        dict[user] = @(YES);
    }
    config.userIgnoreInfo = dict;
    [config saveUserIgnoreNameListToLocalFile];
    [WCPLFuncService syncIgnoredUsersToSystemNotifyStatus:sanitizedUsers previousIgnoredUsers:previousUsers];
    WCPLLogInfo(@"[设置] 保存屏蔽好友: count=%lu", (unsigned long)sanitizedUsers.count);
}

- (void)updateQuitMonitorWhitelistWithChatrooms:(NSArray *)chatrooms {
    NSArray<NSString *> *sanitizedChatrooms = [self wcpl_chatroomUserNamesFromArray:chatrooms scene:@"quit_monitor_whitelist_save"];
    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *chatroom in sanitizedChatrooms) {
        dict[chatroom] = @(YES);
    }
    config.quitMonitorWhitelistInfo = dict;
    [config saveQuitMonitorWhitelistToLocalFile];
    WCPLLogInfo(@"[设置] 保存退群监控白名单: count=%lu", (unsigned long)sanitizedChatrooms.count);
}

#pragma mark - Swipe Quote Setting

- (void)addSwipeQuoteSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息手势"];

    // 滑动手势开关
    [section addCell:[self createSwipeGestureSwitchCell]];

    // 只有启用滑动手势时才显示滑动相关设置
    if ([WCPLConfigCenter shared].gesture.swipeGestureEnable) {
        // 灵敏度
        [section addCell:[self createSwipeSensitivityCell]];

        // 手势引用时自动@发送者（独立开关，不跟左右滑配置绑定）
        [section addCell:[self createSwipeQuoteAtUserCell]];

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

    // 双击配置独立于滑动开关
    [section addCell:[self createDoubleTapGestureSwitchCell]];
    if ([WCPLConfigCenter shared].gesture.doubleTapGestureEnable) {
        [section addCell:[self createDoubleTapOtherActionCell]];
        [section addCell:[self createDoubleTapSelfActionCell]];
    }

    [self.tableViewMgr addSection:section];
}

- (void)addRepeatBubbleSettingSection {
    WCPLGestureConfig *gestureConfig = [WCPLConfigCenter shared].gesture;
    [[WCPLRepeatButtonAssetManager sharedManager] migrateIfNeededForConfig:gestureConfig];

    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"复读气泡"];
    [section addCell:[self createRepeatButtonSwitchCell]];

    if (gestureConfig.repeatButtonEnable) {
        [section addCell:[self createRepeatButtonHapticCell]];
        [section addCell:[self createRepeatButtonSizeCell]];
        [section addCell:[self createRepeatCustomImageSwitchCell]];
        [section addCell:[self createRepeatCustomImagePickerCell]];
        if (gestureConfig.repeatButtonCustomImageRelativePath.length > 0) {
            [section addCell:[self createRepeatCustomImageResetCell]];
        }
        [section addCell:[self createRepeatSupportEmoticonCell]];
        [section addCell:[self createRepeatSupportVoiceCell]];
        [section addCell:[self createRepeatSupportImageCell]];
        [section addCell:[self createRepeatSupportVideoCell]];
    }

    [self.tableViewMgr addSection:section];
}

- (void)addLongPressPanelSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"长按面板" Footer:@"控制消息长按菜单中的复读、小丑、语音转发与抖音解析。"];
    [section addCell:[self createRepeatLongPressMenuSwitchCell]];
    [section addCell:[self createClownFeatureSwitchCell]];
    [section addCell:[self createVoiceForwardFeatureSwitchCell]];
    [section addCell:[self createDouyinParserCell]];
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
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeGesture:) target:self title:@"启用滑动手势" on:[WCPLConfigCenter shared].gesture.swipeGestureEnable];
}

- (WCTableViewNormalCellManager *)createRepeatButtonSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatButton:) target:self title:@"启用气泡复读按钮" on:[WCPLConfigCenter shared].gesture.repeatButtonEnable];
}

- (WCTableViewNormalCellManager *)createRepeatLongPressMenuSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatLongPressMenuEnable:)
                                                                     target:self
                                                                      title:@"启用长按面板复读"
                                                                         on:[WCPLConfigCenter shared].gesture.repeatLongPressMenuEnable];
}

- (WCTableViewNormalCellManager *)createClownFeatureSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingClownFeatureEnable:)
                                                                     target:self
                                                                      title:@"启用小丑功能"
                                                                         on:[WCPLConfigCenter shared].gesture.clownFeatureEnable];
}

- (WCTableViewNormalCellManager *)createVoiceForwardFeatureSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingVoiceForwardFeatureEnable:)
                                                                     target:self
                                                                      title:@"启用语音转发"
                                                                         on:[WCPLConfigCenter shared].gesture.voiceForwardFeatureEnable];
}

- (WCTableViewNormalCellManager *)createRepeatButtonHapticCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatButtonHaptic:) target:self title:@"  点击震动反馈" on:[WCPLConfigCenter shared].gesture.repeatButtonHapticEnable];
}

- (WCTableViewNormalCellManager *)createRepeatButtonSizeCell {
    CGFloat size = [WCPLConfigCenter shared].gesture.repeatButtonSize;
    NSString *sizeValue = [NSString stringWithFormat:@"%.0f", size];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showRepeatButtonSizePicker) target:self title:@"  按钮大小" rightValue:sizeValue accessoryType:1];
}

- (NSString *)wcpl_repeatCustomImageStatusText {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.repeatButtonCustomImageRelativePath.length == 0) {
        return @"未设置";
    }
    return config.repeatButtonCustomImageEnable ? @"已启用" : @"已设置";
}

- (WCTableViewNormalCellManager *)createRepeatCustomImageSwitchCell {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    BOOL on = config.repeatButtonCustomImageEnable && config.repeatButtonCustomImageRelativePath.length > 0;
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatCustomImageEnable:) target:self title:@"  使用自定义图片按钮" on:on];
}

- (WCTableViewNormalCellManager *)createRepeatCustomImagePickerCell {
    NSString *status = [self wcpl_repeatCustomImageStatusText];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showRepeatCustomImageActionSheet) target:self title:@"  上传按钮图片" rightValue:status accessoryType:1];
}

- (WCTableViewNormalCellManager *)createRepeatCustomImageResetCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(confirmResetRepeatCustomImage) target:self title:@"  恢复默认图标" rightValue:@"" accessoryType:0];
}

- (WCTableViewNormalCellManager *)createRepeatSupportEmoticonCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatSupportEmoticon:) target:self title:@"  支持表情包消息" on:[WCPLConfigCenter shared].gesture.repeatSupportEmoticonEnable];
}

- (WCTableViewNormalCellManager *)createRepeatSupportVoiceCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatSupportVoice:) target:self title:@"  支持语音消息" on:[WCPLConfigCenter shared].gesture.repeatSupportVoiceEnable];
}

- (WCTableViewNormalCellManager *)createRepeatSupportImageCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatSupportImage:) target:self title:@"  支持图片消息" on:[WCPLConfigCenter shared].gesture.repeatSupportImageEnable];
}

- (WCTableViewNormalCellManager *)createRepeatSupportVideoCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatSupportVideo:) target:self title:@"  支持视频消息" on:[WCPLConfigCenter shared].gesture.repeatSupportVideoEnable];
}

- (WCTableViewNormalCellManager *)createSwipeSensitivityCell {
    NSInteger level = [WCPLConfigCenter shared].gesture.swipeSensitivityLevel;
    NSString *name = [self swipeSensitivityNameForLevel:level];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeSensitivityPicker) target:self title:@"  手势灵敏度" rightValue:name accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeQuoteSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeQuote:) target:self title:@"  消息左滑功能" on:[WCPLConfigCenter shared].gesture.swipeQuoteEnable];
}

- (WCTableViewNormalCellManager *)createSwipeQuoteAtUserCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeQuoteAtUser:) target:self title:@"  引用时自动@发送者" on:[WCPLConfigCenter shared].gesture.swipeQuoteAtUserEnable];
}

- (WCTableViewNormalCellManager *)createSwipeRightSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeRight:) target:self title:@"  消息右滑功能" on:[WCPLConfigCenter shared].gesture.swipeRightEnable];
}

- (WCTableViewNormalCellManager *)createTapReferJumpSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingTapReferJump:) target:self title:@"  引用消息点击跳转" on:[WCPLConfigCenter shared].gesture.tapReferJumpEnable];
}

- (WCTableViewNormalCellManager *)createDoubleTapGestureSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingDoubleTapGesture:) target:self title:@"  消息双击功能" on:[WCPLConfigCenter shared].gesture.doubleTapGestureEnable];
}

- (WCTableViewNormalCellManager *)createMessageTimeSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMessageTimeDisplay:)
                                                                     target:self
                                                                      title:@"头像下方显示时间(HH:mm:ss)"
                                                                         on:[WCPLConfigCenter shared].gesture.messageTimeEnable];
}

// 获取对方消息操作名称（引用、关闭、删除、复读、转发）
- (NSString *)actionNameForOtherMessage:(NSInteger)action {
    switch (action) {
        case 0: return @"引用";
        case 1: return @"关闭";
        case 2: return @"删除";
        case 4: return @"复读";
        case 5: return @"转发";
        default: return @"引用";
    }
}

// 获取己方消息操作名称（引用、关闭、删除、撤回、复读、转发）
- (NSString *)actionNameForSelfMessage:(NSInteger)action {
    switch (action) {
        case 0: return @"引用";
        case 1: return @"关闭";
        case 2: return @"删除";
        case 3: return @"撤回";
        case 4: return @"复读";
        case 5: return @"转发";
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

- (WCTableViewNormalCellManager *)createDoubleTapOtherActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.doubleTapOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showDoubleTapOtherActionPicker) target:self title:@"      双击对方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createDoubleTapSelfActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.doubleTapSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showDoubleTapSelfActionPicker) target:self title:@"      双击己方消息" rightValue:actionName accessoryType:1];
}

- (void)settingSwipeGesture:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.swipeGestureEnable = sender.on;
    WCPLLogInfo(@"Swipe gesture feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingRepeatButton:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatButtonEnable = sender.on;
    WCPLLogInfo(@"Repeat bubble button changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingRepeatLongPressMenuEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatLongPressMenuEnable = sender.on;
    WCPLLogInfo(@"Repeat long press menu changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingClownFeatureEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.clownFeatureEnable = sender.on;
    WCPLLogInfo(@"Clown feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingVoiceForwardFeatureEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.voiceForwardFeatureEnable = sender.on;
    WCPLLogInfo(@"Voice forward feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingRepeatButtonHaptic:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatButtonHapticEnable = sender.on;
    WCPLLogInfo(@"Repeat bubble haptic changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)showRepeatButtonSizePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"复读按钮大小"
                                                                   message:@"范围 16~30，数值越大按钮越大"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    NSArray<NSNumber *> *sizes = @[@16, @18, @20, @22, @24, @26, @28, @30];
    for (NSNumber *size in sizes) {
        NSString *title = [NSString stringWithFormat:@"%@", size];
        [alert addAction:[UIAlertAction actionWithTitle:title style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
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
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)wcpl_presentSimpleAlertWithTitle:(NSString *)title message:(NSString *)message {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"知道了" style:UIAlertActionStyleDefault handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)settingRepeatCustomImageEnable:(UISwitch *)sender {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (sender.on && config.repeatButtonCustomImageRelativePath.length == 0) {
        sender.on = NO;
        self.wcplPendingEnableRepeatCustomImageAfterPick = YES;
        [self wcpl_presentRepeatCustomImagePicker];
        return;
    }

    config.repeatButtonCustomImageEnable = sender.on;
    [[NSNotificationCenter defaultCenter] postNotificationName:kWCPLRepeatButtonAssetDidChangeNotification object:nil];
    WCPLLogInfo(@"Repeat custom image mode changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)showRepeatCustomImageActionSheet {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"自定义复读按钮图片"
                                                                   message:@"上传后会自动处理为圆形按钮图，并按按钮尺寸加载。"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    [alert addAction:[UIAlertAction actionWithTitle:@"从相册选择"
                                              style:UIAlertActionStyleDefault
                                            handler:^(__unused UIAlertAction *action) {
        [self wcpl_presentRepeatCustomImagePicker];
    }]];

    if (config.repeatButtonCustomImageRelativePath.length > 0) {
        [alert addAction:[UIAlertAction actionWithTitle:@"恢复默认图标"
                                                  style:UIAlertActionStyleDestructive
                                                handler:^(__unused UIAlertAction *action) {
            [self confirmResetRepeatCustomImage];
        }]];
    }

    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)confirmResetRepeatCustomImage {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"恢复默认图标"
                                                                   message:@"清除已上传图片并回退到默认图标样式。"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确认恢复"
                                              style:UIAlertActionStyleDestructive
                                            handler:^(__unused UIAlertAction *action) {
        [self resetRepeatCustomImage];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)resetRepeatCustomImage {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    [[WCPLRepeatButtonAssetManager sharedManager] resetCustomButtonImageForConfig:config];
    config.repeatButtonCustomImageEnable = NO;
    self.wcplPendingEnableRepeatCustomImageAfterPick = NO;
    WCPLLogInfo(@"Repeat custom image reset by user");
    [self reloadTableData];
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

- (void)settingRepeatSupportEmoticon:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatSupportEmoticonEnable = sender.on;
    WCPLLogInfo(@"Repeat emoticon support changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingRepeatSupportVoice:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatSupportVoiceEnable = sender.on;
    WCPLLogInfo(@"Repeat voice support changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingRepeatSupportImage:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatSupportImageEnable = sender.on;
    WCPLLogInfo(@"Repeat image support changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingRepeatSupportVideo:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.repeatSupportVideoEnable = sender.on;
    WCPLLogInfo(@"Repeat video support changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

- (void)settingSwipeQuote:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.swipeQuoteEnable = sender.on;
    WCPLLogInfo(@"Swipe left feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingSwipeQuoteAtUser:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.swipeQuoteAtUserEnable = sender.on;
    WCPLLogInfo(@"Swipe quote mention changed: %@", sender.on ? @"Enabled" : @"Disabled");
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

- (void)settingDoubleTapGesture:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.doubleTapGestureEnable = sender.on;
    WCPLLogInfo(@"Double tap message feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingMessageTimeDisplay:(UISwitch *)sender {
    [WCPLConfigCenter shared].gesture.messageTimeEnable = sender.on;
    WCPLLogInfo(@"Message time display changed: %@", sender.on ? @"Enabled" : @"Disabled");
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

// 双击对方消息操作选择器
- (void)showDoubleTapOtherActionPicker {
    [self showActionPickerWithTitle:@"双击对方消息操作"
                           isSelf:NO
                       completion:^(NSInteger action) {
        [WCPLConfigCenter shared].gesture.doubleTapOtherAction = action;
        [self reloadTableData];
    }];
}

// 双击己方消息操作选择器
- (void)showDoubleTapSelfActionPicker {
    [self showActionPickerWithTitle:@"双击己方消息操作"
                           isSelf:YES
                       completion:^(NSInteger action) {
        [WCPLConfigCenter shared].gesture.doubleTapSelfAction = action;
        [self reloadTableData];
    }];
}

// 通用操作选择器
- (void)showActionPickerWithTitle:(NSString *)title isSelf:(BOOL)isSelf completion:(void(^)(NSInteger action))completion {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *quoteAction = [UIAlertAction actionWithTitle:@"引用" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(0);
    }];

    UIAlertAction *repeatAction = [UIAlertAction actionWithTitle:@"复读" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(4);
    }];

    UIAlertAction *forwardAction = [UIAlertAction actionWithTitle:@"转发" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(5);
    }];

    UIAlertAction *closeAction = [UIAlertAction actionWithTitle:@"关闭" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(1);
    }];

    UIAlertAction *deleteAction = [UIAlertAction actionWithTitle:@"删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        if (completion) completion(2);
    }];

    [alert addAction:quoteAction];
    [alert addAction:repeatAction];
    [alert addAction:forwardAction];
    [alert addAction:closeAction];
    [alert addAction:deleteAction];

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

@end
