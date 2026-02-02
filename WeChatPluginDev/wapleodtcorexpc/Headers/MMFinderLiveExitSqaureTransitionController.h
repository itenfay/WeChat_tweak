//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveEnterSqaureTransitionContext, NSString;

@interface MMFinderLiveExitSqaureTransitionController
{
    double _currentPlayerBottonHeight;
    struct CGRect _originPlayerControlViewFrame;
}

@property(nonatomic) double currentPlayerBottonHeight; // @synthesize currentPlayerBottonHeight=_currentPlayerBottonHeight;
@property(nonatomic) struct CGRect originPlayerControlViewFrame; // @synthesize originPlayerControlViewFrame=_originPlayerControlViewFrame;
- (void)animationDidEnd:(_Bool)arg1;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(_Bool)arg1;
- (void)performRecoverAnimator;
- (void)performAniamtorDelay:(double)arg1;
- (void)prepareForAnimation;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3 isPop:(_Bool)arg4;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(_Bool)arg1;
- (_Bool)isSpecialState;
- (id)init;

// Remaining properties
@property(retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

