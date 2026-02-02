//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAudioRecorder, MMTimer, NSString;

@interface WebviewRecorderManager
{
    FavAudioRecorder *_recorder;
    int _recordStatus;
    NSString *_lastFilePath;
    unsigned long long _startRecordTime;
    unsigned long long _endRecordTime;
    MMTimer *_recordTimer;
    long long _stopReason;
    long long _recordTimeoutValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastFilePath; // @synthesize lastFilePath=_lastFilePath;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavBeginRecording:(int)arg1;
- (_Bool)internalStopRecord;
- (void)stopTime;
- (void)onTimeCount;
- (void)notifyFinishRecordOnMainThread:(id)arg1;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyStartRecordOnMainThread:(id)arg1;
- (_Bool)endRecord;
- (_Bool)stopRecord;
- (_Bool)startRecord:(long long)arg1 duration:(unsigned long long)arg2;
- (int)getRecordStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

