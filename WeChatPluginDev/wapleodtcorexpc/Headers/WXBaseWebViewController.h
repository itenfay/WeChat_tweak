//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMJSApiVerifyMgr, MMURLHandler, MMWebViewUniversalLinkMinitorLogic, NSMutableDictionary, NSString, NSURL, NSURLRequest, UIButton, UILongPressGestureRecognizer, WCDeepLinkHandler, WKWebView, WebViewA8KeyLogicImpl, WebViewJSLogicImpl;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@interface WXBaseWebViewController
{
    WKWebView<YYWebViewInterface> *webView;
    MMURLHandler *m_urlHandler;
    UIButton *m_loadFailView;
    NSMutableDictionary *m_jsInitInfo;
    WCDeepLinkHandler *m_deepLinkHandler;
    MMJSApiVerifyMgr *m_apiVerifyMgr;
    CDUnknownBlockType _OnInitReadyNotifyBlock;
    _Bool m_bShowOnNewMainFrameBanner;
    NSMutableDictionary *_dicJsapiGetA8keyHadnleBlocks;
    long long m_loadingCount;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    _Bool _bLongPressingWebContentImage;
    unsigned long long _longPressingWebContentImageEndTimeStamp;
    NSString *m_jump;
    _Bool m_viewDidAppear;
    _Bool m_isPageLoadFail;
    _Bool m_bIFrame;
    _Bool _bIsDraggingScroll;
    _Bool _bIsBackForwardNavigationType;
    NSString *_lastURL;
    _Bool m_isFinishLoaded;
    _Bool m_enableAutoPlay;
    _Bool _m_bOfflinePage;
    _Bool _m_bIsJsapiUploadVideoUploading;
    _Bool _enableCommitCurrentUrl;
    NSMutableDictionary *m_extraInfo;
    WebViewJSLogicImpl *_m_jsLogicImpl;
    NSString *_m_initUrl;
    WebViewA8KeyLogicImpl *_m_a8KeyLogicImpl;
    CDUnknownBlockType _m_blockOnWebViewDidTerminate;
    id <WXCustomWebViewControllerDelegate> _m_delegate;
    NSString *_m_lastCheckCpKey;
    NSURL *_wkLastCommitingNavigationUrl;
    NSURL *_onceRewindNavigationUrl;
    MMWebViewUniversalLinkMinitorLogic *_ulMonitorLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableCommitCurrentUrl; // @synthesize enableCommitCurrentUrl=_enableCommitCurrentUrl;
@property(retain, nonatomic) MMWebViewUniversalLinkMinitorLogic *ulMonitorLogic; // @synthesize ulMonitorLogic=_ulMonitorLogic;
@property(retain, nonatomic) NSURL *onceRewindNavigationUrl; // @synthesize onceRewindNavigationUrl=_onceRewindNavigationUrl;
@property(retain, nonatomic) NSURL *wkLastCommitingNavigationUrl; // @synthesize wkLastCommitingNavigationUrl=_wkLastCommitingNavigationUrl;
@property(retain, nonatomic) NSString *m_lastCheckCpKey; // @synthesize m_lastCheckCpKey=_m_lastCheckCpKey;
@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading; // @synthesize m_bIsJsapiUploadVideoUploading=_m_bIsJsapiUploadVideoUploading;
@property(copy, nonatomic) CDUnknownBlockType m_blockOnWebViewDidTerminate; // @synthesize m_blockOnWebViewDidTerminate=_m_blockOnWebViewDidTerminate;
@property(readonly, nonatomic) _Bool m_bOfflinePage; // @synthesize m_bOfflinePage=_m_bOfflinePage;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl; // @synthesize m_a8KeyLogicImpl=_m_a8KeyLogicImpl;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl=_m_initUrl;
@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl=_m_jsLogicImpl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *webView; // @synthesize webView;
- (unsigned int)webviewCurrentFontScale;
- (unsigned int)webviewCurrentFontLevel;
- (void)delaySetFontsWithSize:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onLongPressOnWebview:(id)arg1;
- (_Bool)allowImagePreview;
- (void)enableWebContentImageLongPressingTag;
- (void)enableLongPressDetect;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)removeWebViewObservers;
- (void)initWebViewObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onCopy:(id)arg1;
- (_Bool)getJSApiEnvCompatibility:(id)arg1;
- (_Bool)getJSApiFrequncyCheckResult:(id)arg1;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (unsigned int)getA8KeyRequestId;
- (id)getJSFunctionDef:(id)arg1;
- (id)currentWebviewEnvInfo;
- (id)currentPermissionKeyUrlString;
- (void)diagnose_onJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (void)onPageStateChange:(id)arg1;
- (void)onDomReady;
- (_Bool)isDisableRecordHistory;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(CDUnknownBlockType)arg3 failHandleBlock:(CDUnknownBlockType)arg4 apiPermission:(unsigned char)arg5;
- (unsigned char)getJSApiPermission:(id)arg1;
- (_Bool)isGetingA8Key;
- (_Bool)isUseAllOneWXJS;
- (_Bool)isBridgedInNewMode;
- (void)onFinishedHandleJSApi;
- (id)getCurrentWebviewViewController;
- (void)onStartGetA8Key:(id)arg1;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8Key:(_Bool)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (_Bool)shouldRewindWebNavigation:(id)arg1;
- (void)handleJumpProfileUrl:(id)arg1 profileRange:(struct _NSRange)arg2;
- (void)delayHandleUrl:(id)arg1;
- (id)getPreInjectScriptStr;
- (void)handleWebViewVCDismiss;
- (void)cleanJSAPIDelegate;
- (void)webViewControllerCanGoBackChanged:(_Bool)arg1;
- (void)webViewControllerJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)webViewControllerBackgroundColor;
- (void)webViewControllerForceSyncA8KeyError;
- (void)webViewControllerDidStartSyncA8Key:(id)arg1;
- (id)webViewControllerPreInjectScriptStr;
- (void)webViewControllerTitleDidChange:(id)arg1;
- (void)webViewControllerContentProcessDidTerminate:(id)arg1;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webviewControllerDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidCommitLoad:(id)arg1;
- (void)webViewControllerDidReceiveResponse:(id)arg1 isMainFrame:(_Bool)arg2 andGetIsCancelNavigation:(_Bool *)arg3;
- (void)webViewControllerDidRecieveSvrRedirect:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webViewDidReceiveNavigationResponse:(id)arg1 andGetIsCancelNavigation:(_Bool *)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidReceiveServerRedirect:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidCommitLoad:(id)arg1 navigation:(id)arg2;
- (id)getWXHookScriptStr;
- (_Bool)allowsAutoMediaPlay;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (_Bool)isBackForwardNavigationType;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(CDUnknownBlockType)arg2;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)forceShowCloseButton;
- (void)doJsApiInitEvent;
- (void)setDisableWebAlertView:(_Bool)arg1;
- (_Bool)allowFayByImage;
- (_Bool)allowShareByImage;
- (_Bool)allowScanQRCodeByImage;
- (unsigned int)getCurrentScene;
- (id)extraInfo;
- (id)getInitUrl;
- (id)getCurrentAppId;
- (id)getCurrentUrl;
- (void)goToURL:(id)arg1;
- (void)clearScrollBackgroundColor;
- (id)getRequestingOrCurrentUrl;
- (void)setCurrentUrl:(id)arg1;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)notifyToJSBridgeVisibilityChanged:(_Bool)arg1;
- (void)startLoadWeb;
- (void)tryStartOutlinkDetect;
- (id)getShareUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (void)sendGetA8KeyEvent;
- (id)getUrlPermission:(id)arg1;
- (_Bool)hasUrlPermission:(id)arg1;
- (unsigned int)GetGeneralBitSetForUrl:(id)arg1;
- (_Bool)IsBitsetSet:(unsigned int)arg1 forUrl:(id)arg2;
- (void)internalInitWithUrl:(id)arg1 extraInfo:(id)arg2;
- (id)webviewForInitialization;
- (void)setEnableAutoPlay:(_Bool)arg1;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

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

