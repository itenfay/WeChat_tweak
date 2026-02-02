//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCVolumeController;

@interface VoIPAudioService
{
    _Bool _isWorking;
    _Bool _isActived;
    _Bool _isCallKit;
    _Bool _hasAudioUnitCallbackFirst;
    _Bool _isInBackground;
    _Bool _isInterruptingByAudioModule;
    int _audioUnitStartUpCount;
    int _audioUnitStartUpAtFirstFailedCount;
    int _audioUnitStartUpFailedCount;
    int _audioUnitInterruptionCount;
    unsigned long long _roomID;
    long long _roomKey;
    unsigned long long _audioUnitStartUpAtFirstTimestamp;
    unsigned long long _audioUnitRecvCallbackAtFirstTimestamp;
    unsigned long long _audioDeviceModeBeforeClosing;
    unsigned long long _currentDeviceMode;
    unsigned long long _audioUnitReceivePlaybackCallbackFirst;
    unsigned long long _audioUnitReceiveRecordingCallbackFirst;
    CDUnknownBlockType _resumeAfterInterruptionBlock;
    WCVolumeController *_volumnController;
}

+ (void)loadStatusWithCompletion:(CDUnknownBlockType)arg1 callbackInMainThead:(_Bool)arg2;
+ (void)loadStatusWithRouteChange:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackInMainThead:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInterruptingByAudioModule; // @synthesize isInterruptingByAudioModule=_isInterruptingByAudioModule;
@property(retain, nonatomic) WCVolumeController *volumnController; // @synthesize volumnController=_volumnController;
@property(copy, nonatomic) CDUnknownBlockType resumeAfterInterruptionBlock; // @synthesize resumeAfterInterruptionBlock=_resumeAfterInterruptionBlock;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool hasAudioUnitCallbackFirst; // @synthesize hasAudioUnitCallbackFirst=_hasAudioUnitCallbackFirst;
@property(nonatomic) unsigned long long audioUnitReceiveRecordingCallbackFirst; // @synthesize audioUnitReceiveRecordingCallbackFirst=_audioUnitReceiveRecordingCallbackFirst;
@property(nonatomic) unsigned long long audioUnitReceivePlaybackCallbackFirst; // @synthesize audioUnitReceivePlaybackCallbackFirst=_audioUnitReceivePlaybackCallbackFirst;
@property(nonatomic) _Bool isCallKit; // @synthesize isCallKit=_isCallKit;
@property(nonatomic) unsigned long long currentDeviceMode; // @synthesize currentDeviceMode=_currentDeviceMode;
@property(nonatomic) unsigned long long audioDeviceModeBeforeClosing; // @synthesize audioDeviceModeBeforeClosing=_audioDeviceModeBeforeClosing;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
@property(nonatomic) unsigned long long audioUnitRecvCallbackAtFirstTimestamp; // @synthesize audioUnitRecvCallbackAtFirstTimestamp=_audioUnitRecvCallbackAtFirstTimestamp;
@property(nonatomic) unsigned long long audioUnitStartUpAtFirstTimestamp; // @synthesize audioUnitStartUpAtFirstTimestamp=_audioUnitStartUpAtFirstTimestamp;
@property(nonatomic) int audioUnitInterruptionCount; // @synthesize audioUnitInterruptionCount=_audioUnitInterruptionCount;
@property(nonatomic) int audioUnitStartUpFailedCount; // @synthesize audioUnitStartUpFailedCount=_audioUnitStartUpFailedCount;
@property(nonatomic) int audioUnitStartUpAtFirstFailedCount; // @synthesize audioUnitStartUpAtFirstFailedCount=_audioUnitStartUpAtFirstFailedCount;
@property(nonatomic) int audioUnitStartUpCount; // @synthesize audioUnitStartUpCount=_audioUnitStartUpCount;
@property(nonatomic) long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) unsigned long long roomID; // @synthesize roomID=_roomID;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void)wcAVAudioSessionSwizzleDidCallMethod:(id)arg1 error:(id)arg2 ret:(_Bool)arg3;
- (void)onMediaServicesWereReset:(id)arg1;
- (void)onMediaServicesWereLost:(id)arg1;
- (void)audioDeviceDidReceiveRecordingCallbackFirst:(id)arg1;
- (void)audioDeviceDidReceivePlaybackCallbackFirst:(id)arg1;
- (void)audioDeviceAudioServiceDidPrewarmAudioUnit;
- (void)audioDeviceAudioServiceWillPrewarmAudioUnit;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceWillStart:(id)arg1;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (id)init;
- (void)receiveAudioUnitCallbackFirst;
- (void)refreshStatus;
- (void)refreshStatusWithRouteChange:(id)arg1;
- (_Bool)isUsingEarDeviceInLastTalk;
- (_Bool)isUsingBuiltInReceiverInLastTalk;
- (unsigned long long)audioDeviceModeInLastTalk;
- (void)stop;
- (void)start;
- (void)closeWithReset:(_Bool)arg1;
- (_Bool)openIfIsCallKit:(_Bool)arg1;
- (void)clearResumeAfterInterruptionBlock;
- (void)loadVolumeControllerWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

