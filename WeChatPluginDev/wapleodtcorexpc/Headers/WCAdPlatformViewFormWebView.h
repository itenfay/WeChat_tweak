//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterMethodChannel, NSString, NSURLRequest, WCAdFormWebViewJSLogic, YYWKWebView;

@interface WCAdPlatformViewFormWebView
{
    _Bool _hiddenBeforeLoad;
    _Bool _bgTransparent;
    YYWKWebView *_webView;
    FlutterMethodChannel *_channel;
    WCAdFormWebViewJSLogic *_jsLogic;
    NSString *_url;
    NSString *_canvasKey;
    NSString *_componentId;
    NSString *_qrExtInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bgTransparent; // @synthesize bgTransparent=_bgTransparent;
@property(nonatomic) _Bool hiddenBeforeLoad; // @synthesize hiddenBeforeLoad=_hiddenBeforeLoad;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSString *canvasKey; // @synthesize canvasKey=_canvasKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) WCAdFormWebViewJSLogic *jsLogic; // @synthesize jsLogic=_jsLogic;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) YYWKWebView *webView; // @synthesize webView=_webView;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)publishEvent:(id)arg1 params:(id)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (id)getPreInjectScriptStr;
- (void)dealloc;
- (id)view;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;

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

