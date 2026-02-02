//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SPXAudioRecorder, UploadVoicePrintMgr;

@interface VoicePrintMgr
{
    unsigned int _curVoiceID;
    SPXAudioRecorder *_recoder;
    UploadVoicePrintMgr *_uploadMgr;
    _Bool bIsEnviromentCheckMode;
}

- (void).cxx_destruct;
- (void)OnMgrRegOkWithBioSigKey:(id)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrVerifyOkWithRandomKey:(id)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrGetMatchingResult:(int)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrNetworkError:(int)arg1 andMessage:(id)arg2;
- (void)OnMgrLocalFileOperationError;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)OnRecorderPrepareSend:(id)arg1;
- (_Bool)StopRecordAndUpload:(unsigned int)arg1;
- (_Bool)StopUpload:(unsigned int)arg1;
- (_Bool)StopRecord:(unsigned int)arg1;
- (unsigned int)StartVoicePrintVerifyByRsa:(unsigned int)arg1 withResId:(unsigned int)arg2 andTicket:(id)arg3;
- (unsigned int)StartVoicePrintVerify:(unsigned int)arg1 withResId:(unsigned int)arg2;
- (unsigned int)StartVoicePrintCreateByRsa:(unsigned int)arg1 withVoiceKey:(id)arg2 andTicket:(id)arg3;
- (unsigned int)StartVoicePrintCreate:(unsigned int)arg1 withResId:(unsigned int)arg2;
- (void)UpdateResourceID:(unsigned int)arg1;
- (void)StopEnviromentCheck;
- (_Bool)StartEnviromentCheck;
- (unsigned int)StartMatchingWithType:(unsigned int)arg1 withScene:(unsigned int)arg2 andResID:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

