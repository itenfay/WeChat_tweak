//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IPadAuthContainView, IPadAuthSuccessContainView, IPadQRCodeOAuthLogic, NSString;
@protocol IPadQRCodeOAuthViewControllerDelegate;

@interface IPadQRCodeOAuthViewController
{
    id <IPadQRCodeOAuthViewControllerDelegate> _delegate;
    IPadAuthContainView *_authContainView;
    IPadAuthSuccessContainView *_authSuccContainView;
    IPadQRCodeOAuthLogic *_authLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IPadQRCodeOAuthLogic *authLogic; // @synthesize authLogic=_authLogic;
@property(retain, nonatomic) IPadAuthSuccessContainView *authSuccContainView; // @synthesize authSuccContainView=_authSuccContainView;
@property(retain, nonatomic) IPadAuthContainView *authContainView; // @synthesize authContainView=_authContainView;
@property(nonatomic) __weak id <IPadQRCodeOAuthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAuthFailWithErrMsg:(id)arg1 errCode:(int)arg2 errType:(unsigned int)arg3;
- (void)onConfirmAuth:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 nickName:(id)arg4 appIconUrl:(id)arg5 appNickname:(id)arg6;
- (void)onQRCodeExpire;
- (void)onCancelAuth;
- (void)onScanQRCode;
- (void)onGetAuthData:(id)arg1;
- (void)onRefreshButtonClicked;
- (void)onCancelButtonClicked;
- (void)updateWithAuthData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)initDataWithReqInfo:(id)arg1;
- (id)initWithReqInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

