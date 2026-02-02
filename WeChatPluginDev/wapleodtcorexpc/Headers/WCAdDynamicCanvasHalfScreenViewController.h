//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIPanGestureRecognizer, WCAdDynamicCanvasPageInfo, WCAdDynamicCanvasViewController, WCAdExpressionCanvasHalfScreenJumpInfo;

@interface WCAdDynamicCanvasHalfScreenViewController
{
    _Bool _willJumpToHalfOtherContent;
    WCAdExpressionCanvasHalfScreenJumpInfo *_halfJumpInfo;
    WCAdDynamicCanvasViewController *_dynamicCanvasViewController;
    UIPanGestureRecognizer *_contentViewPanGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *contentViewPanGesture; // @synthesize contentViewPanGesture=_contentViewPanGesture;
@property(nonatomic) _Bool willJumpToHalfOtherContent; // @synthesize willJumpToHalfOtherContent=_willJumpToHalfOtherContent;
@property(retain, nonatomic) WCAdDynamicCanvasViewController *dynamicCanvasViewController; // @synthesize dynamicCanvasViewController=_dynamicCanvasViewController;
@property(retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *halfJumpInfo; // @synthesize halfJumpInfo=_halfJumpInfo;
- (_Bool)isPanUpGesture:(id)arg1;
- (_Bool)isPanVerticalGesture:(id)arg1;
- (double)fetchHalfScreenPageHeight;
@property(readonly, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onClickWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)onHalfScreenCanvasJumpToCanvas:(id)arg1 uxInfo:(id)arg2 canvasDynamicInfo:(id)arg3 noStore:(_Bool)arg4;
- (void)onHalfScreenCanvasJumpToWeApp:(id)arg1 sceneNote:(id)arg2;
- (void)onHalfScreenCanvasJumpToH5:(id)arg1 extraInfo:(id)arg2;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)initPanGesture;
- (void)updateCommonUI;
- (void)updateCanvasView;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)useTransparentNavibar;
- (void)willJumpToOthers;
- (_Bool)shouldChangeDetailScrollViewHeightWhileScrolling;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (double)getMaxHalfScreenHeight;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithDynamicCanvasViewController:(id)arg1 halfJumpInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

