//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableDictionary, NSMutableSet, NSString;
@protocol MMFinderLiveGestureAnimationExternalRenderingDelegate;

@interface MMFinderLiveGestureAnimationWeVisionRenderer : NSObject
{
    id <MMFinderLiveGestureAnimationExternalRenderingDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_renderScriptIdToRenderTaskMap;
    NSMutableDictionary *_animationResourceIdToRenderTaskMap;
    NSMutableSet *_gestureDeduplicateSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *gestureDeduplicateSet; // @synthesize gestureDeduplicateSet=_gestureDeduplicateSet;
@property(retain, nonatomic) NSMutableDictionary *animationResourceIdToRenderTaskMap; // @synthesize animationResourceIdToRenderTaskMap=_animationResourceIdToRenderTaskMap;
@property(retain, nonatomic) NSMutableDictionary *renderScriptIdToRenderTaskMap; // @synthesize renderScriptIdToRenderTaskMap=_renderScriptIdToRenderTaskMap;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGestureAnimationExternalRenderingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportAnimationPlayingWithRenderTask:(id)arg1;
- (void)playSoundEffectForGestureWithId:(id)arg1;
- (void)completeRenderingOfAnimationWithResourceId:(long long)arg1 instanceId:(int)arg2;
- (void)startRenderingOfTask:(id)arg1;
- (id)liveTask;
- (void)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)addGestureAnimationForCurrentUserWithGestureId:(id)arg1 instanceId:(id)arg2 translationX:(double)arg3 translationY:(double)arg4 rotation:(double)arg5 scale:(double)arg6;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

