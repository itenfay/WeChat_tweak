//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMLiveTaskId, NSString, UIButton;
@protocol MMLiveNameVerifyViewControllerDelegate;

@interface MMLiveNameVerifyViewController
{
    _Bool _needAutoRotateToPortrait;
    _Bool _isVerify;
    id <MMLiveNameVerifyViewControllerDelegate> _delegate;
    long long _currDeviceOrientation;
    NSString *_verifyUrl;
    MMLiveTaskId *_taskId;
    long long _entryType;
    MMAcceptAgreementCommonHeadView *_nameVerifyHeadView;
    UIButton *_nameVerifyButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nameVerifyButton; // @synthesize nameVerifyButton=_nameVerifyButton;
@property(retain, nonatomic) MMAcceptAgreementCommonHeadView *nameVerifyHeadView; // @synthesize nameVerifyHeadView=_nameVerifyHeadView;
@property(nonatomic) _Bool isVerify; // @synthesize isVerify=_isVerify;
@property(nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(nonatomic) long long currDeviceOrientation; // @synthesize currDeviceOrientation=_currDeviceOrientation;
@property(nonatomic) _Bool needAutoRotateToPortrait; // @synthesize needAutoRotateToPortrait=_needAutoRotateToPortrait;
@property(nonatomic) __weak id <MMLiveNameVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forceRotateToPortrait;
- (_Bool)useWepayNameVerify;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)onFaceVerifySucceeded;
- (void)onFaceVerifyFailed;
- (void)checkVerifyStatus;
- (void)onBackButtonClicked:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onNameVerifyButtonClicked;
- (void)intUI;
- (void)dealloc;
- (long long)getCurrentOrientation;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithVerifyUrl:(id)arg1 taskId:(id)arg2 withEntryType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

