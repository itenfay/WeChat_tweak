//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TingAudioRecorder;

@interface TingAudioRecorderMgr
{
    _Bool _recording;
    _Bool _hasPermission;
    int _recordStatus;
    double _minTime;
    double _maxTime;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _endBlock;
    CDUnknownBlockType _interruptEventBlock;
    TingAudioRecorder *_recorder;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPermission; // @synthesize hasPermission=_hasPermission;
@property(nonatomic) int recordStatus; // @synthesize recordStatus=_recordStatus;
@property(retain, nonatomic) TingAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(copy, nonatomic) CDUnknownBlockType interruptEventBlock; // @synthesize interruptEventBlock=_interruptEventBlock;
@property(copy, nonatomic) CDUnknownBlockType endBlock; // @synthesize endBlock=_endBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) double minTime; // @synthesize minTime=_minTime;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)tingAudioRecorderOnInterrupt:(id)arg1;
- (void)tingAudioRecorder:(id)arg1 onFinishRecordWithRetCode:(unsigned int)arg2 filePath:(id)arg3;
- (void)tingAudioRecorder:(id)arg1 onBeginRecording:(int)arg2;
- (void)p_finishRecord:(unsigned int)arg1 filePath:(id)arg2 voiceTime:(double)arg3;
- (void)p_startRecord;
- (void)p_startRecordPerimissionCheck;
- (void)stopRecord;
- (void)startRecord;
- (void)reset;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

