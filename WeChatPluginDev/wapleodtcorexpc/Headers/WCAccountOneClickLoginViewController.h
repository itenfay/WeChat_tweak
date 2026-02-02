//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, PushLoginURLCGI, UIButton, UIImageView, UILabel, WCButtonListView;
@protocol WCAccountOneClickLoginViewControllerDelegate;

@interface WCAccountOneClickLoginViewController
{
    UIImageView *_headImgView;
    UILabel *_tipsLabel;
    UILabel *_nickNameLabel;
    UIButton *_loginBtn;
    UIButton *_disconnectBtn;
    UIButton *_cancleLogin;
    MMUIActivityIndicatorView *_logingLoading;
    PushLoginURLCGI *_pushLoginURLCGI;
    _Bool _isDoingAuth;
    id <WCAccountOneClickLoginViewControllerDelegate> _delegate;
    WCButtonListView *_bottomWatchLiveButtonView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCButtonListView *bottomWatchLiveButtonView; // @synthesize bottomWatchLiveButtonView=_bottomWatchLiveButtonView;
- (void)setDelegate:(id)arg1;
- (void)cancleOneClickLogin;
- (void)loginByQRCode;
- (id)onPushLoginURLGetCurrentViewController;
- (void)onPushLoginURLConfrimed;
- (void)onPushLoginURLCanceled;
- (void)onPushLoginURLSuccess;
- (void)onPushLoginURLFailedWithError;
- (void)onLoginBtnClicked;
- (void)onDisconnectBtnClicked;
- (void)onMore;
- (void)showLoginingView;
- (id)getPushLoginURLCGI;
- (_Bool)useTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

