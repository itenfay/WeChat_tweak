//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WXVoIPAudioHardwareCallbackAdapter, WXVoIPAudioHardwareSystemNotificationsLifelongObserver, WXVoIPAudioHardwareSystemNotificationsObserver, WXVoIPAudioPlayPreprocessor, WXVoIPAudioUnitThreadDaemon;
@protocol OS_dispatch_queue;

@interface WXVoIPAudioDeviceAppleImpl : NSObject
{
    struct unique_ptr<wxvoipsdk::audio::HardwareManager, std::default_delete<wxvoipsdk::audio::HardwareManager>> _hardwareManager;
    weak_ptr_380cdd4f _dataCaptureCallback;
    weak_ptr_bc793f5c _dataPlayCallback;
    AudioFrame_99e89bc4 _earMonitoringPlayProcessHelpBuffer;
    struct TXCVolumeLevelS16 _captureEnergy;
    _Bool _isCaptureStarted;
    _Bool _isPlayStarted;
    _Bool _enableAutoRestart;
    _Bool _isFirstDataCaptured;
    _Bool _isFirstDataPlayed;
    _Bool _isEarMonitoringEnabled;
    unsigned int _autoRestartIntervalInMS;
    int _internalRemotePlaySoureceNumber;
    NSObject<OS_dispatch_queue> *_operationsQueue;
    unsigned long long _startCaptureTime;
    WXVoIPAudioHardwareCallbackAdapter *_audioHardwareCallbackAdapter;
    WXVoIPAudioPlayPreprocessor *_playPreprocessor;
    WXVoIPAudioHardwareSystemNotificationsLifelongObserver *_hardwareLifelongObserver;
    WXVoIPAudioHardwareSystemNotificationsObserver *_hardwareObserver;
    WXVoIPAudioUnitThreadDaemon *_audioUnitThreadDaemon;
    struct DataBasicDescription _captureDataDescription;
    AudioFrame_99e89bc4 _audioUnitCallbackProcessBuffer;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property int internalRemotePlaySoureceNumber; // @synthesize internalRemotePlaySoureceNumber=_internalRemotePlaySoureceNumber;
@property(retain, nonatomic) WXVoIPAudioUnitThreadDaemon *audioUnitThreadDaemon; // @synthesize audioUnitThreadDaemon=_audioUnitThreadDaemon;
@property(nonatomic) _Bool isEarMonitoringEnabled; // @synthesize isEarMonitoringEnabled=_isEarMonitoringEnabled;
@property(nonatomic) struct DataBasicDescription captureDataDescription; // @synthesize captureDataDescription=_captureDataDescription;
@property(retain, nonatomic) WXVoIPAudioHardwareSystemNotificationsObserver *hardwareObserver; // @synthesize hardwareObserver=_hardwareObserver;
@property(retain, nonatomic) WXVoIPAudioHardwareSystemNotificationsLifelongObserver *hardwareLifelongObserver; // @synthesize hardwareLifelongObserver=_hardwareLifelongObserver;
@property(retain, nonatomic) WXVoIPAudioPlayPreprocessor *playPreprocessor; // @synthesize playPreprocessor=_playPreprocessor;
@property(retain, nonatomic) WXVoIPAudioHardwareCallbackAdapter *audioHardwareCallbackAdapter; // @synthesize audioHardwareCallbackAdapter=_audioHardwareCallbackAdapter;
@property(nonatomic) struct AudioFrame audioUnitCallbackProcessBuffer; // @synthesize audioUnitCallbackProcessBuffer=_audioUnitCallbackProcessBuffer;
@property _Bool isFirstDataPlayed; // @synthesize isFirstDataPlayed=_isFirstDataPlayed;
@property(nonatomic) unsigned long long startCaptureTime; // @synthesize startCaptureTime=_startCaptureTime;
@property _Bool isFirstDataCaptured; // @synthesize isFirstDataCaptured=_isFirstDataCaptured;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationsQueue; // @synthesize operationsQueue=_operationsQueue;
@property unsigned int autoRestartIntervalInMS; // @synthesize autoRestartIntervalInMS=_autoRestartIntervalInMS;
@property _Bool enableAutoRestart; // @synthesize enableAutoRestart=_enableAutoRestart;
@property _Bool isPlayStarted; // @synthesize isPlayStarted=_isPlayStarted;
@property _Bool isCaptureStarted; // @synthesize isCaptureStarted=_isCaptureStarted;
- (int)getAudioQualityTypeWith:(int)arg1 channels:(int)arg2;
- (_Bool)isEarMonitoringEnabledInternal;
- (_Bool)isUsingHeadset;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)getAPPStates;
- (void)onNeedRestartAudioUnit;
- (_Bool)onGetPlayState;
- (_Bool)onGetCaptureState;
- (void)onHardwarePluggedOut:(const struct Hardware *)arg1;
- (void)onHardwarePluggedIn:(const struct Hardware *)arg1;
- (void)onChangePlayHardwareSuccessfully:(const struct Hardware *)arg1;
- (void)onChangeNewCaptureHardwareSuccessfully:(const struct Hardware *)arg1;
- (void)onAudioUnitError:(const void *)arg1;
- (void)onAudioUnitEvent:(const void *)arg1;
- (_Bool)onGetVOIPModeState;
- (void)onGetDataToPlayPreprocess:(struct AudioFrame *)arg1;
- (void)onGetDatatoPlay:(struct AudioFrame *)arg1;
- (void)onSendAudioData:(struct AudioFrame *)arg1;
- (void)captureStartSuccessfully;
- (void)onCaptureData:(struct AudioFrame *)arg1;
- (struct DeviceErrorApple)onInterruption:(_Bool)arg1;
- (void)uninitIfPlayAndCaptureBothStop;
- (void)initIfPlayOrCaptureFirstStart;
- (struct DeviceErrorApple)stopPlayInternal;
- (struct DeviceErrorApple)startPlayInternal;
- (struct DeviceErrorApple)resumeCaptureInternal;
- (struct DeviceErrorApple)pauseCaptureInternal;
- (struct DeviceErrorApple)stopCaptureInternal;
- (struct DeviceErrorApple)startCaptureInternal:(int)arg1 channels:(int)arg2;
- (void)setRemotePlaySoureceNumber:(int)arg1;
- (void)clean;
- (void)setCaptureAndPlayDurationFactor:(int)arg1;
- (vector_c729919e)getAvailableDevices:(_Bool)arg1;
- (int)getActivePlayDeviceState;
- (struct _AudioDeviceInfo)getActivePlayDevice;
- (void)switchPlayDevice:(long long)arg1;
@property(nonatomic, getter=isPlayoutDeviceMuted) _Bool playoutDeviceMuted;
@property(nonatomic) long long playoutDeviceVolume;
- (struct _AudioDeviceInfo)getActiveCaptureDevice;
- (void)switchCaptureDevice:(long long)arg1;
@property(nonatomic, getter=isCaptureDeviceMuted) _Bool captureDeviceMuted;
@property(nonatomic) long long captureDeviceVolume;
- (void)RestartAudioDevice;
- (void)enableInactivateAudioSession:(int)arg1;
- (void)setPlayRoute:(int)arg1;
- (void)setSystemVolumeType:(int)arg1;
- (void)setDataPlayCallback:(weak_ptr_bc793f5c)arg1;
- (void)setDataCaptureCallback:(weak_ptr_380cdd4f)arg1;
- (void)resumeCapture;
- (void)pauseCapture;
- (void)stopPlay;
- (void)startPlay;
- (void)muteCapture:(_Bool)arg1;
- (void)stopCapture;
- (void)startCapture:(int)arg1 channels:(int)arg2;
- (_Bool)isOtherAPPPlaying;
- (_Bool)isInBackground;
- (_Bool)isInterrupted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

