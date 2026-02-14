#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
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

%hook DeviceInfo

+ (BOOL)isiPad {
    BOOL originalValue = %orig;

    if (![WCPLConfigCenter shared].login.emulateIPadLoginEnable) {
        return originalValue;
    }

    BOOL isLogin = wcpl_queryLoginStateOrAssumeLoggedIn();

    if (!isLogin) {
        if (!originalValue) {
            static CFAbsoluteTime lastLogAt = 0;
            CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
            if ((now - lastLogAt) > 3.0) {
                lastLogAt = now;
                WCPLLogInfo(@"[iPad登录] 覆盖 DeviceInfo.isiPad=YES (未登录态)");
            }
        }
        return YES;
    }

    return originalValue;
}

%end
