//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAttach, CMail, CMessageWrap, MMLoadingView, MMTableView, NSMutableArray, NSString, NSURLRequest, PushMailWrap, UIButton, UILabel, UIView, WebViewJSLogicImpl, YYWKWebView;
@protocol MMReadMailViewDelegate;

@interface MMReadMailViewController
{
    MMTableView *_tableView;
    WebViewJSLogicImpl *_jsLogicImpl;
    UIView *_fromListView;
    UIView *_toListView;
    UIView *_ccListView;
    UIView *_titleView;
    UIView *_tipView;
    UIView *_loadingView;
    UIView *_loadFailView;
    UILabel *_webContentView;
    UIView *_attachView;
    UIView *m_actionBanner;
    UIButton *m_mailAppBtn;
    UIButton *_hideDetailBtn;
    UIButton *_showDetailBtn;
    UIButton *_readOriginalBtn;
    _Bool bShowDetail;
    int eLoadingEnd;
    NSMutableArray *arrCells;
    PushMailWrap *_pushMailWrap;
    CMessageWrap *_messageWrap;
    CMail *_mail;
    MMLoadingView *m_loadingView;
    CAttach *m_loadingAttach;
    NSString *activePageTag;
    YYWKWebView *_webView;
    _Bool isLoadingFinished;
    NSString *nsFinalHtml;
    id <MMReadMailViewDelegate> _m_mailDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMReadMailViewDelegate> m_mailDelegate; // @synthesize m_mailDelegate=_m_mailDelegate;
@property(retain, nonatomic) CAttach *m_loadingAttach; // @synthesize m_loadingAttach;
@property(retain, nonatomic) CMail *mail; // @synthesize mail=_mail;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) PushMailWrap *pushMailWrap; // @synthesize pushMailWrap=_pushMailWrap;
- (long long)getPermissionIndex:(id)arg1;
- (void)onFinishedHandleJSApi;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (_Bool)isGetingA8Key;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(CDUnknownBlockType)arg3 failHandleBlock:(CDUnknownBlockType)arg4 apiPermission:(unsigned char)arg5;
- (_Bool)isTempAccessOfJSApiPermitted:(id)arg1;
- (id)getCurrentWebviewViewController;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (unsigned char)getJSApiPermission:(id)arg1;
- (_Bool)canAccessJSApi:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnPress:(id)arg1;
- (void)OnMailAttachPreview:(id)arg1;
- (void)PreviewAttach:(id)arg1 Pop:(_Bool)arg2;
- (void)OnSetMailUnreadWithMailId:(id)arg1 errMsg:(id)arg2;
- (void)OnGetMail:(id)arg1 mailId:(id)arg2 errMsg:(id)arg3;
- (void)onDownloadMailApp:(id)arg1;
- (void)onOpenMailApp:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)initBanner;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (_Bool)showsMailApp;
- (void)SetCookie;
- (void)deleteMail;
- (void)updateCells;
- (void)FormCells;
- (void)FormAttachView:(id)arg1;
- (void)FormWebView;
- (void)FormLoadFailView;
- (void)FormLoadingView;
- (void)FromTipsView;
- (void)updateMailTitle;
- (void)FormMailTitle;
- (void)updateCCList;
- (void)FormCCList;
- (void)updateToList;
- (void)FormToList;
- (void)FormFromList;
- (void)endLoadMail;
- (void)updateMailHTML;
- (void)beginLoadMail;
- (void)onVerifyQQPwdOK;
- (void)onVerifyQQPwdCancel;
- (void)updateWebViewMarginTopAnimated:(_Bool)arg1;
- (unsigned int)getWebviewMarginTopHeight;
- (void)SetWebviewMargin:(unsigned int)arg1;
- (unsigned int)getMarginTop;
- (id)GetContactButton;
- (struct CGPoint)findPossibleOriginForCGRect:(struct CGRect)arg1 withLeftWidth:(long long)arg2;
- (void)onReadOrigin:(id)arg1;
- (void)onLoadFailRefresh:(id)arg1;
- (void)onCCListClicked:(id)arg1;
- (void)onToListClicked:(id)arg1;
- (void)onSenderClicked:(id)arg1;
- (void)onHideDetail:(id)arg1;
- (void)onShowDetail:(id)arg1;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (id)getPreInjectScriptStr;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (id)htmlAdjustWithPageWidth:(double)arg1 html:(id)arg2 webView:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;

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

