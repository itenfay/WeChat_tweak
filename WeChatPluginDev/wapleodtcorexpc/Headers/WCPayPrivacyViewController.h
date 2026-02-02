//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetPayUserDutyResp, NSString, NSURLRequest, WCPayGetPayUserDutyCgi, WCPayPrivacyToolView, WCPaySetPayUserDutyCgi;
@protocol WCPayPrivacyViewControllerDelegate;

@interface WCPayPrivacyViewController
{
    id <WCPayPrivacyViewControllerDelegate> _m_privacyDelegate;
    WCPaySetPayUserDutyCgi *_m_setDutyCgi;
    WCPayGetPayUserDutyCgi *_m_getDutyCgi;
    WCPayPrivacyToolView *_m_toolView;
    GetPayUserDutyResp *_getPayUserDutyCgiResp;
    double _currentWidth;
}

+ (id)instanceWithDelegate:(id)arg1 html:(id)arg2;
- (void).cxx_destruct;
@property double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(retain, nonatomic) GetPayUserDutyResp *getPayUserDutyCgiResp; // @synthesize getPayUserDutyCgiResp=_getPayUserDutyCgiResp;
@property(retain, nonatomic) WCPayPrivacyToolView *m_toolView; // @synthesize m_toolView=_m_toolView;
@property(retain, nonatomic) WCPayGetPayUserDutyCgi *m_getDutyCgi; // @synthesize m_getDutyCgi=_m_getDutyCgi;
@property(retain, nonatomic) WCPaySetPayUserDutyCgi *m_setDutyCgi; // @synthesize m_setDutyCgi=_m_setDutyCgi;
@property(nonatomic) __weak id <WCPayPrivacyViewControllerDelegate> m_privacyDelegate; // @synthesize m_privacyDelegate=_m_privacyDelegate;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)updateHtmlView;
- (void)reportWithScene:(unsigned long long)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWCPayPrivacyToolViewClickAgree:(_Bool)arg1;
- (void)onWCPaySetPayUserDutyCgiError:(id)arg1;
- (void)onWCPaySetPayUserDutyCgiResp:(id)arg1;
- (void)onErrorClose;
- (void)onWCPayGetPayUserDutyCgiError:(id)arg1;
- (void)onWCPayGetPayUserDutyCgiResp:(id)arg1;
- (id)initWithDelegate:(id)arg1 html:(id)arg2 presetUI:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)updateFrame;
- (void)updateToolView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateContent;
- (void)viewDidLoad;
- (void)updateHtmlString:(id)arg1;

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

