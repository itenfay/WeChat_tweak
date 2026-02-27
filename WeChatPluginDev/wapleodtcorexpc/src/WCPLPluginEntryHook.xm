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

#ifdef __cplusplus
extern "C" {
#endif
void wcpl_push2chat_handleLaunchOptions(id launchOptions) __attribute__((weak_import));
BOOL wcpl_push2chat_handleForegroundNotificationResponse(id response) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif

/*
 入口主链 Stage-2（入口层）:
 1) 通过 WCPluginsMgr 注册插件入口
 2) 在设置页注入“微信辣椒”入口
 启动探针 / CrashReporter / RealtimeUploader 统一由 Tweak.xm 负责。
*/

static NSString *const kWCPLEntryPluginTitle = @"微信辣椒";
static NSString *const kWCPLEntryPluginLegacyTitle = @"微信辣椒设置";
static NSString *const kWCPLEntryPluginVersion = @"1.8.36";
static NSString *const kWCPLEntryControllerClassName = @"WCPLSettingViewController";
static const long long kWCPLEntryInsertSectionIndex = 0;
static NSString *const kWCPLHookFeatureEntry = @"entry";

static BOOL wcpl_entry_didRegister = NO;

static uint64_t wcpl_entry_perf_uptimeMillis(void) {
    NSTimeInterval uptime = [[NSProcessInfo processInfo] systemUptime];
    if (uptime < 0) {
        return 0;
    }
    return (uint64_t)(uptime * 1000.0);
}

static unsigned long long wcpl_entry_perf_residentKB(void) {
    mach_task_basic_info_data_t info;
    mach_msg_type_number_t count = MACH_TASK_BASIC_INFO_COUNT;
    kern_return_t kr = task_info(mach_task_self_,
                                 MACH_TASK_BASIC_INFO,
                                 (task_info_t)&info,
                                 &count);
    if (kr != KERN_SUCCESS) {
        return 0;
    }
    return (unsigned long long)(info.resident_size / 1024ull);
}

static void wcpl_entryHookLog(NSString *className,
                              NSString *selectorName,
                              NSString *stage,
                              NSString *decision,
                              WCPLHookOrigPolicy policy,
                              NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureEntry,
                           className,
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static id wcpl_entry_safeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }
    @try {
        return [obj valueForKey:key];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_entry_safeObjectIvar(id obj, const char *name) {
    if (!obj || !name) {
        return nil;
    }
    Class cls = object_getClass(obj);
    if (!cls) {
        return nil;
    }
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) {
        return nil;
    }
    const char *encoding = ivar_getTypeEncoding(ivar);
    if (!encoding || encoding[0] != '@') {
        return nil;
    }
    return object_getIvar(obj, ivar);
}

static NSString *wcpl_entry_trim(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_entry_safeCellTitle(id cellManager) {
    id cellConfig = wcpl_entry_safeValueForKey(cellManager, @"cellConfig");
    id leftConfig = wcpl_entry_safeValueForKey(cellConfig, @"leftConfig");
    id title = wcpl_entry_safeValueForKey(leftConfig, @"title");
    return wcpl_entry_trim(title);
}

static BOOL wcpl_entry_hasPluginCellInTableMgr(id tableViewMgr) {
    if (!tableViewMgr) {
        return NO;
    }

    NSArray *sections = nil;
    if ([tableViewMgr respondsToSelector:@selector(getAllSections)]) {
        @try {
            sections = ((id (*)(id, SEL))objc_msgSend)(tableViewMgr, @selector(getAllSections));
        } @catch (__unused NSException *exception) {
            sections = nil;
        }
    }
    if (![sections isKindOfClass:[NSArray class]]) {
        id value = wcpl_entry_safeValueForKey(tableViewMgr, @"sections");
        if ([value isKindOfClass:[NSArray class]]) {
            sections = (NSArray *)value;
        }
    }
    if (![sections isKindOfClass:[NSArray class]] || sections.count == 0) {
        return NO;
    }

    for (id section in sections) {
        NSArray *cells = nil;
        if ([section respondsToSelector:@selector(getAllCells)]) {
            @try {
                cells = ((id (*)(id, SEL))objc_msgSend)(section, @selector(getAllCells));
            } @catch (__unused NSException *exception) {
                cells = nil;
            }
        }
        if (![cells isKindOfClass:[NSArray class]]) {
            id value = wcpl_entry_safeValueForKey(section, @"cells");
            if ([value isKindOfClass:[NSArray class]]) {
                cells = (NSArray *)value;
            }
        }
        if (![cells isKindOfClass:[NSArray class]] || cells.count == 0) {
            continue;
        }
        for (id cell in cells) {
            NSString *title = wcpl_entry_safeCellTitle(cell);
            if ([title isEqualToString:kWCPLEntryPluginTitle] ||
                [title isEqualToString:kWCPLEntryPluginLegacyTitle]) {
                return YES;
            }
        }
    }
    return NO;
}

static void wcpl_entry_insertPluginCell(id tableViewMgr, id target, SEL action, NSString *sceneTag) {
    if (!tableViewMgr) {
        WCPLLogWarning(@"[入口] tableViewMgr 不可用: scene=%@", sceneTag ?: @"unknown");
        return;
    }
    if (wcpl_entry_hasPluginCellInTableMgr(tableViewMgr)) {
        return;
    }

    Class sectionCls = objc_getClass("WCTableViewSectionManager");
    Class normalCellCls = objc_getClass("WCTableViewNormalCellManager");
    if (!sectionCls || !normalCellCls) {
        WCPLLogWarning(@"[入口] 表格类不可用: scene=%@ section=%p cell=%p",
                       sceneTag ?: @"unknown",
                       sectionCls,
                       normalCellCls);
        return;
    }

    id section = nil;
    if ([sectionCls respondsToSelector:@selector(sectionInfoDefaut)]) {
        section = ((id (*)(id, SEL))objc_msgSend)(sectionCls, @selector(sectionInfoDefaut));
    }
    if (!section || ![section respondsToSelector:@selector(addCell:)]) {
        WCPLLogWarning(@"[入口] section 创建失败: scene=%@", sceneTag ?: @"unknown");
        return;
    }

    id cell = nil;
    if ([normalCellCls respondsToSelector:@selector(normalCellForSel:target:title:accessoryType:)]) {
        cell = ((id (*)(id, SEL, SEL, id, id, long long))objc_msgSend)(normalCellCls,
                                                                         @selector(normalCellForSel:target:title:accessoryType:),
                                                                         action,
                                                                         target,
                                                                         kWCPLEntryPluginTitle,
                                                                         1);
    }
    if (!cell) {
        WCPLLogWarning(@"[入口] cell 创建失败: scene=%@", sceneTag ?: @"unknown");
        return;
    }
    ((void (*)(id, SEL, id))objc_msgSend)(section, @selector(addCell:), cell);

    if (![tableViewMgr respondsToSelector:@selector(insertSection:At:)]) {
        WCPLLogWarning(@"[入口] insertSection 不可用: scene=%@", sceneTag ?: @"unknown");
        return;
    }

    @try {
        ((void (*)(id, SEL, id, long long))objc_msgSend)(tableViewMgr,
                                                          @selector(insertSection:At:),
                                                          section,
                                                          kWCPLEntryInsertSectionIndex);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[入口] 插入 section 失败: scene=%@ reason=%@",
                       sceneTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return;
    }

    if ([tableViewMgr respondsToSelector:@selector(getTableView)]) {
        id tableView = ((id (*)(id, SEL))objc_msgSend)(tableViewMgr, @selector(getTableView));
        if ([tableView respondsToSelector:@selector(reloadData)]) {
            ((void (*)(id, SEL))objc_msgSend)(tableView, @selector(reloadData));
        }
    }

    WCPLLogInfo(@"[入口] 已插入微信辣椒入口: scene=%@", sceneTag ?: @"unknown");
}

%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    static NSString *const kHookSelector = @"application:didFinishLaunchingWithOptions:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;
    uint64_t startMs = wcpl_entry_perf_uptimeMillis();

    BOOL result = %orig(application, launchOptions);
    uint64_t afterOrigMs = wcpl_entry_perf_uptimeMillis();
    uint64_t registerMs = 0;
    uint64_t push2chatLaunchMs = 0;

    Class pluginsMgrClass = objc_getClass("WCPluginsMgr");
    if (pluginsMgrClass && !wcpl_entry_didRegister) {
        uint64_t registerStartMs = wcpl_entry_perf_uptimeMillis();
        @try {
            if ([pluginsMgrClass respondsToSelector:@selector(sharedInstance)]) {
                id mgr = ((id (*)(id, SEL))objc_msgSend)(pluginsMgrClass, @selector(sharedInstance));
                if (mgr && [mgr respondsToSelector:@selector(registerControllerWithTitle:version:controller:)]) {
                    ((void (*)(id, SEL, id, id, id))objc_msgSend)(mgr,
                                                                   @selector(registerControllerWithTitle:version:controller:),
                                                                   kWCPLEntryPluginTitle,
                                                                   kWCPLEntryPluginVersion,
                                                                   kWCPLEntryControllerClassName);
                    wcpl_entry_didRegister = YES;
                    WCPLLogInfo(@"[入口] 已通过 WCPluginsMgr 注册插件");
                    wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                                      kHookSelector,
                                      @"feature",
                                      @"register_plugin",
                                      kOrigPolicy,
                                      @"result=success");
                }
            }
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[入口] WCPluginsMgr 注册失败: %@", exception.reason ?: @"unknown");
            wcpl_entryHookLog(@"MicroMessengerAppDelegate",
                              kHookSelector,
                              @"feature",
                              @"exception",
                              kOrigPolicy,
                              exception.reason ?: @"unknown");
        }
        uint64_t registerEndMs = wcpl_entry_perf_uptimeMillis();
        registerMs = registerEndMs >= registerStartMs ? (registerEndMs - registerStartMs) : 0;
    }

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

static UIImage *wcpl_topRightMenu_markAllReadIconImage(void);

%hook RightTopMenuItemBtn

- (id)initWithBtnData:(id)btnData showNew:(BOOL)showNew {
    id itemBtn = %orig(btnData, showNew);
    if (!itemBtn) {
        return itemBtn;
    }

    NSString *itemID = wcpl_entry_safeValueForKey(btnData, @"m_nsID");
    if (![itemID isKindOfClass:[NSString class]] ||
        ![(NSString *)itemID isEqualToString:@"wcpl_mark_all_read"]) {
        return itemBtn;
    }

    UIImage *icon = wcpl_topRightMenu_markAllReadIconImage();
    if (icon && [itemBtn respondsToSelector:@selector(setImage:forState:)]) {
        @try {
            ((void (*)(id, SEL, id, unsigned long long))objc_msgSend)(itemBtn,
                                                                       @selector(setImage:forState:),
                                                                       icon,
                                                                       UIControlStateNormal);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([itemBtn respondsToSelector:@selector(setTintColor:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(itemBtn,
                                                  @selector(setTintColor:),
                                                  [UIColor whiteColor]);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([itemBtn respondsToSelector:@selector(setTitle:forState:)]) {
        @try {
            ((void (*)(id, SEL, id, unsigned long long))objc_msgSend)(itemBtn,
                                                                       @selector(setTitle:forState:),
                                                                       @"一键已读",
                                                                       UIControlStateNormal);
        } @catch (__unused NSException *exception) {
        }
    }

    return itemBtn;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    uint64_t startMs = wcpl_entry_perf_uptimeMillis();
    %orig;
    uint64_t afterOrigMs = wcpl_entry_perf_uptimeMillis();
    id tableViewMgr = wcpl_entry_safeObjectIvar(self, "m_tableViewMgr");
    if (!tableViewMgr) {
        tableViewMgr = wcpl_entry_safeValueForKey(self, @"m_tableViewMgr");
    }
    uint64_t injectStartMs = wcpl_entry_perf_uptimeMillis();
    wcpl_entry_insertPluginCell(tableViewMgr, self, @selector(wcpl_setting), @"NewSettingViewController");
    uint64_t endMs = wcpl_entry_perf_uptimeMillis();
    uint64_t totalMs = endMs >= startMs ? (endMs - startMs) : 0;
    uint64_t origMs = afterOrigMs >= startMs ? (afterOrigMs - startMs) : 0;
    uint64_t injectMs = endMs >= injectStartMs ? (endMs - injectStartMs) : 0;
    WCPLLogDebug(@"[PERF][ENTRY] selector=reloadTableData total_ms=%llu orig_ms=%llu inject_ms=%llu has_table_mgr=%d rss_kb=%llu",
                 (unsigned long long)totalMs,
                 (unsigned long long)origMs,
                 (unsigned long long)injectMs,
                 tableViewMgr ? 1 : 0,
                 wcpl_entry_perf_residentKB());
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    if (![settingViewController isKindOfClass:[UIViewController class]]) {
        return;
    }
    id nav = wcpl_entry_safeValueForKey(self, @"navigationController");
    if (nav && [nav respondsToSelector:@selector(pushViewController:animated:)]) {
        ((void (*)(id, SEL, id, BOOL))objc_msgSend)(nav,
                                                     @selector(pushViewController:animated:),
                                                     settingViewController,
                                                     YES);
    }
}

%end

// 仅保留“插件管理(注册)”和“设置”两个入口：
// 1) WCPluginsMgr 注册入口（插件管理）
// 2) NewSettingViewController 里的设置入口
// MoreViewController 额外入口已移除，避免出现第三个入口。

// ===== 右上角「+」菜单：一键已读（对齐密友能力）=====

static NSString *const kWCPLTopRightMenuMarkAllReadID = @"wcpl_mark_all_read";

static BOOL wcpl_markAllRead_isTopRightMenuEnabled(void) {
    return [WCPLConfigCenter shared].markAllReadTopRightMenuEnable;
}

static UIViewController *wcpl_markAllRead_topMostViewController(void) {
    Class mgrClass = objc_getClass("CAppViewControllerManager");
    if (mgrClass && [mgrClass respondsToSelector:@selector(topMostController)]) {
        @try {
            id vc = ((id (*)(id, SEL))objc_msgSend)(mgrClass, @selector(topMostController));
            if ([vc isKindOfClass:[UIViewController class]]) {
                return (UIViewController *)vc;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    UIWindow *keyWindow = nil;
    NSArray<UIWindow *> *windows = [UIApplication sharedApplication].windows;
    for (UIWindow *window in windows) {
        if (![window isKindOfClass:[UIWindow class]]) {
            continue;
        }
        if (window.isKeyWindow) {
            keyWindow = window;
            break;
        }
    }
    if (!keyWindow) {
        keyWindow = windows.firstObject;
    }

    UIViewController *rootVC = keyWindow.rootViewController;
    if (!rootVC) {
        return nil;
    }

    UIViewController *current = rootVC;
    for (NSUInteger i = 0; i < 12; i++) {
        UIViewController *presented = current.presentedViewController;
        if (presented) {
            current = presented;
            continue;
        }
        if ([current isKindOfClass:[UINavigationController class]]) {
            UIViewController *top = ((UINavigationController *)current).topViewController;
            if (top) {
                current = top;
                continue;
            }
        }
        if ([current isKindOfClass:[UITabBarController class]]) {
            UIViewController *selected = ((UITabBarController *)current).selectedViewController;
            if (selected) {
                current = selected;
                continue;
            }
        }
        break;
    }
    return current;
}

static id wcpl_markAllRead_createLoadingView(UIView *hostView, NSString *text) {
    if (![hostView isKindOfClass:[UIView class]]) {
        return nil;
    }

    Class loadingClass = objc_getClass("MMLoadingView");
    if (!loadingClass) {
        return nil;
    }

    id loadingView = nil;
    @try {
        loadingView = [[loadingClass alloc] init];
    } @catch (__unused NSException *exception) {
        loadingView = nil;
    }
    if (!loadingView) {
        return nil;
    }

    if ([loadingView respondsToSelector:@selector(setFrame:)]) {
        @try {
            ((void (*)(id, SEL, CGRect))objc_msgSend)(loadingView, @selector(setFrame:), hostView.bounds);
        } @catch (__unused NSException *exception) {
        }
    }

    [hostView addSubview:loadingView];

    UILabel *label = nil;
    @try {
        label = [loadingView valueForKey:@"m_label"];
    } @catch (__unused NSException *exception) {
        label = nil;
    }
    if ([label isKindOfClass:[UILabel class]] && [text isKindOfClass:[NSString class]] && text.length > 0) {
        label.text = text;
    }

    if ([loadingView respondsToSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:)]) {
        @try {
            [loadingView performSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:) withObject:@YES];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([loadingView respondsToSelector:@selector(setFitFrame:)]) {
        @try {
            [loadingView performSelector:@selector(setFitFrame:) withObject:@1];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([loadingView respondsToSelector:@selector(startLoading)]) {
        @try {
            [loadingView performSelector:@selector(startLoading)];
        } @catch (__unused NSException *exception) {
        }
    }

    return loadingView;
}

static void wcpl_markAllRead_stopLoadingView(id loadingView, BOOL ok, NSString *text) {
    if (!loadingView) {
        return;
    }

    SEL sel = ok ? @selector(stopLoadingAndShowOK:) : @selector(stopLoadingAndShowError:);
    if ([loadingView respondsToSelector:sel] && [text isKindOfClass:[NSString class]] && text.length > 0) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(loadingView, sel, text);
        } @catch (__unused NSException *exception) {
        }
    } else if ([loadingView respondsToSelector:@selector(stopLoading)]) {
        @try {
            [loadingView performSelector:@selector(stopLoading)];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([loadingView respondsToSelector:@selector(removeFromSuperview)]) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            @try {
                [loadingView removeFromSuperview];
            } @catch (__unused NSException *exception) {
            }
        });
    }
}

static id wcpl_markAllRead_fetchSessionMgr(void) {
    Class sessionMgrClass = objc_getClass("MMNewSessionMgr");
    id mgr = WCPLGetService(sessionMgrClass);
    if (mgr &&
        [mgr respondsToSelector:@selector(GetUserNamesOnSessionList)] &&
        [mgr respondsToSelector:@selector(ChangeSessionUnReadCount:to:)]) {
        return mgr;
    }

    // 兼容：部分版本或链路下可通过 LMUtils.newSessionMgr 获取。
    Class lmUtilsClass = objc_getClass("LMUtils");
    SEL sel = NSSelectorFromString(@"newSessionMgr");
    if (lmUtilsClass && [lmUtilsClass respondsToSelector:sel]) {
        @try {
            id obj = ((id (*)(id, SEL))objc_msgSend)(lmUtilsClass, sel);
            if (obj &&
                [obj respondsToSelector:@selector(GetUserNamesOnSessionList)] &&
                [obj respondsToSelector:@selector(ChangeSessionUnReadCount:to:)]) {
                return obj;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static NSUInteger wcpl_markAllRead_markAllSessionsAsReadInternal(NSString * _Nullable __autoreleasing *outFailText) {
    __block NSString *failText = nil;
    __block NSUInteger processedCount = 0;

    id groupConfig = nil;
    BOOL roomEnabled = NO;
    BOOL brandEnabled = NO;
    BOOL canRestoreRoom = NO;
    BOOL canRestoreBrand = NO;

    @try {
        // 参考“密友”实现：临时关闭 room/brand 分组开关，确保会话列表完整。
        Class groupToolClass = objc_getClass("GroupTool");
        if (groupToolClass && [groupToolClass respondsToSelector:@selector(sharedConfig)]) {
            groupConfig = ((id (*)(id, SEL))objc_msgSend)(groupToolClass, @selector(sharedConfig));
        }

        if (groupConfig && [groupConfig respondsToSelector:@selector(isOpenRoomEnable)]) {
            roomEnabled = ((BOOL (*)(id, SEL))objc_msgSend)(groupConfig, @selector(isOpenRoomEnable));
            canRestoreRoom = [groupConfig respondsToSelector:@selector(setIsOpenRoomEnable:)];
            if (canRestoreRoom) {
                ((void (*)(id, SEL, BOOL))objc_msgSend)(groupConfig, @selector(setIsOpenRoomEnable:), NO);
            }
        }

        if (groupConfig && [groupConfig respondsToSelector:@selector(isOpenBrandEnable)]) {
            brandEnabled = ((BOOL (*)(id, SEL))objc_msgSend)(groupConfig, @selector(isOpenBrandEnable));
            canRestoreBrand = [groupConfig respondsToSelector:@selector(setIsOpenBrandEnable:)];
            if (canRestoreBrand) {
                ((void (*)(id, SEL, BOOL))objc_msgSend)(groupConfig, @selector(setIsOpenBrandEnable:), NO);
            }
        }

        id sessionMgr = wcpl_markAllRead_fetchSessionMgr();
        if (!sessionMgr) {
            failText = @"未找到会话管理器";
            return 0;
        }

        NSArray *userNames = nil;
        @try {
            userNames = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, @selector(GetUserNamesOnSessionList));
        } @catch (__unused NSException *exception) {
            userNames = nil;
        }

        if (![userNames isKindOfClass:[NSArray class]] || userNames.count == 0) {
            failText = @"未获取到会话列表";
            return 0;
        }

        for (id obj in userNames) {
            if (![obj isKindOfClass:[NSString class]]) {
                continue;
            }
            NSString *userName = (NSString *)obj;
            if (userName.length == 0) {
                continue;
            }

            @try {
                ((void (*)(id, SEL, id, unsigned int))objc_msgSend)(sessionMgr,
                                                                    @selector(ChangeSessionUnReadCount:to:),
                                                                    userName,
                                                                    0);
                processedCount += 1;
            } @catch (__unused NSException *exception) {
            }
        }

        if ([sessionMgr respondsToSelector:@selector(recountUnReadCountAndFireExtension)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(sessionMgr, @selector(recountUnReadCountAndFireExtension));
            } @catch (__unused NSException *exception) {
            }
        }

        WCPLLogInfo(@"[一键已读][+] 完成: sessions=%lu", (unsigned long)processedCount);
        return processedCount;
    } @finally {
        if (groupConfig) {
            if (canRestoreRoom) {
                @try {
                    ((void (*)(id, SEL, BOOL))objc_msgSend)(groupConfig, @selector(setIsOpenRoomEnable:), roomEnabled);
                } @catch (__unused NSException *exception) {
                }
            }
            if (canRestoreBrand) {
                @try {
                    ((void (*)(id, SEL, BOOL))objc_msgSend)(groupConfig, @selector(setIsOpenBrandEnable:), brandEnabled);
                } @catch (__unused NSException *exception) {
                }
            }
        }

        if (outFailText) {
            *outFailText = failText;
        }
    }
}

static void wcpl_markAllRead_startMarkAllReadFlow(void) {
    static BOOL gRunning = NO;
    if (gRunning) {
        return;
    }
    gRunning = YES;

    UIViewController *presenter = wcpl_markAllRead_topMostViewController();
    if (!presenter) {
        gRunning = NO;
        return;
    }

    id loadingView = wcpl_markAllRead_createLoadingView(presenter.view, @"正在清空未读…");
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.12 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        NSString *failText = nil;
        NSUInteger processedCount = wcpl_markAllRead_markAllSessionsAsReadInternal(&failText);
        if (failText.length > 0) {
            wcpl_markAllRead_stopLoadingView(loadingView, NO, failText);
            gRunning = NO;
            return;
        }
        NSString *okText = processedCount == 0 ? @"无需处理" : [NSString stringWithFormat:@"已处理 %lu 个会话", (unsigned long)processedCount];
        wcpl_markAllRead_stopLoadingView(loadingView, YES, okText);
        gRunning = NO;
    });
}

static void wcpl_markAllRead_presentConfirmAlert(void) {
    UIViewController *presenter = wcpl_markAllRead_topMostViewController();
    if (!presenter) {
        return;
    }

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"一键已读"
                                                                   message:@"将把会话列表中所有会话的未读数置为 0（不删除消息）。\n确认继续？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDestructive handler:^(__unused UIAlertAction *action) {
        wcpl_markAllRead_startMarkAllReadFlow();
    }]];
    [presenter presentViewController:alert animated:YES completion:nil];
}

static NSString *wcpl_topRightMenu_safeItemIDFromSender(id sender) {
    if (!sender) {
        return nil;
    }

    id data = nil;
    if ([sender respondsToSelector:@selector(m_data)]) {
        @try {
            data = ((id (*)(id, SEL))objc_msgSend)(sender, @selector(m_data));
        } @catch (__unused NSException *exception) {
            data = nil;
        }
    }
    if (!data) {
        data = wcpl_entry_safeValueForKey(sender, @"m_data");
    }

    NSString *itemID = wcpl_entry_safeValueForKey(data, @"m_nsID");
    if (![itemID isKindOfClass:[NSString class]] || itemID.length == 0) {
        itemID = wcpl_entry_safeValueForKey(sender, @"m_nsID");
    }
    if (![itemID isKindOfClass:[NSString class]] || itemID.length == 0) {
        return nil;
    }
    return itemID;
}

static UIImage *wcpl_topRightMenu_markAllReadIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M2 12L7 17L8.5 15.5M11.5 12.5L17 7' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M7 12L12 17L22 7' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {
            }
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }

        if (!icon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            UIImage *symbol = nil;
            if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)] &&
                [UIImageSymbolConfiguration respondsToSelector:@selector(configurationWithPointSize:weight:scale:)]) {
                UIImageSymbolConfiguration *config =
                    [UIImageSymbolConfiguration configurationWithPointSize:18
                                                                    weight:UIImageSymbolWeightRegular
                                                                     scale:UIImageSymbolScaleMedium];
                symbol = [UIImage systemImageNamed:@"checkmark.circle" withConfiguration:config];
                if (!symbol) {
                    symbol = [UIImage systemImageNamed:@"envelope.open" withConfiguration:config];
                }
            }
            if (!symbol) symbol = [UIImage systemImageNamed:@"checkmark.circle"];
            if (!symbol) symbol = [UIImage systemImageNamed:@"envelope.open"];
            if ([symbol isKindOfClass:[UIImage class]]) {
                icon = symbol;
            }
        }

        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
        }
    });
    return icon;
}

static id wcpl_topRightMenu_createMarkAllReadItemData(void) {
    Class btnDataClass = objc_getClass("RightTopMenuItemBtnData");
    if (!(btnDataClass && [btnDataClass respondsToSelector:@selector(genItemWithID:title:imageName:actionType:actionName:pluginUserName:)])) {
        return nil;
    }

    id btnData = nil;
    SEL sel = @selector(genItemWithID:title:imageName:actionType:actionName:pluginUserName:);
    @try {
        btnData = ((id (*)(id, SEL, id, id, id, unsigned long long, id, id))objc_msgSend)(btnDataClass,
                                                                                             sel,
                                                                                             kWCPLTopRightMenuMarkAllReadID,
                                                                                             @"一键已读",
                                                                                             @"",
                                                                                             0,
                                                                                             nil,
                                                                                             nil);
    } @catch (__unused NSException *exception) {
        btnData = nil;
    }
    return btnData;
}

static BOOL wcpl_topRightMenu_itemLooksDataObject(id item) {
    if (!item) {
        return NO;
    }
    if ([item respondsToSelector:@selector(m_nsTitleID)]) {
        return YES;
    }
    if ([item respondsToSelector:@selector(m_nsID)]) {
        return YES;
    }
    NSString *className = NSStringFromClass([item class]) ?: @"";
    return [className rangeOfString:@"RightTopMenuItemBtnData" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static void wcpl_topRightMenu_syncMarkAllReadMenuItem(id menuBtn) {
    if (!menuBtn) {
        return;
    }

    BOOL enabled = wcpl_markAllRead_isTopRightMenuEnabled();
    id items = wcpl_entry_safeValueForKey(menuBtn, @"m_dicItems");
    id data = wcpl_entry_safeValueForKey(menuBtn, @"m_data");
    id showIDs = wcpl_entry_safeValueForKey(data, @"m_arrShowIDs");

    if (![items isKindOfClass:[NSMutableDictionary class]] || ![showIDs isKindOfClass:[NSMutableArray class]]) {
        return;
    }

    NSMutableDictionary *itemsDict = (NSMutableDictionary *)items;
    NSMutableArray *showIDsArray = (NSMutableArray *)showIDs;

    if (!enabled) {
        [itemsDict removeObjectForKey:kWCPLTopRightMenuMarkAllReadID];
        [showIDsArray removeObject:kWCPLTopRightMenuMarkAllReadID];
        return;
    }

    if (![showIDsArray containsObject:kWCPLTopRightMenuMarkAllReadID]) {
        [showIDsArray addObject:kWCPLTopRightMenuMarkAllReadID];
    }

    id existingItem = [itemsDict objectForKey:kWCPLTopRightMenuMarkAllReadID];
    if (existingItem) {
        // 部分版本会在读取 m_nsTitleID 时崩溃；若当前是按钮对象则改写为 Data 对象再返回。
        if (!wcpl_topRightMenu_itemLooksDataObject(existingItem)) {
            id existingData = wcpl_entry_safeValueForKey(existingItem, @"m_data");
            if (wcpl_topRightMenu_itemLooksDataObject(existingData)) {
                [itemsDict setObject:existingData forKey:kWCPLTopRightMenuMarkAllReadID];
            } else {
                [itemsDict removeObjectForKey:kWCPLTopRightMenuMarkAllReadID];
            }
        } else {
            return;
        }
    }

    id itemToStore = wcpl_topRightMenu_createMarkAllReadItemData();
    if (!wcpl_topRightMenu_itemLooksDataObject(itemToStore)) {
        // 当前版本菜单链路会读取 m_nsTitleID，写入按钮对象会导致崩溃，失败时直接撤销入口。
        [itemsDict removeObjectForKey:kWCPLTopRightMenuMarkAllReadID];
        [showIDsArray removeObject:kWCPLTopRightMenuMarkAllReadID];
        WCPLLogError(@"TopRightMenu sync failed: mark-all-read item data unavailable");
        return;
    }

    [itemsDict setObject:itemToStore forKey:kWCPLTopRightMenuMarkAllReadID];
}

static BOOL wcpl_topRightMenu_resolveShowIDResult(id itemID, BOOL origResult) {
    if ([itemID isKindOfClass:[NSString class]] &&
        [(NSString *)itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID]) {
        return wcpl_markAllRead_isTopRightMenuEnabled();
    }
    return origResult;
}

%hook CAppViewControllerManager

+ (BOOL)shouldTopRightMenuShowID:(id)arg1 {
    return wcpl_topRightMenu_resolveShowIDResult(arg1, %orig(arg1));
}

%end

%hook NewMainFrameViewController

- (BOOL)isTopRightMenuShowID:(id)arg1 {
    return wcpl_topRightMenu_resolveShowIDResult(arg1, %orig(arg1));
}

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
    if (itemID.length > 0 &&
        [itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID] &&
        wcpl_markAllRead_isTopRightMenuEnabled()) {
        // 先走原链路，确保菜单收起；再弹确认框。
        %orig(sender);
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            wcpl_markAllRead_presentConfirmAlert();
        });
        return;
    }
    %orig(sender);
}

%end
