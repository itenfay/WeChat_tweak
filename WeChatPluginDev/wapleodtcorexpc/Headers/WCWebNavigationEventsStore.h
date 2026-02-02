//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURL, WKNavigation, WKWebView;

@interface WCWebNavigationEventsStore
{
    WKWebView *_curWebView;
    WKNavigation *_curNavigation;
    NSURL *_curURLInNavigation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *curURLInNavigation; // @synthesize curURLInNavigation=_curURLInNavigation;
@property(retain, nonatomic) WKNavigation *curNavigation; // @synthesize curNavigation=_curNavigation;
@property(nonatomic) __weak WKWebView *curWebView; // @synthesize curWebView=_curWebView;
- (void)webView:(id)arg1 didGetA8keyReqUrl:(id)arg2 fullUrl:(id)arg3;
- (void)webView:(id)arg1 gotPermissionForURLString:(id)arg2;
- (void)webView:(id)arg1 navigationDidBridged:(id)arg2;
- (void)webView:(id)arg1 navigationDidFailed:(id)arg2 error:(id)arg3;
- (void)webView:(id)arg1 navigationDidFinish:(id)arg2;
- (void)webView:(id)arg1 navigationDidCommit:(id)arg2;
- (id)currentFullUrlString;
- (id)currentURL;
- (id)currentWebView;
- (id)currentNavigation;

@end

