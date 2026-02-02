//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, MMEasterEggTopAnimation, NSArray, NSMutableArray, NSOperationQueue, NSString, PAGView;
@protocol MMEasterEggEffectDelegateImplicitAnimation;

@interface MMEasterEggEffectImplicitAnimation
{
    NSArray *_animations;
    MMEasterEggTopAnimation *_topAnimation;
    NSOperationQueue *_queue;
    PAGView *_pagView;
    long long _animationType;
    CDUnknownBlockType _durationBlock;
    CADisplayLink *_displayLink;
    NSMutableArray *_implicitViews;
    unsigned long long _startAnimationViewCount;
    unsigned long long _countOfViewFinished;
    double _nextStartAnimationTime;
}

- (void).cxx_destruct;
@property(nonatomic) double nextStartAnimationTime; // @synthesize nextStartAnimationTime=_nextStartAnimationTime;
@property(nonatomic) unsigned long long countOfViewFinished; // @synthesize countOfViewFinished=_countOfViewFinished;
@property(nonatomic) unsigned long long startAnimationViewCount; // @synthesize startAnimationViewCount=_startAnimationViewCount;
@property(retain, nonatomic) NSMutableArray *implicitViews; // @synthesize implicitViews=_implicitViews;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType durationBlock; // @synthesize durationBlock=_durationBlock;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MMEasterEggTopAnimation *topAnimation; // @synthesize topAnimation=_topAnimation;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (void)didTapInteractiveImplicitView:(id)arg1;
- (struct CGRect)getBoundsForAnimationType:(long long)arg1;
- (void)onAnimationEnd:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setSessionId:(id)arg1;
- (_Bool)checkEnd;
- (void)updateCountOfViewStartAnimationWithCurTime:(double)arg1;
- (void)updateFrame;
- (void)startAnimationWithImplicitViews:(id)arg1;
- (void)startTopAnimation;
- (void)setBackgroundView:(id)arg1;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (_Bool)startEffectWithExtInfo:(id)arg1;
- (_Bool)isRunning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MMEasterEggEffectDelegateImplicitAnimation> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

