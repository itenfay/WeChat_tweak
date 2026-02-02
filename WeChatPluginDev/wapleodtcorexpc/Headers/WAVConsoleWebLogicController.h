//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, NSURLRequest, UIViewController, WAJSContextPlugin_vConsole, WAVConsoleJSLogicImpl, YYBaseWebView;
@protocol WAVConsoleWebLogicControllerDelegate;

@interface WAVConsoleWebLogicController
{
    _Bool _isWebviewFirstLoad;
    unsigned int _htmlId;
    unsigned int _requestID;
    WAJSContextPlugin_vConsole *_plugin;
    UIViewController *_viewController;
    id <WAVConsoleWebLogicControllerDelegate> _delegate;
    YYBaseWebView *_webView;
    WAVConsoleJSLogicImpl *_jsLogicImpl;
    NSURL *_oInitUrl;
    long long _nHttpRspCode;
    NSString *_nsLoadingUrl;
    NSString *_appID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWebviewFirstLoad; // @synthesize isWebviewFirstLoad=_isWebviewFirstLoad;
@property(nonatomic) unsigned int requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *nsLoadingUrl; // @synthesize nsLoadingUrl=_nsLoadingUrl;
@property(nonatomic) long long nHttpRspCode; // @synthesize nHttpRspCode=_nHttpRspCode;
@property(copy, nonatomic) NSURL *oInitUrl; // @synthesize oInitUrl=_oInitUrl;
@property(retain, nonatomic) WAVConsoleJSLogicImpl *jsLogicImpl; // @synthesize jsLogicImpl=_jsLogicImpl;
@property(retain, nonatomic) YYBaseWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WAVConsoleWebLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak WAJSContextPlugin_vConsole *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) unsigned int htmlId; // @synthesize htmlId=_htmlId;
- (void)onWebInvokeAppService:(id)arg1;
- (void)onDomReady;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 nnavigation:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidReceiveResponse:(id)arg1 isMainFrame:(_Bool)arg2 andGetIsCancelNavigation:(_Bool *)arg3;
- (void)webViewDidReceiveServerRedirect:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (id)getFrameContent;
- (void)loadFrameContent:(id)arg1;
- (id)getCurrentUrl;
- (void)doInitialize;
- (void)notifyToJSBridgeVisibilityChanged:(_Bool)arg1;
- (void)initWebView;
- (void)initWebJSLogic;
- (id)fetchPublicResLogic;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 appID:(id)arg2 viewController:(id)arg3 delegate:(id)arg4 plugin:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURLRequest",?,R,N

@property(readonly) Class superclass;

@end

