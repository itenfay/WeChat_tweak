//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCAdCanvasExtraParams, WCAdExpressionCanvasHalfScreenJumpInfo, WCAdvertiseInfo, WCCanvasPageViewController;

@interface WCCanvasHalfScreenViewController
{
    _Bool _willJumpToHalfOtherContent;
    int _scene;
    WCAdvertiseInfo *_adInfo;
    NSString *_canvasId;
    WCAdExpressionCanvasHalfScreenJumpInfo *_halfJumpInfo;
    UIView *_floatContainerView;
    WCCanvasPageViewController *_canvasViewController;
    WCAdCanvasExtraParams *_extraParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCanvasExtraParams *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) _Bool willJumpToHalfOtherContent; // @synthesize willJumpToHalfOtherContent=_willJumpToHalfOtherContent;
@property(retain, nonatomic) WCCanvasPageViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
@property(retain, nonatomic) UIView *floatContainerView; // @synthesize floatContainerView=_floatContainerView;
@property(retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *halfJumpInfo; // @synthesize halfJumpInfo=_halfJumpInfo;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (id)onHalfScreenCanvasFetchHalfScreenJumpInfo;
- (void)onClickWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)onHalfScreenCanvasJumpToCanvas:(id)arg1 uxInfo:(id)arg2 noStore:(_Bool)arg3;
- (void)onHalfScreenCanvasJumpToWeApp:(id)arg1 sceneNote:(id)arg2;
- (void)onHalfScreenCanvasJumpToH5:(id)arg1 extraInfo:(id)arg2;
- (double)onHalfScreenCanvasGetMaxHalfScreenHeight;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
- (void)setCanvasExtraParamInfo:(id)arg1;
- (void)transferFloatContainerView;
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
- (id)initWithAdvertiseInfo:(id)arg1 canvasId:(id)arg2 scene:(int)arg3 halfJumpInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

