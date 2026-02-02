//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WABaseRecorder;
@protocol IJSContextPluginDelegate;

@interface WAJSContextPlugin_Recorder
{
    _Bool _isCheckingPermission;
    _Bool _isInterrupting;
    id <IJSContextPluginDelegate> _resultDelegate;
    WABaseRecorder *_recorder;
    NSMutableDictionary *_settings;
    NSString *_identifier;
}

+ (void)_showRecordDenied;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool isInterrupting; // @synthesize isInterrupting=_isInterrupting;
@property(nonatomic) _Bool isCheckingPermission; // @synthesize isCheckingPermission=_isCheckingPermission;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) WABaseRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
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
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)getRecorderIdentifier;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (_Bool)shouldForceUseBuiltinMic;
- (void)setInactive;
- (void)internalStopRecorder;
- (void)stopRecorder;
- (void)resumeRecorder;
- (void)pauseRecorder;
- (void)realStartRecord;
- (void)startRecord:(id)arg1 sampleRate:(unsigned long long)arg2 encodeBitRate:(unsigned long long)arg3 channels:(unsigned long long)arg4 duaration:(double)arg5 frameByteSize:(unsigned long long)arg6 audioSource:(id)arg7;
- (id)generateFileRecordFilePath:(unsigned long long)arg1;
- (id)recordCachePath;
- (id)cacheRootPath;
- (void)unregisterExt;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

