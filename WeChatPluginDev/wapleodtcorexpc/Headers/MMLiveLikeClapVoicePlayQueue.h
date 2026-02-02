//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTask, MMLiveTaskId;

@interface MMLiveLikeClapVoicePlayQueue : NSObject
{
    _Bool _needPlaySelfClapVoice;
    unsigned int _playSelfClapVoiceCnt;
    MMLiveTaskId *_taskId;
    unsigned long long _currentGlobalClapPlayTimes;
    long long _globalClapVoiceType;
    long long _nextGlobalClapVoiceType;
    long long _selfClapVoiceType;
    double _globalClapVoiceStartPlayTime;
    double _lastGlobalClapVoiceEndTime;
    CDUnknownBlockType _globalClapEndCallback;
    CDUnknownBlockType _selfClapEndCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selfClapEndCallback; // @synthesize selfClapEndCallback=_selfClapEndCallback;
@property(copy, nonatomic) CDUnknownBlockType globalClapEndCallback; // @synthesize globalClapEndCallback=_globalClapEndCallback;
@property(nonatomic) unsigned int playSelfClapVoiceCnt; // @synthesize playSelfClapVoiceCnt=_playSelfClapVoiceCnt;
@property(nonatomic) _Bool needPlaySelfClapVoice; // @synthesize needPlaySelfClapVoice=_needPlaySelfClapVoice;
@property(nonatomic) double lastGlobalClapVoiceEndTime; // @synthesize lastGlobalClapVoiceEndTime=_lastGlobalClapVoiceEndTime;
@property(nonatomic) double globalClapVoiceStartPlayTime; // @synthesize globalClapVoiceStartPlayTime=_globalClapVoiceStartPlayTime;
@property(nonatomic) long long selfClapVoiceType; // @synthesize selfClapVoiceType=_selfClapVoiceType;
@property(nonatomic) long long nextGlobalClapVoiceType; // @synthesize nextGlobalClapVoiceType=_nextGlobalClapVoiceType;
@property(nonatomic) long long globalClapVoiceType; // @synthesize globalClapVoiceType=_globalClapVoiceType;
@property(nonatomic) unsigned long long currentGlobalClapPlayTimes; // @synthesize currentGlobalClapPlayTimes=_currentGlobalClapPlayTimes;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) MMLiveTask *liveTask;
@property(readonly, nonatomic) _Bool hasStartSelfClap;
@property(readonly, nonatomic) _Bool hasStartGlobalClap;
- (_Bool)checkNeedStopSelfLikeClapVoice;
- (_Bool)isSelfLikeClapVoiceOverMinDuration;
- (void)setSelfLikeClapVoiceVolume:(long long)arg1;
- (void)invokeSelfLikeClapVoicePlay;
- (void)setGlobalLikeClapVoiceVolume:(long long)arg1;
- (_Bool)isCurrentGlobalClapPlayOverLimitTimes;
- (_Bool)checkNeedContinuePlayGlobalClap;
- (void)invokeGlobalLikeClapVoicePlay;
- (void)updateGlobalClapType:(long long)arg1;
- (double)getGlobalClapPlayDurationForNewVoiceType;
- (id)getSelfLikeClapVoicePath;
- (id)getGlobalLikeClapVoicePath;
- (void)innerStopPlaySelfLikeClapVoice;
- (void)updateLikeClapVoiceVolumn;
- (void)stopPlaySelfLikeClapVoice:(_Bool)arg1;
- (_Bool)playSelfLikeClapVoiceWithEndCallback:(CDUnknownBlockType)arg1;
- (void)stopPlayGlobalLikeClapVoice;
- (_Bool)playGlobalLikeClapVoice:(long long)arg1 endCallback:(CDUnknownBlockType)arg2;
- (id)initWithTaskId:(id)arg1;

@end

