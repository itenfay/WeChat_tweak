//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PAGView, UIView, WCDataItem;

@interface WCAdAnimateViewControllerAnimatedTransitioning : NSObject
{
    _Bool _isPresented;
    long long _gestureType;
    WCDataItem *_dataItem;
    UIView *_originView;
    PAGView *_pagAnimationView;
    long long _adTransitionType;
}

- (void).cxx_destruct;
@property(nonatomic) long long adTransitionType; // @synthesize adTransitionType=_adTransitionType;
@property(retain, nonatomic) PAGView *pagAnimationView; // @synthesize pagAnimationView=_pagAnimationView;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
- (void)cleanUpPagTransitionAnimation;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)tryToPlayAnimationInView:(id)arg1 pagThemeInfo:(id)arg2;
- (id)fetchTransitionAnimationFilePathFromPagThemeInfo:(id)arg1;
- (void)eggPagThemeAnimateTransition:(id)arg1 fromView:(id)arg2 toView:(id)arg3 pagThemeInfo:(id)arg4;
- (void)eggRandomSpriteAnimateTransition:(id)arg1 fromView:(id)arg2 toView:(id)arg3 randomSprite:(id)arg4;
- (void)animationForDismissedView:(id)arg1;
- (void)animationForPresentedView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)updateTransitionTypeWithGestureType:(long long)arg1 dataItem:(id)arg2;
- (id)initWithGestureType:(long long)arg1 dataItem:(id)arg2 originView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

