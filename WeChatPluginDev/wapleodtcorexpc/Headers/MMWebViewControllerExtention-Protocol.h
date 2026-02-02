//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebViewController, NSDictionary, NSURL;

@protocol MMWebViewControllerExtention <NSObject>

@optional
- (void)EX_WebViewControllerDidAppear:(MMWebViewController *)arg1;
- (void)EX_WebViewControllerDealloc:(MMWebViewController *)arg1 someInfo:(NSDictionary *)arg2;
- (void)EX_WebViewControllerDidFinishedLoad:(NSURL *)arg1 webViewController:(MMWebViewController *)arg2 someInfo:(NSDictionary *)arg3;
- (void)EX_WebViewControllerDidStartLoad:(NSURL *)arg1 webViewController:(MMWebViewController *)arg2 someInfo:(NSDictionary *)arg3;
- (void)EX_WebViewControllerShouldStartLoad:(NSURL *)arg1 webViewController:(MMWebViewController *)arg2 someInfo:(NSDictionary *)arg3;
- (void)EX_WebViewControllerInit:(NSURL *)arg1 webViewController:(MMWebViewController *)arg2 someInfo:(NSDictionary *)arg3;
@end

