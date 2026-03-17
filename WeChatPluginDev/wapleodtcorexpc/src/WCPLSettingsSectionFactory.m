#import "WCPLSettingsSectionFactory.h"

#import "WCPLConfigCenter.h"
#import "WCPLRepeatButtonAssetManager.h"
#import "WCHookTableViewFactory.h"
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
    id section = [WCHookTableViewFactory sectionWithHeader:@"红包功能" footer:nil];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createAutoReceiveRedEnvelopCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createReceiveDonePageSummaryCell] toSection:section];

    if ([WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable) {
        [WCHookTableViewFactory addCell:[self createPrivateRedEnvelopCell] toSection:section];
        if ([WCPLRedEnvelopConfig sharedConfig].privateRedEnvelopEnable) {
            [WCHookTableViewFactory addCell:[self createPrivateAutoReplyCell] toSection:section];
        }

        [WCHookTableViewFactory addCell:[self createGroupRedEnvelopCell] toSection:section];
        if ([WCPLRedEnvelopConfig sharedConfig].groupRedEnvelopEnable) {
            [WCHookTableViewFactory addCell:[self createGroupAutoReplyCell] toSection:section];
            [WCHookTableViewFactory addCell:[self createGroupScopeCell] toSection:section];
            [WCHookTableViewFactory addCell:[self createReceiveSelfRedEnvelopCell] toSection:section];
        }

        [WCHookTableViewFactory addCell:[self createDelaySettingCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRedEnvelopNotifyTargetCell] toSection:section];
    }

    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addAdvanceSettingSection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"红包高级功能" footer:nil];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createQueueCell] toSection:section];
    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addPush2ChatSettingSection {
    WCPLPush2ChatConfig *config = [WCPLConfigCenter shared].push2Chat;
    if (!config) {
        return;
    }

    id section = [WCHookTableViewFactory sectionWithHeader:@"功能设置" footer:nil];
    if (!section) {
        return;
    }
    if ([section respondsToSelector:@selector(setFooterTitle:)]) {
        ((WCTableViewSectionManager *)section).footerTitle = @"注意：\n直达功能需要重启微信后生效";
    }

    [WCHookTableViewFactory addCell:[WCHookTableViewFactory switchCellWithTitle:@"开启前台直达"
                                                                     descriptor:nil
                                                                             on:config.enableForegroundPush
                                                                         target:self
                                                                         action:@selector(settingEnableForegroundPush2Chat:)]
                          toSection:section];
    if (config.enableForegroundPush) {
        UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:@[@"全屏", @"半屏"]];
        seg.selectedSegmentIndex = config.foregroundPushMode;
        [seg addTarget:self action:@selector(settingForegroundPush2ChatModeChanged:) forControlEvents:UIControlEventValueChanged];
        id cell = [objc_getClass("WCTableViewCellManager") normalCellForSel:nil target:self title:@"↳ 前台直达模式" rightView:seg];
        [WCHookTableViewFactory addCell:cell toSection:section];
    }

    [WCHookTableViewFactory addCell:[WCHookTableViewFactory switchCellWithTitle:@"开启后台直达"
                                                                     descriptor:nil
                                                                             on:config.enableBackgroundPush
                                                                         target:self
                                                                         action:@selector(settingEnableBackgroundPush2Chat:)]
                          toSection:section];
    if (config.enableBackgroundPush) {
        UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:@[@"全屏", @"半屏"]];
        seg.selectedSegmentIndex = config.backgroundPushMode;
        [seg addTarget:self action:@selector(settingBackgroundPush2ChatModeChanged:) forControlEvents:UIControlEventValueChanged];
        id cell = [objc_getClass("WCTableViewCellManager") normalCellForSel:nil target:self title:@"↳ 后台直达模式" rightView:seg];
        [WCHookTableViewFactory addCell:cell toSection:section];
    }

    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addOtherSettingSection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"其他" footer:nil];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createTimelineAdBlockCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createEmulateIPadLoginCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createAbortRemokeMessageCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createMessageTimeSwitchCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createMarkAllReadTopRightMenuEnableCell] toSection:section];
    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addLogEntrySection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"日志与调试" footer:nil];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createLogEntryCell] toSection:section];
    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addMessageIgnoreSettingSection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"消息屏蔽"
                                                   footer:@"开启后可在用户资料页/群聊资料页开启屏蔽，屏蔽后不再接收其消息提醒。"];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createUserIgnoreEnableCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createIgnoredChatroomCountCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createIgnoredUserCountCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createIgnoreResetCell] toSection:section];
    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addGroupMonitorSettingSection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"群聊监控"
                                                   footer:@"开启后，当检测到群成员退出时，会在对应群会话插入本地提示消息。\n可设置生效范围：全部群聊 / 白名单。"];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createQuitMonitorEnableCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createQuitMonitorScopeCell] toSection:section];
    if ([WCPLConfigCenter shared].ignore.quitMonitorScope == WCPLQuitMonitorScopeWhitelist) {
        [WCHookTableViewFactory addCell:[self createQuitMonitorWhitelistCell] toSection:section];
    }
    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addLongPressPanelSettingSection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"长按面板"
                                                   footer:@"控制消息长按菜单中的复读、小丑、语音转发与抖音解析。"];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createRepeatLongPressMenuSwitchCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createClownFeatureSwitchCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createVoiceForwardFeatureSwitchCell] toSection:section];
    [WCHookTableViewFactory addCell:[self createDouyinParserCell] toSection:section];
    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addSwipeQuoteSettingSection {
    id section = [WCHookTableViewFactory sectionWithHeader:@"消息手势" footer:nil];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createSwipeGestureSwitchCell] toSection:section];

    if ([WCPLConfigCenter shared].gesture.swipeGestureEnable) {
        [WCHookTableViewFactory addCell:[self createSwipeSensitivityCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createSwipeQuoteAtUserCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createSwipeQuoteSwitchCell] toSection:section];

        if ([WCPLConfigCenter shared].gesture.swipeQuoteEnable) {
            [WCHookTableViewFactory addCell:[self createSwipeLeftOtherActionCell] toSection:section];
            [WCHookTableViewFactory addCell:[self createSwipeLeftSelfActionCell] toSection:section];
        }

        [WCHookTableViewFactory addCell:[self createSwipeRightSwitchCell] toSection:section];
        if ([WCPLConfigCenter shared].gesture.swipeRightEnable) {
            [WCHookTableViewFactory addCell:[self createSwipeRightOtherActionCell] toSection:section];
            [WCHookTableViewFactory addCell:[self createSwipeRightSelfActionCell] toSection:section];
        }

        [WCHookTableViewFactory addCell:[self createTapReferJumpSwitchCell] toSection:section];
    }

    [WCHookTableViewFactory addCell:[self createDoubleTapGestureSwitchCell] toSection:section];
    if ([WCPLConfigCenter shared].gesture.doubleTapGestureEnable) {
        [WCHookTableViewFactory addCell:[self createDoubleTapOtherActionCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createDoubleTapSelfActionCell] toSection:section];
    }

    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

- (void)addRepeatBubbleSettingSection {
    WCPLGestureConfig *gestureConfig = [WCPLConfigCenter shared].gesture;
    [[WCPLRepeatButtonAssetManager sharedManager] migrateIfNeededForConfig:gestureConfig];

    id section = [WCHookTableViewFactory sectionWithHeader:@"复读气泡" footer:nil];
    if (!section) {
        return;
    }
    [WCHookTableViewFactory addCell:[self createRepeatButtonSwitchCell] toSection:section];

    if (gestureConfig.repeatButtonEnable) {
        [WCHookTableViewFactory addCell:[self createRepeatButtonHapticCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRepeatButtonSizeCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRepeatCustomImageSwitchCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRepeatCustomImagePickerCell] toSection:section];
        if (gestureConfig.repeatButtonCustomImageRelativePath.length > 0) {
            [WCHookTableViewFactory addCell:[self createRepeatCustomImageResetCell] toSection:section];
        }
        [WCHookTableViewFactory addCell:[self createRepeatSupportEmoticonCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRepeatSupportVoiceCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRepeatSupportImageCell] toSection:section];
        [WCHookTableViewFactory addCell:[self createRepeatSupportVideoCell] toSection:section];
    }

    [WCHookTableViewFactory addSection:section toManager:self.tableViewMgr];
}

@end
