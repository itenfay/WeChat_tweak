//
// WCPLLoadingViewHelpers.m
//

#import "WCPLLoadingViewHelpers.h"

#import "WCPLLogger.h"
#import "WCPLObjcSafeCall.h"
#import "WCPLServiceCenter.h"

#import <objc/message.h>
#import <objc/runtime.h>

static NSString *wcpl_loadingViewDefaultText(void) {
    id languageMgr = WCPLGetService(objc_getClass("MMLanguageMgr"));
    if (languageMgr && [languageMgr respondsToSelector:@selector(getStringForCurLanguage:)]) {
        @try {
            id value = ((id (*)(id, SEL, id))objc_msgSend)(languageMgr,
                                                           @selector(getStringForCurLanguage:),
                                                           @"Common_DefaultLoadingText");
            NSString *text = [value isKindOfClass:[NSString class]] ? (NSString *)value : nil;
            if (text.length > 0) {
                return text;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    return @"加载中…";
}

static void wcpl_loadingViewSetIgnoringInteractionIfPossible(id loadingView, BOOL ignoring) {
    if (!loadingView || ![loadingView respondsToSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:)]) {
        return;
    }
    @try {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(loadingView,
                                                @selector(setM_bIgnoringInteractionEventsWhenLoading:),
                                                ignoring);
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

static void wcpl_loadingViewSetFitFrameIfPossible(id loadingView) {
    if (!loadingView || ![loadingView respondsToSelector:@selector(setFitFrame:)]) {
        return;
    }
    @try {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(loadingView, @selector(setFitFrame:), YES);
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

static void wcpl_loadingViewStartIfPossible(id loadingView) {
    if (!loadingView || ![loadingView respondsToSelector:@selector(startLoading)]) {
        return;
    }
    @try {
        [loadingView performSelector:@selector(startLoading)];
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

id WCPLLoadingViewCreateAndStart(UIView *hostView, NSString *text, BOOL blockInteraction) {
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
    wcpl_loadingViewSetIgnoringInteractionIfPossible(loadingView, blockInteraction);
    wcpl_loadingViewSetFitFrameIfPossible(loadingView);
    WCPLLoadingViewSetText(loadingView, text);
    wcpl_loadingViewStartIfPossible(loadingView);
    return loadingView;
}

void WCPLLoadingViewSetText(id loadingView, NSString *text) {
    if (!loadingView) {
        return;
    }

    NSString *finalText = ([text isKindOfClass:[NSString class]] && text.length > 0)
        ? text
        : wcpl_loadingViewDefaultText();

    id label = WCPLSafeValueForKey(loadingView, @"m_label");
    if ([label isKindOfClass:[UILabel class]]) {
        ((UILabel *)label).text = finalText;
    }
}

void WCPLLoadingViewStop(id loadingView) {
    if (!loadingView) {
        return;
    }

    if ([loadingView respondsToSelector:@selector(stopLoading)]) {
        @try {
            [loadingView performSelector:@selector(stopLoading)];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
}

void WCPLLoadingViewStopWithResult(id loadingView, BOOL ok, NSString *text) {
    if (!loadingView) {
        return;
    }

    NSString *trimmed = ([text isKindOfClass:[NSString class]] && text.length > 0) ? text : nil;
    SEL selector = ok ? @selector(stopLoadingAndShowOK:) : @selector(stopLoadingAndShowError:);
    if (trimmed.length > 0 && [loadingView respondsToSelector:selector]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(loadingView, selector, trimmed);
            return;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    WCPLLoadingViewStop(loadingView);
}
