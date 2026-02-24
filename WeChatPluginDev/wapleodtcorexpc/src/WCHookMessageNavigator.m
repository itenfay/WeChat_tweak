#import "WCHookMessageNavigator.h"
#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"

#import <UIKit/UIKit.h>
#import <objc/message.h>

@interface CommonMessageCellView : UIView
@end

static Class WCHookReferViewClass(void);
static BOOL WCHookObjectIsReferView(id object);
static id WCHookInvokeObject(id target, SEL selector);
static UIResponder *WCHookLocateResponderForView(UIView *view);
static UIView *WCHookLocateCarrierViewFromObject(id object);
static id WCHookMessageWrapFromObject(id object);
static id WCHookMessageWrapForCell(CommonMessageCellView *cell);
static id WCHookReferMessageFromWrap(id messageWrap);
static id WCHookLocateTargetFromObject(id object);
static BOOL WCHookLooksLikeQuitMonitorTipContent(NSString *content);
static NSString *WCHookStringFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSString *WCHookMessageContentFromWrap(id messageWrap);
static NSString *WCHookMsgSourceFromWrap(id messageWrap);
static NSString *WCHookTrimString(NSString *text);
static NSString *WCHookExtractTagValue(NSString *text, NSString *tag);
static NSString *WCHookExtractFirstCSVItem(NSString *text);
static NSString *WCHookExtractQuitMonitorUserNameFromMsgSource(NSString *msgSource);
static NSString *WCHookExtractQuitMonitorUserNameFromContent(NSString *content);
static NSString *WCHookStripHTMLTags(NSString *text);
static NSString *WCHookExtractQuitMonitorDisplayNameFromContent(NSString *content);
static id WCHookContactForUserName(NSString *userName);
static id WCHookResolveProfileOpenTargetFromCell(CommonMessageCellView *cell);
static BOOL WCHookOpenProfileWithTarget(id target, NSString *userName, NSString *displayName);
static BOOL WCHookExecuteOpenQuitMemberProfileFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage);
static BOOL WCHookExecuteJumpToMessageWithTarget(id locateTarget, id targetMessage);
static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpFromInput(id toolView);
static BOOL WCHookPerformSyncOnMainThread(BOOL (^action)(void));

@implementation WCHookMessageNavigator

+ (BOOL)senderLooksLikeReferView:(id)sender {
    if (!sender) {
        return YES;
    }
    if ([sender isKindOfClass:[UITapGestureRecognizer class]]) {
        return WCHookObjectIsReferView(((UITapGestureRecognizer *)sender).view);
    }
    return WCHookObjectIsReferView(sender);
}

+ (BOOL)tryJumpFromCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"引用跳转(消息气泡): cell=%@", NSStringFromClass([cell class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromCell(cell);
    });
}

+ (BOOL)tryJumpFromInputTool:(id)toolView {
    if (!toolView) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"引用跳转(输入框): toolView=%@", NSStringFromClass([toolView class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromInput(toolView);
    });
}

+ (BOOL)tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteOpenQuitMemberProfileFromCell(cell);
    });
}

@end

static Class WCHookReferViewClass(void) {
    static Class referViewClass = Nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        referViewClass = NSClassFromString(@"MMInputMsgReferView");
    });
    return referViewClass;
}

static BOOL WCHookObjectIsReferView(id object) {
    Class referClass = WCHookReferViewClass();
    return referClass && [object isKindOfClass:referClass];
}

static id WCHookInvokeObject(id target, SEL selector) {
    if (!target || !selector) {
        return nil;
    }
    if (![target respondsToSelector:selector]) {
        return nil;
    }
    return ((id (*)(id, SEL))objc_msgSend)(target, selector);
}

static UIResponder *WCHookLocateResponderForView(UIView *view) {
    SEL selector = @selector(locateToMsg:);
    UIResponder *responder = view;
    while (responder) {
        if ([responder respondsToSelector:selector]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static UIView *WCHookLocateCarrierViewFromObject(id object) {
    if (!object) {
        return nil;
    }
    if ([object isKindOfClass:[UIView class]]) {
        return (UIView *)object;
    }

    SEL selectors[] = {
        @selector(getRichTextView),
        @selector(getContentView),
        @selector(contentView),
        @selector(view)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        id candidate = WCHookInvokeObject(object, selectors[idx]);
        if ([candidate isKindOfClass:[UIView class]]) {
            return (UIView *)candidate;
        }
    }
    return nil;
}

static id WCHookMessageWrapFromObject(id object) {
    if (!object) {
        return nil;
    }
    SEL selectors[] = {
        @selector(messageWrap),
        @selector(getMessageWrap),
        @selector(getCurrentMessageWrap),
        @selector(msgWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        id result = WCHookInvokeObject(object, selector);
        if (result) {
            return result;
        }
    }
    return nil;
}

static id WCHookMessageWrapForCell(CommonMessageCellView *cell) {
    id messageWrap = WCHookMessageWrapFromObject(cell);
    if (messageWrap) {
        return messageWrap;
    }
    id viewModel = WCHookInvokeObject(cell, @selector(viewModel));
    messageWrap = WCHookMessageWrapFromObject(viewModel);
    if (!messageWrap && viewModel) {
        messageWrap = WCHookInvokeObject(viewModel, @selector(getCurrentMessageWrap));
    }
    if (!messageWrap) {
        messageWrap = WCHookInvokeObject(cell, @selector(getCurrentMessageWrap));
    }
    return messageWrap;
}

static id WCHookReferMessageFromWrap(id messageWrap) {
    if (!messageWrap) {
        return nil;
    }
    SEL selectors[] = {
        @selector(referHostMsg),
        @selector(referingMessageWrap),
        @selector(replyingMessageWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        id result = WCHookInvokeObject(messageWrap, selector);
        if (result) {
            return result;
        }
    }
    return nil;
}

static BOOL WCHookLooksLikeQuitMonitorTipContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return ([content rangeOfString:@"[退群监控]"].location != NSNotFound &&
            ([content rangeOfString:@"已退出群聊"].location != NSNotFound ||
             [content rangeOfString:@"退出群聊"].location != NSNotFound));
}

static NSString *WCHookStringFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    if (!messageWrap) {
        return nil;
    }

    id fieldObj = WCHookInvokeObject(messageWrap, selector);
    if ([fieldObj isKindOfClass:[NSString class]]) {
        return (NSString *)fieldObj;
    }

    if (![kvcKey isKindOfClass:[NSString class]] || kvcKey.length == 0) {
        return nil;
    }

    @try {
        id kvcValue = [messageWrap valueForKey:kvcKey];
        if ([kvcValue isKindOfClass:[NSString class]]) {
            return (NSString *)kvcValue;
        }
    } @catch (__unused NSException *exceptionKVC) {
    }
    return nil;
}

static NSString *WCHookMessageContentFromWrap(id messageWrap) {
    return WCHookStringFieldFromWrap(messageWrap, @selector(m_nsContent), @"m_nsContent");
}

static NSString *WCHookMsgSourceFromWrap(id messageWrap) {
    return WCHookStringFieldFromWrap(messageWrap, @selector(m_nsMsgSource), @"m_nsMsgSource");
}

static NSString *WCHookTrimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *WCHookExtractFirstCSVItem(NSString *text) {
    NSString *trimmed = WCHookTrimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    NSCharacterSet *separators = [NSCharacterSet characterSetWithCharactersInString:@",; \n\t\r"];
    NSArray<NSString *> *parts = [trimmed componentsSeparatedByCharactersInSet:separators];
    for (NSString *part in parts) {
        NSString *value = WCHookTrimString(part);
        if (value.length > 0) {
            return value;
        }
    }
    return nil;
}

static NSString *WCHookExtractTagValue(NSString *text, NSString *tag) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0 ||
        ![tag isKindOfClass:[NSString class]] || tag.length == 0) {
        return nil;
    }

    NSString *openTag = [NSString stringWithFormat:@"<%@>", tag];
    NSString *closeTag = [NSString stringWithFormat:@"</%@>", tag];
    NSRange openRange = [text rangeOfString:openTag options:NSCaseInsensitiveSearch];
    if (openRange.location == NSNotFound) {
        return nil;
    }
    NSRange closeSearchRange = NSMakeRange(NSMaxRange(openRange), text.length - NSMaxRange(openRange));
    NSRange closeRange = [text rangeOfString:closeTag options:NSCaseInsensitiveSearch range:closeSearchRange];
    if (closeRange.location == NSNotFound || closeRange.location <= NSMaxRange(openRange)) {
        return nil;
    }

    NSRange valueRange = NSMakeRange(NSMaxRange(openRange), closeRange.location - NSMaxRange(openRange));
    if (NSMaxRange(valueRange) > text.length) {
        return nil;
    }
    NSString *value = [text substringWithRange:valueRange];
    if ([value hasPrefix:@"<![CDATA["] && [value hasSuffix:@"]]>"] && value.length >= 12) {
        value = [value substringWithRange:NSMakeRange(9, value.length - 12)];
    }
    return WCHookTrimString(value);
}

static NSString *WCHookExtractQuitMonitorUserNameFromMsgSource(NSString *msgSource) {
    NSString *userName = WCHookExtractTagValue(msgSource, @"memberusername");
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(msgSource, @"username");
    }
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(msgSource, @"fromusr");
    }
    if (userName.length == 0) {
        NSString *atUserList = WCHookExtractTagValue(msgSource, @"atuserlist");
        userName = WCHookExtractFirstCSVItem(atUserList);
    }
    return WCHookTrimString(userName);
}

static NSString *WCHookExtractQuitMonitorUserNameFromContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return nil;
    }

    NSRange profileRange = [text rangeOfString:@"weixin://contacts/profile/" options:NSCaseInsensitiveSearch];
    if (profileRange.location != NSNotFound) {
        NSUInteger start = NSMaxRange(profileRange);
        if (start < text.length) {
            NSCharacterSet *endSet = [NSCharacterSet characterSetWithCharactersInString:@"\"'<> )】\n\r\t"];
            NSRange searchRange = NSMakeRange(start, text.length - start);
            NSRange endRange = [text rangeOfCharacterFromSet:endSet options:0 range:searchRange];
            NSUInteger end = (endRange.location == NSNotFound) ? text.length : endRange.location;
            if (end > start && end <= text.length) {
                NSString *encoded = [text substringWithRange:NSMakeRange(start, end - start)];
                NSString *decoded = [encoded stringByRemovingPercentEncoding] ?: encoded;
                NSString *trimmed = WCHookTrimString(decoded);
                if (trimmed.length > 0) {
                    return trimmed;
                }
            }
        }
    }

    NSString *userName = WCHookExtractTagValue(text, @"memberusername");
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(text, @"username");
    }
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(text, @"fromusr");
    }
    return WCHookTrimString(userName);
}

static NSString *WCHookStripHTMLTags(NSString *text) {
    NSString *input = WCHookTrimString(text);
    if (input.length == 0) {
        return nil;
    }
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<[^>]+>"
                                                                           options:0
                                                                             error:&error];
    if (error || !regex) {
        return input;
    }
    NSString *stripped = [regex stringByReplacingMatchesInString:input
                                                         options:0
                                                           range:NSMakeRange(0, input.length)
                                                    withTemplate:@""];
    return WCHookTrimString(stripped);
}

static NSString *WCHookExtractQuitMonitorDisplayNameFromContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return nil;
    }

    NSString *nickName = WCHookExtractTagValue(text, @"nickname");
    if (nickName.length == 0) {
        nickName = WCHookExtractTagValue(text, @"displayname");
    }
    if (nickName.length > 0) {
        return WCHookTrimString(nickName);
    }

    NSRange prefixRange = [text rangeOfString:@"[退群监控]"];
    if (prefixRange.location != NSNotFound) {
        text = [text substringFromIndex:NSMaxRange(prefixRange)];
    }

    NSRange suffixRange = [text rangeOfString:@"已退出群聊"];
    if (suffixRange.location != NSNotFound) {
        text = [text substringToIndex:suffixRange.location];
    } else {
        suffixRange = [text rangeOfString:@"退出群聊"];
        if (suffixRange.location != NSNotFound) {
            text = [text substringToIndex:suffixRange.location];
        }
    }

    text = WCHookStripHTMLTags(text);
    if (text.length == 0) {
        return nil;
    }

    text = [text stringByReplacingOccurrencesOfString:@"（" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"）" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"(" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@")" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"、" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"@" withString:@""];
    text = WCHookExtractFirstCSVItem(text);
    return WCHookTrimString(text);
}

static id WCHookContactForUserName(NSString *userName) {
    NSString *target = WCHookTrimString(userName);
    if (target.length == 0) {
        return nil;
    }

    Class serviceCenterClass = NSClassFromString(@"MMServiceCenter");
    Class contactMgrClass = NSClassFromString(@"CContactMgr");
    if (!serviceCenterClass || !contactMgrClass ||
        ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }
    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }
    id contactMgr = ((id (*)(id, SEL, id))objc_msgSend)(serviceCenter, @selector(getService:), contactMgrClass);
    if (!contactMgr) {
        return nil;
    }

    SEL selectors[] = {
        NSSelectorFromString(@"getContactByName:"),
        NSSelectorFromString(@"getContactByNameFromDB:"),
        NSSelectorFromString(@"getContactByNameFromCache:")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![contactMgr respondsToSelector:selector]) {
            continue;
        }
        @try {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, selector, target);
            if (contact) {
                return contact;
            }
        } @catch (__unused NSException *exceptionLookup) {
        }
    }
    return nil;
}

static id WCHookResolveProfileOpenTargetFromCell(CommonMessageCellView *cell) {
    if (!cell) {
        return nil;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    if (locateTarget) {
        return locateTarget;
    }

    id viewController = WCHookInvokeObject(cell, @selector(getViewController));
    if (viewController) {
        return viewController;
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(cell);
    UIResponder *responder = carrier;
    while (responder) {
        if ([responder respondsToSelector:@selector(jumpToUserProfile:Displayname:Scence:)] ||
            [responder respondsToSelector:@selector(jumpToUserProfile:Displayname:Scence:fromBanner:)] ||
            [responder respondsToSelector:@selector(OpenContactInfo:)]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static BOOL WCHookOpenProfileWithTarget(id target, NSString *userName, NSString *displayName) {
    NSString *targetUser = WCHookTrimString(userName);
    if (!target || targetUser.length == 0) {
        return NO;
    }
    NSString *targetName = WCHookTrimString(displayName) ?: targetUser;

    SEL jumpWithBanner = NSSelectorFromString(@"jumpToUserProfile:Displayname:Scence:fromBanner:");
    if ([target respondsToSelector:jumpWithBanner]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, BOOL))objc_msgSend)(target,
                                                                           jumpWithBanner,
                                                                           targetUser,
                                                                           targetName,
                                                                           89,
                                                                           NO);
            return YES;
        } @catch (__unused NSException *exceptionJumpBanner) {
        }
    }

    SEL jumpBasic = NSSelectorFromString(@"jumpToUserProfile:Displayname:Scence:");
    if ([target respondsToSelector:jumpBasic]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(target,
                                                                     jumpBasic,
                                                                     targetUser,
                                                                     targetName,
                                                                     89);
            return YES;
        } @catch (__unused NSException *exceptionJumpBasic) {
        }
    }

    id contact = WCHookContactForUserName(targetUser);
    if (!contact) {
        return NO;
    }

    SEL openSelectors[] = {
        NSSelectorFromString(@"OpenContactInfo:"),
        NSSelectorFromString(@"openContactInfo:"),
        NSSelectorFromString(@"_openContactInfo:"),
        NSSelectorFromString(@"showContactInfoView:"),
        NSSelectorFromString(@"openUserProfileViewControllerWithContact:")
    };
    for (size_t idx = 0; idx < sizeof(openSelectors) / sizeof(openSelectors[0]); ++idx) {
        SEL selector = openSelectors[idx];
        if (![target respondsToSelector:selector]) {
            continue;
        }
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(target, selector, contact);
            return YES;
        } @catch (__unused NSException *exceptionOpen) {
        }
    }
    return NO;
}

static BOOL WCHookExecuteOpenQuitMemberProfileFromCell(CommonMessageCellView *cell) {
    id messageWrap = WCHookMessageWrapForCell(cell);
    NSString *content = WCHookMessageContentFromWrap(messageWrap);
    if (!WCHookLooksLikeQuitMonitorTipContent(content)) {
        return NO;
    }

    NSString *msgSource = WCHookMsgSourceFromWrap(messageWrap);
    NSString *userName = WCHookExtractQuitMonitorUserNameFromMsgSource(msgSource);
    if (userName.length == 0) {
        userName = WCHookExtractQuitMonitorUserNameFromContent(content);
    }
    if (userName.length == 0) {
        WCPLLogDebug(@"Quit monitor profile open skip: username missing content=%@", content ?: @"");
        return NO;
    }

    NSString *displayName = WCHookExtractQuitMonitorDisplayNameFromContent(content);
    id target = WCHookResolveProfileOpenTargetFromCell(cell);
    BOOL opened = WCHookOpenProfileWithTarget(target, userName, displayName);
    if (!opened) {
        id viewController = WCHookInvokeObject(target, @selector(getViewController));
        if (viewController && viewController != target) {
            opened = WCHookOpenProfileWithTarget(viewController, userName, displayName);
        }
    }

    if (opened) {
        WCPLLogInfo(@"Quit monitor profile open success: user=%@ name=%@ target=%@",
                    userName,
                    displayName ?: @"",
                    NSStringFromClass([target class]));
    } else {
        WCPLLogWarning(@"Quit monitor profile open failed: user=%@ name=%@ target=%@",
                       userName,
                       displayName ?: @"",
                       target ? NSStringFromClass([target class]) : @"(nil)");
    }
    return opened;
}

static id WCHookLocateTargetFromObject(id object) {
    id locateTarget = nil;
    UIView *carrierView = WCHookLocateCarrierViewFromObject(object);
    if (carrierView) {
        locateTarget = WCHookLocateResponderForView(carrierView);
    }
    if (!locateTarget) {
        locateTarget = WCHookInvokeObject(object, @selector(getViewController));
    }
    if (!locateTarget) {
        id viewModel = WCHookInvokeObject(object, @selector(viewModel));
        id dataSource = WCHookInvokeObject(viewModel, @selector(recordNodeDataSource));
        if (dataSource && [dataSource respondsToSelector:@selector(locateToMsg:)]) {
            locateTarget = dataSource;
        }
    }
    return locateTarget;
}

static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage) {
    if (!cell || !targetMessage) {
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    return WCHookExecuteJumpToMessageWithTarget(locateTarget, targetMessage);
}

static BOOL WCHookExecuteJumpToMessageWithTarget(id locateTarget, id targetMessage) {
    if (!locateTarget || !targetMessage) {
        return NO;
    }
    SEL locateSelector = @selector(locateToMsg:);
    if (![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }
    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, targetMessage);
    return YES;
}

static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }

    SEL returnSelector = @selector(onReturnToOriginalMsg);
    if ([cell respondsToSelector:returnSelector]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(cell, returnSelector);
            return YES;
        } @catch (__unused NSException *exception) {
        }
    }

    id messageWrap = WCHookMessageWrapForCell(cell);
    id targetMessage = WCHookReferMessageFromWrap(messageWrap);
    if (!targetMessage) {
        return NO;
    }

    return WCHookExecuteJumpToMessageFromCell(cell, targetMessage);
}

static BOOL WCHookExecuteJumpFromInput(id toolView) {
    if (!toolView) {
        return NO;
    }

    id replyingMessage = WCHookInvokeObject(toolView, @selector(replyingMessage));
    if (!replyingMessage) {
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(toolView);
    SEL locateSelector = @selector(locateToMsg:);
    if (!locateTarget || ![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }

    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, replyingMessage);
    return YES;
}

static BOOL WCHookPerformSyncOnMainThread(BOOL (^action)(void)) {
    if (!action) {
        return NO;
    }
    if ([NSThread isMainThread]) {
        return action();
    }
    __block BOOL result = NO;
    dispatch_sync(dispatch_get_main_queue(), ^{
        result = action();
    });
    return result;
}
