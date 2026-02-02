//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPatternLockTipsView, MMPatternLockView, MMUIButton, NSString, WCBizLoadingView;
@protocol MMPatternLockViewControllerDelegate;

@interface MMPatternLockViewController
{
    _Bool _isConfirm;
    _Bool _isOpSuccess;
    _Bool _isNeedSvrVerify;
    _Bool _isBlock2Root;
    id <MMPatternLockViewControllerDelegate> _delegate;
    long long _curScene;
    MMPatternLockView *_lockView;
    MMPatternLockView *_confirmLockView;
    MMPatternLockTipsView *_tipsView;
    MMPatternLockTipsView *_confirmTipsView;
    MMUIButton *_forgetPwdBtn;
    WCBizLoadingView *_loadingView;
    NSString *_firstResult;
    NSString *_confirmResult;
    long long _retryTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBlock2Root; // @synthesize isBlock2Root=_isBlock2Root;
@property(nonatomic) _Bool isNeedSvrVerify; // @synthesize isNeedSvrVerify=_isNeedSvrVerify;
@property(nonatomic) _Bool isOpSuccess; // @synthesize isOpSuccess=_isOpSuccess;
@property(nonatomic) long long retryTime; // @synthesize retryTime=_retryTime;
@property(retain, nonatomic) NSString *confirmResult; // @synthesize confirmResult=_confirmResult;
@property(retain, nonatomic) NSString *firstResult; // @synthesize firstResult=_firstResult;
@property(nonatomic) _Bool isConfirm; // @synthesize isConfirm=_isConfirm;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *forgetPwdBtn; // @synthesize forgetPwdBtn=_forgetPwdBtn;
@property(retain, nonatomic) MMPatternLockTipsView *confirmTipsView; // @synthesize confirmTipsView=_confirmTipsView;
@property(retain, nonatomic) MMPatternLockTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MMPatternLockView *confirmLockView; // @synthesize confirmLockView=_confirmLockView;
@property(retain, nonatomic) MMPatternLockView *lockView; // @synthesize lockView=_lockView;
@property(nonatomic) long long curScene; // @synthesize curScene=_curScene;
@property(nonatomic) __weak id <MMPatternLockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fadeShowEnd;
- (void)onCancelPress:(id)arg1;
- (_Bool)isContinueWhenlockViewResultInValid:(id)arg1;
- (void)lockView:(id)arg1 didEndWithPattern:(id)arg2;
- (void)onPwdErrorBeyondLimit;
- (void)onOpSucess;
- (void)onOpCancel;
- (void)resetViewPosition;
- (void)onAlertViewClickForgetPwd;
- (void)onAlertViewClickCancel;
- (void)onPwdErrorAlertViewClickCancel;
- (void)handleDidGetPatternPwd:(id)arg1;
- (void)handlePatternLockViewConfirmErrorTransform;
- (void)handlePatternLockViewConfirmTransform;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onForgetPwdBtnPress:(id)arg1;
- (id)getDisplayTitle;
- (void)closePatternLockPwdFail;
- (void)closePatternLockPwdSuccess;
- (void)modifyPatternLockPwdFail;
- (void)modifyPatternLockPwdSuccess;
- (void)verifyPatternLockPwdFail;
- (void)verifyPatternLockPwdError;
- (void)verifyPatternLockPwdCorrect:(id)arg1;
- (void)setupNewPatternLockPwdFail;
- (void)setupNewPatternLockPwdSuccess;
- (void)didReceiveMemoryWarning;
- (void)applicationWillTerminate:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initLoadingView;
- (void)initData;
- (void)setupWithData:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

