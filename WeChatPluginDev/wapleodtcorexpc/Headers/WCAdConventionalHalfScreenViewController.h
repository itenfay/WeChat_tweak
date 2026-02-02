//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMUIButton, NSArray, NSString, UIImage, UIImageView, UIView, WCAdCardBtnInfo, WCAdConventionalFullScreenViewController, WCAdConventionalHalfScreenDetailBaseView, WCAdConventionalHalfScreenMediaBaseView, WCAdConventionalHalfScreenReportManager, WCDataItem;

@interface WCAdConventionalHalfScreenViewController
{
    _Bool _isReadyToDismiss;
    unsigned long long _scene;
    UIView *_originView;
    NSArray *_originGridRectsInScreen;
    unsigned long long _clickIndex;
    CContact *_contactInfo;
    WCDataItem *_dataItem;
    WCAdCardBtnInfo *_actionInfo;
    WCAdConventionalHalfScreenMediaBaseView *_mediaView;
    WCAdConventionalHalfScreenDetailBaseView *_detailView;
    WCAdConventionalFullScreenViewController *_fullScreenViewController;
    UIImageView *_topMaskView;
    MMUIButton *_leftBarBackButton;
    MMUIButton *_leftBarCloseButton;
    UIImage *_originSnapshot;
    double _originMediaHeight;
    UIImageView *_mediaTransitionBGView;
    WCAdConventionalHalfScreenReportManager *_reportManager;
    struct CGRect _originRectInScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConventionalHalfScreenReportManager *reportManager; // @synthesize reportManager=_reportManager;
@property(nonatomic) _Bool isReadyToDismiss; // @synthesize isReadyToDismiss=_isReadyToDismiss;
@property(retain, nonatomic) UIImageView *mediaTransitionBGView; // @synthesize mediaTransitionBGView=_mediaTransitionBGView;
@property(nonatomic) double originMediaHeight; // @synthesize originMediaHeight=_originMediaHeight;
@property(retain, nonatomic) UIImage *originSnapshot; // @synthesize originSnapshot=_originSnapshot;
@property(retain, nonatomic) MMUIButton *leftBarCloseButton; // @synthesize leftBarCloseButton=_leftBarCloseButton;
@property(retain, nonatomic) MMUIButton *leftBarBackButton; // @synthesize leftBarBackButton=_leftBarBackButton;
@property(retain, nonatomic) UIImageView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) WCAdConventionalFullScreenViewController *fullScreenViewController; // @synthesize fullScreenViewController=_fullScreenViewController;
@property(retain, nonatomic) WCAdConventionalHalfScreenDetailBaseView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) WCAdConventionalHalfScreenMediaBaseView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) WCAdCardBtnInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) CContact *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(nonatomic) unsigned long long clickIndex; // @synthesize clickIndex=_clickIndex;
@property(retain, nonatomic) NSArray *originGridRectsInScreen; // @synthesize originGridRectsInScreen=_originGridRectsInScreen;
@property(nonatomic) struct CGRect originRectInScreen; // @synthesize originRectInScreen=_originRectInScreen;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)doHalfScreenReport;
- (void)cleanUpFullScreenVC;
- (void)onFullScreenVCDidDisappear;
- (void)onFullScreenVCWillDisappear;
- (void)onFullScreenVCWillBePopWithTransition;
- (void)onFullScreenVCDidAppear;
- (void)turnMediaViewToFullScreenVC;
- (id)onMediaViewFetchReportManager;
- (_Bool)onMediaViewShouldVideoBePlaying;
- (void)onMediaViewContentBeClicked;
- (void)onDetailViewPageSheetTryToDismissParent:(_Bool)arg1;
- (void)onDetailViewPageSheetUpdateAnimatingState:(_Bool)arg1;
- (void)onDetailViewPageSheetWillStickToBottom;
- (void)onDetailViewPageSheetDidPinToTop;
- (void)onDetailViewPageSheetUpdateTitle:(id)arg1;
- (void)onDetailViewPageSheetCeilingTopWithPercent:(double)arg1 animated:(_Bool)arg2;
- (double)onDetailViewPageSheetFetchCalculatedHeight;
- (unsigned long long)onDetailViewPageSheetFetchItemScene;
- (void)onDetailViewPageSheetDidChangeVisibleHeight:(double)arg1;
- (id)onDetailViewPageSheetHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onDetailViewPageSheetDidClose;
- (void)onDetailViewPageSheetWillClose;
- (id)onDetailViewGetCurrentViewController;
- (void)onDetailViewWillShowViewController:(id)arg1;
- (void)onDetailViewWillAddViewController:(id)arg1;
- (void)zoomAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)simpleSlideDownAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)updateTopAreaContentUserInteraction:(_Bool)arg1;
- (void)updateMediaViewVisibleType:(long long)arg1 animated:(_Bool)arg2;
- (void)readyToDismissMyself;
- (struct CGRect)calcMediaRealFrameWithContainerSize:(struct CGSize)arg1;
- (void)calcContentViewsSizeWithContainerSize:(struct CGSize)arg1 outMediaViewSize:(struct CGSize *)arg2 outDetailViewSize:(struct CGSize *)arg3;
- (_Bool)isOpenFromGridView;
- (_Bool)shouldResetContentViews;
- (void)onNaviBarCloseButtonClicked;
- (void)onLeftBarButtonClicked;
- (void)setButtonStyle:(id)arg1 withImageType:(_Bool)arg2;
- (void)updateTopBarAreaWithPercent:(double)arg1;
- (void)updateStatusBarVisible;
- (void)forceUpdateNavigationBarHidden:(_Bool)arg1 alpha:(double)arg2;
- (void)updateNavigationBarHiddenState;
- (void)updateLeftBarButton;
- (void)updateTopBarAreaState;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1 clickActionInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

