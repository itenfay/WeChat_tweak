//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAudioFileManager, MJVoiceInputProcessor, MJVoiceInputRecorder, NSMutableDictionary, NSString;
@protocol MJVoiceInputManagerDelegate;

@interface MJVoiceInputManager : NSObject
{
    _Bool _isReachedRecordingDurationLimit;
    MJAudioFileManager *_audioFileManager;
    id <MJVoiceInputManagerDelegate> _delegate;
    unsigned long long _recognitionState;
    NSMutableDictionary *_entitiesByIdentifier;
    NSString *_currentIdentifier;
    long long _recordingDurationLimit;
    NSString *_reachRecordingDurationLimitToastText;
    MJVoiceInputRecorder *_recorder;
    MJVoiceInputProcessor *_processor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJVoiceInputProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) MJVoiceInputRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSString *reachRecordingDurationLimitToastText; // @synthesize reachRecordingDurationLimitToastText=_reachRecordingDurationLimitToastText;
@property(nonatomic) long long recordingDurationLimit; // @synthesize recordingDurationLimit=_recordingDurationLimit;
@property(retain, nonatomic) NSString *currentIdentifier; // @synthesize currentIdentifier=_currentIdentifier;
@property(retain, nonatomic) NSMutableDictionary *entitiesByIdentifier; // @synthesize entitiesByIdentifier=_entitiesByIdentifier;
@property(nonatomic) _Bool isReachedRecordingDurationLimit; // @synthesize isReachedRecordingDurationLimit=_isReachedRecordingDurationLimit;
@property(readonly, nonatomic) unsigned long long recognitionState; // @synthesize recognitionState=_recognitionState;
@property(nonatomic) __weak id <MJVoiceInputManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
- (_Bool)checkCurrentEntity;
- (void)onRecognitionStateUpdated:(unsigned long long)arg1 identifier:(id)arg2;
- (void)onRecognitionFinishedWithResult:(id)arg1 resultIndex:(unsigned int)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)onRecognitionResultUpdated:(id)arg1 resultIndex:(unsigned int)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)audioDecibelDidUpdate:(const void *)arg1;
- (void)onUpdateSentenceInfo:(unsigned int)arg1;
- (void)onProcessedVoiceInputSavedAtPath:(id)arg1 error:(id)arg2;
- (void)onVoiceInputDataSliceProcessed:(id)arg1 sliceIndex:(unsigned int)arg2 isEnd:(_Bool)arg3;
- (void)onLevelMeterPeakChange:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (void)onAudioBufferOutput:(id)arg1;
- (_Bool)_stopRecording:(_Bool)arg1;
- (_Bool)cancelRecording;
- (_Bool)stopRecording;
- (_Bool)startRecording;
- (_Bool)startRecordingWithDurationLimit:(long long)arg1 reachedLimitToastText:(id)arg2;
@property(readonly, nonatomic) _Bool isRecording;
- (void)reset;
- (id)entityWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithAudioFileManager:(id)arg1 vocalAdjustmentCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

