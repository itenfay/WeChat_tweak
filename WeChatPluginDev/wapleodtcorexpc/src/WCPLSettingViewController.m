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
#import "WCPLLogger.h"
#import "WCPLCrashReporter.h"
#import "WCPLRepeatButtonAssetManager.h"
#import "WCPLPureHelpers.h"
#import "WCPLSettingsPageContext.h"
#import "WCPLSettingsPickerCoordinator.h"
#import "WCPLSettingsPageRouter.h"
#import "WCPLSettingsSelectionCoordinator.h"
#import "WCPLSettingsSelectionStore.h"
#import "WCPLSettingsSectionFactory.h"
#import "WCPLSettingsTableViewManagerFactory.h"
#import "WCHookTableViewFactory.h"
#import "WCPLWeChatUIHeaders.h"
#import <objc/runtime.h>

@interface WCPLSettingViewController ()

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;
@property (nonatomic, assign) WCPLSettingPageType pageType;
@property (nonatomic, strong, nullable) UIImagePickerController *wcplRepeatImagePicker;
@property (nonatomic, assign) BOOL wcplPendingEnableRepeatCustomImageAfterPick;

- (instancetype)initWithPageType:(WCPLSettingPageType)pageType;
- (void)wcpl_setupTableViewManager;

@end

@implementation WCPLSettingViewController

static WCTableViewNormalCellManager *wcpl_settingsSwitchCell(WCPLSettingViewController *target,
                                                             SEL action,
                                                             NSString *title,
                                                             NSString *descriptor,
                                                             BOOL on) {
    return (WCTableViewNormalCellManager *)[WCHookTableViewFactory switchCellWithTitle:title
                                                                            descriptor:descriptor
                                                                                    on:on
                                                                                target:target
                                                                                action:action];
}

static WCTableViewNormalCellManager *wcpl_settingsNavigationCell(WCPLSettingViewController *target,
                                                                 SEL action,
                                                                 NSString *title,
                                                                 NSString *detail,
                                                                 UITableViewCellAccessoryType accessoryType) {
    NSString *rightValue = [detail isKindOfClass:[NSString class]] ? detail : @"";
    return (WCTableViewNormalCellManager *)[WCHookTableViewFactory navigationCellWithTitle:title
                                                                                    detail:rightValue
                                                                                    target:target
                                                                                    action:action
                                                                            accessoryType:accessoryType];
}

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

    _tableViewMgr = WCPLCreateSettingsTableViewManager(UITableViewStyleGrouped);
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
    self.title = WCPLSettingsTitleForPageType(self.pageType);
    
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
            [self wcpl_addTopLevelEntrySection];
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

- (WCTableViewNormalCellManager *)createAutoReceiveRedEnvelopCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(switchRedEnvelop:),
                                   @"自动领取红包",
                                   nil,
                                   [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable);
}

- (void)switchRedEnvelop:(UISwitch *)envelopSwitch {
    [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable = envelopSwitch.on;
    [self reloadTableData];
}

- (WCTableViewNormalCellManager *)createReceiveSelfRedEnvelopCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingReceiveSelfRedEnvelop:),
                                   @"领取自己的群红包",
                                   nil,
                                   [WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop);
}

- (void)settingReceiveSelfRedEnvelop:(UISwitch *)receiveSwitch {
    [WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop = receiveSwitch.on;
}

- (WCTableViewNormalCellManager *)createDelaySettingCell {
    NSInteger delaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;
    NSString *delayString  = delaySeconds == 0 ? @"不延迟" : [NSString stringWithFormat:@"%ld 秒", (long)delaySeconds];
    
    return wcpl_settingsNavigationCell(self,
                                       @selector(settingDelay),
                                       @"延迟抢红包",
                                       delayString,
                                       UITableViewCellAccessoryDisclosureIndicator);
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
    return wcpl_settingsNavigationCell(self,
                                       @selector(showRedEnvelopNotifyTargetPicker),
                                       @"抢包通知",
                                       [self wcpl_redEnvelopNotifyTargetDisplayText],
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createReceiveDonePageSummaryCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingReceiveDonePageSummary:),
                                   @"红包详情始终显示",
                                   nil,
                                   [WCPLRedEnvelopConfig sharedConfig].receiveDonePageSummaryEnable);
}

- (void)settingReceiveDonePageSummary:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].receiveDonePageSummaryEnable = sender.on;
}

#pragma mark - Red Envelop Advanced (Private/Group)

- (WCTableViewNormalCellManager *)createPrivateRedEnvelopCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingPrivateRedEnvelop:),
                                   @"私聊红包",
                                   nil,
                                   [WCPLRedEnvelopConfig sharedConfig].privateRedEnvelopEnable);
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
    return wcpl_settingsNavigationCell(self,
                                       @selector(showPrivateAutoReplyInput),
                                       @"私聊自动回复",
                                       preview,
                                       UITableViewCellAccessoryDisclosureIndicator);
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
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingGroupRedEnvelop:),
                                   @"群聊红包",
                                   nil,
                                   [WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopEnable);
}

- (WCTableViewNormalCellManager *)createGroupAutoReplyCell {
    NSString *preview = [self wcpl_autoReplyPreviewText:[WCPLRedEnvelopConfig sharedConfig].groupAutoReplyText];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showGroupAutoReplyInput),
                                       @"群聊自动回复",
                                       preview,
                                       UITableViewCellAccessoryDisclosureIndicator);
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
    return wcpl_settingsNavigationCell(self,
                                       @selector(showGroupScopePicker),
                                       @"生效范围",
                                       [self wcpl_groupScopeDisplayText],
                                       UITableViewCellAccessoryDisclosureIndicator);
}

#pragma mark - Advanced Setting

- (WCTableViewNormalCellManager *)createQueueCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingReceiveByQueue:),
                                   @"防止同时抢多个红包",
                                   nil,
                                   [WCPLRedEnvelopConfig sharedConfig].serialReceive);
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [WCPLRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

#pragma mark - Other

- (WCTableViewNormalCellManager *)createMarkAllReadTopRightMenuEnableCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingMarkAllReadTopRightMenuEnable:),
                                   @"右上角+ 一键已读",
                                   nil,
                                   [WCPLConfigCenter shared].markAllReadTopRightMenuEnable);
}

- (void)settingMarkAllReadTopRightMenuEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].markAllReadTopRightMenuEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createLogEntryCell {
    return wcpl_settingsNavigationCell(self,
                                       @selector(openDebugSettings),
                                       @"日志设置",
                                       @"",
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createAbortRemokeMessageCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingMessageRevoke:),
                                   @"消息防撤回",
                                   nil,
                                   [WCPLConfigCenter shared].revoke.revokeEnable);
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [WCPLConfigCenter shared].revoke.revokeEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createEmulateIPadLoginCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingEmulateIPadLogin:),
                                   @"模拟 iPad 登录",
                                   nil,
                                   [WCPLConfigCenter shared].login.emulateIPadLoginEnable);
}

- (void)settingEmulateIPadLogin:(UISwitch *)sender {
    [WCPLConfigCenter shared].login.emulateIPadLoginEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createTimelineAdBlockCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingTimelineAdBlock:),
                                   @"屏蔽朋友圈广告",
                                   nil,
                                   [WCPLConfigCenter shared].timeline.blockTimelineBrandAdsEnable);
}

- (void)settingTimelineAdBlock:(UISwitch *)sender {
    [WCPLConfigCenter shared].timeline.blockTimelineBrandAdsEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createDouyinParserCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingDouyinParserEnable:),
                                   @"启用抖音链接解析",
                                   nil,
                                   [WCPLConfigCenter shared].douyinParserEnable);
}

- (void)settingDouyinParserEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].douyinParserEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createUserIgnoreEnableCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingUserIgnoreEnable:),
                                   @"启用消息屏蔽",
                                   nil,
                                   [WCPLConfigCenter shared].ignore.userIgnoreEnable);
}

- (void)settingUserIgnoreEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].ignore.userIgnoreEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createQuitMonitorEnableCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingQuitMonitorEnable:),
                                   @"退群监控提示",
                                   nil,
                                   [WCPLConfigCenter shared].ignore.quitMonitorEnable);
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
    return wcpl_settingsNavigationCell(self,
                                       @selector(showQuitMonitorScopePicker),
                                       @"生效范围",
                                       [self wcpl_quitMonitorScopeDisplayText],
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createQuitMonitorWhitelistCell {
    NSArray<NSString *> *chatrooms = [self quitMonitorWhitelistedChatrooms];
    NSString *countText = [NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showQuitMonitorWhitelistSelector),
                                       @"退群监控白名单",
                                       countText,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createIgnoredChatroomCountCell {
    NSArray *chatrooms = [self ignoredChatroomUserNames];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showIgnoredChatroomList),
                                       @"已屏蔽群聊",
                                       [NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count],
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createIgnoredUserCountCell {
    NSArray *users = [self ignoredUserNames];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showIgnoredUserList),
                                       @"已屏蔽用户",
                                       [NSString stringWithFormat:@"%lu", (unsigned long)users.count],
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createIgnoreResetCell {
    return wcpl_settingsNavigationCell(self,
                                       @selector(resetAllIgnoredUsers),
                                       @"重置所有屏蔽",
                                       @"",
                                       UITableViewCellAccessoryDisclosureIndicator);
}

#pragma mark - Swipe Quote Setting

- (NSString *)swipeSensitivityNameForLevel:(NSInteger)level {
    switch (level) {
        case 0: return @"低";
        case 2: return @"高";
        case 1:
        default: return @"中";
    }
}

- (WCTableViewNormalCellManager *)createSwipeGestureSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingSwipeGesture:),
                                   @"启用滑动手势",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.swipeGestureEnable);
}

- (WCTableViewNormalCellManager *)createRepeatButtonSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatButton:),
                                   @"启用气泡复读按钮",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatButtonEnable);
}

- (WCTableViewNormalCellManager *)createRepeatLongPressMenuSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatLongPressMenuEnable:),
                                   @"启用长按面板复读",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatLongPressMenuEnable);
}

- (WCTableViewNormalCellManager *)createClownFeatureSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingClownFeatureEnable:),
                                   @"启用小丑功能",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.clownFeatureEnable);
}

- (WCTableViewNormalCellManager *)createVoiceForwardFeatureSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingVoiceForwardFeatureEnable:),
                                   @"启用语音转发",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.voiceForwardFeatureEnable);
}

- (WCTableViewNormalCellManager *)createRepeatButtonHapticCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatButtonHaptic:),
                                   @"  点击震动反馈",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatButtonHapticEnable);
}

- (WCTableViewNormalCellManager *)createRepeatButtonSizeCell {
    CGFloat size = [WCPLConfigCenter shared].gesture.repeatButtonSize;
    NSString *sizeValue = [NSString stringWithFormat:@"%.0f", size];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showRepeatButtonSizePicker),
                                       @"  按钮大小",
                                       sizeValue,
                                       UITableViewCellAccessoryDisclosureIndicator);
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
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatCustomImageEnable:),
                                   @"  使用自定义图片按钮",
                                   nil,
                                   on);
}

- (WCTableViewNormalCellManager *)createRepeatCustomImagePickerCell {
    NSString *status = [self wcpl_repeatCustomImageStatusText];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showRepeatCustomImageActionSheet),
                                       @"  上传按钮图片",
                                       status,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createRepeatCustomImageResetCell {
    return wcpl_settingsNavigationCell(self,
                                       @selector(confirmResetRepeatCustomImage),
                                       @"  恢复默认 +1 按钮",
                                       @"",
                                       UITableViewCellAccessoryNone);
}

- (WCTableViewNormalCellManager *)createRepeatSupportEmoticonCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatSupportEmoticon:),
                                   @"  支持表情包消息",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatSupportEmoticonEnable);
}

- (WCTableViewNormalCellManager *)createRepeatSupportVoiceCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatSupportVoice:),
                                   @"  支持语音消息",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatSupportVoiceEnable);
}

- (WCTableViewNormalCellManager *)createRepeatSupportImageCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatSupportImage:),
                                   @"  支持图片消息",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatSupportImageEnable);
}

- (WCTableViewNormalCellManager *)createRepeatSupportVideoCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingRepeatSupportVideo:),
                                   @"  支持视频消息",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.repeatSupportVideoEnable);
}

- (WCTableViewNormalCellManager *)createSwipeSensitivityCell {
    NSInteger level = [WCPLConfigCenter shared].gesture.swipeSensitivityLevel;
    NSString *name = [self swipeSensitivityNameForLevel:level];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showSwipeSensitivityPicker),
                                       @"  手势灵敏度",
                                       name,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createSwipeQuoteSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingSwipeQuote:),
                                   @"  消息左滑功能",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.swipeQuoteEnable);
}

- (WCTableViewNormalCellManager *)createSwipeQuoteAtUserCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingSwipeQuoteAtUser:),
                                   @"  引用时自动@发送者",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.swipeQuoteAtUserEnable);
}

- (WCTableViewNormalCellManager *)createSwipeRightSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingSwipeRight:),
                                   @"  消息右滑功能",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.swipeRightEnable);
}

- (WCTableViewNormalCellManager *)createTapReferJumpSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingTapReferJump:),
                                   @"  引用消息点击跳转",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.tapReferJumpEnable);
}

- (WCTableViewNormalCellManager *)createDoubleTapGestureSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingDoubleTapGesture:),
                                   @"  消息双击功能",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.doubleTapGestureEnable);
}

- (WCTableViewNormalCellManager *)createMessageTimeSwitchCell {
    return wcpl_settingsSwitchCell(self,
                                   @selector(settingMessageTimeDisplay:),
                                   @"头像下方显示时间(HH:mm:ss)",
                                   nil,
                                   [WCPLConfigCenter shared].gesture.messageTimeEnable);
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
    return wcpl_settingsNavigationCell(self,
                                       @selector(showSwipeLeftOtherActionPicker),
                                       @"      左滑对方消息",
                                       actionName,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createSwipeLeftSelfActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeLeftSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showSwipeLeftSelfActionPicker),
                                       @"      左滑己方消息",
                                       actionName,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createSwipeRightOtherActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeRightOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showSwipeRightOtherActionPicker),
                                       @"      右滑对方消息",
                                       actionName,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createSwipeRightSelfActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.swipeRightSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showSwipeRightSelfActionPicker),
                                       @"      右滑己方消息",
                                       actionName,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createDoubleTapOtherActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.doubleTapOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showDoubleTapOtherActionPicker),
                                       @"      双击对方消息",
                                       actionName,
                                       UITableViewCellAccessoryDisclosureIndicator);
}

- (WCTableViewNormalCellManager *)createDoubleTapSelfActionCell {
    NSInteger action = [WCPLConfigCenter shared].gesture.doubleTapSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return wcpl_settingsNavigationCell(self,
                                       @selector(showDoubleTapSelfActionPicker),
                                       @"      双击己方消息",
                                       actionName,
                                       UITableViewCellAccessoryDisclosureIndicator);
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

- (void)resetRepeatCustomImage {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    [[WCPLRepeatButtonAssetManager sharedManager] resetCustomButtonImageForConfig:config];
    config.repeatButtonCustomImageEnable = NO;
    self.wcplPendingEnableRepeatCustomImageAfterPick = NO;
    WCPLLogInfo(@"Repeat custom image reset by user");
    [self reloadTableData];
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

@end
