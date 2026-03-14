// Internal include-only module.
// Mark-all-read service logic for WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

NS_ASSUME_NONNULL_BEGIN

static NSString * const kWCPLTopRightMenuMarkAllReadID = @"wcpl_mark_all_read";

static BOOL wcpl_markAllRead_isTopRightMenuEnabled(void) {
    return [WCPLConfigCenter shared].markAllReadTopRightMenuEnable;
}

static UIViewController * _Nullable wcpl_markAllRead_topMostViewController(void) {
    Class mgrClass = objc_getClass("CAppViewControllerManager");
    if (mgrClass && [mgrClass respondsToSelector:@selector(topMostController)]) {
        @try {
            id vc = ((id (*)(id, SEL))objc_msgSend)(mgrClass, @selector(topMostController));
            if ([vc isKindOfClass:[UIViewController class]]) {
                return (UIViewController *)vc;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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

static id _Nullable wcpl_markAllRead_createLoadingView(UIView * _Nullable hostView,
                                                       NSString * _Nullable text) {
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
        WCPLCatchLog(exception);
        loadingView = nil;
    }
    if (!loadingView) {
        return nil;
    }

    if ([loadingView respondsToSelector:@selector(setFrame:)]) {
        @try {
            ((void (*)(id, SEL, CGRect))objc_msgSend)(loadingView, @selector(setFrame:), hostView.bounds);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    [hostView addSubview:loadingView];

    UILabel *label = nil;
    @try {
        label = [loadingView valueForKey:@"m_label"];
    } @catch (__unused NSException *exception) {
        WCPLCatchLog(exception);
        label = nil;
    }
    if ([label isKindOfClass:[UILabel class]] && [text isKindOfClass:[NSString class]] && text.length > 0) {
        label.text = text;
    }

    if ([loadingView respondsToSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:)]) {
        @try {
            [loadingView performSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:) withObject:@YES];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([loadingView respondsToSelector:@selector(setFitFrame:)]) {
        @try {
            [loadingView performSelector:@selector(setFitFrame:) withObject:@1];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    if ([loadingView respondsToSelector:@selector(startLoading)]) {
        @try {
            [loadingView performSelector:@selector(startLoading)];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return loadingView;
}

static void wcpl_markAllRead_stopLoadingView(id _Nullable loadingView, BOOL ok, NSString * _Nullable text) {
    if (!loadingView) {
        return;
    }

    SEL sel = ok ? @selector(stopLoadingAndShowOK:) : @selector(stopLoadingAndShowError:);
    if ([loadingView respondsToSelector:sel] && [text isKindOfClass:[NSString class]] && text.length > 0) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(loadingView, sel, text);
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    } else if ([loadingView respondsToSelector:@selector(stopLoading)]) {
        @try {
            [loadingView performSelector:@selector(stopLoading)];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([loadingView respondsToSelector:@selector(removeFromSuperview)]) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            @try {
                [loadingView removeFromSuperview];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        });
    }
}

static id _Nullable wcpl_markAllRead_fetchSessionMgr(void) {
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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static NSUInteger wcpl_markAllRead_markAllSessionsAsReadInternal(NSString * _Nullable __autoreleasing * _Nullable outFailText) {
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
            WCPLCatchLog(exception);
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
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }

        if ([sessionMgr respondsToSelector:@selector(recountUnReadCountAndFireExtension)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(sessionMgr, @selector(recountUnReadCountAndFireExtension));
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }

        WCPLLogInfo(@"[一键已读][+] 完成: sessions=%lu", (unsigned long)processedCount);
        return processedCount;
    } @finally {
        if (groupConfig) {
            if (canRestoreRoom) {
                @try {
                    ((void (*)(id, SEL, BOOL))objc_msgSend)(groupConfig, @selector(setIsOpenRoomEnable:), roomEnabled);
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
            }
            if (canRestoreBrand) {
                @try {
                    ((void (*)(id, SEL, BOOL))objc_msgSend)(groupConfig, @selector(setIsOpenBrandEnable:), brandEnabled);
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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

static NSString * _Nullable wcpl_topRightMenu_safeItemIDFromSender(id _Nullable sender) {
    if (!sender) {
        return nil;
    }

    id data = nil;
    if ([sender respondsToSelector:@selector(m_data)]) {
        @try {
            data = ((id (*)(id, SEL))objc_msgSend)(sender, @selector(m_data));
        } @catch (__unused NSException *exception) {
            WCPLCatchLog(exception);
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

static UIImage * _Nullable wcpl_topRightMenu_markAllReadIconImage(void) {
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
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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

static id _Nullable wcpl_topRightMenu_createMarkAllReadItemData(void) {
    Class btnDataClass = objc_getClass("RightTopMenuItemBtnData");
    if (!(btnDataClass && [btnDataClass respondsToSelector:@selector(genItemWithID:title:imageName:actionType:actionName:pluginUserName:)])) {
        return nil;
    }

    id btnData = nil;
    SEL sel = @selector(genItemWithID:title:imageName:actionType:actionName:pluginUserName:);
    @try {
        btnData = ((id _Nullable (*)(id, SEL, id, id, id, unsigned long long, id _Nullable, id _Nullable))objc_msgSend)(
            btnDataClass,
            sel,
            kWCPLTopRightMenuMarkAllReadID,
            @"一键已读",
            @"",
            0,
            nil,
            nil);
    } @catch (__unused NSException *exception) {
        WCPLCatchLog(exception);
        btnData = nil;
    }
    return btnData;
}

static BOOL wcpl_topRightMenu_itemLooksDataObject(id _Nullable item) {
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

static void wcpl_topRightMenu_syncMarkAllReadMenuItem(id _Nullable menuBtn) {
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

static BOOL wcpl_topRightMenu_resolveShowIDResult(id _Nullable itemID, BOOL origResult) {
    if ([itemID isKindOfClass:[NSString class]] &&
        [(NSString *)itemID isEqualToString:kWCPLTopRightMenuMarkAllReadID]) {
        return wcpl_markAllRead_isTopRightMenuEnabled();
    }
    return origResult;
}

NS_ASSUME_NONNULL_END
