#import "WCHookMessageNavigator.h"
#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"

#import <UIKit/UIKit.h>
#import <objc/message.h>
#include <stdlib.h>

@interface CommonMessageCellView : UIView
@end

static Class WCHookReferViewClass(void);
static BOOL WCHookObjectIsReferView(id object);
static id WCHookInvokeObject(id target, SEL selector);
static UIResponder *WCHookLocateResponderForView(UIView *view);
static id WCHookMessageWrapFromObject(id object);
static id WCHookMessageWrapForCell(CommonMessageCellView *cell);
static id WCHookReferMessageFromWrap(id messageWrap);
static id WCHookRevokeTargetFromTipWrap(id tipWrap);
static id WCHookLocateTargetFromObject(id object);
static BOOL WCHookLooksLikeRevokeTipContent(NSString *content);
static NSString *WCHookTrimString(NSString *text);
static NSString *WCHookExtractTagValue(NSString *text, NSString *tag);
static long long WCHookExtractLongLongTagValue(NSString *text, NSString *tag);
static id WCHookMessageMgr(void);
static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage);
static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpFromRevokeTipCell(CommonMessageCellView *cell);
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

+ (BOOL)tryJumpFromRevokeTipCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"撤回跳转(系统提示): cell=%@", NSStringFromClass([cell class]));
    BOOL result = WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromRevokeTipCell(cell);
    });
    WCPLLogDebug(@"Revoke tip jump attempt: cell=%@ result=%d", NSStringFromClass([cell class]), result ? 1 : 0);
    return result;
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

static BOOL WCHookLooksLikeRevokeTipContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return ([content rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
            [content rangeOfString:@"已拦截撤回"].location != NSNotFound);
}

static NSString *WCHookTrimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
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

static long long WCHookExtractLongLongTagValue(NSString *text, NSString *tag) {
    NSString *value = WCHookExtractTagValue(text, tag);
    if (![value isKindOfClass:[NSString class]] || value.length == 0) {
        return 0;
    }
    long long parsed = strtoll(value.UTF8String, NULL, 10);
    return parsed > 0 ? parsed : 0;
}

static id WCHookMessageMgr(void) {
    Class serviceCenterClass = NSClassFromString(@"MMServiceCenter");
    Class messageMgrClass = NSClassFromString(@"CMessageMgr");
    if (!serviceCenterClass || !messageMgrClass ||
        ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }
    return ((id (*)(id, SEL, id))objc_msgSend)(serviceCenter, @selector(getService:), messageMgrClass);
}

static id WCHookRevokeTargetFromTipWrap(id tipWrap) {
    if (!tipWrap) {
        return nil;
    }

    NSString *content = nil;
    id contentObj = WCHookInvokeObject(tipWrap, @selector(m_nsContent));
    if ([contentObj isKindOfClass:[NSString class]]) {
        content = (NSString *)contentObj;
    } else {
        @try {
            id kvcContent = [tipWrap valueForKey:@"m_nsContent"];
            if ([kvcContent isKindOfClass:[NSString class]]) {
                content = (NSString *)kvcContent;
            }
        } @catch (__unused NSException *exceptionContent) {
        }
    }
    if (!WCHookLooksLikeRevokeTipContent(content)) {
        WCPLLogDebug(@"Revoke tip jump skip: content not revoke tip");
        return nil;
    }

    NSString *msgSource = nil;
    id sourceObj = WCHookInvokeObject(tipWrap, @selector(m_nsMsgSource));
    if ([sourceObj isKindOfClass:[NSString class]]) {
        msgSource = (NSString *)sourceObj;
    } else {
        @try {
            id kvcSource = [tipWrap valueForKey:@"m_nsMsgSource"];
            if ([kvcSource isKindOfClass:[NSString class]]) {
                msgSource = (NSString *)kvcSource;
            }
        } @catch (__unused NSException *exceptionSource) {
        }
    }

    NSString *session = WCHookExtractTagValue(msgSource, @"wcpl_revoke_session");
    if (session.length == 0) {
        id toUsrObj = WCHookInvokeObject(tipWrap, @selector(m_nsToUsr));
        id fromUsrObj = WCHookInvokeObject(tipWrap, @selector(m_nsFromUsr));
        NSString *toUsr = [toUsrObj isKindOfClass:[NSString class]] ? (NSString *)toUsrObj : nil;
        NSString *fromUsr = [fromUsrObj isKindOfClass:[NSString class]] ? (NSString *)fromUsrObj : nil;
        session = WCHookTrimString(toUsr) ?: WCHookTrimString(fromUsr);
    }
    if (session.length == 0) {
        WCPLLogDebug(@"Revoke tip jump skip: session unavailable");
        return nil;
    }

    long long svrID = WCHookExtractLongLongTagValue(msgSource, @"wcpl_revoke_svrid");
    unsigned int localID = (unsigned int)WCHookExtractLongLongTagValue(msgSource, @"wcpl_revoke_localid");

    id messageMgr = WCHookMessageMgr();
    if (!messageMgr) {
        WCPLLogDebug(@"Revoke tip jump skip: CMessageMgr unavailable");
        return nil;
    }

    if (svrID > 0 && [messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
        id msg = ((id (*)(id, SEL, id, long long))objc_msgSend)(messageMgr, @selector(GetMsg:n64SvrID:), session, svrID);
        if (msg) {
            WCPLLogInfo(@"Revoke tip jump resolve by svrID: session=%@ svrID=%lld", session, svrID);
            return msg;
        }
    }

    if (localID > 0) {
        SEL localSelectors[] = {
            NSSelectorFromString(@"GetMsg:LocalID:"),
            NSSelectorFromString(@"GetMsg:localID:"),
            NSSelectorFromString(@"GetMsg:MesLocalID:")
        };
        for (size_t idx = 0; idx < sizeof(localSelectors) / sizeof(localSelectors[0]); ++idx) {
            SEL selector = localSelectors[idx];
            if (![messageMgr respondsToSelector:selector]) {
                continue;
            }
            id msg = ((id (*)(id, SEL, id, unsigned int))objc_msgSend)(messageMgr, selector, session, localID);
            if (msg) {
                WCPLLogInfo(@"Revoke tip jump resolve by localID: session=%@ localID=%u", session, localID);
                return msg;
            }
        }
    }

    WCPLLogDebug(@"Revoke tip jump resolve miss: session=%@ svrID=%lld localID=%u msgSourceLen=%lu",
                 session,
                 svrID,
                 localID,
                 (unsigned long)([msgSource isKindOfClass:[NSString class]] ? msgSource.length : 0));
    return nil;
}

static id WCHookLocateTargetFromObject(id object) {
    id locateTarget = nil;
    if ([object isKindOfClass:[UIView class]]) {
        locateTarget = WCHookLocateResponderForView((UIView *)object);
    }
    if (!locateTarget) {
        locateTarget = WCHookInvokeObject(object, @selector(getViewController));
    }
    return locateTarget;
}

static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage) {
    if (!cell || !targetMessage) {
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    SEL locateSelector = @selector(locateToMsg:);
    if (!locateTarget || ![locateTarget respondsToSelector:locateSelector]) {
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

static BOOL WCHookExecuteJumpFromRevokeTipCell(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }
    id messageWrap = WCHookMessageWrapForCell(cell);
    id targetMessage = WCHookRevokeTargetFromTipWrap(messageWrap);
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
