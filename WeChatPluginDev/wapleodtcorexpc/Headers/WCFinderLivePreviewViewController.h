//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveContentVM, MMFinderLiveHeaderView, MMFinderLiveTask, MMFinderLiveView, MMLiveAudienceAccountIntroView, MMLiveTaskId, MMLiveView, NSString, UIImageView, UIView;
@protocol MMLiveContainerDisplayViewProtocol;

@interface WCFinderLivePreviewViewController
{
    _Bool _showCloseButton;
    _Bool _showFullScreenLoading;
    _Bool _showSwitchAccountIntroction;
    _Bool _isPresentingWithCustomTransition;
    _Bool _isChoosingEnterLiveRole;
    _Bool _hasAppeared;
    _Bool _isPopedOrDismissed;
    int _commentScene;
    MMLiveView *liveView;
    CDUnknownBlockType _enterLiveWithContentVMCallback;
    MMFinderLiveHeaderView *_finderLiveHeaderView;
    MMFinderLiveView *_finderLiveView;
    MMLiveAudienceAccountIntroView *_audienceAccountIntroView;
    MMFinderLiveContentVM *_contentVM;
    MMFinderLiveTask *_previewLiveTask;
    CDUnknownBlockType _closeCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(nonatomic) _Bool isPopedOrDismissed; // @synthesize isPopedOrDismissed=_isPopedOrDismissed;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) _Bool isChoosingEnterLiveRole; // @synthesize isChoosingEnterLiveRole=_isChoosingEnterLiveRole;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) MMFinderLiveTask *previewLiveTask; // @synthesize previewLiveTask=_previewLiveTask;
@property(retain, nonatomic) MMFinderLiveContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) MMLiveAudienceAccountIntroView *audienceAccountIntroView; // @synthesize audienceAccountIntroView=_audienceAccountIntroView;
@property(retain, nonatomic) MMFinderLiveView *finderLiveView; // @synthesize finderLiveView=_finderLiveView;
@property(retain, nonatomic) MMFinderLiveHeaderView *finderLiveHeaderView; // @synthesize finderLiveHeaderView=_finderLiveHeaderView;
@property(nonatomic) _Bool isPresentingWithCustomTransition; // @synthesize isPresentingWithCustomTransition=_isPresentingWithCustomTransition;
@property(nonatomic) _Bool showSwitchAccountIntroction; // @synthesize showSwitchAccountIntroction=_showSwitchAccountIntroction;
@property(nonatomic) _Bool showFullScreenLoading; // @synthesize showFullScreenLoading=_showFullScreenLoading;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(copy, nonatomic) CDUnknownBlockType enterLiveWithContentVMCallback; // @synthesize enterLiveWithContentVMCallback=_enterLiveWithContentVMCallback;
@property(readonly, nonatomic) MMLiveView *liveView; // @synthesize liveView;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)onWillTransitionToMinimize;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (id)currentLiveTask;
- (void)hideView;
- (void)showView;
@property(nonatomic) _Bool isForcePortraitForExtend;
- (struct CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
@property(readonly, nonatomic) UIView *minimizeSrcView;
@property(readonly, nonatomic) UIView<MMLiveContainerDisplayViewProtocol> *displayContentView;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) UIImageView *blurView;
- (void)onMMLiveAudienceAccountIntroViewEnterLiveButtonClicked;
- (void)onMMLiveAudienceAccountIntroViewChooseButtonClicked;
- (void)onFinderTrumpetSelectViewLiveIdentityDidChanged:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (void)onFinderTrumpetSelectViewLiveIdentityWillChange:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (id)onMMLiveViewGetAnchorIdentityId;
- (_Bool)onMMLiveViewIsAudience;
- (id)anchorContact;
- (id)finderDataItem;
- (void)fetchDetailDataItem;
- (_Bool)switchToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)initLiveView;
- (void)initHeaderView;
- (void)initSubViews;
- (_Bool)checkAndShowAudienceAccountIntroView;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFinderLiveContentVM:(id)arg1 commentScene:(int)arg2 closeCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

