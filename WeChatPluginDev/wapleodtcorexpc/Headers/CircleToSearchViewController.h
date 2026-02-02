//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CircleToSearchEntity, CircleToSearchLoadingView, CircleToSearchScrollView, MMUIButton, MMUIView, NSString, ShowFullScreenAnimationController, WCWebSearchViewControllerNewH5;

@interface CircleToSearchViewController
{
    int _halfScreenType;
    CircleToSearchEntity *_entity;
    MMUIButton *_closeButton;
    MMUIButton *_debugButton;
    CircleToSearchScrollView *_scrollView;
    CircleToSearchLoadingView *_loadingView;
    MMUIView *_contentView;
    WCWebSearchViewControllerNewH5 *_searchPage;
    ShowFullScreenAnimationController *_transitionController;
}

+ (void)presentFromViewController:(id)arg1 withEntity:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ShowFullScreenAnimationController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) int halfScreenType; // @synthesize halfScreenType=_halfScreenType;
@property(retain, nonatomic) WCWebSearchViewControllerNewH5 *searchPage; // @synthesize searchPage=_searchPage;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CircleToSearchLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CircleToSearchScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMUIButton *debugButton; // @synthesize debugButton=_debugButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) CircleToSearchEntity *entity; // @synthesize entity=_entity;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldHideNavigationBar;
- (_Bool)useTransparentNavibar;
- (_Bool)hidesStatusBar;
- (void)handleCircleToSearchActionDebug:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionShowToast:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionDismiss:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionChangeHeight:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionFocus:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionGetImageUrlList:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionStopLoadingAnimation:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchActionStartLoadingAnimation:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleToSearchAction:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)onCircleToSearchEvent:(id)arg1 andData:(id)arg2;
- (void)doSwitchHalfScreenTypeInitAndDismissAnimated:(_Bool)arg1;
- (void)doSwitchHalfScreenType:(int)arg1 withAnimationDuration:(double)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)willSwitchHalfScreenType;
- (int)getHalfScreenTypeForTypeName:(id)arg1;
- (double)getHalfScreenHeightForType:(int)arg1;
- (double)getHalfScreenHeightForType:(int)arg1 andViewHeight:(double)arg2;
- (id)getHalfScreenTypeNameForType:(int)arg1;
- (id)getShadowedImage:(id)arg1;
- (void)updateScreenEdgesDeferringSystemGestures;
- (void)handlePanGesture:(id)arg1;
- (void)handleEdgeGesture:(id)arg1;
- (void)handleScrollViewTapGesture:(id)arg1;
- (void)handleDebugButtonClick:(id)arg1;
- (void)handleCloseButtonClick:(id)arg1;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (void)dealloc;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configFullScreenTransitionForNavigationController:(id)arg1;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

