%group WCPLClownFeatureHooks
%hook WCPayTransferMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectClownMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleLocalReplaceMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isClownFeatureEnabled() && wcpl_isClownSupportedMessage(msgWrap);
    }
    return %orig;
}

- (void)updateStatus {
    %orig;

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isTransferMessage(msgWrap)) {
        return;
    }

    id viewController = wcpl_viewControllerFromCell(self);
    if (!viewController) {
        return;
    }

    wcpl_syncLocalReplaceContent(viewController, msgWrap);
}

%new
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender {
    if (!wcpl_isClownFeatureEnabled()) {
        return;
    }
    wcpl_presentClownEditorForCell(self);
}

%end

%end

%ctor {
    %init(_ungrouped);
    if (WCPL_ENABLE_CLOWN_FEATURE_HOOK) {
        %init(WCPLClownFeatureHooks);
    }
}
