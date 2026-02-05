#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLMessageReplyManager.h"
#import "WCPLConstants.h"
#import "WCPLLogger.h"
#import "RichTextView.h"
#import <dispatch/dispatch.h>
#import <objc/runtime.h>
#import <objc/message.h>

// 复读按钮入口节流：避免长文本 layoutSubviews 高频触发导致重复创建
static char kWCPLRepeatButtonLastCallKey;

static BOOL wcpl_shouldThrottleRepeatButton(id cellView) {
    if (!cellView) return YES;
    NSNumber *last = objc_getAssociatedObject(cellView, &kWCPLRepeatButtonLastCallKey);
    NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
    if (last && (now - last.doubleValue) < kWCPLRepeatButtonThrottleInterval) {
        return YES;
    }
    objc_setAssociatedObject(cellView, &kWCPLRepeatButtonLastCallKey, @(now), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

@interface TextMessageCellView (WCPLLocalReplace)
- (void)wcpl_applyLocalReplaceIfNeeded;
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender;
@end

@interface MMMenuItem : NSObject
- (instancetype)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (SEL)action;
@end

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

// ==================== 本地文本替换（仅显示） ====================
static const void *kWCPLLocalReplaceMapKey = &kWCPLLocalReplaceMapKey;
static const void *kWCPLLocalReplaceOriginKey = &kWCPLLocalReplaceOriginKey;
static const void *kWCPLLocalReplaceLayoutingKey = &kWCPLLocalReplaceLayoutingKey;

static UIImage *wcpl_clownMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24'>"
            "<circle cx='12' cy='13' r='7' fill='#FFE0B2' stroke='#222222' stroke-width='1.2'/>"
            "<circle cx='9' cy='12' r='1' fill='#222222'/>"
            "<circle cx='15' cy='12' r='1' fill='#222222'/>"
            "<circle cx='12' cy='14' r='1.3' fill='#E53935' stroke='#222222' stroke-width='0.6'/>"
            "<path d='M8 16c1.2 1.6 2.6 2.4 4 2.4s2.8-.8 4-2.4' fill='none' stroke='#222222' stroke-width='1.2' stroke-linecap='round'/>"
            "<circle cx='5.6' cy='13' r='1.4' fill='#90CAF9' stroke='#222222' stroke-width='0.6'/>"
            "<circle cx='18.4' cy='13' r='1.4' fill='#90CAF9' stroke='#222222' stroke-width='0.6'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {
                image = nil;
            }
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }
    });
    return icon;
}

static NSMutableDictionary<NSString *, NSString *> *wcpl_localReplaceMapForController(id controller, BOOL createIfNeeded) {
    if (!controller) return nil;
    NSMutableDictionary *map = objc_getAssociatedObject(controller, kWCPLLocalReplaceMapKey);
    if (!map && createIfNeeded) {
        map = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(controller, kWCPLLocalReplaceMapKey, map, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return map;
}

static NSString *wcpl_messageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    NSString *fromUser = msgWrap.m_nsFromUsr ?: @"";
    NSString *toUser = msgWrap.m_nsToUsr ?: @"";
    unsigned int localId = msgWrap.m_uiMesLocalID;
    long long svrId = msgWrap.m_n64MesSvrID;
    if (localId == 0 && svrId == 0) {
        return [NSString stringWithFormat:@"%@|%@|%p", fromUser, toUser, msgWrap];
    }
    return [NSString stringWithFormat:@"%@|%@|%u|%lld", fromUser, toUser, localId, svrId];
}

static BOOL wcpl_isPlainTextMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 1);
}

static CMessageWrap *wcpl_messageWrapFromCell(id cell) {
    if (!cell) return nil;
    if ([cell respondsToSelector:@selector(getCurrentMessageWrap)]) {
        @try {
            id wrap = [cell getCurrentMessageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(getMediaWrap)]) {
        @try {
            id wrap = [cell getMediaWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = [cell viewModel];
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            @try {
                return [viewModel messageWrap];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewModel respondsToSelector:@selector(msgWrap)]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(msgWrap));
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) {
            }
        }
        @try {
            id wrap = [viewModel valueForKey:@"messageWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
        @try {
            id wrap = [viewModel valueForKey:@"msgWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static void wcpl_setLocalReplaceText(id controller, CMessageWrap *msgWrap, NSString *text) {
    if (!controller || !msgWrap) return;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return;
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, YES);
    if (!map) return;
    if (text.length > 0) {
        map[key] = text;
    } else {
        [map removeObjectForKey:key];
    }
}

static NSString *wcpl_localReplaceText(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return nil;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return nil;
    NSDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    return map[key];
}

static NSString *wcpl_originalContentForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    id stored = objc_getAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey);
    return [stored isKindOfClass:[NSString class]] ? (NSString *)stored : nil;
}

static BOOL wcpl_syncLocalReplaceContent(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return NO;
    if (!wcpl_isPlainTextMessage(msgWrap)) return NO;
    NSString *replaceText = wcpl_localReplaceText(controller, msgWrap);
    NSString *originText = msgWrap.m_nsContent ?: @"";
    NSString *storedOrigin = wcpl_originalContentForMessageWrap(msgWrap);
    if (replaceText.length > 0) {
        if (!storedOrigin && ![originText isEqualToString:replaceText]) {
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        if (![originText isEqualToString:replaceText]) {
            msgWrap.m_nsContent = replaceText;
            return YES;
        }
        return NO;
    }
    if (storedOrigin) {
        if (![originText isEqualToString:storedOrigin]) {
            msgWrap.m_nsContent = storedOrigin;
        }
        objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, nil, OBJC_ASSOCIATION_ASSIGN);
        return YES;
    }
    return NO;
}

static void wcpl_clearLocalReplaceMap(id controller) {
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    [map removeAllObjects];
}

%hook SyncCmdHandler

- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2 {
    NSMutableArray *msgList = [self valueForKey:@"m_arrMsgList"];
    NSMutableArray *msgListResult = [WCPLFuncService filtMessageFromMsgList:msgList];
    [self setValue:msgListResult forKey:@"m_arrMsgList"];

    return %orig;
}

%end

%hook CMessageMgr

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
    id result = %orig;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;

    if (!config.userIgnoreEnable) {
        return result;
    }

    if ([result isKindOfClass:[NSArray class]] || [result isKindOfClass:[NSMutableArray class]]) {
        return [WCPLFuncService filtMessageFromMsgList:(NSMutableArray *)result];
    }

    return result;
}

%end

%hook BaseMsgContentViewController

- (void)viewDidLoad {
    %orig;

    // 复读功能现在通过 Hook CommonMessageCellView 实现
    // 不再需要在这里添加按钮
}

- (void)viewDidAppear:(_Bool)arg1 {
    %orig;

    id contact = [self GetContact];
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length > 0) {
        [WCPLConfigCenter shared].ignore.curUsrName = usrName;
    }

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;

    UINavigationController *navCon = [self valueForKey:@"navigationController"];
    if ([navCon.viewControllers indexOfObject:(UIViewController *)self] == NSNotFound) {
        [[WCPLAVManager shareManager] stop];
    }

    if (self.isMovingFromParentViewController || self.isBeingDismissed) {
        wcpl_clearLocalReplaceMap(self);
    }
}

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 {
    %orig;

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        [[WCPLAVManager shareManager] stop];
    }
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1 {
    %orig;

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)reloadMessages {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

- (void)reloadWholePage {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

%end

// ==================== 复读机功能 Hook ====================
// Hook 文本消息 Cell，在别人发送的消息气泡旁边添加 +1 按钮

%hook TextMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    if (wcpl_shouldThrottleRepeatButton(self)) {
        return;
    }
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)setViewModel:(id)viewModel {
    %orig;

    // viewModel 设置完成后补一次，避免布局时机导致按钮消失
    if (wcpl_shouldThrottleRepeatButton(self)) {
        return;
    }
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 应用消息 Cell（包括引用回复消息）
%hook AppMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮（仅对引用回复消息）
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 表情包消息 Cell (App类型)
%hook AppEmoticonMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 确保表情包消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 表情包消息 Cell (普通类型)
%hook EmoticonMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 确保表情包消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 语音消息 Cell
%hook VoiceMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 图片消息 Cell
%hook ImageMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 视频消息 Cell
%hook VideoMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// ==================== 临时替换显示（仅本地） ====================

%hook TextMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isPlainTextMessage(msgWrap)) {
        return items;
    }
    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }
    SEL action = @selector(wcpl_handleLocalReplaceMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if ([item isKindOfClass:menuItemClass] && [item respondsToSelector:@selector(action)]) {
            @try {
                if ([item action] == action) {
                    return mutableItems;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }
    id menuItem = [[menuItemClass alloc] initWithTitle:@"小丑" target:self action:action];
    if (menuItem) {
        if ([menuItem respondsToSelector:@selector(setIconImage:)]) {
            UIImage *icon = wcpl_clownMenuIconImage();
            if (icon) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(menuItem, @selector(setIconImage:), icon);
                } @catch (__unused NSException *exception) {
                }
            }
        }
        [mutableItems addObject:menuItem];
    }
    return mutableItems;
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleLocalReplaceMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isPlainTextMessage(msgWrap);
    }
    return %orig;
}

- (void)updateStatus {
    %orig;
    [self wcpl_applyLocalReplaceIfNeeded];
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
        RichTextView *richTextView = nil;
        @try {
            richTextView = MSHookIvar<RichTextView *>(self, "m_richTextView");
        } @catch (__unused NSException *exception) {
            richTextView = nil;
        }
        if (richTextView && [richTextView respondsToSelector:@selector(setContent:)]) {
            NSString *originText = wcpl_originalContentForMessageWrap(msgWrap) ?: (msgWrap.m_nsContent ?: @"");
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
    if (!wcpl_isPlainTextMessage(msgWrap)) return;
    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    BOOL didSync = NO;
    if (viewController) {
        didSync = wcpl_syncLocalReplaceContent(viewController, msgWrap);
    }
    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length == 0 && !didSync) {
        return;
    }
    BOOL needsLayoutRefresh = didSync || replaceText.length > 0;
    RichTextView *richTextView = nil;
    @try {
        richTextView = MSHookIvar<RichTextView *>(self, "m_richTextView");
    } @catch (__unused NSException *exception) {
        richTextView = nil;
    }
    if (!richTextView || ![richTextView respondsToSelector:@selector(setContent:)]) return;
    NSString *displayText = replaceText.length > 0 ? replaceText : msgWrap.m_nsContent;
    if (displayText.length == 0) return;
    if ([richTextView respondsToSelector:@selector(displayedText)]) {
        @try {
            NSString *currentText = [richTextView displayedText];
            if ([currentText isKindOfClass:[NSString class]] && [currentText isEqualToString:displayText]) {
                if (!needsLayoutRefresh) {
                    return;
                }
            }
        } @catch (__unused NSException *exception) {
        }
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
            } @catch (__unused NSException *exception) {
            }
        }
        if (!objc_getAssociatedObject(self, kWCPLLocalReplaceLayoutingKey)) {
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if ([self respondsToSelector:@selector(resetLayoutCache)]) {
                @try {
                    ((void (*)(id, SEL))objc_msgSend)(self, @selector(resetLayoutCache));
                } @catch (__unused NSException *exception) {
                }
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
                } @catch (__unused NSException *exception) {
                }
            }
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, nil, OBJC_ASSOCIATION_ASSIGN);
        }
    }
}

%new
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isPlainTextMessage(msgWrap)) return;

    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    if (!viewController || ![viewController respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return;
    }

    NSString *originText = msgWrap.m_nsContent ?: @"";
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"小丑"
                                                                   message:@"仅在当前聊天页面生效，离开后自动恢复"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.text = originText;
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    __weak typeof(self) weakSelf = self;
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (trimmed.length > 0 && !wcpl_originalContentForMessageWrap(msgWrap)) {
            NSString *originText = msgWrap.m_nsContent ?: @"";
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        wcpl_setLocalReplaceText(viewController, msgWrap, trimmed);
        wcpl_syncLocalReplaceContent(viewController, msgWrap);
        if ([viewController respondsToSelector:@selector(clearNodeLayoutCache)]) {
            @try {
                [(BaseMsgContentViewController *)viewController clearNodeLayoutCache];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewController respondsToSelector:@selector(reloadNodeWithMessageWrap:)]) {
            @try {
                [viewController reloadNodeWithMessageWrap:msgWrap];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewController respondsToSelector:@selector(reloadVisibleNodeWithCellView:)]) {
            @try {
                [(BaseMsgContentViewController *)viewController reloadVisibleNodeWithCellView:strongSelf];
            } @catch (__unused NSException *exception) {
            }
        }

        // 文本变更后强制消息列表重新计算该行布局（否则气泡宽度可能沿用旧缓存，需滚动/刷新才会自适配）
        dispatch_async(dispatch_get_main_queue(), ^{
            if (![viewController respondsToSelector:@selector(getMsgTableView)]) return;
            UITableView *tableView = nil;
            @try {
                id tv = [(BaseMsgContentViewController *)viewController getMsgTableView];
                if ([tv isKindOfClass:[UITableView class]]) {
                    tableView = (UITableView *)tv;
                }
            } @catch (__unused NSException *exception) {
                tableView = nil;
            }
            if (!tableView) return;
            [UIView performWithoutAnimation:^{
                @try {
                    [tableView beginUpdates];
                    [tableView endUpdates];
                } @catch (__unused NSException *exception) {
                }
            }];
        });
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [viewController presentViewController:alert animated:YES completion:nil];
}

%end
