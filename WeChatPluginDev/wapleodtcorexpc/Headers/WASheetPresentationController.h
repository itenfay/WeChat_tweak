//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@class CAShapeLayer, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WASheetHeaderTipsView;
@protocol WASheetPresentationControllerDelegete;

@interface WASheetPresentationController : UIPresentationController
{
    _Bool _expanded;
    _Bool _expandedToFullScreen;
    _Bool _isPushOrPresenting;
    _Bool _expandAnimating;
    _Bool _isDraggingDown;
    id <WASheetPresentationControllerDelegete> _sheetDelegate;
    UIView *_widgetContainerView;
    UIView *_contentView;
    CAShapeLayer *_shapeLayer;
    UIView *_fakeStatusBarView;
    UIView *_fakeStatusBarTransitionView;
    UIView *_blurView;
    UITapGestureRecognizer *_tapBackgroundGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    double _panBeginY;
    double _dragBeginY;
    double _currentContentY;
    double _dragContentHeight;
    double _currentWidth;
    UIView *_sheetHeaderView;
    WASheetHeaderTipsView *_tipsView;
    NSString *_tipsText;
    CDUnknownBlockType _tipsDidShowBlock;
    CDUnknownBlockType _tipsDidClickCloseBlock;
    struct CGPoint _currentContentOffset;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tipsDidClickCloseBlock; // @synthesize tipsDidClickCloseBlock=_tipsDidClickCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType tipsDidShowBlock; // @synthesize tipsDidShowBlock=_tipsDidShowBlock;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(retain, nonatomic) WASheetHeaderTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *sheetHeaderView; // @synthesize sheetHeaderView=_sheetHeaderView;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(nonatomic) _Bool isDraggingDown; // @synthesize isDraggingDown=_isDraggingDown;
@property(nonatomic) _Bool expandAnimating; // @synthesize expandAnimating=_expandAnimating;
@property(nonatomic) _Bool isPushOrPresenting; // @synthesize isPushOrPresenting=_isPushOrPresenting;
@property(nonatomic) struct CGPoint currentContentOffset; // @synthesize currentContentOffset=_currentContentOffset;
@property(nonatomic) double dragContentHeight; // @synthesize dragContentHeight=_dragContentHeight;
@property(nonatomic) double currentContentY; // @synthesize currentContentY=_currentContentY;
@property(nonatomic) double dragBeginY; // @synthesize dragBeginY=_dragBeginY;
@property(nonatomic) double panBeginY; // @synthesize panBeginY=_panBeginY;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapBackgroundGesture; // @synthesize tapBackgroundGesture=_tapBackgroundGesture;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *fakeStatusBarTransitionView; // @synthesize fakeStatusBarTransitionView=_fakeStatusBarTransitionView;
@property(retain, nonatomic) UIView *fakeStatusBarView; // @synthesize fakeStatusBarView=_fakeStatusBarView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *widgetContainerView; // @synthesize widgetContainerView=_widgetContainerView;
@property(nonatomic) _Bool expandedToFullScreen; // @synthesize expandedToFullScreen=_expandedToFullScreen;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <WASheetPresentationControllerDelegete> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (id)draggingBarHeader;
- (id)sheetModeParameter;
- (_Bool)isLaunchModeEmbed;
- (id)getDefaultStatusBarColorForVC:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)shouldDismiss;
- (_Bool)shouldReturnToNormal;
- (_Bool)shouldExpand;
- (void)onFirstWebViewDidNavigateOut;
- (void)onFirstWebViewDidEndDragging:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)onFirstWebViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)onFirstWebViewWillBeginDragging:(id)arg1;
- (void)onFirstWebViewDidScroll:(id)arg1;
- (_Bool)shouldForbidDragUpGesture:(id)arg1;
- (_Bool)shouldNotDragByGesture:(id)arg1;
- (void)onMenuDisappear;
- (void)onMenuMore;
- (void)onDidAppear;
- (void)onDidPushViewController:(id)arg1;
- (void)onDidPresentViewController:(id)arg1;
- (void)onPan:(id)arg1;
- (double)expandedContentY;
- (void)onDragToExpandWithReason:(unsigned long long)arg1;
- (void)onEmbedWeAppExpandToFullScreen;
- (void)setFakeStatusBarColor:(id)arg1;
- (void)recoverHalfScreen;
- (void)expandToFullScreenWithReason:(unsigned long long)arg1;
- (void)onReturnToNormal;
- (void)onDragToDismiss;
- (void)onTap:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (id)genSheetHeaderView;
- (_Bool)backgroundUserInteractionEnabled;
- (_Bool)backgroundShouldBlur;
- (id)backgroundColor;
- (double)cornerRadius;
- (unsigned long long)rectCorner;
- (_Bool)sheetShouldForbidDragDownGesture:(id)arg1;
- (_Bool)canRecoverAfterExpand;
- (_Bool)canExpandToStatusBarTop;
- (_Bool)canExpandToFullScreen;
- (double)getSheetExpandedHeight;
- (struct CGSize)getLandscapeSheetSize;
- (struct CGSize)getSheetSize;
- (double)getSafeBottomInset;
- (struct CGRect)currentSheetFrameIncludeHeader:(_Bool)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)setUpContainerView;
- (void)updateRectCorner;
- (void)containerViewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutContentView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)sheetFrameDidChange:(struct CGRect)arg1;
- (void)presentationTransitionWillBegin;
- (void)initTipsView;
- (void)initShapeLayer;
- (void)initFakeStatusBarView;
- (void)initBlurView;
- (void)initContentView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

