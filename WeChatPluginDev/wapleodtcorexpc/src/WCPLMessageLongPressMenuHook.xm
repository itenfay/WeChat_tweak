%group WCPLMessageLongPressMenuHookGroup

// 保持特殊消息 Cell 的滑动手势初始化

static void wcpl_messageLongPressCellDidMoveToWindow(id cell) {
    UIView *view = [cell isKindOfClass:[UIView class]] ? (UIView *)cell : nil;
    if (!view) {
        return;
    }

    if (view.window) {
        [cell wchook_setupSwipeGestureIfNeeded];
    } else {
        [cell wchook_resetSwipeAnimated:NO];
    }
}

static inline BOOL wcpl_messageLongPressIsRepeatAction(SEL action) {
    return (action == @selector(wcpl_handleRepeatMenuItem:));
}

%hook AppEmoticonMessageCellView

- (void)didMoveToWindow {
    %orig;

    wcpl_messageLongPressCellDidMoveToWindow(self);
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (wcpl_messageLongPressIsRepeatAction(arg1)) {
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

    wcpl_messageLongPressCellDidMoveToWindow(self);
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (wcpl_messageLongPressIsRepeatAction(arg1)) {
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

    wcpl_messageLongPressCellDidMoveToWindow(self);
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (wcpl_messageLongPressIsRepeatAction(arg1)) {
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

    wcpl_messageLongPressCellDidMoveToWindow(self);
}

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (wcpl_messageLongPressIsRepeatAction(arg1)) {
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
