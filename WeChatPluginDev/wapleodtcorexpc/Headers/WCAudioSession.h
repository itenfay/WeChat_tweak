//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioSessionRouteDescription, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, WCAudioSessionDelegate;

@interface WCAudioSession
{
    _Bool _m_otherPlayingBeforeActive;
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    id <WCAudioSessionDelegate> _m_delegate;
    NSMutableDictionary *_categoryOptionsDict;
    AVAudioSessionRouteDescription *_currentRoute;
}

+ (unsigned long long)audioModeWithRouteChange:(id)arg1;
+ (unsigned long long)deviceModeWithOutputs:(id)arg1;
+ (id)portNameWithOutputs:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioSessionRouteDescription *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(retain, nonatomic) NSMutableDictionary *categoryOptionsDict; // @synthesize categoryOptionsDict=_categoryOptionsDict;
@property(nonatomic) _Bool m_otherPlayingBeforeActive; // @synthesize m_otherPlayingBeforeActive=_m_otherPlayingBeforeActive;
@property(nonatomic) __weak id <WCAudioSessionDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue; // @synthesize audioSessionQueue=_audioSessionQueue;
- (void)restoreCategoryOptions:(unsigned int)arg1;
- (void)saveCategoryOptions:(unsigned int)arg1;
- (void)print:(id)arg1;
- (void)print:(id)arg1 ignoreInputsPortDescription:(_Bool)arg2;
- (void)handleRouteChange:(id)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (_Bool)setAllowHapticsAndSystemSoundsDuringRecording:(_Bool)arg1;
- (void)ayncClearInputPortSet;
- (_Bool)switchPreferredInputPort:(id)arg1;
- (_Bool)switchBuiltInMicDataSource:(id)arg1;
- (id)getBuiltInMicInputDataSource:(id)arg1;
- (unsigned long long)currentCategoryId;
- (float)getOutputVolume;
- (_Bool)isOtherAudioPlaying;
- (unsigned long long)audioModeWithSessionDesciption:(id)arg1;
- (unsigned long long)getCacheAudioMode;
- (unsigned long long)getCurrentAudioMode;
- (id)getCurrentAudioPortDescription;
- (_Bool)setSpeaker:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setSpeaker:(_Bool)arg1;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (void)activePlayAndRecordDuckOthers;
- (void)activePlaybackDuckOthers;
- (void)activeMixWithOtherAudio;
- (void)reportSetCategoryError:(id)arg1;
- (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 forceUseBuiltinMic:(_Bool)arg4 error:(id *)arg5 withBlockType:(unsigned long long)arg6;
- (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
- (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
- (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 withBlockType:(unsigned long long)arg3;
- (_Bool)setCategroy:(unsigned long long)arg1 withBlockType:(unsigned long long)arg2;
- (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3 forceUseBuiltinMic:(_Bool)arg4;
- (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
- (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (_Bool)setCategroy:(unsigned long long)arg1;
- (_Bool)setActive:(_Bool)arg1 stopPlayCheck:(_Bool)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1;
- (void)asyncSetActive:(_Bool)arg1;
- (void)restart;
- (void)updateDelegate:(id)arg1;
- (_Bool)otherPlayingBeforeActive;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

