//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CXCallObserver, NSString, TRTCCdnPlayerManager, UIView, WCLiveBlurButton, WCPlayLiveWithoutLoginHeadView, WCPlayLiveWithoutLoginViewModel;

@interface WCPlayLiveWithoutLoginViewController
{
    _Bool _isIdleTimerDisabledBefore;
    _Bool _hasSetIdleTimerDisabled;
    CDUnknownBlockType _cancelCallback;
    TRTCCdnPlayerManager *_cdnPlayer;
    UIView *_videoContainerView;
    WCPlayLiveWithoutLoginHeadView *_headView;
    WCLiveBlurButton *_closeButton;
    WCPlayLiveWithoutLoginViewModel *_viewModel;
    CXCallObserver *_callObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(nonatomic) _Bool hasSetIdleTimerDisabled; // @synthesize hasSetIdleTimerDisabled=_hasSetIdleTimerDisabled;
@property(nonatomic) _Bool isIdleTimerDisabledBefore; // @synthesize isIdleTimerDisabledBefore=_isIdleTimerDisabledBefore;
@property(retain, nonatomic) WCPlayLiveWithoutLoginViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WCPlayLiveWithoutLoginHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) TRTCCdnPlayerManager *cdnPlayer; // @synthesize cdnPlayer=_cdnPlayer;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (_Bool)hidesStatusBar;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setIdleTimeDisable:(_Bool)arg1;
- (void)updateViewModel:(id)arg1;
- (void)onLiveClose;
- (void)internalClose;
- (void)onClose:(id)arg1;
- (void)stop;
- (void)registerCallCenter;
- (void)layoutViews;
- (void)createCdnPlayer;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

