#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"
#import "WCPLWebViewOpenAdapter.h"

#import <objc/message.h>

static NSString *const kWCPLSafariOpenNativeBypassKey = @"kWCPLSafariOpenNativeBypassKey";

static BOOL wcpl_safariOpen_isNativeBypassActive(void) {
    NSNumber *depth = NSThread.currentThread.threadDictionary[kWCPLSafariOpenNativeBypassKey];
    return depth.integerValue > 0;
}

static void wcpl_safariOpenPerformWithNativeBypass(dispatch_block_t block) {
    if (!block) {
        return;
    }

    NSMutableDictionary *threadDictionary = NSThread.currentThread.threadDictionary;
    NSInteger depth = [threadDictionary[kWCPLSafariOpenNativeBypassKey] integerValue] + 1;
    threadDictionary[kWCPLSafariOpenNativeBypassKey] = @(depth);
    block();

    depth -= 1;
    if (depth > 0) {
        threadDictionary[kWCPLSafariOpenNativeBypassKey] = @(depth);
        return;
    }
    [threadDictionary removeObjectForKey:kWCPLSafariOpenNativeBypassKey];
}

static BOOL wcpl_safariOpen_presentChoiceWithNativeAction(id source,
                                                          id rawURL,
                                                          NSString *scopeTag,
                                                          dispatch_block_t nativeOpenAction) {
    if (wcpl_safariOpen_isNativeBypassActive()) {
        return NO;
    }
    if (![WCPLConfigCenter shared].safariOpenLinkEnable) {
        return NO;
    }

    BOOL handled = WCPLWebViewOpenAdapterPresentChoiceWithNativeActionIfPossible(source,
                                                                                 rawURL,
                                                                                 nativeOpenAction);
    if (handled) {
        WCPLLogInfo(@"链接打开改为弹出选择: scope=%@ source=%@",
                    scopeTag ?: @"(nil)",
                    source ? NSStringFromClass([source class]) : @"(nil)");
    }
    return handled;
}

static BOOL wcpl_safariOpen_presentChoice(id source, id rawURL, NSString *scopeTag) {
    return wcpl_safariOpen_presentChoiceWithNativeAction(source, rawURL, scopeTag, nil);
}

static BOOL wcpl_safariOpen_presentChoiceForURLPair(id source,
                                                    id rawURL,
                                                    id backupURL,
                                                    NSString *scopeTag,
                                                    dispatch_block_t nativeOpenAction) {
    if (wcpl_safariOpen_presentChoiceWithNativeAction(source, rawURL, scopeTag, nativeOpenAction)) {
        return YES;
    }
    if (backupURL && backupURL != rawURL) {
        return wcpl_safariOpen_presentChoiceWithNativeAction(source, backupURL, scopeTag, nativeOpenAction);
    }
    return NO;
}

%hook MMWebViewController

- (void)onJumpToSafariWithUrl:(id)url {
    if (wcpl_safariOpen_presentChoice(self, url, @"MMWebViewController.onJumpToSafariWithUrl")) {
        return;
    }
    %orig(url);
}

%end

%hook WXBaseWebViewController

- (void)onJumpToSafariWithUrl:(id)url {
    if (wcpl_safariOpen_presentChoice(self, url, @"WXBaseWebViewController.onJumpToSafariWithUrl")) {
        return;
    }
    %orig(url);
}

%end

%hook MMLiteAppGetA8Key

- (void)onJumpToSafariWithUrl:(id)url {
    if (wcpl_safariOpen_presentChoice(self, url, @"MMLiteAppGetA8Key.onJumpToSafariWithUrl")) {
        return;
    }
    %orig(url);
}

%end

%hook MMURLHandler

- (void)handleURL:(id)url withExtraInfo:(id)extraInfo {
    dispatch_block_t nativeOpenAction = ^{
        wcpl_safariOpenPerformWithNativeBypass(^{
            ((void (*)(id, SEL, id, id))objc_msgSend)(self,
                                                      @selector(handleURL:withExtraInfo:),
                                                      url,
                                                      extraInfo);
        });
    };
    if (wcpl_safariOpen_presentChoiceWithNativeAction(self,
                                                      url,
                                                      @"MMURLHandler.handleURL:withExtraInfo:",
                                                      nativeOpenAction)) {
        return;
    }
    %orig(url, extraInfo);
}

- (void)handleURL:(id)url withBackupURL:(id)backupURL withExtraInfo:(id)extraInfo {
    dispatch_block_t nativeOpenAction = ^{
        wcpl_safariOpenPerformWithNativeBypass(^{
            ((void (*)(id, SEL, id, id, id))objc_msgSend)(self,
                                                          @selector(handleURL:withBackupURL:withExtraInfo:),
                                                          url,
                                                          backupURL,
                                                          extraInfo);
        });
    };
    if (wcpl_safariOpen_presentChoiceForURLPair(self,
                                                url,
                                                backupURL,
                                                @"MMURLHandler.handleURL:withBackupURL:withExtraInfo:",
                                                nativeOpenAction)) {
        return;
    }
    %orig(url, backupURL, extraInfo);
}

+ (void)handleUrl:(id)url withBackupURL:(id)backupURL withExtraInfo:(id)extraInfo {
    dispatch_block_t nativeOpenAction = ^{
        wcpl_safariOpenPerformWithNativeBypass(^{
            ((void (*)(id, SEL, id, id, id))objc_msgSend)(self,
                                                          @selector(handleUrl:withBackupURL:withExtraInfo:),
                                                          url,
                                                          backupURL,
                                                          extraInfo);
        });
    };
    if (wcpl_safariOpen_presentChoiceForURLPair(self,
                                                url,
                                                backupURL,
                                                @"MMURLHandler.handleUrl:withBackupURL:withExtraInfo:",
                                                nativeOpenAction)) {
        return;
    }
    %orig(url, backupURL, extraInfo);
}

%end

%hook LiteAppJsApiLogin

- (void)onJumpToSafariWithUrl:(id)url {
    if (wcpl_safariOpen_presentChoice(self, url, @"LiteAppJsApiLogin.onJumpToSafariWithUrl")) {
        return;
    }
    %orig(url);
}

%end
