//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKWebView.h>

@class JITRuntimeMessageHandler, JITRuntimeURLSchemeHandler, NSMutableDictionary, NSString;
@protocol JITRuntimeViewDelegate;

@interface JITRuntimeView : WKWebView
{
    unsigned int _jitLiteMode;
    id <JITRuntimeViewDelegate> _delegate;
    NSString *_baseUrl;
    CDUnknownBlockType _iOS16StringFixBlock;
    JITRuntimeMessageHandler *_messageHandler;
    JITRuntimeURLSchemeHandler *_urlHandler;
    CDUnknownBlockType _loadResolver;
    NSMutableDictionary *_tasks;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int jitLiteMode; // @synthesize jitLiteMode=_jitLiteMode;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(copy, nonatomic) CDUnknownBlockType loadResolver; // @synthesize loadResolver=_loadResolver;
@property(retain, nonatomic) JITRuntimeURLSchemeHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
@property(retain, nonatomic) JITRuntimeMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(copy, nonatomic) CDUnknownBlockType iOS16StringFixBlock; // @synthesize iOS16StringFixBlock=_iOS16StringFixBlock;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(nonatomic) __weak id <JITRuntimeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)getJITLiteMode;
- (void)jitDumpGCHeap;
- (void)jitSimulateLowMemory;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateFullGC;
- (void)jitTriggerGC;
- (void)loadHTML:(id)arg1 baseURL:(id)arg2 withResolverBlock:(CDUnknownBlockType)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)resize:(struct CGSize)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)onTaskFinished:(id)arg1;
- (void)evaluateInvoker:(id)arg1;
- (void)evaluate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)configurationWillCreate:(id)arg1 liteMode:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 confDict:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

