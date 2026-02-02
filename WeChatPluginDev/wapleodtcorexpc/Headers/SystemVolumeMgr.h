//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface SystemVolumeMgr
{
    int m_volumeCheckType;
    int m_volumeSetType;
    float m_lastMediaVolume;
    float m_lastPhoneCallVolume;
    float m_lastVolume;
    _Bool m_volumeChecking;
    NSMutableArray *m_volumeSetByProgrammingQueue;
    _Bool _checkVolumeAfterAudioSessionActive;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checkVolumeAfterAudioSessionActive; // @synthesize checkVolumeAfterAudioSessionActive=_checkVolumeAfterAudioSessionActive;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (_Bool)isUseVoiceProcessingIO;
- (void)mm_onVolumeChangeTo:(float)arg1 reason:(id)arg2 audioCategory:(id)arg3;
- (void)volumeChangedAfterIOS15:(id)arg1;
- (void)volumeChangedBeforeIOS15:(id)arg1;
- (void)stopVolumeCheckByNotification;
- (void)startVolumeCheckByNotification;
- (void)stopVolumeCheckByAudioSession;
- (void)startVolumeCheckByAudioSession;
- (void)mm_setVolume:(float)arg1 type:(int)arg2 reason:(int)arg3 increaseCount:(_Bool)arg4;
@property(readonly, nonatomic) float currentVolume;
- (void)restoreVolumeOnResignActive:(float)arg1;
- (void)silentVolumeOnBecomeActive;
- (void)setVolumeVisible:(float)arg1;
- (void)setVolume:(float)arg1 reason:(int)arg2;
- (void)setVolume:(float)arg1;
- (_Bool)shouldKeepAudioSessionActive;
- (_Bool)isVolumeChecking;
- (void)stopVolumeCheck;
- (void)startVolumeCheck;
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

