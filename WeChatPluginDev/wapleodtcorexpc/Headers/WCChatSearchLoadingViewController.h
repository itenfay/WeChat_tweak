//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, WAAppDismissAnimateTransition, WCImageSearchLogic, WCStoryDismissInteractiveTransition;

@interface WCChatSearchLoadingViewController
{
    _Bool _isLoading;
    unsigned long long _status;
    UIImageView *_loadingView;
    UILabel *_tipLabel;
    UIButton *_tapButton;
    UIButton *_whiteTapButton;
    WCImageSearchLogic *_searchLogic;
    WCStoryDismissInteractiveTransition *_dismissInteractiveTransition;
    WAAppDismissAnimateTransition *_dismissAnimateTransition;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) WAAppDismissAnimateTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *dismissInteractiveTransition; // @synthesize dismissInteractiveTransition=_dismissInteractiveTransition;
@property(retain, nonatomic) WCImageSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIButton *whiteTapButton; // @synthesize whiteTapButton=_whiteTapButton;
@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)getViewController;
- (void)onGetNoResult;
- (void)onImageExpired;
- (void)onNetworkError;
- (void)internalSetLoadingTip:(unsigned long long)arg1;
- (double)referenceHeight;
- (void)internalSetStatus:(unsigned long long)arg1;
- (void)changeStatusTo:(unsigned long long)arg1;
- (void)onTapButton;
- (void)onTapNavBackButton;
- (void)initView;
- (void)setNavigationBar;
- (void)addLoadingAnimation;
- (void)viewDidLoad;
- (id)initWithSearchEntity:(id)arg1;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)addPopBackInteractivePopGesture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

