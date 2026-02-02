//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMCrashProtectedMgr
{
    _Bool m_isDebuging;
    _Bool m_stopRemovingUnsedCPKey;
    _Bool m_isInBackground;
    _Bool m_isLastTimeCrashedBySpecialCharacter;
    NSMutableArray *m_currRunloopsCPKeys;
    NSMutableDictionary *m_currIncreaseCPKeys;
    NSMutableDictionary *m_chatRoomCrashCountDict;
    NSRecursiveLock *m_lock;
}

+ (void)clearFlag;
+ (_Bool)isCrashBySpecialCharacter;
+ (_Bool)isMemoryMappedKVValid;
- (void).cxx_destruct;
- (id)lastCPKey:(unsigned long long)arg1;
- (void)removeInfoWithKey:(id)arg1 threadId:(unsigned long long)arg2;
- (void)stopCleaning;
- (void)doCleaningJob;
- (void)onExit;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)decreaseCurrIncreaseCPKeysWithout:(id)arg1;
- (void)clearCrashCountWithKey:(id)arg1;
- (void)decreaseCrashCountWithKey:(id)arg1;
- (void)increaseCrashCountWithKey:(id)arg1;
- (_Bool)isChatRoomUnsafe:(id)arg1;
- (_Bool)isUnsafeWithKey:(id)arg1;
- (void)checkHasCrashAndDoReportJob;
- (void)checkMayCrashAndMarkAsHasCrash;
- (void)checkDataValid;
- (id)reportedCPKeyMemoryMappedKV;
- (id)mayCrashMemoryMappedKV;
- (id)hasCrashMemoryMappedKV;
- (_Bool)isLastTimeCrashedBySpecialCharacter;
- (id)init;
- (void)onSingalCrash:(struct __siginfo *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

