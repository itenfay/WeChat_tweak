//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppBaseRecorder, NSMutableDictionary, NSString;

@interface LiteAppRecorderManager : NSObject
{
    _Bool _isRecording;
    _Bool _isCheckingPermission;
    _Bool _isInterrupting;
    unsigned int _appUuid;
    LiteAppBaseRecorder *_recorder;
    NSMutableDictionary *_settings;
    NSString *_identifier;
    NSString *_appId;
    NSString *_recorderSavePath;
    NSString *_errMsg;
    unsigned long long _audioThreshold;
}

+ (void)_showRecordDenied;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long audioThreshold; // @synthesize audioThreshold=_audioThreshold;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *recorderSavePath; // @synthesize recorderSavePath=_recorderSavePath;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool isInterrupting; // @synthesize isInterrupting=_isInterrupting;
@property(nonatomic) _Bool isCheckingPermission; // @synthesize isCheckingPermission=_isCheckingPermission;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) LiteAppBaseRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void)onEndInterruption;
- (void)interruptRecord;
- (void)onCallBackFileError;
- (void)onCallBackStopEvent:(id)arg1;
- (void)onCallBackRecordState:(id)arg1 params:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(_Bool)arg2;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)returnJson:(id)arg1 error:(id)arg2 isNoisy:(_Bool)arg3;
- (unsigned long long)currentTimeInMilliseconds;
- (_Bool)shouldForceUseBuiltinMic;
- (void)setInactive;
- (id)stopRecorder;
- (id)resumeRecorder;
- (id)pauseRecorder;
- (void)realStartRecord;
- (id)startRecord:(id)arg1 sampleRate:(unsigned long long)arg2 encodeBitRate:(unsigned long long)arg3 channels:(unsigned long long)arg4 duration:(unsigned long long)arg5 frameByteSize:(unsigned long long)arg6 audioSource:(id)arg7 audioThreshold:(unsigned long long)arg8;
- (id)generateFileRecordFilePath:(unsigned long long)arg1;
- (id)recordCachePath;
- (void)dealloc;
- (id)initWithAppIdAndAppUuId:(id)arg1 appUuid:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

