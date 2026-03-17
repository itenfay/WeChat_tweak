//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebViewController, NSDictionary, NSString, UINavigationItem, WKWebView;

@protocol MMWebViewPresetUIChildViewDelegate <NSObject>

@optional
- (void)onClickDislikeMenuWithWebview:(MMWebViewController *)arg1;
- (_Bool)shouldShowDislikeMenuWithWebview:(MMWebViewController *)arg1;
- (UINavigationItem *)parentNavigationItemWithWebview:(MMWebViewController *)arg1;
- (void)onWebViewControllerRecieveImmerseFoldFullArticleEvent:(MMWebViewController *)arg1;
- (void)onWebViewControllerRecieveImmerseReadFullArticleEvent:(MMWebViewController *)arg1;
- (void)onWebViewControllerHistoryChanged:(WKWebView *)arg1;
- (void)onWebViewControllerRecieveCloseEvent:(MMWebViewController *)arg1;
- (void)onWebViewController:(MMWebViewController *)arg1 recieveNavigationBarEvent:(NSString *)arg2 params:(NSDictionary *)arg3;
@end

