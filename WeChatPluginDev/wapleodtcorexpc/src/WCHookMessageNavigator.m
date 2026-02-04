#import "WCHookMessageNavigator.h"
#import "WCPLCrashReporter.h"

#import <UIKit/UIKit.h>
#import <objc/message.h>

@interface CommonMessageCellView : UIView
@end

static Class WCHookReferViewClass(void);
static BOOL WCHookObjectIsReferView(id object);
static id WCHookInvokeObject(id target, SEL selector);
static UIResponder *WCHookLocateResponderForView(UIView *view);
static id WCHookMessageWrapFromObject(id object);
static id WCHookMessageWrapForCell(CommonMessageCellView *cell);
static id WCHookReferMessageFromWrap(id messageWrap);
static id WCHookLocateTargetFromObject(id object);
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

    id locateTarget = WCHookLocateTargetFromObject(cell);
    SEL locateSelector = @selector(locateToMsg:);
    if (!locateTarget || ![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }

    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, targetMessage);
    return YES;
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
