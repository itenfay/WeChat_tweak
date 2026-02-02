//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageForwardAndEditLogicController, ForwardMessageLogicController, MMScrollView, NSArray, NSMutableArray, NSSet, NSString, ShareDataToOpenSDKController, UINavigationController, UIPageControl, UIView, WCImageFullScreenButtonsContainerView, WCImageFullScreenViewContainer, WCMomentsInvisibleTipsView, WCMomentsPageContext;
@protocol WCImageFullScreenViewControllerDelegate, WCImageFullScreenViewControllerNavigatingDelegate;

@interface WCImageFullScreenViewController
{
    UIView *m_fakeScreenView;
    NSArray *m_arrOriginView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    _Bool m_isForward2Contact;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSArray *m_arrMediaDataWrap;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    _Bool m_hasScroll;
    _Bool m_isAnimationShowing;
    _Bool m_isRotating;
    _Bool m_forbidPreloadImg;
    ShareDataToOpenSDKController *m_shareDataToOpenSDKController;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int _startTime;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    _Bool m_isAllowRotate;
    double m_lastScreenWidth;
    _Bool _bForbidLongPress;
    _Bool _bSilencePlayLivePhotos;
    _Bool _isPresentingNextViewController;
    _Bool _canShowInvisibleTipsView;
    _Bool _isInvisible;
    _Bool _isShareEmbedExcerptEnabled;
    id <WCImageFullScreenViewControllerDelegate> m_delegate;
    id <WCImageFullScreenViewControllerNavigatingDelegate> _m_navigatingDelegate;
    unsigned long long _contentItemScene;
    WCMomentsPageContext *_pageContext;
    UINavigationController *_presentedNavigationController;
    WCImageFullScreenViewContainer *_invisibleTipsViewContainer;
    WCMomentsInvisibleTipsView *_invisibleTipsView;
    WCImageFullScreenButtonsContainerView *_bottomButtonsContainerView;
    NSSet *_currentVisibleIndexSet;
    unsigned long long _needsEditMediaIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long needsEditMediaIndex; // @synthesize needsEditMediaIndex=_needsEditMediaIndex;
@property(copy, nonatomic) NSSet *currentVisibleIndexSet; // @synthesize currentVisibleIndexSet=_currentVisibleIndexSet;
@property(nonatomic) _Bool isShareEmbedExcerptEnabled; // @synthesize isShareEmbedExcerptEnabled=_isShareEmbedExcerptEnabled;
@property(retain, nonatomic) WCImageFullScreenButtonsContainerView *bottomButtonsContainerView; // @synthesize bottomButtonsContainerView=_bottomButtonsContainerView;
@property(retain, nonatomic) WCMomentsInvisibleTipsView *invisibleTipsView; // @synthesize invisibleTipsView=_invisibleTipsView;
@property(retain, nonatomic) WCImageFullScreenViewContainer *invisibleTipsViewContainer; // @synthesize invisibleTipsViewContainer=_invisibleTipsViewContainer;
@property(readonly, nonatomic) _Bool isInvisible; // @synthesize isInvisible=_isInvisible;
@property(nonatomic) _Bool canShowInvisibleTipsView; // @synthesize canShowInvisibleTipsView=_canShowInvisibleTipsView;
@property(retain, nonatomic) UINavigationController *presentedNavigationController; // @synthesize presentedNavigationController=_presentedNavigationController;
@property(nonatomic) _Bool isPresentingNextViewController; // @synthesize isPresentingNextViewController=_isPresentingNextViewController;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) _Bool bSilencePlayLivePhotos; // @synthesize bSilencePlayLivePhotos=_bSilencePlayLivePhotos;
@property(nonatomic) _Bool bForbidLongPress; // @synthesize bForbidLongPress=_bForbidLongPress;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(nonatomic) __weak id <WCImageFullScreenViewControllerNavigatingDelegate> m_navigatingDelegate; // @synthesize m_navigatingDelegate=_m_navigatingDelegate;
@property(nonatomic) __weak id <WCImageFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onForwardMessageCancelInEditView;
- (void)onForwardMessageSendOKInEditView;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (id)getPresentedNavigationController;
- (_Bool)imageFullScreenViewContainerIsAppearOnScreen:(id)arg1;
- (void)imageFullScreenViewContainerDidClickOriginalArticle:(id)arg1;
- (id)topMostNavigationVC;
- (void)onShareToOpenSDKWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)onShowTranslateImage:(id)arg1;
- (void)onFinishShowMultiQRCodeView;
- (void)onBeginShowMultiQRCodeView:(id)arg1;
- (void)onFinishAnimatedTranslate;
- (void)onBeginAnimateTranslate;
- (void)onPresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)onPushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)onGetViewController;
- (void)onExposeWithDataItem:(id)arg1;
- (void)onContainerDidZoomWithScale:(double)arg1 andIndex:(unsigned int)arg2;
- (void)onLongPressedEditImage:(id)arg1 atPath:(id)arg2 withFavItem:(id)arg3 editAtFirst:(_Bool)arg4;
- (void)onLongPressedWithMediaItem:(id)arg1 contact:(id)arg2;
- (void)onLongPressedAddFav:(id)arg1;
- (void)captureScreen;
- (void)hideWithoutAnimation;
- (void)animationHideWithRotate;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)hideVCAnimationWillCompleted:(CDUnknownBlockType)arg1;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStop;
- (void)onWindowHide;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerCustomShowAnimation;
- (void)onContainerAnimationShowStart;
- (void)animationHideStop;
- (_Bool)shouldHideContainerOnRotate;
- (_Bool)isContainerVisible:(id)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)shouldHideFullScreenForWCPay;
- (void)onShareDataToOpenSDKCancel;
- (void)cancelForward;
- (void)onForwardOpDidCancel:(id)arg1;
- (void)onForwardOpDidSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)updateInvisibleTipsViewBeforeHiding;
- (void)showInvisibleTipsView;
- (void)startCircleToSearch;
- (void)openOriginalArticle;
- (id)getVisibleViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)didSwitchAndEndDisplayingImageContainersAtIndexes:(id)arg1;
- (void)didSwitchAndDisplayImageContainersAtIndexes:(id)arg1;
- (void)updateVisibleIndexSet;
- (void)handleScrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getCurMediaItemWrap;
- (void)downloadImage;
- (void)setMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4 scene:(unsigned long long)arg5;
- (void)setMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned int)arg4 needEdit:(_Bool)arg5 scene:(unsigned long long)arg6;
- (void)showVCAnimation;
- (void)resetScrollView;
- (void)clearStatus;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldHideNavigationBar;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initBottomButtonsContainerView;
- (void)onPageControllerChangePage:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

