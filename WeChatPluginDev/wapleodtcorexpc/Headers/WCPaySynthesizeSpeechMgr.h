//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPVolumeView, NSString, WCPaySynthesizeSpeechCgi, WavAudioPlayer;

@interface WCPaySynthesizeSpeechMgr
{
    float _m_lastVolume;
    WCPaySynthesizeSpeechCgi *_m_voiceCgi;
    MPVolumeView *_m_privateVoulmeView;
    double _m_volumeViewSupportMinVersion;
    double _m_volumeViewSupportMaxVersion;
    WavAudioPlayer *_m_wavAudioPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(nonatomic) double m_volumeViewSupportMaxVersion; // @synthesize m_volumeViewSupportMaxVersion=_m_volumeViewSupportMaxVersion;
@property(nonatomic) double m_volumeViewSupportMinVersion; // @synthesize m_volumeViewSupportMinVersion=_m_volumeViewSupportMinVersion;
@property(nonatomic) float m_lastVolume; // @synthesize m_lastVolume=_m_lastVolume;
@property(retain, nonatomic) MPVolumeView *m_privateVoulmeView; // @synthesize m_privateVoulmeView=_m_privateVoulmeView;
@property(retain, nonatomic) WCPaySynthesizeSpeechCgi *m_voiceCgi; // @synthesize m_voiceCgi=_m_voiceCgi;
- (id)notificaitonIdentifier:(long long)arg1;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)OnGetWCPayExtensionInfoMsg:(id)arg1;
- (void)PushLocalNotification:(id)arg1 identifier:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)setSystemVolume:(float)arg1;
- (void)onMMAudioPlayerQueuePlayEnd;
- (void)forceSetSystemVolume;
- (void)removeVolumeView;
- (void)forceSetVolumeView;
- (void)playSynthesizeSound:(id)arg1;
- (void)OnGetWCPayVoiceRespErrorWithSpeechMsg:(id)arg1;
- (void)OnGetWCPayVoiceRespOK:(id)arg1;
- (void)requestForSynthesizeSpeech:(id)arg1;
- (void)removeCurrentSpeechConfig;
- (id)getCurrentSpeechConfig;
- (id)getConfigKey;
- (void)playLocalSpeech:(id)arg1;
- (void)checkAndSaveDefaultSpeechPos;
- (void)setAudioSessionActive;
- (void)requestLocalSpeechSynthesize:(id)arg1;
- (void)checkSwitchStatsAndRequestSpeech:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)showLocalNotification:(id)arg1 isVoiceReqSuccess:(_Bool)arg2;
- (void)deleteSounsData;
- (void)saveNSEShareUserData;
- (void)onAuthOK;
- (void)checkMainPosAndExtensionPosIsSame;
- (void)onServiceInit;
- (void)checkVolumViewSupportVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

