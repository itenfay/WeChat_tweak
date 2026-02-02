//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveRewardGiftNewCustomizationMagicEngineResLogic, NSMutableDictionary;

@interface MMLiveRewardGiftNewCustomizationMagicRewardResManager : NSObject
{
    _Bool _hasResourceTaskChecking;
    NSMutableDictionary *_taskDict;
    MMLiveRewardGiftNewCustomizationMagicEngineResLogic *_engineResLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasResourceTaskChecking; // @synthesize hasResourceTaskChecking=_hasResourceTaskChecking;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationMagicEngineResLogic *engineResLogic; // @synthesize engineResLogic=_engineResLogic;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
- (void)onEnvErrorWithErrType:(long long)arg1 errMsg:(id)arg2;
- (void)onEnvResUpdatedWithGiftName:(id)arg1;
- (void)onEnvDestroyed;
- (void)onEnvPrepared;
- (void)onCodeUpdateFail:(long long)arg1;
- (void)onCodeUpdateSuccess:(id)arg1;
@property(readonly, nonatomic) _Bool checkByMagicBrush;
- (id)getCheckTaskWithGiftName:(id)arg1;
- (void)checkAllTaskMagicRewardResourceState;
- (id)getCheckTaskList;
- (id)getCheckTaskWithKey:(id)arg1;
- (void)addCheckTask:(id)arg1 withKey:(id)arg2;
- (void)updateMagicEngineResTagWithCheckTask:(id)arg1;
- (id)createCheckTaskWithResource:(id)arg1;
- (unsigned long long)transferPrepareResourceResultToState:(long long)arg1;
- (unsigned long long)transferPrepareResourceResultToCheckResult:(long long)arg1;
- (void)prepareMagicEngineResource:(id)arg1;
- (unsigned long long)transferMagicEngineResErrorLoadResultToCheckResult:(unsigned long long)arg1;
- (void)checkMagicEngineCodeResource:(id)arg1;
- (void)loadMagicEngineResource:(id)arg1;
- (_Bool)getCurrentResourceTasksCheckingState;
- (void)updateResourceTasksCheckingState;
- (void)innerCheckMagicRewardResourceState:(id)arg1 callback:(CDUnknownBlockType)arg2 maxWaitTime:(double)arg3 useCacheStateIfSupport:(_Bool)arg4;
- (_Bool)isCurrentHasResourceTaskChecking;
- (void)resetAllTasks;
- (void)checkMagicRewardResourceState:(id)arg1 callback:(CDUnknownBlockType)arg2 maxWaitTime:(double)arg3 useCacheStateIfSupport:(_Bool)arg4;
- (void)checkMagicRewardResourceState:(id)arg1;
- (_Bool)isCacheResourceStateSupported:(id)arg1;
- (unsigned long long)getCacheResourceState:(id)arg1;
- (void)removeListener;
- (void)addListener;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)init;

@end

