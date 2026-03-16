//
// WCPLSettingsTableViewManagerFactory.m
//

#import "WCPLSettingsTableViewManagerFactory.h"

#import "WCHookTableViewFactory.h"
#import "WCPLFuncService.h"
#import "WCPLWeChatUIHeaders.h"

WCTableViewManager *WCPLCreateSettingsTableViewManager(UITableViewStyle style) {
    CGFloat tabY = WCPLStatusBarAndNavigationBarHeight;
    CGFloat tabW = WCPLScreenWidth;
    CGFloat tabH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
    return [WCHookTableViewFactory tableManagerWithFrame:CGRectMake(0, tabY, tabW, tabH) style:style];
}

