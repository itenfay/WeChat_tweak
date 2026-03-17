//
// WCPLMarkAllReadMenuHooks.xm
//
// 右上角菜单 Hook glue：一键已读入口。
//

#import <UIKit/UIKit.h>
#import <dispatch/dispatch.h>
#import <objc/message.h>
#import <objc/runtime.h>

#import "WCPLLogger.h"
#import "WCPLMarkAllReadService.h"
#import "WCPLObjcSafeCall.h"

%hook RightTopMenuItemBtn

- (id)initWithBtnData:(id)btnData showNew:(BOOL)showNew {
    id itemBtn = %orig(btnData, showNew);
    if (!itemBtn) {
        return itemBtn;
    }

    NSString *itemID = WCPLSafeValueForKey(btnData, @"m_nsID");
    if (![itemID isKindOfClass:[NSString class]] ||
        ![(NSString *)itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID]) {
        return itemBtn;
    }

    UIImage *icon = WCPLTopRightMenuMarkAllReadIconImage();
    if (icon && [itemBtn respondsToSelector:@selector(setImage:forState:)]) {
        @try {
            ((void (*)(id, SEL, id, unsigned long long))objc_msgSend)(itemBtn,
                                                                       @selector(setImage:forState:),
                                                                       icon,
                                                                       UIControlStateNormal);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([itemBtn respondsToSelector:@selector(setTintColor:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(itemBtn,
                                                  @selector(setTintColor:),
                                                  [UIColor whiteColor]);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([itemBtn respondsToSelector:@selector(setTitle:forState:)]) {
        @try {
            ((void (*)(id, SEL, id, unsigned long long))objc_msgSend)(itemBtn,
                                                                       @selector(setTitle:forState:),
                                                                       @"一键已读",
                                                                       UIControlStateNormal);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return itemBtn;
}

%end

%hook CAppViewControllerManager

+ (BOOL)shouldTopRightMenuShowID:(id)arg1 {
    return WCPLTopRightMenuResolveShowIDResult(arg1, %orig(arg1));
}

%end

%hook NewMainFrameViewController

- (BOOL)isTopRightMenuShowID:(id)arg1 {
    return WCPLTopRightMenuResolveShowIDResult(arg1, %orig(arg1));
}

%end

%hook NewMainFrameRightTopMenuBtn

- (void)reloadAllItems {
    %orig;
    WCPLTopRightMenuSyncMarkAllReadMenuItem(self);
}

- (void)reloadMenuItems {
    %orig;
    WCPLTopRightMenuSyncMarkAllReadMenuItem(self);
}

- (BOOL)isTopRightMenuShowID:(id)arg1 {
    return WCPLTopRightMenuResolveShowIDResult(arg1, %orig(arg1));
}

- (void)onItemAction:(id)sender {
    NSString *itemID = WCPLTopRightMenuSafeItemIDFromSender(sender);
    if (itemID.length > 0 &&
        [itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID] &&
        WCPLMarkAllReadTopRightMenuEnabled()) {
        // 先走原链路，确保菜单收起；再弹确认框。
        %orig(sender);
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            WCPLMarkAllReadPresentConfirmAlert();
        });
        return;
    }
    %orig(sender);
}

%end
