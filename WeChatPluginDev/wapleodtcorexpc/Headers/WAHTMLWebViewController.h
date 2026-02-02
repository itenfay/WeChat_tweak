//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebProgressBar, NSCache, NSString, UIColor, UIImageView, UILabel, WAWebViewController, WAWebViewPlugin_HTMLWeb, WebTransWebpageLogic;
@protocol IWAHTMLWebVCDelegate;

@interface WAHTMLWebViewController
{
    NSString *m_oLoadingUrl;
    long long m_nHttpRspCode;
    _Bool m_isNeedConfigDark;
    WAWebViewController *_superVC;
    WAWebViewPlugin_HTMLWeb *_plugin;
    unsigned int _htmlId;
    NSString *_sourceAppId;
    _Bool _didReceiveTerm;
    UILabel *m_addressLabel;
    UIImageView *_snapshotImgView;
    UIColor *_m_backgroundColor;
    MMWebProgressBar *_progressBar;
    id <IWAHTMLWebVCDelegate> _htmlWebVCDelegate;
    NSCache *_haveTransedTextCache;
    WebTransWebpageLogic *_transWebpageLogic;
    NSString *_curRandomUUID;
    long long _transStatus;
    struct CGRect _viewRect;
}

+ (_Bool)isKeyJsapi:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long transStatus; // @synthesize transStatus=_transStatus;
@property(retain, nonatomic) NSString *curRandomUUID; // @synthesize curRandomUUID=_curRandomUUID;
@property(retain, nonatomic) WebTransWebpageLogic *transWebpageLogic; // @synthesize transWebpageLogic=_transWebpageLogic;
@property(retain, nonatomic) NSCache *haveTransedTextCache; // @synthesize haveTransedTextCache=_haveTransedTextCache;
@property(nonatomic) __weak id <IWAHTMLWebVCDelegate> htmlWebVCDelegate; // @synthesize htmlWebVCDelegate=_htmlWebVCDelegate;
@property(nonatomic) struct CGRect viewRect; // @synthesize viewRect=_viewRect;
@property(nonatomic) _Bool didReceiveTerm; // @synthesize didReceiveTerm=_didReceiveTerm;
@property(retain, nonatomic) MMWebProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIColor *m_backgroundColor; // @synthesize m_backgroundColor=_m_backgroundColor;
@property(retain, nonatomic) UIImageView *snapshotImgView; // @synthesize snapshotImgView=_snapshotImgView;
@property(retain, nonatomic) UILabel *m_addressLabel; // @synthesize m_addressLabel;
- (void)onTranslateRevertFinish:(_Bool)arg1;
- (void)onTranslateFinish:(_Bool)arg1;
- (void)setStatusFromPageLogic:(long long)arg1;
- (long long)getStatus;
- (void)clearCache;
- (void)storeCache:(id)arg1 withKey:(id)arg2;
- (id)getCache;
- (id)getWKWebView;
- (void)onTranslateLanguageChange;
- (void)onChangeTargetLanguage;
- (void)translateRevert;
- (void)translate;
- (_Bool)isThisPageCanTrans;
- (_Bool)isDoingTransNow;
- (void)dispatchTransStatusTask;
- (void)handleMessageWebTrans:(id)arg1;
- (void)handleMessageDomReady;
- (void)onTransReceiveScriptMessage:(id)arg1;
- (void)onTransWebViewControllerDidCommitLoad;
- (void)initTransWebpageLogic;
- (void)clearTransWebpageLogic;
- (void)initTrans;
- (long long)preferredStatusBarStyle;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setWAHTMLWebVCDelegate:(id)arg1;
- (void)restoreAddressBar;
- (void)initAddressBarLabel;
- (id)getAddressBarHostText:(id)arg1;
- (void)onClickFailView:(id)arg1;
- (void)hideLoadFailView;
- (void)relayoutLoadFailView;
- (void)showLoadFailView:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)reportCurrentPageInfo:(unsigned long long)arg1;
- (_Bool)isDisableSetCustomUserAgentInBaseWebview;
- (id)getWXHookScriptStr;
- (void)captureFullScreenshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)webViewGoForward;
- (void)webViewGoBack;
- (_Bool)webViewCanGoBack;
- (void)webViewGoToURL:(id)arg1;
- (id)webViewInnerEdgeGoBackGesture;
@property(nonatomic) __weak WAWebViewPlugin_HTMLWeb *plugin; // @dynamic plugin;
@property(copy, nonatomic) NSString *sourceAppid; // @dynamic sourceAppid;
@property(nonatomic) unsigned int htmlId; // @dynamic htmlId;
@property(nonatomic) __weak WAWebViewController *superVC; // @dynamic superVC;
- (void)handleInsertHTMLDone;
- (void)handleHTMLViewDidTerminated;
- (void)handleHTMLViewDidBePoped;
- (void)configProgressBarWithWidth:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)updateHTMLFrame;
- (void)configViewFrame:(struct CGRect)arg1;
- (void)EXReport_onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)EXReport_onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)EXReport_onTargetToNativaPage:(id)arg1;
- (void)reportKeyJsapiCall:(id)arg1 initUrl:(id)arg2 currentUrl:(id)arg3 isSuccess:(int)arg4;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (_Bool)useBlackStatusbar;
- (void)webViewControllerCanGoBackChanged:(_Bool)arg1;
- (void)webViewControllerJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)webViewControllerBackgroundColor;
- (id)webViewControllerPreInjectScriptStr;
- (void)webViewControllerForceSyncA8KeyError;
- (void)webViewControllerDidStartSyncA8Key:(id)arg1;
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
- (_Bool)useCustomNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)webviewForInitialization;
- (void)dealloc;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (_Bool)hitBlackListHostForSearch;
- (void)startWebSearch:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)buildMenuWithBuilder:(id)arg1;
- (id)getDeafultReportHTMLJSAPIItem;
- (void)reportJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)getDefaultHtmlActionItem;
- (void)onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)onTargetToNativaPage:(id)arg1;
- (void)onTargetActionWebJump:(id)arg1 navigationType:(long long)arg2;
- (double)snapshotContentHeight;
- (unsigned long long)getAvailableMemorySize;
- (_Bool)checkMemoryAvailableForContentSize:(struct CGSize)arg1 scale:(double *)arg2 freeMem:(unsigned long long *)arg3 isCompress:(_Bool *)arg4 predictImgMemSize:(unsigned long long *)arg5;
- (_Bool)extendSnapshotOnWindowByTimeout:(double)arg1;
- (void)removeSnapshotImageOnWindow;
- (void)addSnapshotImage:(id)arg1 timeout:(double)arg2;
- (void)addSnapshotByTimeout:(double)arg1;
- (void)__takeSnapshotInRenderModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)takeSnapshotInRenderModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureFullScreenshotUsingPrinterMode:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

