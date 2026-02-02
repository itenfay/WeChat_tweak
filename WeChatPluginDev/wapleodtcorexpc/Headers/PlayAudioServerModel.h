//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AACWeakTimer, AVAudioPlayer, NSArray, NSString;

@interface PlayAudioServerModel : NSObject
{
    double nextTime;
    int current;
    double eventSpacingTime;
    double eventSpacingCalibrationTime;
    _Bool _audioPlayFinish;
    long long _playerID;
    long long _playerType;
    long long _playedCount;
    long long _runLoopCount;
    NSString *_resourcePath;
    CDUnknownBlockType _errorCallBack;
    double _delayTime;
    double _offsetTime;
    double _firstPlayTime;
    double _allTime;
    NSArray *_playIDAry;
    NSArray *_truncatedHapticAry;
    AVAudioPlayer *_audioPlayer;
    AACWeakTimer *_timer;
    AACWeakTimer *_AudioServerPlayerTimer;
    AACWeakTimer *_audioPlayerTimer;
    AACWeakTimer *_systemVibrationPlayerTimer;
    CDUnknownBlockType _playBlock;
    CDUnknownBlockType _playNextBlock;
    CDUnknownBlockType _playProgress;
    double _startTime;
}

- (void).cxx_destruct;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool audioPlayFinish; // @synthesize audioPlayFinish=_audioPlayFinish;
@property(copy, nonatomic) CDUnknownBlockType playProgress; // @synthesize playProgress=_playProgress;
@property(copy, nonatomic) CDUnknownBlockType playNextBlock; // @synthesize playNextBlock=_playNextBlock;
@property(copy, nonatomic) CDUnknownBlockType playBlock; // @synthesize playBlock=_playBlock;
@property(retain, nonatomic) AACWeakTimer *systemVibrationPlayerTimer; // @synthesize systemVibrationPlayerTimer=_systemVibrationPlayerTimer;
@property(retain, nonatomic) AACWeakTimer *audioPlayerTimer; // @synthesize audioPlayerTimer=_audioPlayerTimer;
@property(retain, nonatomic) AACWeakTimer *AudioServerPlayerTimer; // @synthesize AudioServerPlayerTimer=_AudioServerPlayerTimer;
@property(retain, nonatomic) AACWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(copy, nonatomic) NSArray *truncatedHapticAry; // @synthesize truncatedHapticAry=_truncatedHapticAry;
@property(copy, nonatomic) NSArray *playIDAry; // @synthesize playIDAry=_playIDAry;
@property(nonatomic) double allTime; // @synthesize allTime=_allTime;
@property(nonatomic) double firstPlayTime; // @synthesize firstPlayTime=_firstPlayTime;
@property(nonatomic) double offsetTime; // @synthesize offsetTime=_offsetTime;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(copy, nonatomic) CDUnknownBlockType errorCallBack; // @synthesize errorCallBack=_errorCallBack;
@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(nonatomic) long long runLoopCount; // @synthesize runLoopCount=_runLoopCount;
@property(nonatomic) long long playedCount; // @synthesize playedCount=_playedCount;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long playerID; // @synthesize playerID=_playerID;
- (void)dealloc;
- (long long)getPlayCurrentID:(int)arg1;
- (void)begainAudioPlay:(id)arg1;
- (void)callNext;
- (void)fastVibrationPaly:(id)arg1;
- (void)systemVibrationPaly:(id)arg1;
- (void)playSystemVibrationWithIndex:(long long)arg1;
- (void)prepareToPlay;
- (void)timeOut:(id)arg1;
- (void)registModelAudioPlayer:(id)arg1;
- (void)setPlayNext:(CDUnknownBlockType)arg1 playProgress:(CDUnknownBlockType)arg2;
- (void)playOver:(CDUnknownBlockType)arg1;
- (void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)setAudioPlayerOffsetTime:(double)arg1;
- (void)seekToPlay:(int)arg1;
- (void)stopPlay;
- (void)startPlay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

