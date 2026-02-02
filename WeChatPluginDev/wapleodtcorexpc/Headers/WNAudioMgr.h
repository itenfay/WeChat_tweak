//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAudioRecorder, MMTimer, NSString;

@interface WNAudioMgr
{
    int _recordStatus;
    FavAudioRecorder *_recorder;
    unsigned int _voiceFmt;
    NSString *_lastFilePath;
    _Bool _isCancelRecord;
    unsigned int _startRecordTime;
    unsigned int _endRecordTime;
    MMTimer *_recordTimer;
    float _curPeakPower;
    id recordingVoiceObj;
    NSString *_curPlayingObjectId;
    _Bool _recording;
    _Bool _playing;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) _Bool recording; // @synthesize recording=_recording;
- (void)OnEarTip;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavEndRecording:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)finishWithError;
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavLevelMeter:(float)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (unsigned int)GetTmpAudioTime:(id)arg1;
- (void)FinishRecord:(id)arg1;
- (void)realStartRecord;
- (void)startRecord;
- (void)onTimeCount;
- (void)stopTimeCount;
- (void)startTimeCount;
- (id)getVoiceFmtOfString:(unsigned int)arg1;
- (unsigned int)getVoiceFmt:(id)arg1;
- (void)setProgress:(unsigned int)arg1;
- (void)stopPlay;
- (id)curPlayId;
- (void)startPlayWithObjectId:(id)arg1 LocalPath:(id)arg2 Fmt:(unsigned int)arg3 Len:(int)arg4 FromOffsetms:(unsigned int)arg5;
- (id)curRecordId;
- (void)cancelRecord;
- (void)stopRecord;
- (void)startRecordWithObj:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

