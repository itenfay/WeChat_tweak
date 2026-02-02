//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIHalfScreenViewDismissInteractiveTransition, MMUIHalfScreenViewPresentationAnimateTransition, MMUIView, NSString, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIScrollView, UIView;
@protocol MMUIHalfScreenViewControllerDelegate;

@interface MMUIHalfScreenViewController
{
    MMUIView *m_maskView;
    double m_maxHalfScreenHeight;
    double m_maxHalfScreenWidth;
    _Bool m_isHadDragUpMoreTopScrollViewDistance;
    double _dragUpToTopScrollViewDistance;
    _Bool _isHideSetupGradientEffect;
    _Bool _isNOBackgroundButton;
    _Bool _isHideBackgroupMask;
    _Bool _isHideBorderShadow;
    _Bool _isHideCloseButton;
    _Bool _isForbidPanGesture;
    _Bool _isForbidPanUpGesture;
    _Bool _isHiddenVerticalScrollIndicator;
    _Bool _isAutoShowVerticalScrollIndicator;
    _Bool _isLimitDetailViewHeightDuringScrolling;
    _Bool _isFromFinder;
    _Bool _isNeedHandleTransitionToNewSize;
    _Bool _hasEdgePanGestureRecognizer;
    _Bool _isEnableCloseButtonPanGesture;
    _Bool _isResetPresentedViewFrame;
    double _halfScreenHeight;
    double _halfScreenWidth;
    long long _halfScreenViewControllerModel;
    id <MMUIHalfScreenViewControllerDelegate> _delegate;
    UIView *_detailView;
    UIView *_contentView;
    double _viewTopAtPanBegin;
    double _scrollViewPaddingTop;
    double _closeButtonTop;
    MMUIButton *_closeButton;
    MMUIView *_topView;
    MMUIButton *_backgroundButton;
    CDUnknownBlockType _customClickBackgroundAction;
    double _topViewHeight;
    MMUIHalfScreenViewDismissInteractiveTransition *_dimissInteractiveTransition;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    double _dragDownCloseFriendsScrollViewDistance;
    CDUnknownBlockType _halfScreenViewAnimationForPresentedBlock;
    CDUnknownBlockType _halfScreenViewAnimationForDismissedBlock;
    UIPanGestureRecognizer *_panGesture;
    UIScrollView *_detaiInSideScrollView;
    MMUIHalfScreenViewPresentationAnimateTransition *_presentationAnimate;
}

+ (double)detailViewTopOffset;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIHalfScreenViewPresentationAnimateTransition *presentationAnimate; // @synthesize presentationAnimate=_presentationAnimate;
@property(retain, nonatomic) UIScrollView *detaiInSideScrollView; // @synthesize detaiInSideScrollView=_detaiInSideScrollView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType halfScreenViewAnimationForDismissedBlock; // @synthesize halfScreenViewAnimationForDismissedBlock=_halfScreenViewAnimationForDismissedBlock;
@property(copy, nonatomic) CDUnknownBlockType halfScreenViewAnimationForPresentedBlock; // @synthesize halfScreenViewAnimationForPresentedBlock=_halfScreenViewAnimationForPresentedBlock;
@property(nonatomic) double dragDownCloseFriendsScrollViewDistance; // @synthesize dragDownCloseFriendsScrollViewDistance=_dragDownCloseFriendsScrollViewDistance;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) MMUIHalfScreenViewDismissInteractiveTransition *dimissInteractiveTransition; // @synthesize dimissInteractiveTransition=_dimissInteractiveTransition;
@property(nonatomic) double topViewHeight; // @synthesize topViewHeight=_topViewHeight;
@property(copy, nonatomic) CDUnknownBlockType customClickBackgroundAction; // @synthesize customClickBackgroundAction=_customClickBackgroundAction;
@property(nonatomic) _Bool isResetPresentedViewFrame; // @synthesize isResetPresentedViewFrame=_isResetPresentedViewFrame;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) MMUIView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool isEnableCloseButtonPanGesture; // @synthesize isEnableCloseButtonPanGesture=_isEnableCloseButtonPanGesture;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) double closeButtonTop; // @synthesize closeButtonTop=_closeButtonTop;
@property(nonatomic) double scrollViewPaddingTop; // @synthesize scrollViewPaddingTop=_scrollViewPaddingTop;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(nonatomic) _Bool hasEdgePanGestureRecognizer; // @synthesize hasEdgePanGestureRecognizer=_hasEdgePanGestureRecognizer;
@property(nonatomic) _Bool isNeedHandleTransitionToNewSize; // @synthesize isNeedHandleTransitionToNewSize=_isNeedHandleTransitionToNewSize;
@property(nonatomic) _Bool isFromFinder; // @synthesize isFromFinder=_isFromFinder;
@property(nonatomic) _Bool isLimitDetailViewHeightDuringScrolling; // @synthesize isLimitDetailViewHeightDuringScrolling=_isLimitDetailViewHeightDuringScrolling;
@property(nonatomic) _Bool isAutoShowVerticalScrollIndicator; // @synthesize isAutoShowVerticalScrollIndicator=_isAutoShowVerticalScrollIndicator;
@property(nonatomic) _Bool isHiddenVerticalScrollIndicator; // @synthesize isHiddenVerticalScrollIndicator=_isHiddenVerticalScrollIndicator;
@property(nonatomic) _Bool isForbidPanUpGesture; // @synthesize isForbidPanUpGesture=_isForbidPanUpGesture;
@property(nonatomic) _Bool isForbidPanGesture; // @synthesize isForbidPanGesture=_isForbidPanGesture;
@property(nonatomic) _Bool isHideCloseButton; // @synthesize isHideCloseButton=_isHideCloseButton;
@property(nonatomic) _Bool isHideBorderShadow; // @synthesize isHideBorderShadow=_isHideBorderShadow;
@property(nonatomic) _Bool isHideBackgroupMask; // @synthesize isHideBackgroupMask=_isHideBackgroupMask;
@property(nonatomic) _Bool isNOBackgroundButton; // @synthesize isNOBackgroundButton=_isNOBackgroundButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) __weak id <MMUIHalfScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long halfScreenViewControllerModel; // @synthesize halfScreenViewControllerModel=_halfScreenViewControllerModel;
@property(nonatomic) _Bool isHideSetupGradientEffect; // @synthesize isHideSetupGradientEffect=_isHideSetupGradientEffect;
- (void)adjustDetailViewFrameToFitMaskView;
- (void)relayoutContentViewSubviewsUseFullScreenWidth;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)needCloseOnOrientationChanged;
- (id)getMaskView;
- (id)getTopTitleView;
- (double)getContentViewTop;
- (struct CGSize)getMaskViewDisplaySize;
- (double)getDetailViewTop;
- (void)setContentViewTopTo:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setContentViewToHalfAnimatedWithDuration:(double)arg1;
- (void)setContentViewToTopAnimatedWithDuration:(double)arg1;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (void)onClickClose:(id)arg1;
- (_Bool)shouldChangeDetailScrollViewHeightWhileScrolling;
- (void)scollerEndResetContentViewHeight:(double)arg1;
- (void)handleScrollViewPanGesture:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (_Bool)isPanUpGesture:(id)arg1;
- (id)getHalfScreenViewControlle;
- (id)interactionControllerForDismissal;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (void)addPopBackInteractivePopGesture;
- (void)setDownScrollViewGradientLayerWithMaskView:(id)arg1 maskHeight:(double)arg2;
@property(nonatomic) double dragUpToTopScrollViewDistance; // @dynamic dragUpToTopScrollViewDistance;
@property(nonatomic) double halfScreenWidth; // @synthesize halfScreenWidth=_halfScreenWidth;
@property(nonatomic) double halfScreenHeight; // @synthesize halfScreenHeight=_halfScreenHeight;
- (void)setDetailView:(id)arg1 andInsideScrollView:(id)arg2;
- (void)setScrollViewVerticalScrollable:(_Bool)arg1;
- (void)setUpScrollViewGradientLayer;
- (void)setUpScrollViewWithGradientEffect;
- (void)viewDidTransitionToNewSize;
- (double)getHalfScreenDetailViewMarginTop;
- (struct CGPoint)getMaxTopPoint;
- (void)setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configPresentationCustomWithViewController:(id)arg1;
- (void)configPresentationCustomWithViewController:(id)arg1 resetPresentedViewFrame:(_Bool)arg2;
- (double)getMaxHalfScreenWidth;
- (void)setMaxHalfScreenWidth:(double)arg1;
- (double)getMaxHalfScreenHeight;
- (void)setMaxHalfScreenHeight:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

