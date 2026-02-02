//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGestureAnimationWeVisionRenderer, MMFinderLiveGestureGiftSenderCacheItem, MMFinderLiveTaskId, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFinderLiveGestureLogic : NSObject
{
    _Bool _masterSwitchEnabled;
    _Bool _enabled;
    _Bool _currentAnchorAnimationPlaying;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_luaObjectIdToGestureIdMap;
    NSMutableDictionary *_gestureIdToLuaObjectIdMap;
    NSMutableArray *_registrationTasks;
    double _temporarilyEnabledUntil;
    NSMutableDictionary *_stableReferenceLuaMessageItems;
    double _anchorAspectRatio;
    MMFinderLiveGestureGiftSenderCacheItem *_lastIncomingGiftSender;
    NSMutableDictionary *_recentIncomingGiftSenders;
    MMFinderLiveGestureAnimationWeVisionRenderer *_weVisionLuaRenderer;
}

+ (_Bool)isNewGestureLuaMessageModel:(id)arg1 stableRelativeWith:(id)arg2;
+ (_Bool)defaultGestureEnablementForLiveTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGestureAnimationWeVisionRenderer *weVisionLuaRenderer; // @synthesize weVisionLuaRenderer=_weVisionLuaRenderer;
@property(retain, nonatomic) NSMutableDictionary *recentIncomingGiftSenders; // @synthesize recentIncomingGiftSenders=_recentIncomingGiftSenders;
@property(retain, nonatomic) MMFinderLiveGestureGiftSenderCacheItem *lastIncomingGiftSender; // @synthesize lastIncomingGiftSender=_lastIncomingGiftSender;
@property(nonatomic) double anchorAspectRatio; // @synthesize anchorAspectRatio=_anchorAspectRatio;
@property(retain, nonatomic) NSMutableDictionary *stableReferenceLuaMessageItems; // @synthesize stableReferenceLuaMessageItems=_stableReferenceLuaMessageItems;
@property(nonatomic) _Bool currentAnchorAnimationPlaying; // @synthesize currentAnchorAnimationPlaying=_currentAnchorAnimationPlaying;
@property(nonatomic) double temporarilyEnabledUntil; // @synthesize temporarilyEnabledUntil=_temporarilyEnabledUntil;
@property(retain, nonatomic) NSMutableArray *registrationTasks; // @synthesize registrationTasks=_registrationTasks;
@property(retain, nonatomic) NSMutableDictionary *gestureIdToLuaObjectIdMap; // @synthesize gestureIdToLuaObjectIdMap=_gestureIdToLuaObjectIdMap;
@property(retain, nonatomic) NSMutableDictionary *luaObjectIdToGestureIdMap; // @synthesize luaObjectIdToGestureIdMap=_luaObjectIdToGestureIdMap;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool masterSwitchEnabled; // @synthesize masterSwitchEnabled=_masterSwitchEnabled;
- (void)playSoundEffectForGestureWithId:(id)arg1;
- (id)animationPlayer;
- (void)updateAnchorAspectRatioWithLocalVideoSize:(struct CGSize)arg1;
- (void)sendGestureSeiWithModel:(id)arg1;
- (void)startGestureAnimationWithSeiModel:(id)arg1 itemModel:(id)arg2;
- (void)startGestureAnimationWithLuaJsonMessageItem:(id)arg1;
- (void)unregisterLuaScriptForGestureWithId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)registerLuaScriptForGestureWithId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dequeueRegistrationTask;
- (void)enqueueRegistrationTaskWithType:(unsigned long long)arg1 gestureIdsSource:(CDUnknownBlockType)arg2;
- (void)updateLuaScriptRegistrationBasedOnEnablement;
- (_Bool)finalEnabled;
- (id)liveTask;
- (void)onExternallyRenderedGestureAnimationInvokedForGestureId:(id)arg1;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(struct CGSize)arg2;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (void)onCachedGestureWillDelete:(id)arg1;
- (void)onCachedGestureDidUpdate:(id)arg1 result:(unsigned long long)arg2;
- (void)onCachedGestureWillUpdate:(id)arg1;
- (void)processGestureEligibleGiftingMessage:(id)arg1;
- (void)processReceivedGestureSeiMessageFragment:(id)arg1;
- (void)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)invalidateTemporaryEnablement;
- (void)temporarilyEnableForTime:(double)arg1;
- (void)setEnabled:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateBackendMasterSwitchEnablement;
- (id)initWithTaskId:(id)arg1 enabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

