//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WABaseRecorder;
@protocol TingAudioRecorderDelegate;

@interface TingAudioRecorder
{
    id <TingAudioRecorderDelegate> _delegate;
    WABaseRecorder *_recorder;
    NSString *_filePath;
    double _minTime;
    double _maxTime;
    unsigned long long _recordStartTime;
    unsigned long long _recordEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long recordEndTime; // @synthesize recordEndTime=_recordEndTime;
@property(nonatomic) unsigned long long recordStartTime; // @synthesize recordStartTime=_recordStartTime;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) double minTime; // @synthesize minTime=_minTime;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) WABaseRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) __weak id <TingAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(_Bool)arg2;
- (void)reset;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (id)createTempPath;
- (void)stop;
- (unsigned int)p_startInternalRecorder;
- (unsigned int)p_startRecorder;
- (double)audioTime;
- (void)stopRecord;
- (unsigned int)startRecord;
- (id)initWithRecordMinTime:(double)arg1 recordMaxTime:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

