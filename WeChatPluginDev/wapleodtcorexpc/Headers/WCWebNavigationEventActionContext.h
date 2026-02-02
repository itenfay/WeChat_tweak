//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSDictionary, WCWebNavigationEventsStore, WebViewJSLogicImpl;

@interface WCWebNavigationEventActionContext
{
    WebViewJSLogicImpl *_webJsImpl;
    WCWebNavigationEventsStore *_webEventsStore;
    MMWebViewController *_webViewController;
    NSDictionary *_jsInitInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jsInitInfo; // @synthesize jsInitInfo=_jsInitInfo;
@property(nonatomic) __weak MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak WCWebNavigationEventsStore *webEventsStore; // @synthesize webEventsStore=_webEventsStore;
@property(nonatomic) __weak WebViewJSLogicImpl *webJsImpl; // @synthesize webJsImpl=_webJsImpl;

@end

