//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WKWebView, WebvViewSanboxSessionInfo;
@protocol WebViewSanboxSessionLogicDelegate, YYWebViewInterface;

@interface WebViewSanboxSessionLogic
{
    id <WebViewSanboxSessionLogicDelegate> _delegate;
    WKWebView<YYWebViewInterface> *_webView;
    NSMutableDictionary *_dictSessionInfo;
    WebvViewSanboxSessionInfo *_currentPageSessionInfo;
}

+ (_Bool)canUseWebComDebugEnv;
+ (id)WebComMessageReplyHandlerName;
+ (_Bool)canUseWebComMessageReplyHandler;
+ (_Bool)canUseWebCom;
- (void).cxx_destruct;
@property(retain, nonatomic) WebvViewSanboxSessionInfo *currentPageSessionInfo; // @synthesize currentPageSessionInfo=_currentPageSessionInfo;
@property(retain, nonatomic) NSMutableDictionary *dictSessionInfo; // @synthesize dictSessionInfo=_dictSessionInfo;
@property(nonatomic) __weak WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WebViewSanboxSessionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doReportWxConfigResult:(id)arg1 forContext:(id)arg2;
- (void)task_callbackTaskJsApiInvoke:(id)arg1 result:(id)arg2 callBackId:(id)arg3 task:(id)arg4;
- (void)callbackTaskJsApiInvoke:(id)arg1 resultMsg:(id)arg2 callBackId:(id)arg3 task:(id)arg4;
- (void)mainThread_fetchCurrentSesessionEvalMainFrameBeginTimeStamp:(unsigned long long *)arg1 endTimeStamp:(unsigned long long *)arg2;
- (void)mainThread_onInvokeJsApiFromContext:(id)arg1 params:(id)arg2 callBackId:(id)arg3 task:(id)arg4;
- (id)mainThread_jsapiDef:(id)arg1;
- (void)mainThread_onSendMessageToSanbox:(id)arg1 task:(id)arg2;
- (void)sendMessageToWebCompt:(id)arg1 messageString:(id)arg2;
- (void)doCallBackMainFrameForWebComptTaskClear;
- (void)patchTaskTagList:(id)arg1;
- (void)funcCallCreateCtxTask:(id)arg1;
- (id)promptResultFromFrameInfo:(id)arg1 promptMessage:(id)arg2;
- (id)replyResultFromPostMessage:(id)arg1 errMsg:(id *)arg2;
- (void)dispatchEvent:(id)arg1 params:(id)arg2 toWebCompt:(id)arg3;
- (void)iframe_handlePostMessage:(id)arg1;
- (void)handleWebComMessage:(id)arg1 mainFrame:(_Bool)arg2 frameUrl:(id)arg3;
- (void)onRecieveWebComTagInfo:(id)arg1 forAppId:(id)arg2 forUrl:(id)arg3 forContext:(id)arg4;
- (id)debugWxConfigUrlForUrl:(id)arg1;
- (id)currentSessionIFrameUrlPrefix;
- (id)mainFrameSessionId;
- (void)releaseWebViewSessionForClearWebContent;
- (void)changeWebContentSessionForUrl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

