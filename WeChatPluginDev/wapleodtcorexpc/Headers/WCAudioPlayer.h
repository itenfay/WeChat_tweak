//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString, WCAudioInfo;
@protocol IWCAudioPlayerCore;

@interface WCAudioPlayer : NSObject
{
    _Bool _enableProgressCallback;
    _Bool _enableAudioModule;
    _Bool _isReuse;
    id <IWCAudioPlayerCore> _playerCore;
    MMTimer *_progressCheckTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReuse; // @synthesize isReuse=_isReuse;
@property(retain, nonatomic) MMTimer *progressCheckTimer; // @synthesize progressCheckTimer=_progressCheckTimer;
@property(retain, nonatomic) id <IWCAudioPlayerCore> playerCore; // @synthesize playerCore=_playerCore;
@property(nonatomic) _Bool enableAudioModule; // @synthesize enableAudioModule=_enableAudioModule;
@property(nonatomic) _Bool enableProgressCallback; // @synthesize enableProgressCallback=_enableProgressCallback;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)deactiveAudioModule;
- (_Bool)activeAudioModule;
- (void)wcAudioPlayerCore:(id)arg1 onEvent:(unsigned long long)arg2 audioInfo:(id)arg3 error:(id)arg4;
- (void)wcAudioPlayerCore:(id)arg1 statusChanged:(unsigned long long)arg2 audioInfo:(id)arg3;
- (void)onProgressCheckTimerCallback;
- (void)stopProgressCheckTimer;
- (void)startProgressCheckTimer;
- (void)onAudioPlayerEvent:(unsigned long long)arg1 withAudioInfo:(id)arg2 error:(id)arg3;
- (_Bool)isCurrentInfoSameWith:(id)arg1;
- (_Bool)canPlay;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)seekToTime:(double)arg1 autoPlay:(_Bool)arg2;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)resume;
- (_Bool)playWithAudioInfo:(id)arg1 startTime:(double)arg2;
- (_Bool)playWithAudioInfo:(id)arg1;
@property(readonly, nonatomic) WCAudioInfo *currentInfo;
@property(nonatomic) float volume;
@property(nonatomic) float playRate;
@property(readonly, nonatomic) double bufferedTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
@property(nonatomic) unsigned long long mode;
@property(readonly, nonatomic) unsigned long long status;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

