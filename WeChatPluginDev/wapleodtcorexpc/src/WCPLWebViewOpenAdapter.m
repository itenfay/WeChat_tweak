#import "WCPLWebViewOpenAdapter.h"

#import "WCPLLogger.h"
#import "WCPLNavigationAdapter.h"
#import "WCPLUIKitHelpers.h"

#import <SafariServices/SafariServices.h>
#import <UIKit/UIKit.h>
#import <objc/message.h>

static id wcpl_webViewOpenCallObject(id target, SEL selector) {
    if (!target || !selector || ![target respondsToSelector:selector]) {
        return nil;
    }
    @try {
        return ((id (*)(id, SEL))objc_msgSend)(target, selector);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"链接打开读取失败: target=%@ selector=%@ reason=%@",
                       NSStringFromClass([target class]),
                       NSStringFromSelector(selector),
                       exception.reason ?: exception);
    }
    return nil;
}

static NSURL *wcpl_webViewOpenNormalizedURL(id rawURL) {
    if ([rawURL isKindOfClass:[NSURL class]]) {
        NSURL *url = (NSURL *)rawURL;
        return url.scheme.length > 0 ? url : nil;
    }
    if (![rawURL isKindOfClass:[NSString class]]) {
        return nil;
    }

    NSString *urlText = [(NSString *)rawURL stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (urlText.length == 0) {
        return nil;
    }

    NSURL *url = [NSURL URLWithString:urlText];
    return url.scheme.length > 0 ? url : nil;
}

static BOOL wcpl_webViewOpenShouldOfferChoice(NSURL *url) {
    if (![url isKindOfClass:[NSURL class]]) {
        return NO;
    }

    NSString *scheme = url.scheme.lowercaseString;
    return [scheme isEqualToString:@"http"] || [scheme isEqualToString:@"https"];
}

static UIViewController *wcpl_webViewOpenVisibleController(UIViewController *controller) {
    return WCPLVisibleControllerFromController(controller);
}

static UIViewController *wcpl_webViewOpenTopMostController(void) {
    return WCPLNavigationAdapterTopVisibleViewController();
}

static UIViewController *wcpl_webViewOpenResolvePresenter(id source) {
    NSArray *candidates = @[
        source ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(getViewController)) ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(m_viewController)) ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(viewController)) ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(getNavigationController)) ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(getCurrentWebviewViewController)) ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(getMMWebViewController)) ?: [NSNull null],
        wcpl_webViewOpenCallObject(source, @selector(webVCDelegate)) ?: [NSNull null]
    ];
    for (id candidate in candidates) {
        if ([candidate isKindOfClass:[UIViewController class]]) {
            return wcpl_webViewOpenVisibleController((UIViewController *)candidate);
        }
    }

    id a8keyLogic = wcpl_webViewOpenCallObject(source, @selector(a8keyLogic));
    id delegate = wcpl_webViewOpenCallObject(a8keyLogic, @selector(delegate));
    if ([delegate isKindOfClass:[UIViewController class]]) {
        return wcpl_webViewOpenVisibleController((UIViewController *)delegate);
    }
    id delegateWebVC = wcpl_webViewOpenCallObject(delegate, @selector(getCurrentWebviewViewController));
    if ([delegateWebVC isKindOfClass:[UIViewController class]]) {
        return wcpl_webViewOpenVisibleController((UIViewController *)delegateWebVC);
    }
    return wcpl_webViewOpenTopMostController();
}

static BOOL wcpl_webViewOpenTryGoToURL(id target, NSURL *url) {
    if (!target || !url || ![target respondsToSelector:@selector(goToURL:)]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(target, @selector(goToURL:), url);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"微信内打开失败: target=%@ selector=goToURL: reason=%@",
                       NSStringFromClass([target class]),
                       exception.reason ?: exception);
    }
    return NO;
}

static BOOL wcpl_webViewOpenTryLoadRequest(id target, NSURL *url) {
    if (!target || !url) {
        return NO;
    }

    id webView = wcpl_webViewOpenCallObject(target, @selector(webView));
    if (!webView || ![webView respondsToSelector:@selector(loadRequest:)]) {
        return NO;
    }

    @try {
        NSURLRequest *request = [NSURLRequest requestWithURL:url];
        ((id (*)(id, SEL, id))objc_msgSend)(webView, @selector(loadRequest:), request);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"微信内打开失败: target=%@ selector=loadRequest: reason=%@",
                       NSStringFromClass([target class]),
                       exception.reason ?: exception);
    }
    return NO;
}

static BOOL wcpl_webViewOpenTryLogicRoute(id target, NSURL *url) {
    if (!target || !url || ![target respondsToSelector:@selector(goToURL:withCustomerCookies:)]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(target,
                                                  @selector(goToURL:withCustomerCookies:),
                                                  url,
                                                  nil);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"微信内打开失败: target=%@ selector=goToURL:withCustomerCookies: reason=%@",
                       NSStringFromClass([target class]),
                       exception.reason ?: exception);
    }
    return NO;
}

static BOOL wcpl_webViewOpenOpenInWeChat(id source, NSURL *url) {
    if (wcpl_webViewOpenTryLoadRequest(source, url) || wcpl_webViewOpenTryGoToURL(source, url)) {
        return YES;
    }

    id webVC = wcpl_webViewOpenCallObject(source, @selector(getCurrentWebviewViewController));
    if (wcpl_webViewOpenTryLoadRequest(webVC, url) || wcpl_webViewOpenTryGoToURL(webVC, url)) {
        return YES;
    }

    id directWebVC = wcpl_webViewOpenCallObject(source, @selector(getMMWebViewController));
    if (wcpl_webViewOpenTryLoadRequest(directWebVC, url) || wcpl_webViewOpenTryGoToURL(directWebVC, url)) {
        return YES;
    }

    id delegate = wcpl_webViewOpenCallObject(source, @selector(webVCDelegate));
    if (wcpl_webViewOpenTryLoadRequest(delegate, url) || wcpl_webViewOpenTryGoToURL(delegate, url)) {
        return YES;
    }

    id a8keyLogic = wcpl_webViewOpenCallObject(source, @selector(a8keyLogic));
    id a8keyDelegate = wcpl_webViewOpenCallObject(a8keyLogic, @selector(delegate));
    if (wcpl_webViewOpenTryLoadRequest(a8keyDelegate, url) || wcpl_webViewOpenTryGoToURL(a8keyDelegate, url)) {
        return YES;
    }
    id a8keyWebVC = wcpl_webViewOpenCallObject(a8keyDelegate, @selector(getCurrentWebviewViewController));
    if (wcpl_webViewOpenTryLoadRequest(a8keyWebVC, url) || wcpl_webViewOpenTryGoToURL(a8keyWebVC, url)) {
        return YES;
    }
    return wcpl_webViewOpenTryLogicRoute(a8keyLogic, url);
}

static void wcpl_webViewOpenConfigurePopover(UIAlertController *sheet, UIViewController *presenter) {
    UIPopoverPresentationController *popover = sheet.popoverPresentationController;
    if (!popover || ![presenter isKindOfClass:[UIViewController class]]) {
        return;
    }

    UIView *anchorView = presenter.view ?: UIApplication.sharedApplication.windows.firstObject;
    if (![anchorView isKindOfClass:[UIView class]]) {
        return;
    }

    popover.sourceView = anchorView;
    popover.sourceRect = CGRectMake(CGRectGetMidX(anchorView.bounds),
                                    CGRectGetMaxY(anchorView.bounds) - 1.0,
                                    1.0,
                                    1.0);
    popover.permittedArrowDirections = UIPopoverArrowDirectionDown;
}

static void wcpl_webViewOpenPresentAlert(UIViewController *presenter,
                                         NSString *title,
                                         NSURL *url) {
    if (![presenter isKindOfClass:[UIViewController class]]) {
        return;
    }

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:url.absoluteString ?: @"链接无效"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"知道了"
                                              style:UIAlertActionStyleDefault
                                            handler:nil]];
    [presenter presentViewController:alert animated:YES completion:nil];
}

static void wcpl_webViewOpenPresentFailureAlert(UIViewController *presenter, NSURL *url) {
    wcpl_webViewOpenPresentAlert(presenter, @"原生打开失败", url);
}

static void wcpl_webViewOpenPresentInAppSafari(UIViewController *presenter, NSURL *url) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *host = presenter ?: wcpl_webViewOpenTopMostController();
        host = wcpl_webViewOpenVisibleController(host);
        if (![host isKindOfClass:[UIViewController class]]) {
            WCPLLogWarning(@"链接打开选择失败: action=safari reason=presenter_missing url=%@",
                           url.absoluteString ?: @"");
            return;
        }

        if (![SFSafariViewController class]) {
            WCPLLogWarning(@"链接打开选择失败: action=safari reason=safari_view_controller_missing url=%@",
                           url.absoluteString ?: @"");
            wcpl_webViewOpenPresentAlert(host, @"Safari打开失败", url);
            return;
        }

        SFSafariViewController *controller = [[SFSafariViewController alloc] initWithURL:url];
        controller.modalPresentationStyle = UIModalPresentationPageSheet;
        [host presentViewController:controller animated:YES completion:nil];
    });
}

static void wcpl_webViewOpenHandleWeChatAction(id source,
                                               NSURL *url,
                                               UIViewController *presenter,
                                               dispatch_block_t nativeOpenAction) {
    if (nativeOpenAction) {
        nativeOpenAction();
        WCPLLogInfo(@"链接打开选择: action=wechat mode=orig source=%@ url=%@",
                    source ? NSStringFromClass([source class]) : @"(nil)",
                    url.absoluteString ?: @"");
        return;
    }

    BOOL opened = wcpl_webViewOpenOpenInWeChat(source, url);
    WCPLLogInfo(@"链接打开选择: action=wechat mode=fallback opened=%d source=%@ url=%@",
                opened ? 1 : 0,
                source ? NSStringFromClass([source class]) : @"(nil)",
                url.absoluteString ?: @"");
    if (!opened && [presenter isKindOfClass:[UIViewController class]]) {
        wcpl_webViewOpenPresentFailureAlert(presenter, url);
    }
}

static BOOL wcpl_webViewOpenPresentChoiceOnMain(id source,
                                                NSURL *url,
                                                dispatch_block_t nativeOpenAction) {
    UIViewController *presenter = wcpl_webViewOpenResolvePresenter(source);
    if (![presenter isKindOfClass:[UIViewController class]]) {
        WCPLLogWarning(@"链接打开弹窗失败: reason=presenter_missing source=%@",
                       source ? NSStringFromClass([source class]) : @"(nil)");
        return NO;
    }

    UIAlertController *sheet = [UIAlertController alertControllerWithTitle:@"打开链接"
                                                                   message:url.absoluteString
                                                            preferredStyle:UIAlertControllerStyleActionSheet];
    __weak UIViewController *weakPresenter = presenter;
    dispatch_block_t nativeAction = [nativeOpenAction copy];
    [sheet addAction:[UIAlertAction actionWithTitle:@"原生打开"
                                              style:UIAlertActionStyleDefault
                                            handler:^(__unused UIAlertAction *action) {
        UIViewController *strongPresenter = weakPresenter ?: wcpl_webViewOpenTopMostController();
        wcpl_webViewOpenHandleWeChatAction(source, url, strongPresenter, nativeAction);
    }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"Safari打开"
                                              style:UIAlertActionStyleDefault
                                            handler:^(__unused UIAlertAction *action) {
        WCPLLogInfo(@"链接打开选择: action=safari source=%@ url=%@",
                    source ? NSStringFromClass([source class]) : @"(nil)",
                    url.absoluteString ?: @"");
        UIViewController *strongPresenter = weakPresenter ?: wcpl_webViewOpenTopMostController();
        wcpl_webViewOpenPresentInAppSafari(strongPresenter, url);
    }]];
    [sheet addAction:[UIAlertAction actionWithTitle:@"取消"
                                              style:UIAlertActionStyleCancel
                                            handler:nil]];
    wcpl_webViewOpenConfigurePopover(sheet, presenter);
    [presenter presentViewController:sheet animated:YES completion:nil];
    return YES;
}

BOOL WCPLWebViewOpenAdapterPresentChoiceIfPossible(id source, id rawURL) {
    return WCPLWebViewOpenAdapterPresentChoiceWithNativeActionIfPossible(source, rawURL, nil);
}

BOOL WCPLWebViewOpenAdapterPresentChoiceWithNativeActionIfPossible(id source,
                                                                   id rawURL,
                                                                   dispatch_block_t nativeOpenAction) {
    NSURL *url = wcpl_webViewOpenNormalizedURL(rawURL);
    if (!url) {
        WCPLLogWarning(@"链接打开拦截跳过: reason=url_invalid source=%@ raw=%@",
                       source ? NSStringFromClass([source class]) : @"(nil)",
                       rawURL);
        return NO;
    }
    if (!wcpl_webViewOpenShouldOfferChoice(url)) {
        return NO;
    }

    if ([NSThread isMainThread]) {
        return wcpl_webViewOpenPresentChoiceOnMain(source, url, nativeOpenAction);
    }

    __block BOOL handled = NO;
    dispatch_sync(dispatch_get_main_queue(), ^{
        handled = wcpl_webViewOpenPresentChoiceOnMain(source, url, nativeOpenAction);
    });
    return handled;
}
