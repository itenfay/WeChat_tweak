//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLRequest, WAWxMaterialOpenInfo, WKWebSearchView;

@interface WAOpenWxMaterialListController
{
    NSURLRequest *_request;
    WAWxMaterialOpenInfo *_openInfo;
    WKWebSearchView *_webView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebSearchView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WAWxMaterialOpenInfo *openInfo; // @synthesize openInfo=_openInfo;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)js2oc_onWeAppExposure:(id)arg1;
- (void)openWeApp;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)js2oc_launchWeApp:(id)arg1;
- (_Bool)hidesStatusBar;
- (void)onClickCloseButton:(id)arg1;
- (id)contentView;
- (void)viewDidLoad;
- (id)initWithRequest:(id)arg1 openInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

