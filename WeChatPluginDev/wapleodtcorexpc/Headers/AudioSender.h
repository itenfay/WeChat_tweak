//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AMRAudioRecorder, BaseUploadVoiceMgr, MMNewUploadVoiceMgr, MMNewVoiceInputCacheLogic, NSString, SPXAudioRecorder, SilkAudioRecorder;

@interface AudioSender
{
    SPXAudioRecorder *m_spxrecorder;
    SilkAudioRecorder *m_silkRecorder;
    BaseUploadVoiceMgr *m_upload;
    MMNewUploadVoiceMgr *m_cgiUpload;
    NSString *m_monoServiceId;
    AMRAudioRecorder *m_amrrecorder;
    MMNewVoiceInputCacheLogic *_transcacheLogic;
}

+ (_Bool)IsVoiceUseCdnUpload;
- (void).cxx_destruct;
@property(retain, nonatomic) MMNewVoiceInputCacheLogic *transcacheLogic; // @synthesize transcacheLogic=_transcacheLogic;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SendOriVoiceMsgWithUserData:(id)arg1;
- (unsigned int)reTransVoiceWithLanguage:(unsigned int)arg1;
- (id)StopRecordAndStartTransVoiceMsgWithLanguage:(unsigned int)arg1;
- (void)StopVoiceTransWithInputId:(unsigned int)arg1;
- (void)ResumeVoiceTranslating;
- (void)PauseVoiceTranslating;
- (id)StartTranslateWithVoiceRecording:(unsigned int)arg1;
- (_Bool)IsNeedRecordPrepareStatus;
- (_Bool)isRecording;
- (_Bool)StopRecordWithAudioId:(unsigned int)arg1;
- (_Bool)StopRecord;
- (void)stop;
- (_Bool)CancelRecord;
- (id)getCurrentRecorder;
- (id)GetTmpAudio:(unsigned int)arg1;
- (unsigned int)startRecordForFormat:(unsigned int)arg1;
- (_Bool)canStartRecordForFormat:(unsigned int)arg1;
- (unsigned int)receivedBufferCount;
- (unsigned int)silkAudioDuration;
- (void)asyncStartUsingRecorder:(id)arg1;
- (_Bool)syncStartUsingRecorder:(id)arg1;
- (_Bool)StartRecordFrom:(id)arg1 ToUser:(id)arg2 UserInfo:(id)arg3;
- (_Bool)CanStartRecordFrom:(id)arg1 ToUser:(id)arg2;
- (_Bool)isNeedRecordBySilkForQQOfflineMsg;
- (_Bool)isNeedRecordBySilkByUsername:(id)arg1;
- (_Bool)isNeedSpeexAudioByUsrName:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (void)initFacade:(id)arg1;
- (id)init;
- (void)removeMonoService;
- (void)addMonoService;
- (void)notifyOnEndRecording:(unsigned int)arg1;
- (void)notifyOnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (_Bool)prepareSend:(id)arg1;
- (_Bool)deleteMessageFromDB:(id)arg1;
- (_Bool)updateMessageToDB:(id)arg1;
- (_Bool)addMessageToDB:(id)arg1;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getChatName:(id)arg1;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)tryShowVoiceTransMsgWithChatName:(id)arg1;
- (void)OnOutputPcmBuffer:(id)arg1 UserData:(id)arg2;
- (void)OnRecorderEndRecording:(id)arg1;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)OnRecorderPrepareSend:(id)arg1;
- (void)onRecordStartFail:(id)arg1;
- (void)cleanTranscacheLogic;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)cancelUploadAudioMsg;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onCdnUploadFail:(id)arg1;
- (void)OnPartSent:(id)arg1 ErrNo:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

