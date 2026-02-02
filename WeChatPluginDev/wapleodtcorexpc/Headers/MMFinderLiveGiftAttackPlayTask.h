//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftAttackRewardPlayContext, MMFinderLiveGiftPlayItem, MMLiveTaskId, NSMutableDictionary, NSString;

@interface MMFinderLiveGiftAttackPlayTask : NSObject
{
    _Bool _isPlayPending;
    _Bool _isPlayStart;
    int _identifierNum;
    MMFinderLiveGiftPlayItem *_playItem;
    NSString *_taskKey;
    MMFinderLiveGiftAttackRewardPlayContext *_playContext;
    CDUnknownBlockType _checkRenderTaskNeedRemoveScriptCallback;
    CDUnknownBlockType _getReusedRenderScriptCallback;
    CDUnknownBlockType _shareFaceEffectCallback;
    CDUnknownBlockType _faceEffectWillStartCallback;
    CDUnknownBlockType _faceEffectDidStartCallback;
    CDUnknownBlockType _getAppActiveStateCallback;
    CDUnknownBlockType _renderTaskWillStartCallback;
    CDUnknownBlockType _renderTaskDidFinishCallback;
    CDUnknownBlockType _addScriptSuccCallback;
    MMLiveTaskId *_liveTaskId;
    NSMutableDictionary *_renderTaskDict;
    CDUnknownBlockType _timeoutCallback;
    CDUnknownBlockType _aniamtionCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType aniamtionCompletion; // @synthesize aniamtionCompletion=_aniamtionCompletion;
@property(copy, nonatomic) CDUnknownBlockType timeoutCallback; // @synthesize timeoutCallback=_timeoutCallback;
@property(nonatomic) _Bool isPlayStart; // @synthesize isPlayStart=_isPlayStart;
@property(nonatomic) _Bool isPlayPending; // @synthesize isPlayPending=_isPlayPending;
@property(retain, nonatomic) NSMutableDictionary *renderTaskDict; // @synthesize renderTaskDict=_renderTaskDict;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType addScriptSuccCallback; // @synthesize addScriptSuccCallback=_addScriptSuccCallback;
@property(copy, nonatomic) CDUnknownBlockType renderTaskDidFinishCallback; // @synthesize renderTaskDidFinishCallback=_renderTaskDidFinishCallback;
@property(copy, nonatomic) CDUnknownBlockType renderTaskWillStartCallback; // @synthesize renderTaskWillStartCallback=_renderTaskWillStartCallback;
@property(copy, nonatomic) CDUnknownBlockType getAppActiveStateCallback; // @synthesize getAppActiveStateCallback=_getAppActiveStateCallback;
@property(copy, nonatomic) CDUnknownBlockType faceEffectDidStartCallback; // @synthesize faceEffectDidStartCallback=_faceEffectDidStartCallback;
@property(copy, nonatomic) CDUnknownBlockType faceEffectWillStartCallback; // @synthesize faceEffectWillStartCallback=_faceEffectWillStartCallback;
@property(copy, nonatomic) CDUnknownBlockType shareFaceEffectCallback; // @synthesize shareFaceEffectCallback=_shareFaceEffectCallback;
@property(copy, nonatomic) CDUnknownBlockType getReusedRenderScriptCallback; // @synthesize getReusedRenderScriptCallback=_getReusedRenderScriptCallback;
@property(copy, nonatomic) CDUnknownBlockType checkRenderTaskNeedRemoveScriptCallback; // @synthesize checkRenderTaskNeedRemoveScriptCallback=_checkRenderTaskNeedRemoveScriptCallback;
@property(nonatomic) int identifierNum; // @synthesize identifierNum=_identifierNum;
@property(retain, nonatomic) MMFinderLiveGiftAttackRewardPlayContext *playContext; // @synthesize playContext=_playContext;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(retain, nonatomic) MMFinderLiveGiftPlayItem *playItem; // @synthesize playItem=_playItem;
- (id)getRegisterRenderTaskWithKey:(id)arg1;
- (id)getAllRegisterRenderTasks;
- (void)registerRenderTask:(id)arg1 withKey:(id)arg2;
- (id)description;
@property(readonly, nonatomic) NSString *recipientUserName;
- (_Bool)isAppActive;
- (void)onRenderTaskWillStart:(id)arg1;
- (id)tryGetResuedScriptForRenderTask:(id)arg1;
- (void)clearData;
- (void)endWithResult:(long long)arg1;
- (long long)getCurrAnimationResult;
- (void)checkCurrAnimationResult;
- (void)startGiftAttackRender:(id)arg1;
- (void)cancelPending;
- (void)onPendingTimeout;
- (id)attackerUserNameList;
- (_Bool)isCurrSupportPlayGiftAttack;
- (_Bool)isExistAnimationId:(id)arg1;
- (id)getPreviousFaceEffectRenderEnableTasksExceptAnimationId:(id)arg1 forAttacker:(id)arg2;
- (id)getReusableFaceEffectRenderEnableTaskWithAnimationId:(id)arg1 forAttacker:(id)arg2;
- (_Bool)isExistRenderTaskForAttacker:(id)arg1;
- (_Bool)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)clearDirectly;
- (void)stopAnimation;
- (void)startAnimationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPending:(double)arg1 timeoutCallback:(CDUnknownBlockType)arg2;
- (id)createRenderTaskWithAttackUserName:(id)arg1 attackItem:(id)arg2;
- (void)createRenderTask;
- (void)initDefaultData;
- (id)initWithGiftPlayItem:(id)arg1 liveTaskId:(id)arg2 identifier:(int)arg3;

@end

