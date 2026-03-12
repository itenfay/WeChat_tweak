// Internal include-only module.
// Right-top-menu hook glue for mark-all-read in WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

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
