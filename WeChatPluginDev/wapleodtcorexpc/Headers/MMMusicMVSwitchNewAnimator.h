//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIView;
@protocol MMMusicMVSwitchNewAnimatorDelegate;

@interface MMMusicMVSwitchNewAnimator : NSObject
{
    _Bool _bInAnim;
    _Bool _bInFinish;
    unsigned long long _sideType;
    double _percent;
    UIView *_cubeView;
    UIView *_fromView;
    UIView *_toView;
    struct CGRect _fromViewOriginFrame;
    struct CGRect _toViewOriginFrame;
    UIView *_fromViewParentView;
    UIView *_toViewParentView;
    UIView *_backgroundView;
    CDUnknownBlockType _finishBlock;
    NSDictionary *_extDict;
    unsigned long long _animType;
    id <MMMusicMVSwitchNewAnimatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicMVSwitchNewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)sideTypeWithPercent:(double)arg1;
- (double)cubeWidth;
- (struct CATransform3D)transformForCubeWithPercent:(double)arg1 cubeWidth:(double)arg2;
- (struct CATransform3D)transformForSideViewIsLeft:(_Bool)arg1 cubeWidth:(double)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)resetOnFinish;
- (void)startAnimWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 extDict:(id)arg4 animType:(unsigned long long)arg5;
- (_Bool)isAniming;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAnimPercent:(double)arg1;
- (void)startNoInteractiveAnimWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 bToNextOrPre:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startEdgeAnimFromView:(id)arg1 containerView:(id)arg2 extDict:(id)arg3;
- (void)startAnimWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 extDict:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

