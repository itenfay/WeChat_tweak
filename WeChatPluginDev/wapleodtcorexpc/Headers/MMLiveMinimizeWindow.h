//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveMinimizeViewController, NSString, SequenceAnimationObject;
@protocol MMLiveMinimizeWindowDelegate;

@interface MMLiveMinimizeWindow
{
    id <MMLiveMinimizeWindowDelegate> _liveMinimizeWindowDelegate;
    SequenceAnimationObject *_animationObject;
    SequenceAnimationObject *_animationObjectForAlpha;
    MMLiveMinimizeViewController *_viewController;
    struct CGRect _originMoveViewRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect originMoveViewRect; // @synthesize originMoveViewRect=_originMoveViewRect;
@property(retain, nonatomic) MMLiveMinimizeViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SequenceAnimationObject *animationObjectForAlpha; // @synthesize animationObjectForAlpha=_animationObjectForAlpha;
@property(retain, nonatomic) SequenceAnimationObject *animationObject; // @synthesize animationObject=_animationObject;
@property(nonatomic) __weak id <MMLiveMinimizeWindowDelegate> liveMinimizeWindowDelegate; // @synthesize liveMinimizeWindowDelegate=_liveMinimizeWindowDelegate;
- (_Bool)shouldHandleStatusBarAppearance;
- (long long)onMMLiveMinimizeViewControllerRequestPreviousOrientation;
- (void)onMMLiveMinimizeViewControllerTap;
- (struct CGRect)fullScreenRect;
- (void)makeKeyWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showMinimizeWindowWithBackImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideMinimizeWindowWithBackImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restoreMoveViewOriginRect;
- (void)setBackImage:(id)arg1;
- (void)updateLiveView:(id)arg1;
- (struct CGRect)vaildFrame;
- (id)initWithLiveView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

