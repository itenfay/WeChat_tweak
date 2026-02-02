//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIScreenEdgePanGestureRecognizer, WAGameRollProgressView, WAMenuPopInteractiveTransition, WCTagsView;

@interface WAGameCircleProgressLoadingViewController
{
    _Bool _hasCustomImgReady;
    _Bool _hasSlashReady;
    _Bool _isLandScape;
    UIImageView *_originalImageView;
    MMUILabel *_gameProverbLabel;
    UIImageView *_gameProverbLogo;
    MMWebImageView *_ageAppropriateView;
    WCTagsView *_tagsView;
    long long _orientation;
    NSString *_customProgressBarColor;
    unsigned long long _startDownloadCoverTimeInMs;
    MMWebImageView *_customloadingImg;
    NSString *_ageAppropriateUrl;
    WAGameRollProgressView *_gameloadingAnimationView;
    UIScreenEdgePanGestureRecognizer *_popBackGesture;
    WAMenuPopInteractiveTransition *_dismissInteractiveTransition;
    MMUIButton *_requestFullScreenBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *requestFullScreenBtn; // @synthesize requestFullScreenBtn=_requestFullScreenBtn;
@property(retain, nonatomic) WAMenuPopInteractiveTransition *dismissInteractiveTransition; // @synthesize dismissInteractiveTransition=_dismissInteractiveTransition;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture; // @synthesize popBackGesture=_popBackGesture;
@property(retain, nonatomic) WAGameRollProgressView *gameloadingAnimationView; // @synthesize gameloadingAnimationView=_gameloadingAnimationView;
@property(retain, nonatomic) NSString *ageAppropriateUrl; // @synthesize ageAppropriateUrl=_ageAppropriateUrl;
@property(nonatomic) _Bool isLandScape; // @synthesize isLandScape=_isLandScape;
@property(nonatomic) _Bool hasSlashReady; // @synthesize hasSlashReady=_hasSlashReady;
@property(nonatomic) _Bool hasCustomImgReady; // @synthesize hasCustomImgReady=_hasCustomImgReady;
@property(retain, nonatomic) MMWebImageView *customloadingImg; // @synthesize customloadingImg=_customloadingImg;
@property(nonatomic) unsigned long long startDownloadCoverTimeInMs; // @synthesize startDownloadCoverTimeInMs=_startDownloadCoverTimeInMs;
@property(copy, nonatomic) NSString *customProgressBarColor; // @synthesize customProgressBarColor=_customProgressBarColor;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) MMWebImageView *ageAppropriateView; // @synthesize ageAppropriateView=_ageAppropriateView;
@property(retain, nonatomic) UIImageView *gameProverbLogo; // @synthesize gameProverbLogo=_gameProverbLogo;
@property(retain, nonatomic) MMUILabel *gameProverbLabel; // @synthesize gameProverbLabel=_gameProverbLabel;
@property(retain, nonatomic) UIImageView *originalImageView; // @synthesize originalImageView=_originalImageView;
- (id)getGameProverbLogo;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)onAgeAppropriateClick;
- (_Bool)systemCoverViewHidden;
- (struct CGRect)capsuleMenuFrame;
- (struct CGRect)capsuleMenuOriginalFrame;
- (_Bool)capsuleMenuHidden;
- (void)onLoadImageOK:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldUseSmallMenu;
- (void)showCustomLoadingBgView;
- (void)checkShowCustomLoadingBgView;
- (void)initCusinittomLoadingView:(id)arg1 pkgConfig:(id)arg2;
- (void)finishedSlash;
- (void)onReturn;
- (void)viewDidLayoutSubviews;
- (void)initAgeAppropriate;
- (_Bool)needWeakNetTips;
- (void)initGameProverb;
- (void)initGameTagToken;
- (void)initSubViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init:(id)arg1 pkgConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

