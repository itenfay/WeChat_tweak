#import "WCPLSettingsPageRouter.h"

#import "WCPLLogSettingsViewController.h"
#import "WCPLSettingsPageContext.h"
#import "WCPLWeChatUIHeaders.h"
#import <objc/runtime.h>

@interface WCPLSettingViewController (WCPLSettingsPageRouterPrivate)

- (instancetype)initWithPageType:(WCPLSettingPageType)pageType;
- (WCTableViewManager *)tableViewMgr;

@end

static WCTableViewNormalCellManager *wcpl_topLevelEntryCell(id target,
                                                            NSString *title,
                                                            NSString *detail,
                                                            SEL selector) {
    NSString *rightValue = [detail isKindOfClass:[NSString class]] ? detail : @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:selector
                                                                    target:target
                                                                     title:title
                                                                rightValue:rightValue
                                                             accessoryType:1];
}

static void wcpl_pushSettingsPage(WCPLSettingViewController *controller, WCPLSettingPageType pageType) {
    WCPLSettingViewController *target = [[WCPLSettingViewController alloc] initWithPageType:pageType];
    [controller.navigationController pushViewController:target animated:YES];
}

@implementation WCPLSettingViewController (WCPLSettingsPageRouter)

- (void)wcpl_addTopLevelEntrySection {
    NSArray<NSDictionary<NSString *, NSString *> *> *items = @[
        @{@"title": @"消息直达", @"detail": @"推送直达聊天", @"selector": NSStringFromSelector(@selector(openPush2ChatSettingsEntry))},
        @{@"title": @"红包功能", @"detail": @"自动抢包、提醒、汇总", @"selector": NSStringFromSelector(@selector(openRedEnvelopSettingsEntry))},
        @{@"title": @"消息屏蔽", @"detail": @"屏蔽用户和群聊提醒", @"selector": NSStringFromSelector(@selector(openMessageIgnoreSettingsEntry))},
        @{@"title": @"群聊监控", @"detail": @"退群提示与成员变化提醒", @"selector": NSStringFromSelector(@selector(openGroupMonitorSettingsEntry))},
        @{@"title": @"其他", @"detail": @"防撤回、模拟 iPad、朋友圈广告", @"selector": NSStringFromSelector(@selector(openOtherSettingsEntry))},
        @{@"title": @"消息手势", @"detail": @"左右滑动、双击、引用跳转", @"selector": NSStringFromSelector(@selector(openSwipeGestureSettingsEntry))},
        @{@"title": @"复读气泡", @"detail": @"复读按钮和类型支持", @"selector": NSStringFromSelector(@selector(openRepeatBubbleSettingsEntry))},
        @{@"title": @"长按面板", @"detail": @"复读/小丑/语音转发/抖音解析开关", @"selector": NSStringFromSelector(@selector(openLongPressPanelSettingsEntry))},
        @{@"title": @"日志设置", @"detail": @"调试日志与上传", @"selector": NSStringFromSelector(@selector(openDebugSettings))},
    ];

    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"功能分类"];
    for (NSDictionary<NSString *, NSString *> *item in items) {
        SEL selector = NSSelectorFromString(item[@"selector"]);
        [section addCell:wcpl_topLevelEntryCell(self, item[@"title"], item[@"detail"], selector)];
    }
    [[self tableViewMgr] addSection:section];
}

- (void)openRedEnvelopSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeRedEnvelop);
}

- (void)openPush2ChatSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypePush2Chat);
}

- (void)openMessageIgnoreSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeMessageIgnore);
}

- (void)openOtherSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeOther);
}

- (void)openGroupMonitorSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeGroupMonitor);
}

- (void)openSwipeGestureSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeSwipeGesture);
}

- (void)openRepeatBubbleSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeRepeatBubble);
}

- (void)openLongPressPanelSettingsEntry {
    wcpl_pushSettingsPage(self, WCPLSettingPageTypeLongPressPanel);
}

- (void)openDebugSettings {
    WCPLLogSettingsViewController *controller = [[WCPLLogSettingsViewController alloc] init];
    [self.navigationController pushViewController:controller animated:YES];
}

@end
