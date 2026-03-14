#import "WCPLSettingsPageContext.h"

NSString *WCPLSettingsTitleForPageType(WCPLSettingPageType pageType) {
    switch (pageType) {
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
