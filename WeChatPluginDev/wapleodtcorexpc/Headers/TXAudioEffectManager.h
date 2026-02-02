//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TXAudioEffectManagerDelegate;

@interface TXAudioEffectManager : NSObject
{
    struct weak_ptr<liteav::manager::AudioEffectManager> _effectManager;
    NSMutableArray *_effectIds;
    id <TXAudioEffectManagerDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXAudioEffectManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *effectIds; // @synthesize effectIds=_effectIds;
- (void)resumeAudioEffect:(int)arg1;
- (void)pauseAudioEffect:(int)arg1;
- (void)setAllAudioEffectsVolume:(int)arg1;
- (void)setAudioEffectVolume:(int)arg1 volume:(int)arg2;
- (void)stopAllAudioEffects;
- (void)stopAudioEffect:(int)arg1;
- (void)playAudioEffect:(id)arg1 volume:(int)arg2 onFinished:(CDUnknownBlockType)arg3;
- (long long)newEffectIDFrom:(long long)arg1;
- (void)setBGMPublishVolume:(long long)arg1;
- (void)setBGMPlayoutVolume:(long long)arg1;
- (void)setBGMVolume:(long long)arg1;
- (int)setBGMPosition:(long long)arg1;
- (long long)getBGMDuration:(id)arg1;
- (void)resumeBGM;
- (void)pauseBGM;
- (void)stopBGM;
- (void)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (long long)legacyBGMID;
- (void)resumeAll;
- (void)pauseAll;
- (void)stopAll;
- (void)_seekMusicToPosInMS:(long long)arg1 pts:(long long)arg2;
- (long long)_getMusicCurrentPosInMS:(long long)arg1;
- (void)_setMusicSpeedRate:(long long)arg1 speedRate:(double)arg2;
- (void)_setMusicPitch:(long long)arg1 pitch:(double)arg2;
- (void)_setMusicPlayoutVolume:(long long)arg1 volume:(long long)arg2;
- (void)_setMusicPublishVolume:(long long)arg1 volume:(long long)arg2;
- (void)_resumePlayMusic:(long long)arg1;
- (void)_pausePlayMusic:(long long)arg1;
- (void)_stopPlayMusic:(long long)arg1;
- (void)_startPlayMusic:(long long)arg1 param:(id)arg2 onStart:(CDUnknownBlockType)arg3 onProgress:(CDUnknownBlockType)arg4 onComplete:(CDUnknownBlockType)arg5;
- (long long)getMusicDurationInMS:(id)arg1;
- (void)seekMusicToPosInMS:(int)arg1 pts:(long long)arg2;
- (long long)getMusicCurrentPosInMS:(int)arg1;
- (void)setMusicSpeedRate:(int)arg1 speedRate:(double)arg2;
- (void)setMusicPitch:(int)arg1 pitch:(double)arg2;
- (void)setAllMusicVolume:(long long)arg1;
- (void)setMusicPlayoutVolume:(int)arg1 volume:(long long)arg2;
- (void)setMusicPublishVolume:(int)arg1 volume:(long long)arg2;
- (void)resumePlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)stopPlayMusic:(int)arg1;
- (void)startPlayMusic:(id)arg1 onStart:(CDUnknownBlockType)arg2 onProgress:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)setVoicePitch:(double)arg1;
- (void)setVoiceVolume:(long long)arg1;
- (void)setVoiceChangerType:(long long)arg1;
- (void)setVoiceReverbType:(long long)arg1;
- (void)setVoiceEarMonitorVolume:(long long)arg1;
- (void)enableVoiceEarMonitor:(_Bool)arg1;
- (id)initWithEffectManager:(shared_ptr_08ab110d)arg1;

@end

