//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString, NSURLRequest, YYBaseWebView;

@interface WARichTextWebView
{
    YYBaseWebView *_webView;
    NSString *_curApiName;
    NSNumber *_curApiCallbackId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *curApiCallbackId; // @synthesize curApiCallbackId=_curApiCallbackId;
@property(retain, nonatomic) NSString *curApiName; // @synthesize curApiName=_curApiName;
@property(retain, nonatomic) YYBaseWebView *webView; // @synthesize webView=_webView;
- (void)api_sendRichTextInfo:(id)arg1;
- (void)endWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (id)getPreInjectScriptStr;
- (void)loadHTMLString:(id)arg1;
- (id)onRemoveWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onInsertWithParam:(id)arg1;

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

