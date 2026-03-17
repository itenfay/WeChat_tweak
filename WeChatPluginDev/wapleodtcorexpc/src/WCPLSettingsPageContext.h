#import <Foundation/Foundation.h>

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

FOUNDATION_EXPORT NSString *WCPLSettingsTitleForPageType(WCPLSettingPageType pageType);
