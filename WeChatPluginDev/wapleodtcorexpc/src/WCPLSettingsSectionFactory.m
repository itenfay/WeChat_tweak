#import "WCPLSettingsSectionFactory.h"

#import "WCPLConfigCenter.h"
#import "WCPLRepeatButtonAssetManager.h"
#import "WCPLWeChatUIHeaders.h"
#import <objc/runtime.h>

@interface WCPLSettingViewController (WCPLSettingsSectionFactoryPrivate)

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;

- (WCTableViewNormalCellManager *)createAbortRemokeMessageCell;
- (WCTableViewNormalCellManager *)createClownFeatureSwitchCell;
- (WCTableViewNormalCellManager *)createDelaySettingCell;
- (WCTableViewNormalCellManager *)createDouyinParserCell;
- (WCTableViewNormalCellManager *)createEmulateIPadLoginCell;
- (WCTableViewNormalCellManager *)createGroupAutoReplyCell;
- (WCTableViewNormalCellManager *)createGroupRedEnvelopCell;
- (WCTableViewNormalCellManager *)createGroupScopeCell;
- (WCTableViewNormalCellManager *)createIgnoredChatroomCountCell;
- (WCTableViewNormalCellManager *)createIgnoredUserCountCell;
- (WCTableViewNormalCellManager *)createIgnoreResetCell;
- (WCTableViewNormalCellManager *)createLogEntryCell;
- (WCTableViewNormalCellManager *)createMarkAllReadTopRightMenuEnableCell;
- (WCTableViewNormalCellManager *)createMessageTimeSwitchCell;
- (WCTableViewNormalCellManager *)createPrivateAutoReplyCell;
- (WCTableViewNormalCellManager *)createPrivateRedEnvelopCell;
- (WCTableViewNormalCellManager *)createDoubleTapGestureSwitchCell;
- (WCTableViewNormalCellManager *)createDoubleTapOtherActionCell;
- (WCTableViewNormalCellManager *)createDoubleTapSelfActionCell;
- (WCTableViewNormalCellManager *)createQueueCell;
- (WCTableViewNormalCellManager *)createReceiveDonePageSummaryCell;
- (WCTableViewNormalCellManager *)createReceiveSelfRedEnvelopCell;
- (WCTableViewNormalCellManager *)createRedEnvelopNotifyTargetCell;
- (WCTableViewNormalCellManager *)createAutoReceiveRedEnvelopCell;
- (WCTableViewNormalCellManager *)createRepeatButtonHapticCell;
- (WCTableViewNormalCellManager *)createRepeatButtonSizeCell;
- (WCTableViewNormalCellManager *)createRepeatButtonSwitchCell;
- (WCTableViewNormalCellManager *)createRepeatCustomImagePickerCell;
- (WCTableViewNormalCellManager *)createRepeatCustomImageResetCell;
- (WCTableViewNormalCellManager *)createRepeatCustomImageSwitchCell;
- (WCTableViewNormalCellManager *)createRepeatSupportEmoticonCell;
- (WCTableViewNormalCellManager *)createRepeatSupportImageCell;
- (WCTableViewNormalCellManager *)createRepeatSupportVideoCell;
- (WCTableViewNormalCellManager *)createRepeatSupportVoiceCell;
- (WCTableViewNormalCellManager *)createQuitMonitorEnableCell;
- (WCTableViewNormalCellManager *)createQuitMonitorScopeCell;
- (WCTableViewNormalCellManager *)createQuitMonitorWhitelistCell;
- (WCTableViewNormalCellManager *)createRepeatLongPressMenuSwitchCell;
- (WCTableViewNormalCellManager *)createSwipeGestureSwitchCell;
- (WCTableViewNormalCellManager *)createSwipeLeftOtherActionCell;
- (WCTableViewNormalCellManager *)createSwipeLeftSelfActionCell;
- (WCTableViewNormalCellManager *)createSwipeQuoteAtUserCell;
- (WCTableViewNormalCellManager *)createSwipeQuoteSwitchCell;
- (WCTableViewNormalCellManager *)createSwipeRightOtherActionCell;
- (WCTableViewNormalCellManager *)createSwipeRightSelfActionCell;
- (WCTableViewNormalCellManager *)createSwipeRightSwitchCell;
- (WCTableViewNormalCellManager *)createSwipeSensitivityCell;
- (WCTableViewNormalCellManager *)createTapReferJumpSwitchCell;
- (WCTableViewNormalCellManager *)createTimelineAdBlockCell;
- (WCTableViewNormalCellManager *)createUserIgnoreEnableCell;
- (WCTableViewNormalCellManager *)createVoiceForwardFeatureSwitchCell;
- (void)settingBackgroundPush2ChatModeChanged:(UISegmentedControl *)sender;
- (void)settingForegroundPush2ChatModeChanged:(UISegmentedControl *)sender;

@end

@implementation WCPLSettingViewController (WCPLSettingsSectionFactory)

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

- (void)addAdvanceSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"红包高级功能"];
    [section addCell:[self createQueueCell]];
    [self.tableViewMgr addSection:section];
}

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

- (void)addOtherSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"其他"];
    [section addCell:[self createTimelineAdBlockCell]];
    [section addCell:[self createEmulateIPadLoginCell]];
    [section addCell:[self createAbortRemokeMessageCell]];
    [section addCell:[self createMessageTimeSwitchCell]];
    [section addCell:[self createMarkAllReadTopRightMenuEnableCell]];
    [self.tableViewMgr addSection:section];
}

- (void)addLogEntrySection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"日志与调试"];
    [section addCell:[self createLogEntryCell]];
    [self.tableViewMgr addSection:section];
}

- (void)addMessageIgnoreSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息屏蔽"
                                                                                                Footer:@"开启后可在用户资料页/群聊资料页开启屏蔽，屏蔽后不再接收其消息提醒。"];
    [section addCell:[self createUserIgnoreEnableCell]];
    [section addCell:[self createIgnoredChatroomCountCell]];
    [section addCell:[self createIgnoredUserCountCell]];
    [section addCell:[self createIgnoreResetCell]];
    [self.tableViewMgr addSection:section];
}

- (void)addGroupMonitorSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"群聊监控"
                                                                                                Footer:@"开启后，当检测到群成员退出时，会在对应群会话插入本地提示消息。\n可设置生效范围：全部群聊 / 白名单。"];
    [section addCell:[self createQuitMonitorEnableCell]];
    [section addCell:[self createQuitMonitorScopeCell]];
    if ([WCPLConfigCenter shared].ignore.quitMonitorScope == WCPLQuitMonitorScopeWhitelist) {
        [section addCell:[self createQuitMonitorWhitelistCell]];
    }
    [self.tableViewMgr addSection:section];
}

- (void)addLongPressPanelSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"长按面板"
                                                                                                Footer:@"控制消息长按菜单中的复读、小丑、语音转发与抖音解析。"];
    [section addCell:[self createRepeatLongPressMenuSwitchCell]];
    [section addCell:[self createClownFeatureSwitchCell]];
    [section addCell:[self createVoiceForwardFeatureSwitchCell]];
    [section addCell:[self createDouyinParserCell]];
    [self.tableViewMgr addSection:section];
}

- (void)addSwipeQuoteSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息手势"];
    [section addCell:[self createSwipeGestureSwitchCell]];

    if ([WCPLConfigCenter shared].gesture.swipeGestureEnable) {
        [section addCell:[self createSwipeSensitivityCell]];
        [section addCell:[self createSwipeQuoteAtUserCell]];
        [section addCell:[self createSwipeQuoteSwitchCell]];

        if ([WCPLConfigCenter shared].gesture.swipeQuoteEnable) {
            [section addCell:[self createSwipeLeftOtherActionCell]];
            [section addCell:[self createSwipeLeftSelfActionCell]];
        }

        [section addCell:[self createSwipeRightSwitchCell]];
        if ([WCPLConfigCenter shared].gesture.swipeRightEnable) {
            [section addCell:[self createSwipeRightOtherActionCell]];
            [section addCell:[self createSwipeRightSelfActionCell]];
        }

        [section addCell:[self createTapReferJumpSwitchCell]];
    }

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

@end
