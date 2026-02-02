//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSMutableDictionary, NSString, WCAdInteractionContentView;
@protocol WCAdInteractionViewDelegate;

@interface WCAdInteractionView
{
    id <WCAdInteractionViewDelegate> _delegate;
    NSArray *_events;
    NSDictionary *_resources;
    NSDictionary *_actions;
    NSArray *_determinationInfos;
    WCAdInteractionContentView *_baseContentView;
    NSMutableDictionary *_firedTimeEventCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *firedTimeEventCache; // @synthesize firedTimeEventCache=_firedTimeEventCache;
@property(retain, nonatomic) WCAdInteractionContentView *baseContentView; // @synthesize baseContentView=_baseContentView;
@property(retain, nonatomic) NSArray *determinationInfos; // @synthesize determinationInfos=_determinationInfos;
@property(retain, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSDictionary *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) __weak id <WCAdInteractionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)deviceMotionOrientationChangedWithXAngle:(double)arg1 yAngle:(double)arg2 zAngle:(double)arg3;
- (void)contentViewBeClickedWithResourceId:(id)arg1;
- (id)fetchDeterminationInfoWithResourceId:(id)arg1;
- (id)fetchResourceInfoWithResourceId:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)fetchContentReportInfo;
- (void)fireDeterminationWithResourceId:(id)arg1 forType:(unsigned long long)arg2 params:(id)arg3;
- (void)operateReportWithInfo:(id)arg1 params:(id)arg2;
- (void)operateActivityWithInfo:(id)arg1;
- (void)operateProgressWithInfo:(id)arg1 withPercent:(double)arg2;
- (void)updateGestureForResource:(id)arg1 withAction:(id)arg2;
- (void)operateGestureWithInfo:(id)arg1;
- (void)addSimpleAnimationWithInfo:(id)arg1 toView:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)addKeyframeAnimationWithInfo:(id)arg1 toView:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)addAnimationWithInfo:(id)arg1 toView:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (int)findMaxDurationForAction:(id)arg1 fromView:(id)arg2;
- (void)appendAnimationForAction:(id)arg1 fromView:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)fetchSubviewForResource:(id)arg1;
- (id)fetchSubviewInView:(id)arg1 byTag:(long long)arg2;
- (void)hideOrRemoveResourceWithResource:(id)arg1 action:(id)arg2 fromView:(id)arg3 hide:(_Bool)arg4;
- (void)showOrUpdateResourceWithResource:(id)arg1 action:(id)arg2 toView:(id)arg3 updateOnly:(_Bool)arg4;
- (void)drawWithInfo:(id)arg1;
- (void)fireActionWithInfo:(id)arg1 withParams:(id)arg2;
- (void)fireActionsForEventType:(unsigned long long)arg1 subType:(unsigned long long)arg2 determinationId:(id)arg3 interval:(double)arg4 params:(id)arg5;
- (void)fireActionsForTimeEventWithInterval:(double)arg1;
- (void)fireActionsForEventType:(unsigned long long)arg1;
- (void)clearAllCaches;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)terminateContentView;
- (void)suspendContentView;
- (void)activeContentView;
- (void)hideContentView;
- (void)showContentView;
- (void)parseInteractionInfo:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 interactionInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

