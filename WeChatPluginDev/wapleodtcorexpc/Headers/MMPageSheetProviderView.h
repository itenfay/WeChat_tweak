//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMPageSheetBottomView, MMPageSheetNavigationBar, MMUILabel, NSMutableArray, NSString, UIButton, UIPanGestureRecognizer, UIScrollView;
@protocol MMPageSheetProviderViewDelegate;

@interface MMPageSheetProviderView : UIView
{
    _Bool _isShowing;
    _Bool _isDismissed;
    _Bool _isShowingKeyboard;
    _Bool _startPanAtScreenEdge;
    _Bool _isBeingInteractivePop;
    id <MMPageSheetProviderViewDelegate> _delegate;
    UIView *_containerBgView;
    NSMutableArray *_pageStacks;
    double _containerDragStartY;
    long long _interactiveDirection;
    double _adjustContainerYOffset;
    UIButton *_backgroundBtn;
    UIView *_customBackgroundMaskView;
    MMUILabel *_topTitleLabel;
    UIView *_containerMaskView;
    UIView *_customBackgroundView;
    UIView *_containerView;
    UIView *_detailContentView;
    MMPageSheetNavigationBar *_navigationBar;
    UIView *_navSepLine;
    MMPageSheetBottomView *_footerView;
    UIScrollView *_scrollableContentView;
    double _keyboardHeight;
    UIPanGestureRecognizer *_panGesture;
    UIView *_interactivePopToView;
    struct CGPoint _previousPanPos;
    struct CGPoint _scrollViewInitialContentOffset;
    struct CGPoint _scrollViewLastDragDownOffset;
}

+ (id)viewWithProvider:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *interactivePopToView; // @synthesize interactivePopToView=_interactivePopToView;
@property(nonatomic) _Bool isBeingInteractivePop; // @synthesize isBeingInteractivePop=_isBeingInteractivePop;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) __weak UIScrollView *scrollableContentView; // @synthesize scrollableContentView=_scrollableContentView;
@property(retain, nonatomic) MMPageSheetBottomView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *navSepLine; // @synthesize navSepLine=_navSepLine;
@property(retain, nonatomic) MMPageSheetNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *detailContentView; // @synthesize detailContentView=_detailContentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) UIView *containerMaskView; // @synthesize containerMaskView=_containerMaskView;
@property(retain, nonatomic) MMUILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIView *customBackgroundMaskView; // @synthesize customBackgroundMaskView=_customBackgroundMaskView;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(nonatomic) struct CGPoint scrollViewLastDragDownOffset; // @synthesize scrollViewLastDragDownOffset=_scrollViewLastDragDownOffset;
@property(nonatomic) struct CGPoint scrollViewInitialContentOffset; // @synthesize scrollViewInitialContentOffset=_scrollViewInitialContentOffset;
@property(nonatomic) double adjustContainerYOffset; // @synthesize adjustContainerYOffset=_adjustContainerYOffset;
@property(nonatomic) long long interactiveDirection; // @synthesize interactiveDirection=_interactiveDirection;
@property(nonatomic) double containerDragStartY; // @synthesize containerDragStartY=_containerDragStartY;
@property(nonatomic) struct CGPoint previousPanPos; // @synthesize previousPanPos=_previousPanPos;
@property(nonatomic) _Bool startPanAtScreenEdge; // @synthesize startPanAtScreenEdge=_startPanAtScreenEdge;
@property(retain, nonatomic) NSMutableArray *pageStacks; // @synthesize pageStacks=_pageStacks;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIView *containerBgView; // @synthesize containerBgView=_containerBgView;
@property(nonatomic) __weak id <MMPageSheetProviderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityPerformEscape;
- (void)handleInteractivePopEnd:(double)arg1;
- (void)handleInteractivePopWithMove:(double)arg1;
- (void)handleInteractiveDismissEnd:(double)arg1;
- (void)handleInteractiveDismissWithMove:(double)arg1;
- (void)handleInteractiveClosePanGesture:(id)arg1;
- (void)uninstallInteractiveCloseGesture;
- (void)installInteractiveCloseGesture;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleDragOrSlideToCloseChanged;
- (void)onConfig:(id)arg1 changedFromEnableEdgeSlideToClose:(_Bool)arg2;
- (void)onConfig:(id)arg1 changedFromEnableDragToClose:(_Bool)arg2;
- (void)onConfig:(id)arg1 changedFromDragToCloseInstallScrollView:(id)arg2;
- (void)onConfigChanged:(id)arg1;
- (id)getNavigationBarView;
- (double)getCurrentSceneWidth;
- (_Bool)isPageSheetPushIn:(id)arg1;
- (_Bool)isPageSheetVisible:(id)arg1;
- (_Bool)isAtFirstPage:(id)arg1;
- (void)didClickAtCloseButton;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pagePresentAnimateWillBegin:(id)arg1;
- (void)pageDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageWillClose:(id)arg1 closeType:(long long)arg2;
- (void)pageDidDisappear:(id)arg1;
- (void)pageWillDisappear:(id)arg1;
- (void)pageDidAppear:(id)arg1;
- (void)pageWillAppear:(id)arg1;
- (id)getPreviousPageFor:(id)arg1;
- (_Bool)isSubPageInPageStack:(id)arg1;
- (_Bool)shouldShowCenterMode;
- (_Bool)shouldShowFromRightToLeftAtPortrait;
- (_Bool)shouldShowFromRightToLeftAtLandscape;
- (id)currPageConfig;
- (id)configForProvider:(id)arg1;
- (id)hostViewController;
- (double)pageSheetWidthFor:(id)arg1;
- (double)detailViewHeightFor:(id)arg1;
- (double)bottomHeightForProvider:(id)arg1;
- (double)headerHeightForProvider:(id)arg1 isFirstPage:(_Bool)arg2;
- (double)containerHeightForProvider:(id)arg1 isFirstPage:(_Bool)arg2;
- (struct CGSize)topContainerSize;
- (void)animatePopToPage:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)animatePushToPage:(id)arg1 newHeight:(double)arg2 animated:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)popPageStack;
- (void)pushPageStack:(id)arg1;
- (void)clearPageStack;
- (id)firstPageProvider;
- (id)topPageProvider;
- (void)onBackgroundClick;
- (void)layoutSubviews;
- (void)updateTopTitle:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)onUpdateContentSize;
- (void)onContainerBgViewAdjustY;
- (void)updateContainerFrameToFinalState;
- (void)resetContainerFrameToBeforeAnimateState;
- (void)doShowWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)containerViewForPageProvider:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)updateBgViewMask;
- (void)updateBackgroundView:(id)arg1 animated:(_Bool)arg2;
- (void)setupUI;
- (_Bool)isContainerBackgroundView:(id)arg1;
- (id)pageSheetHeightRatioValue;
- (id)pageSheetContainerView;
- (void)popPageSheetWithType:(long long)arg1 animated:(_Bool)arg2;
- (void)popPageSheetTo:(id)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)pushPageSheet:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentHeightWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 closeType:(long long)arg2;
- (void)dismissWithAnimated:(_Bool)arg1 closeType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showPageSheetIn:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)onPageSheetInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

