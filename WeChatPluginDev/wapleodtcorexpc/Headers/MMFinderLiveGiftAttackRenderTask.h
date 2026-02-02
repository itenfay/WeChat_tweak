//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGiftAttackItem, GiftAttackRenderScriptObj, MMFinderLiveGiftPlayItem, MMLiveStorageCleanupPinningToken, MMLiveTask, MMLiveTaskId, MMWeEffectManager, NSString;

@interface MMFinderLiveGiftAttackRenderTask : NSObject
{
    _Bool _isRenderStart;
    _Bool _isAnimationFinished;
    _Bool _needClearFaceEffect;
    _Bool _isAnimationInvoke;
    _Bool _isFaceEffectClear;
    _Bool _isRenderEndFinished;
    _Bool _isBombFlyingEnd;
    _Bool _isFaceEffectStart;
    int _identifierNum;
    int _effectLevel;
    int _faceEffectIncreaseTimes;
    int _faceEffectIncreaseTimesRecord;
    MMFinderLiveGiftPlayItem *_playItem;
    NSString *_attackUserName;
    FinderLiveGiftAttackItem *_attackItem;
    long long _renderResult;
    long long _faceEffectRenderType;
    long long _renderAttackGiftCountType;
    long long _renderScriptId;
    CDUnknownBlockType _checkNeedRemoveScriptCallback;
    CDUnknownBlockType _shareFaceEffectCallback;
    CDUnknownBlockType _faceEffectWillStartCallback;
    CDUnknownBlockType _faceEffectDidStartCallback;
    CDUnknownBlockType _addScriptSuccCallback;
    NSString *_taskKey;
    NSString *_uniqueKey;
    MMLiveTaskId *_liveTaskId;
    MMWeEffectManager *_weeffectManager;
    CDUnknownBlockType _renderCompletion;
    GiftAttackRenderScriptObj *_renderScriptObj;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
    struct CGPoint _startPos;
    struct CGRect _detectRegion;
}

+ (id)baseResourceDir;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(nonatomic) int faceEffectIncreaseTimesRecord; // @synthesize faceEffectIncreaseTimesRecord=_faceEffectIncreaseTimesRecord;
@property(nonatomic) int faceEffectIncreaseTimes; // @synthesize faceEffectIncreaseTimes=_faceEffectIncreaseTimes;
@property(nonatomic) int effectLevel; // @synthesize effectLevel=_effectLevel;
@property(nonatomic) _Bool isFaceEffectStart; // @synthesize isFaceEffectStart=_isFaceEffectStart;
@property(nonatomic) _Bool isBombFlyingEnd; // @synthesize isBombFlyingEnd=_isBombFlyingEnd;
@property(nonatomic) _Bool isRenderEndFinished; // @synthesize isRenderEndFinished=_isRenderEndFinished;
@property(nonatomic) _Bool isFaceEffectClear; // @synthesize isFaceEffectClear=_isFaceEffectClear;
@property(nonatomic) _Bool isAnimationInvoke; // @synthesize isAnimationInvoke=_isAnimationInvoke;
@property(retain) GiftAttackRenderScriptObj *renderScriptObj; // @synthesize renderScriptObj=_renderScriptObj;
@property(copy, nonatomic) CDUnknownBlockType renderCompletion; // @synthesize renderCompletion=_renderCompletion;
@property(nonatomic) __weak MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(nonatomic) struct CGPoint startPos; // @synthesize startPos=_startPos;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(nonatomic) int identifierNum; // @synthesize identifierNum=_identifierNum;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(copy, nonatomic) CDUnknownBlockType addScriptSuccCallback; // @synthesize addScriptSuccCallback=_addScriptSuccCallback;
@property(copy, nonatomic) CDUnknownBlockType faceEffectDidStartCallback; // @synthesize faceEffectDidStartCallback=_faceEffectDidStartCallback;
@property(copy, nonatomic) CDUnknownBlockType faceEffectWillStartCallback; // @synthesize faceEffectWillStartCallback=_faceEffectWillStartCallback;
@property(copy, nonatomic) CDUnknownBlockType shareFaceEffectCallback; // @synthesize shareFaceEffectCallback=_shareFaceEffectCallback;
@property(copy, nonatomic) CDUnknownBlockType checkNeedRemoveScriptCallback; // @synthesize checkNeedRemoveScriptCallback=_checkNeedRemoveScriptCallback;
@property long long renderScriptId; // @synthesize renderScriptId=_renderScriptId;
@property(nonatomic) long long renderAttackGiftCountType; // @synthesize renderAttackGiftCountType=_renderAttackGiftCountType;
@property(nonatomic) long long faceEffectRenderType; // @synthesize faceEffectRenderType=_faceEffectRenderType;
@property(nonatomic) long long renderResult; // @synthesize renderResult=_renderResult;
@property(retain, nonatomic) FinderLiveGiftAttackItem *attackItem; // @synthesize attackItem=_attackItem;
@property(retain, nonatomic) NSString *attackUserName; // @synthesize attackUserName=_attackUserName;
@property(retain, nonatomic) MMFinderLiveGiftPlayItem *playItem; // @synthesize playItem=_playItem;
@property(nonatomic) struct CGRect detectRegion; // @synthesize detectRegion=_detectRegion;
@property(nonatomic) _Bool needClearFaceEffect; // @synthesize needClearFaceEffect=_needClearFaceEffect;
@property(nonatomic) _Bool isAnimationFinished; // @synthesize isAnimationFinished=_isAnimationFinished;
@property(nonatomic) _Bool isRenderStart; // @synthesize isRenderStart=_isRenderStart;
- (void)createEffectLevel;
- (id)getInitialResourcePath;
- (id)getScriptResourcePath;
- (id)getActualResourcePath;
- (void)initActualResDir;
- (id)description;
- (_Bool)isFaceEffectRenderEnabled;
@property(readonly, nonatomic) _Bool isAnimationEnd;
@property(readonly, nonatomic) NSString *animationId;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (id)getResetLuaParamsJsonMessage;
- (void)sendResetLuaParamsRenderMessage:(CDUnknownBlockType)arg1;
- (id)getResetEffectJsonMessage;
- (void)sendEffectRenderMessageToClear:(CDUnknownBlockType)arg1;
- (id)getResetFaceEffectJsonMessage;
- (void)sendFaceEffectRenderMessageToClear;
- (void)invokeClearFaceEffectRenderIfNeed;
- (id)getResetFaceEffectTimerJsonMessage;
- (void)sendFaceEffectRenderMessageToIncreaseTime;
- (void)invokeIncreaseFaceEffectRenderTimeIfNeed;
- (_Bool)checkNeedRemoveScript;
- (_Bool)clearResources;
- (_Bool)clearResourcesForAddFailed;
- (_Bool)clearResourcesIfNeeded;
- (void)removeRenderScriptWithClearSrc:(CDUnknownBlockType)arg1;
- (_Bool)tryFaceEffectRenderShareWithOthersIfEnable;
- (id)getRenderJsonMessage;
- (void)sendRenderMessage:(CDUnknownBlockType)arg1;
- (void)setDetectRegion:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRenderScript:(CDUnknownBlockType)arg1;
- (void)onFaceEffectRenderStart;
- (void)onBombFlyingEnd;
- (void)clearData;
- (void)endWithResult:(long long)arg1;
- (void)onAnimationFinished;
- (void)stopRender;
- (void)startRender;
- (_Bool)isAnimParamsValid;
- (_Bool)updateStartPos:(struct CGPoint)arg1;
- (_Bool)updateDetectRegion:(struct CGRect)arg1;
- (void)makeFaceEffectRenderType;
- (void)handleForOverTime;
- (void)cancelOverTimeCheck;
- (void)startOverTimeCheck;
- (double)supplyCheckTimeForFaceEffectIncreOnce;
- (double)maxRunningTime;
- (_Bool)isScriptUnifyManage;
- (id)renderResourcePath;
- (void)updateNeedClearFaceEffect;
- (void)clearFaceEffect;
- (void)increaseFaceEffectRenderTime;
- (_Bool)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)clearDirectly;
- (void)stopAnimation;
- (void)startAnimationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initAttackGiftCountType;
- (void)initDefaultData;
- (id)initWithGiftPlayItem:(id)arg1 attackUserName:(id)arg2 attackItem:(id)arg3 liveTaskId:(id)arg4 identifier:(int)arg5;

@end

