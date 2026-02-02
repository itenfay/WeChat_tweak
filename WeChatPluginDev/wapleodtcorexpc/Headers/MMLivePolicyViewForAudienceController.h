//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementProtocolView, MMUIButton, MMUILabel, MMWebViewController, NSString, NSURLRequest, UIButton, UIImageView, UIView;
@protocol MMLivePolicyViewForAudienceControllerDelegate, YYWebViewInterface;

@interface MMLivePolicyViewForAudienceController
{
    id <MMLivePolicyViewForAudienceControllerDelegate> _policyDelegate;
    MMUIButton *_cancelButton;
    UIView *_headerView;
    MMUILabel *_headerTitle;
    MMAcceptAgreementProtocolView *_policyProtocolView;
    UIButton *_confirmButton;
    UIView<YYWebViewInterface> *_webview;
    UIImageView *_shadowView;
    long long _currOrientation;
    MMWebViewController *_webVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMWebViewController *webVC; // @synthesize webVC=_webVC;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMAcceptAgreementProtocolView *policyProtocolView; // @synthesize policyProtocolView=_policyProtocolView;
@property(retain, nonatomic) MMUILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MMLivePolicyViewForAudienceControllerDelegate> policyDelegate; // @synthesize policyDelegate=_policyDelegate;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (void)onProtocolSelectedClicked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)notifySelfPopedOrDismissed;
- (void)popOrDismissSelf;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)dealloc;
- (void)layoutUI;
- (void)setupUI;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
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

