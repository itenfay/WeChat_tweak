//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAudioRecorder, MMTimer, NSHashTable, NSString, WCRedEnvAudioTransLogic;

@interface WCRedEnvAudioResMgr
{
    _Bool _isStopHandled;
    _Bool _enableTransText;
    _Bool _isDisasterVoiceTrans;
    unsigned int _transInputId;
    NSHashTable *_delegateHashTable;
    FavAudioRecorder *_recorder;
    long long _recordStatus;
    NSString *_lastFilePath;
    long long _startRecordTime;
    long long _endRecordTime;
    MMTimer *_recordTimer;
    long long _stopRecordReason;
    long long _recordTimeoutValue;
    long long _audioStartPlayTime;
    WCRedEnvAudioTransLogic *_transTextLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisasterVoiceTrans; // @synthesize isDisasterVoiceTrans=_isDisasterVoiceTrans;
@property(nonatomic) unsigned int transInputId; // @synthesize transInputId=_transInputId;
@property(retain, nonatomic) WCRedEnvAudioTransLogic *transTextLogic; // @synthesize transTextLogic=_transTextLogic;
@property(nonatomic) _Bool enableTransText; // @synthesize enableTransText=_enableTransText;
@property(nonatomic) _Bool isStopHandled; // @synthesize isStopHandled=_isStopHandled;
@property(nonatomic) long long audioStartPlayTime; // @synthesize audioStartPlayTime=_audioStartPlayTime;
@property(nonatomic) long long recordTimeoutValue; // @synthesize recordTimeoutValue=_recordTimeoutValue;
@property(nonatomic) long long stopRecordReason; // @synthesize stopRecordReason=_stopRecordReason;
@property(retain, nonatomic) MMTimer *recordTimer; // @synthesize recordTimer=_recordTimer;
@property(nonatomic) long long endRecordTime; // @synthesize endRecordTime=_endRecordTime;
@property(nonatomic) long long startRecordTime; // @synthesize startRecordTime=_startRecordTime;
@property(retain, nonatomic) NSString *lastFilePath; // @synthesize lastFilePath=_lastFilePath;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(retain, nonatomic) FavAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSHashTable *delegateHashTable; // @synthesize delegateHashTable=_delegateHashTable;
- (void)onVoiceTransDisaster:(unsigned int)arg1;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onGetFinalKeywordList:(id)arg1 InputId:(unsigned int)arg2;
- (void)onGetTransingKeywordList:(id)arg1 InputId:(unsigned int)arg2;
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)cleanTransTextData;
- (void)cleanTranscacheLogic;
- (void)stopTranslateTextWithState:(_Bool)arg1;
- (void)startTranslateTextWithVoiceRecording:(int)arg1;
- (void)configEnableTransText:(_Bool)arg1;
- (_Bool)startDownloadAudioData:(id)arg1 fileUrl:(id)arg2 aesKey:(id)arg3;
- (void)handleCdnUploadSucc:(id)arg1 taskInfo:(id)arg2;
- (void)handleCdnUploadFail:(id)arg1;
- (_Bool)startUploadAudioData:(id)arg1;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnFavOutputPcmBuffer:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavLevelMeter:(float)arg1;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavEndRecording:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnPlayError:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (_Bool)stopPlaySilkAudioWithPayMsgID:(id)arg1;
- (_Bool)startPlaySilkAudioWithPayMsgID:(id)arg1;
- (_Bool)startPlaySilkAudioWithSenderDataPath:(id)arg1 audioID:(id)arg2;
- (void)stopTime;
- (void)forceStopRecordAndCallback;
- (void)onTimeCount;
- (void)notifyFinishRecordFailOnMainThread;
- (void)notifyFinishRecordOnMainThread:(id)arg1;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyStartRecordOnMainThread:(id)arg1;
- (_Bool)internalStopRecord;
- (long long)getRecordStatus;
- (_Bool)endRecord;
- (_Bool)stopRecord;
- (_Bool)startSilkRecordWithDuration:(unsigned long long)arg1;
- (void)setResMgrDelegate:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

