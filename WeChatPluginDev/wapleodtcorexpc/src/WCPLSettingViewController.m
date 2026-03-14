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

#pragma mark - Advanced Setting

- (WCTableViewNormalCellManager *)createQueueCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingReceiveByQueue:) target:self title:@"防止同时抢多个红包" on:[WCPLRedEnvelopConfig sharedConfig].serialReceive];
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [WCPLRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

#pragma mark - Other

- (WCTableViewNormalCellManager *)createMarkAllReadTopRightMenuEnableCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMarkAllReadTopRightMenuEnable:)
                                                                     target:self
                                                                      title:@"右上角+ 一键已读"
                                                                         on:[WCPLConfigCenter shared].markAllReadTopRightMenuEnable];
}

- (void)settingMarkAllReadTopRightMenuEnable:(UISwitch *)sender {
    [WCPLConfigCenter shared].markAllReadTopRightMenuEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createLogEntryCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(openDebugSettings) target:self title:@"日志设置" rightValue:@"" accessoryType:1];
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

- (WCTableViewNormalCellManager *)createQuitMonitorWhitelistCell {
    NSArray<NSString *> *chatrooms = [self quitMonitorWhitelistedChatrooms];
    NSString *countText = [NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showQuitMonitorWhitelistSelector)
                                                                     target:self
                                                                      title:@"退群监控白名单"
                                                                 rightValue:countText
                                                              accessoryType:1];
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
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(confirmResetRepeatCustomImage) target:self title:@"  恢复默认 +1 按钮" rightValue:@"" accessoryType:0];
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
