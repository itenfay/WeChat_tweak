//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIView, WebViewA8KeyLogicImpl, WebViewJSLogicImpl, WebviewJSEventHandlerBase;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@interface LocalJSEventHandler_WebAPIBridge
{
    WebviewJSEventHandlerBase *_handler;
}

+ (_Bool)CanHandlerEvent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WebviewJSEventHandlerBase *handler; // @synthesize handler=_handler;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<YYWebViewInterface>",?,&,N

- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(CDUnknownBlockType)arg2;
- (void)setDisableWebAlertView:(_Bool)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (id)getShareUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getCurrentUrl;
- (unsigned int)getCurrentScene;
- (id)getCurrentAppId;
- (void)forceShowCloseButton;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WebViewA8KeyLogicImpl",?,R,N

@property(retain, nonatomic) NSMutableDictionary *m_extraInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSMutableDictionary",?,&,N

- (id)extraInfo;
- (void)enableWebContentImageLongPressingTag;
- (void)doJsApiInitEvent;
- (_Bool)allowShareByImage;
- (_Bool)allowScanQRCodeByImage;
- (_Bool)allowImagePreview;
- (_Bool)allowFayByImage;
- (id)getInitUrl;
- (id)webviewController;
- (id)mmWebViewController;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)debugModuleName;
- (id)JSAPIName;
- (void)handleJSEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic) _Bool m_bOfflinePage;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<WXCustomWebViewControllerDelegate>",?,W,N

@property(readonly, nonatomic) NSString *m_initUrl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WebViewJSLogicImpl",?,R,N

@property(readonly) Class superclass;

@end

