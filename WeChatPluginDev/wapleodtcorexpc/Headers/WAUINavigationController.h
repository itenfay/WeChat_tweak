//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationBar, NSMutableArray, UIView, UIViewController, WAMenuPopInteractiveTransition;
@protocol WAUINavigationControllerDelegate;

@interface WAUINavigationController
{
    _Bool _isInSheetMode;
    _Bool _hasLoadResizable;
    _Bool _hasAdjustSize;
    _Bool _isPortrait;
    _Bool _isResizable;
    _Bool _isAuto;
    _Bool _isGame;
    _Bool _isEnableDark;
    id <WAUINavigationControllerDelegate> _naviDelegate;
    UIViewController *_viewControllerBeingPushedOrPopTo;
    WAMenuPopInteractiveTransition *_dismissInteractiveTransition;
    long long _viewState;
    MMUINavigationBar *_customNavigationBar;
    UIView *_bottomView;
    double _lastScreenWidth;
    NSMutableArray *_arrAppearAction;
    UIViewController *_weakTopVC;
}

+ (_Bool)shouldUseCustomeNavigationBar;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *weakTopVC; // @synthesize weakTopVC=_weakTopVC;
@property(retain, nonatomic) NSMutableArray *arrAppearAction; // @synthesize arrAppearAction=_arrAppearAction;
@property(nonatomic) double lastScreenWidth; // @synthesize lastScreenWidth=_lastScreenWidth;
@property(nonatomic) _Bool isEnableDark; // @synthesize isEnableDark=_isEnableDark;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isAuto; // @synthesize isAuto=_isAuto;
@property(nonatomic) _Bool isResizable; // @synthesize isResizable=_isResizable;
@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(nonatomic) _Bool hasAdjustSize; // @synthesize hasAdjustSize=_hasAdjustSize;
@property(nonatomic) _Bool hasLoadResizable; // @synthesize hasLoadResizable=_hasLoadResizable;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) WAMenuPopInteractiveTransition *dismissInteractiveTransition; // @synthesize dismissInteractiveTransition=_dismissInteractiveTransition;
@property(nonatomic) _Bool isInSheetMode; // @synthesize isInSheetMode=_isInSheetMode;
@property(retain, nonatomic) UIViewController *viewControllerBeingPushedOrPopTo; // @synthesize viewControllerBeingPushedOrPopTo=_viewControllerBeingPushedOrPopTo;
@property(nonatomic) __weak id <WAUINavigationControllerDelegate> naviDelegate; // @synthesize naviDelegate=_naviDelegate;
- (long long)overrideUserInterfaceStyle;
- (void)updateStatusBarColorIfNeededForVC:(id)arg1;
- (_Bool)shouldUsePresentWhenPushViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double bottomViewWidth;
@property(readonly, nonatomic) double bottomViewHeight;
- (void)layoutCenterLoading;
- (id)ipadCompatibleModeBottomViewBackgroundColor;
- (void)addBottomView;
- (void)scaleViewIfUnresizable;
- (void)adjustViewSizeIfUnresizable;
- (struct CGSize)preferredNavigationViewSize;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool isCurrentPagePortraitForIpad;
@property(readonly, nonatomic) _Bool hasScaleToAdaptIpad;
- (void)resizeAndTransformNavigationViewIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)doAppearAction;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)addAppearAction:(CDUnknownBlockType)arg1;
- (void)viewDidPresent:(_Bool)arg1;
- (void)tryForceRotationWhenPushOrPop:(id)arg1 ToViewController:(id)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)dismissPresentedViewController;
- (void)PresentModalViewControllerInPushAnimation:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)init;
- (id)initWithRootViewController:(id)arg1;

@end

