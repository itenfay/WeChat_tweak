//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIImageView, WCAdConventionalHalfScreenDetailBaseView, WCAdConventionalHalfScreenMediaBaseView;

@interface WCAdConventionalFullScreenViewController
{
    UIImageView *_topMaskView;
    MMUIButton *_leftBarButton;
    WCAdConventionalHalfScreenMediaBaseView *_mediaView;
    WCAdConventionalHalfScreenDetailBaseView *_detailView;
    CDUnknownBlockType _didAppearBlock;
    CDUnknownBlockType _popTransitionBlock;
    CDUnknownBlockType _willDisappearBlock;
    CDUnknownBlockType _didDisappearBlock;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(copy, nonatomic) CDUnknownBlockType didDisappearBlock; // @synthesize didDisappearBlock=_didDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisappearBlock; // @synthesize willDisappearBlock=_willDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType popTransitionBlock; // @synthesize popTransitionBlock=_popTransitionBlock;
@property(copy, nonatomic) CDUnknownBlockType didAppearBlock; // @synthesize didAppearBlock=_didAppearBlock;
@property(nonatomic) __weak WCAdConventionalHalfScreenDetailBaseView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) WCAdConventionalHalfScreenMediaBaseView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) MMUIButton *leftBarButton; // @synthesize leftBarButton=_leftBarButton;
@property(retain, nonatomic) UIImageView *topMaskView; // @synthesize topMaskView=_topMaskView;
- (id)fetchMediaViewCurrentSnapshot;
- (struct CGRect)calcMediaContentOriginFrameForMediaImage:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)dismissFullScreenView;
- (void)configPushTransitionCustomWithDidAppearBlock:(CDUnknownBlockType)arg1 popTransitionBlock:(CDUnknownBlockType)arg2 willDisappearBlock:(CDUnknownBlockType)arg3 didDisappearBlock:(CDUnknownBlockType)arg4;
- (void)onLeftBarButtonClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)useTransparentNavibar;
- (_Bool)hidesStatusBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaView:(id)arg1 detailView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

