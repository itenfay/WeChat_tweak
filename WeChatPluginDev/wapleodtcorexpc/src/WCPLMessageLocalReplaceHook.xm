%group WCPLMessageLocalReplaceHookGroup

// ==================== 临时替换显示（仅本地） ====================

%hook TextMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    items = wcpl_injectClownMenuItemIfNeeded(self, items);
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleRepeatMenuItem:)) {
        return wcpl_isRepeatSupportedForCell(self);
    }
    if (arg1 == @selector(wcpl_handleLocalReplaceMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isClownFeatureEnabled() && wcpl_isClownSupportedMessage(msgWrap);
    }
    return %orig;
}

- (void)updateStatus {
    static NSString *const kHookSelector = @"updateStatus";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    %orig;

    @try {
        [self wcpl_applyLocalReplaceIfNeeded];
    } @catch (NSException *exception) {
        wcpl_messageHookLog(@"TextMessageCellView",
                            kHookSelector,
                            @"feature",
                            @"exception",
                            kOrigPolicy,
                            exception.reason ?: @"unknown");
    }
}

- (void)onCopy:(id)arg1 {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length > 0) {
        RichTextView *richTextView = (RichTextView *)wcpl_safeObjectIvar(self, "m_richTextView");
        if (!richTextView) {
            @try {
                richTextView = [self valueForKey:@"m_richTextView"];
            } @catch (__unused NSException *exception) {
                richTextView = nil;
            }
        }
        if (richTextView && [richTextView respondsToSelector:@selector(setContent:)]) {
            NSString *originText = nil;
            if (wcpl_isPlainTextMessage(msgWrap)) {
                originText = wcpl_originalContentForMessageWrap(msgWrap);
            }
            if (originText.length == 0) {
                originText = wcpl_displayTextForMessage(msgWrap, self) ?: (msgWrap.m_nsContent ?: @"");
            }
            if (originText.length > 0) {
                [richTextView setContent:originText];
            }
            %orig;
            [self wcpl_applyLocalReplaceIfNeeded];
            return;
        }
    }
    %orig;
}

%new
- (void)wcpl_applyLocalReplaceIfNeeded {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isClownSupportedMessage(msgWrap)) return;

    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL didSync = NO;
    if (wcpl_isClownSupportedMessage(msgWrap) && viewController) {
        didSync = wcpl_syncLocalReplaceContent(viewController, msgWrap);
    }

    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length == 0 && !didSync) {
        return;
    }

    BOOL needsLayoutRefresh = didSync || replaceText.length > 0;
    RichTextView *richTextView = (RichTextView *)wcpl_safeObjectIvar(self, "m_richTextView");
    if (!richTextView) {
        @try {
            richTextView = [self valueForKey:@"m_richTextView"];
        } @catch (__unused NSException *exception) {
            richTextView = nil;
        }
    }
    if (!richTextView || ![richTextView respondsToSelector:@selector(setContent:)]) return;

    NSString *displayText = nil;
    if (replaceText.length > 0) {
        displayText = replaceText;
    } else if (isPlainText) {
        displayText = msgWrap.m_nsContent;
    } else {
        displayText = wcpl_displayTextForMessage(msgWrap, self);
    }

    if (displayText.length == 0) return;

    if ([richTextView respondsToSelector:@selector(displayedText)]) {
        @try {
            NSString *currentText = [richTextView displayedText];
            if ([currentText isKindOfClass:[NSString class]] && [currentText isEqualToString:displayText]) {
                if (!needsLayoutRefresh) {
                    return;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    [richTextView setContent:displayText];
    if ([richTextView respondsToSelector:@selector(forceDisplayInSync)]) {
        [richTextView forceDisplayInSync];
    }

    if (needsLayoutRefresh) {
        id viewModel = nil;
        if ([self respondsToSelector:@selector(viewModel)]) {
            @try {
                viewModel = [self viewModel];
            } @catch (__unused NSException *exception) {
                viewModel = nil;
            }
        }
        if (viewModel && [viewModel respondsToSelector:@selector(resetLayoutCache)]) {
            @try {
                [viewModel resetLayoutCache];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
        if (!objc_getAssociatedObject(self, kWCPLLocalReplaceLayoutingKey)) {
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if ([self respondsToSelector:@selector(resetLayoutCache)]) {
                @try {
                    ((void (*)(id, SEL))objc_msgSend)(self, @selector(resetLayoutCache));
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
            }
            if ([self respondsToSelector:@selector(setNeedsLayout)]) {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(setNeedsLayout));
            }
            if ([self respondsToSelector:@selector(layoutIfNeeded)]) {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(layoutIfNeeded));
            }
            if ([self respondsToSelector:@selector(updateContentOffset)]) {
                @try {
                    [self updateContentOffset];
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
            }
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, nil, OBJC_ASSOCIATION_ASSIGN);
        }
    }
}

%new
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender {
    if (!wcpl_isClownFeatureEnabled()) {
        return;
    }
    wcpl_presentClownEditorForCell(self);
}

%new
- (void)wcpl_handleRepeatMenuItem:(id)sender {
    (void)sender;
    wcpl_handleRepeatMenuActionForCell(self);
}

%end

%end

%ctor {
    if (WCPL_ENABLE_MESSAGE_LOCAL_REPLACE_HOOK) {
        %init(WCPLMessageLocalReplaceHookGroup);
    }
}
