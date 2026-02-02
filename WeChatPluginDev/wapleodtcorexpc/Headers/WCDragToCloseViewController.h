//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface WCDragToCloseViewController
{
    _Bool _enableDragToClose;
    _Bool _allowRotate;
    _Bool _isNavigationBarHiddenInAnimiation;
    UIView *_snapShotImgView;
    long long _orientationWhenInit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNavigationBarHiddenInAnimiation; // @synthesize isNavigationBarHiddenInAnimiation=_isNavigationBarHiddenInAnimiation;
@property(nonatomic) long long orientationWhenInit; // @synthesize orientationWhenInit=_orientationWhenInit;
@property(nonatomic) _Bool allowRotate; // @synthesize allowRotate=_allowRotate;
@property(retain, nonatomic) UIView *snapShotImgView; // @synthesize snapShotImgView=_snapShotImgView;
@property(nonatomic) _Bool enableDragToClose; // @synthesize enableDragToClose=_enableDragToClose;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsInDragScene;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)setM_snapShotImgView:(id)arg1;
- (_Bool)isOrientationChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

