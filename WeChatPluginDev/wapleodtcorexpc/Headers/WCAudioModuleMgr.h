//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WCAudioModuleList;

@interface WCAudioModuleMgr
{
    _Bool m_didSetActiveModule;
    int m_maxInterruptUnit;
    _Bool _isCheckingOtherAudio;
    int _checkInterval;
    NSRecursiveLock *_dataLock;
    NSMutableArray *_activeAudioList;
    WCAudioModuleList *_interruptAudioList;
    NSMutableDictionary *_audiosDict;
    MMTimer *_activeCheckTimer;
}

+ (id)getScenesExcludeArray:(id)arg1;
+ (id)getAllScenes;
+ (void)initialize;
+ (_Bool)isActivedAudioModuleUsingAudio:(id)arg1;
+ (id)descriptionForModules:(id)arg1;
+ (_Bool)audioList:(id)arg1 canMixWithAudioModule:(id)arg2;
+ (_Bool)audioModule:(id)arg1 canMixWithAudioList:(id)arg2;
+ (_Bool)audioModule:(id)arg1 canReplaceAudioList:(id)arg2;
+ (_Bool)audioModule:(id)arg1 canAddToAudioListDirectly:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int checkInterval; // @synthesize checkInterval=_checkInterval;
@property(nonatomic) _Bool isCheckingOtherAudio; // @synthesize isCheckingOtherAudio=_isCheckingOtherAudio;
@property(retain, nonatomic) MMTimer *activeCheckTimer; // @synthesize activeCheckTimer=_activeCheckTimer;
@property(retain, nonatomic) NSMutableDictionary *audiosDict; // @synthesize audiosDict=_audiosDict;
@property(retain, nonatomic) WCAudioModuleList *interruptAudioList; // @synthesize interruptAudioList=_interruptAudioList;
@property(retain, nonatomic) NSMutableArray *activeAudioList; // @synthesize activeAudioList=_activeAudioList;
@property(retain, nonatomic) NSRecursiveLock *dataLock; // @synthesize dataLock=_dataLock;
- (void)resetAudioInputMutedIfNeed:(id)arg1;
- (void)notifyDidDeactiveAudioModule:(id)arg1;
- (void)notifyDidActiveAudioModule:(id)arg1;
- (void)notifyWillActiveAudioModule:(id)arg1;
- (void)removeAudioModuleFromActiveListIfNeed;
- (void)deactiveAudioSession;
- (void)chooseAudioToPlayAndNotify:(id)arg1;
- (void)moveAllActiveToInterruptAndActiveModule:(id)arg1;
- (void)moveAudioToActive:(id)arg1;
- (_Bool)deactiveAudioModule:(id)arg1;
- (_Bool)activeAudioModule:(id)arg1;
- (id)getAudioModuleWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (void)cancelInterruptionNotifyWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (void)cancelInterruptionNotifyWithScene:(int)arg1;
- (_Bool)isAudioModuleInterrupt:(int)arg1;
- (id)currentInterruptModules;
- (_Bool)isAudioModuleActive:(int)arg1;
- (id)currentActiveModules;
- (_Bool)canSetActiveWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3 mixList:(id)arg4;
- (_Bool)canSetActiveWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (_Bool)canSetActiveWithScene:(int)arg1 mixList:(id)arg2;
- (_Bool)canSetActiveWithScene:(int)arg1;
- (_Bool)resumeInterruptModule;
- (void)showConflictWording;
- (id)getConflictWording;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 groupName:(id)arg3 identifier:(id)arg4 options:(unsigned long long)arg5 listener:(id)arg6;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 listener:(id)arg5;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 identifier:(id)arg3 listener:(id)arg4;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 listener:(id)arg3;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)asyncCheck3rdAppActive;
- (void)executeActiveCheck;
- (void)timerActiveCheck;
- (void)stopActiveCheck;
- (void)startActiveCheck;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)systemSoundDidStop:(unsigned int)arg1;
- (void)systemSoundWillStart:(unsigned int)arg1;
- (id)genKey:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (id)getAudioModuleWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3 createIfNotExist:(_Bool)arg4;
- (void)cleanAudioModule:(id)arg1;
- (void)cleanAudioModuleIfNeed:(id)arg1;
- (void)cleanAudioModules;
- (void)startTimerCleanAudioModules;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

