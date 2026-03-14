#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <dispatch/dispatch.h>
#import <mach/mach.h>

#import "WCPLConfigCenter.h"
#import "WCPLHookGovernance.h"
#import "WCPLLogger.h"
#import "WCPLSettingViewController.h"
#import "WCPLServiceCenter.h"

#include "WCPLEntrySafeHelpers.xm"
#include "WCPLEntryPerfHelpers.xm"
#include "WCPLEntrySettingsUIHelpers.xm"
#include "WCPLEntrySettingsControllerHook.xm"
#include "WCPLMarkAllReadService.xm"

#ifdef __cplusplus
extern "C" {
#endif
void wcpl_push2chat_handleLaunchOptions(id launchOptions) __attribute__((weak_import));
BOOL wcpl_push2chat_handleForegroundNotificationResponse(id response) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif

// 入口主链 Stage-2：启动期优先注册插件归纳，设置页按需注入/兜底；启动探针/CrashReporter/RealtimeUploader 仍由 Tweak.xm 负责。
%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    static NSString *const kHookSelector = @"application:didFinishLaunchingWithOptions:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;
    uint64_t startMs = wcpl_entry_perf_uptimeMillis();

    BOOL result = %orig(application, launchOptions);
    uint64_t afterOrigMs = wcpl_entry_perf_uptimeMillis();
    uint64_t registerMs = 0;
    uint64_t push2chatLaunchMs = 0;

    uint64_t registerStartMs = wcpl_entry_perf_uptimeMillis();
    if (wcpl_entry_registerPluginToPluginsPortalIfNeeded(@"MicroMessengerAppDelegate")) {
        wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                          kHookSelector,
                          @"feature",
                          @"register_plugin",
                          kOrigPolicy,
                          @"result=success");
    } else {
        WCPLLogWarning(@"[入口] 启动期插件归纳注册未完成，等待设置页链路兜底");
        wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                          kHookSelector,
                          @"fallback",
                          @"delay_plugin_register",
                          kOrigPolicy,
                          @"reason=plugins_portal_unavailable");
    }
    uint64_t registerEndMs = wcpl_entry_perf_uptimeMillis();
    registerMs = registerEndMs >= registerStartMs ? (registerEndMs - registerStartMs) : 0;

    // 统一入口分发：冷启动 push2chat 解析归并到主入口 didFinish 链路。
    if (wcpl_push2chat_handleLaunchOptions) {
        uint64_t pushStartMs = wcpl_entry_perf_uptimeMillis();
        wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                          kHookSelector,
                          @"feature",
                          @"dispatch_push2chat_launch",
                          kOrigPolicy,
                          @"target=wcpl_push2chat_handleLaunchOptions");
        @try {
            wcpl_push2chat_handleLaunchOptions(launchOptions);
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[入口] push2chat launchOptions 分发失败: %@", exception.reason ?: @"unknown");
            wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                              kHookSelector,
                              @"feature",
                              @"exception",
                              kOrigPolicy,
                              exception.reason ?: @"unknown");
        }
        uint64_t pushEndMs = wcpl_entry_perf_uptimeMillis();
        push2chatLaunchMs = pushEndMs >= pushStartMs ? (pushEndMs - pushStartMs) : 0;
    }

    uint64_t endMs = wcpl_entry_perf_uptimeMillis();
    uint64_t totalMs = endMs >= startMs ? (endMs - startMs) : 0;
    uint64_t origMs = afterOrigMs >= startMs ? (afterOrigMs - startMs) : 0;
    WCPLLogInfo(@"[PERF][ENTRY] selector=didFinishLaunching total_ms=%llu orig_ms=%llu register_ms=%llu push2chat_launch_ms=%llu result=%d rss_kb=%llu",
                (unsigned long long)totalMs,
                (unsigned long long)origMs,
                (unsigned long long)registerMs,
                (unsigned long long)push2chatLaunchMs,
                result ? 1 : 0,
                wcpl_entry_perf_residentKB());

    return result;
}

- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(void (^)(void))completionHandler {
    static NSString *const kHookSelector = @"userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPost;
    uint64_t startMs = wcpl_entry_perf_uptimeMillis();
    uint64_t push2chatMs = 0;
    BOOL suppressOrig = NO;

    if (wcpl_push2chat_handleForegroundNotificationResponse) {
        uint64_t pushStartMs = wcpl_entry_perf_uptimeMillis();
        wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                          kHookSelector,
                          @"feature",
                          @"dispatch_push2chat_foreground",
                          kOrigPolicy,
                          @"target=wcpl_push2chat_handleForegroundNotificationResponse");
        @try {
            suppressOrig = wcpl_push2chat_handleForegroundNotificationResponse(response);
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[入口] push2chat 前台通知分发失败: %@", exception.reason ?: @"unknown");
            wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                              kHookSelector,
                              @"feature",
                              @"exception",
                              kOrigPolicy,
                              exception.reason ?: @"unknown");
        }
        uint64_t pushEndMs = wcpl_entry_perf_uptimeMillis();
        push2chatMs = pushEndMs >= pushStartMs ? (pushEndMs - pushStartMs) : 0;
    }

    if (suppressOrig) {
        wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                          kHookSelector,
                          @"feature",
                          @"intercept",
                          kOrigPolicy,
                          @"reason=pagesheet");
        if (completionHandler) completionHandler();

        uint64_t endMs = wcpl_entry_perf_uptimeMillis();
        uint64_t totalMs = endMs >= startMs ? (endMs - startMs) : 0;
        WCPLLogInfo(@"[PERF][ENTRY] selector=foreground_notification total_ms=%llu orig_ms=%llu push2chat_ms=%llu rss_kb=%llu",
                    (unsigned long long)totalMs,
                    (unsigned long long)0,
                    (unsigned long long)push2chatMs,
                    wcpl_entry_perf_residentKB());
        return;
    }
    wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                      kHookSelector,
                      @"fallback",
                      @"pass_through",
                      kOrigPolicy,
                      @"reason=call_orig");
    uint64_t origStartMs = wcpl_entry_perf_uptimeMillis();
    %orig(center, response, completionHandler);
    uint64_t endMs = wcpl_entry_perf_uptimeMillis();
    uint64_t totalMs = endMs >= startMs ? (endMs - startMs) : 0;
    uint64_t origMs = endMs >= origStartMs ? (endMs - origStartMs) : 0;
    WCPLLogInfo(@"[PERF][ENTRY] selector=foreground_notification total_ms=%llu orig_ms=%llu push2chat_ms=%llu rss_kb=%llu",
                (unsigned long long)totalMs,
                (unsigned long long)origMs,
                (unsigned long long)push2chatMs,
                wcpl_entry_perf_residentKB());
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    uint64_t startMs = wcpl_entry_perf_uptimeMillis();
    %orig;
    wcpl_entry_afterSettingsReload(self, startMs, wcpl_entry_perf_uptimeMillis());
}

%new
- (void)wcpl_setting {
    wcpl_entry_openSettingsFromController(self);
}

%end

// 仅保留“插件管理(注册)”和“设置”两个入口；MoreViewController 额外入口已移除。
%hook RightTopMenuItemBtn

- (id)initWithBtnData:(id)btnData showNew:(BOOL)showNew {
    id itemBtn = %orig(btnData, showNew);
    NSString *itemID = wcpl_entry_safeValueForKey(btnData, @"m_nsID");
    if (!itemBtn || ![itemID isKindOfClass:[NSString class]] ||
        ![(NSString *)itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID]) {
        return itemBtn;
    }

    UIImage *icon = wcpl_topRightMenu_markAllReadIconImage();
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
            ((void (*)(id, SEL, id))objc_msgSend)(itemBtn, @selector(setTintColor:), [UIColor whiteColor]);
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
+ (BOOL)shouldTopRightMenuShowID:(id)arg1 { return wcpl_topRightMenu_resolveShowIDResult(arg1, %orig(arg1)); }
%end
%hook NewMainFrameViewController
- (BOOL)isTopRightMenuShowID:(id)arg1 { return wcpl_topRightMenu_resolveShowIDResult(arg1, %orig(arg1)); }
%end
%hook NewMainFrameRightTopMenuBtn

- (void)reloadAllItems {
    %orig;
    wcpl_topRightMenu_syncMarkAllReadMenuItem(self);
}

- (void)reloadMenuItems {
    %orig;
    wcpl_topRightMenu_syncMarkAllReadMenuItem(self);
}

- (BOOL)isTopRightMenuShowID:(id)arg1 {
    return wcpl_topRightMenu_resolveShowIDResult(arg1, %orig(arg1));
}

- (void)onItemAction:(id)sender {
    NSString *itemID = wcpl_topRightMenu_safeItemIDFromSender(sender);
    if (itemID.length == 0 || ![itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID] ||
        !wcpl_markAllRead_isTopRightMenuEnabled()) {
        %orig(sender);
        return;
    }

    %orig(sender);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        wcpl_markAllRead_presentConfirmAlert();
    });
}

%end
