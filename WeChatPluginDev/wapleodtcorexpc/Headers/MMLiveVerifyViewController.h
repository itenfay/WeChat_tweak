//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveVerifyAgreementCommonHeadView, MMLiveVerifyAgreementProtocolView, MMLiveView, NSString, UIButton, UIImageView, UIView, WCFinderAnimationLoadingView;
@protocol MMLiveVerifyViewControllerDelegate;

@interface MMLiveVerifyViewController
{
    _Bool _needAutoRotateToPortrait;
    _Bool _isAgreementChecked;
    _Bool _navigationBarHiddenWhenDisappear;
    _Bool _hasCalledCompletionBlock;
    unsigned int _lastEventId;
    long long _currDeviceOrientation;
    CDUnknownBlockType _didAppearHandleCallback;
    id <MMLiveVerifyViewControllerDelegate> _delegate;
    CDUnknownBlockType _verifyCompletionBlock;
    UIButton *_backButton;
    UIImageView *_backgroundView;
    MMLiveView *_liveView;
    MMLiveVerifyAgreementCommonHeadView *_liveVerifyHeadView;
    MMLiveVerifyAgreementProtocolView *_liveVerifyProtocolView;
    UIButton *_liveVerifyButton;
    WCFinderAnimationLoadingView *_animatedLoadingView;
    UIView *_liveVerifyButtonLoadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCalledCompletionBlock; // @synthesize hasCalledCompletionBlock=_hasCalledCompletionBlock;
@property(retain, nonatomic) UIView *liveVerifyButtonLoadingView; // @synthesize liveVerifyButtonLoadingView=_liveVerifyButtonLoadingView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *animatedLoadingView; // @synthesize animatedLoadingView=_animatedLoadingView;
@property(retain, nonatomic) UIButton *liveVerifyButton; // @synthesize liveVerifyButton=_liveVerifyButton;
@property(retain, nonatomic) MMLiveVerifyAgreementProtocolView *liveVerifyProtocolView; // @synthesize liveVerifyProtocolView=_liveVerifyProtocolView;
@property(retain, nonatomic) MMLiveVerifyAgreementCommonHeadView *liveVerifyHeadView; // @synthesize liveVerifyHeadView=_liveVerifyHeadView;
@property(retain, nonatomic) MMLiveView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned int lastEventId; // @synthesize lastEventId=_lastEventId;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) CDUnknownBlockType verifyCompletionBlock; // @synthesize verifyCompletionBlock=_verifyCompletionBlock;
@property(nonatomic) __weak id <MMLiveVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType didAppearHandleCallback; // @synthesize didAppearHandleCallback=_didAppearHandleCallback;
@property(nonatomic) _Bool navigationBarHiddenWhenDisappear; // @synthesize navigationBarHiddenWhenDisappear=_navigationBarHiddenWhenDisappear;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(nonatomic) long long currDeviceOrientation; // @synthesize currDeviceOrientation=_currDeviceOrientation;
@property(nonatomic) _Bool needAutoRotateToPortrait; // @synthesize needAutoRotateToPortrait=_needAutoRotateToPortrait;
- (void)forceRotateToPortrait;
- (void)onProtocolSelectedClicked;
- (void)onProtocolLinkClicked:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)animateToFadeOut;
- (void)onLiveVerifyWithEventId:(unsigned int)arg1 result:(id)arg2 isVerified:(_Bool)arg3 withVerifyUrl:(id)arg4;
- (void)onVerifyButtonClicked;
- (void)onBackButtonClicked;
- (void)stopVerifyButtonLoading;
- (void)startVerifyButtonLoading;
- (void)intUI;
- (void)setupVideoBlurBackground;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)getCurrentOrientation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithLiveView:(id)arg1 delegate:(id)arg2 andVerifyCompletionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

