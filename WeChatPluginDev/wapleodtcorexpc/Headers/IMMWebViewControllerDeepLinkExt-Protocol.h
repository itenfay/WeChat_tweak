//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DeepLinkDef, MMWebViewController, NSString;

@protocol IMMWebViewControllerDeepLinkExt

@optional
- (void)accessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (void)canAccessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3 Ret:(_Bool *)arg4 NeedCheckBitset:(_Bool *)arg5;
@end

