#import "WCPLConfigCenter.h"
#import "WCPLUIKitHelpers.h"
#import "WCPLLogger.h"
#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>

static BOOL wcpl_queryLoginStateOrAssumeLoggedIn(void) {
    Class appUtilClass = objc_getClass("CAppUtil");
    SEL loginSel = @selector(isLogin);

    if (!appUtilClass || !class_respondsToSelector(object_getClass(appUtilClass), loginSel)) {
        return YES;
    }

    @try {
        return ((BOOL (*)(id, SEL))objc_msgSend)(appUtilClass, loginSel);
    } @catch (__unused NSException *exception) {
        return YES;
    }
}

static BOOL wcpl_cachedLoginState(void) {
    static BOOL sCachedState = YES;
    static CFAbsoluteTime sLastQueriedAt = 0;

    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if ((now - sLastQueriedAt) < 0.35) {
        return sCachedState;
    }

    sCachedState = wcpl_queryLoginStateOrAssumeLoggedIn();
    sLastQueriedAt = now;
    return sCachedState;
}

static BOOL wcpl_stringContainsAnyKeyword(NSString *text, NSArray<NSString *> *keywords) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return NO;
    }
    NSString *lowerText = text.lowercaseString;
    for (NSString *keyword in keywords) {
        if ([lowerText containsString:keyword]) {
            return YES;
        }
    }
    return NO;
}

static BOOL wcpl_isLoginSceneNow(void) {
    static NSArray<NSString *> *loginKeywords;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        loginKeywords = @[ @"login", @"qrlogin", @"chatlist", @"chatsview" ];
    });

    UIViewController *vc = WCPLTopVisibleViewController();
    if (!vc) {
        return NO;
    }

    NSString *className = NSStringFromClass([vc class]);
    if (wcpl_stringContainsAnyKeyword(className, loginKeywords)) {
        return YES;
    }

    if (wcpl_stringContainsAnyKeyword(vc.title, loginKeywords)) {
        return YES;
    }

    return wcpl_stringContainsAnyKeyword(vc.navigationItem.title, loginKeywords);
}

static BOOL wcpl_loginSceneGatePass(void) {
    static CFAbsoluteTime sLastMatchedAt = 0;
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if (wcpl_isLoginSceneNow()) {
        sLastMatchedAt = now;
        return YES;
    }
    return (now - sLastMatchedAt) < 2.5;
}

%hook DeviceInfo

+ (BOOL)isiPad {
    BOOL originalValue = %orig;

    if (![WCPLConfigCenter shared].login.emulateIPadLoginEnable) {
        return originalValue;
    }

    BOOL isLogin = wcpl_cachedLoginState();

    if (!isLogin && wcpl_loginSceneGatePass()) {
        if (!originalValue) {
            static CFAbsoluteTime lastLogAt = 0;
            CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
            if ((now - lastLogAt) > 3.0) {
                lastLogAt = now;
                WCPLLogInfo(@"[iPad登录] 覆盖 DeviceInfo.isiPad=YES (登录场景)");
            }
        }
        return YES;
    }

    return originalValue;
}

%end
