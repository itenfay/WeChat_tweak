%group WCPLMessageLongPressMenuHookGroup

// 保持特殊消息 Cell 的滑动手势初始化

%hook AppEmoticonMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleRepeatMenuItem:)) {
        return wcpl_isRepeatSupportedForCell(self);
    }
    return %orig;
}

%new
- (void)wcpl_handleRepeatMenuItem:(id)sender {
    (void)sender;
    wcpl_handleRepeatMenuActionForCell(self);
}

%end

%hook EmoticonMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleRepeatMenuItem:)) {
        return wcpl_isRepeatSupportedForCell(self);
    }
    return %orig;
}

%new
- (void)wcpl_handleRepeatMenuItem:(id)sender {
    (void)sender;
    wcpl_handleRepeatMenuActionForCell(self);
}

%end


%hook ImageMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleRepeatMenuItem:)) {
        return wcpl_isRepeatSupportedForCell(self);
    }
    return %orig;
}

%new
- (void)wcpl_handleRepeatMenuItem:(id)sender {
    (void)sender;
    wcpl_handleRepeatMenuActionForCell(self);
}

%end

%hook VideoMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleRepeatMenuItem:)) {
        return wcpl_isRepeatSupportedForCell(self);
    }
    return %orig;
}

%new
- (void)wcpl_handleRepeatMenuItem:(id)sender {
    (void)sender;
    wcpl_handleRepeatMenuActionForCell(self);
}

%end

%end

%ctor {
    if (WCPL_ENABLE_MESSAGE_LONGPRESS_MENU_HOOK) {
        %init(WCPLMessageLongPressMenuHookGroup);
    }
}
