//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AUAudioDevice, NSDictionary;

@protocol IAUAudioDeviceExt <NSObject>

@optional
- (void)audioDeviceAudioServiceDidPrewarmAudioUnit;
- (void)audioDeviceAudioServiceWillPrewarmAudioUnit;
- (void)audioDeviceDidReceiveRecordingCallbackFirst:(NSDictionary *)arg1;
- (void)audioDeviceDidReceivePlaybackCallbackFirst:(NSDictionary *)arg1;
- (void)audioDeviceWillStart:(NSDictionary *)arg1;
- (void)audioDeviceInputMeterLevel:(AUAudioDevice *)arg1 Rms:(float)arg2;
- (void)audioDeviceStartedSuccess:(AUAudioDevice *)arg1;
- (void)audioDeviceStartedFail:(AUAudioDevice *)arg1;
- (void)audioDeviceRestart:(AUAudioDevice *)arg1;
- (void)audioDeviceResetCallback:(AUAudioDevice *)arg1;
- (void)audioDevicePause:(AUAudioDevice *)arg1;
- (void)audioDeviceForceStop:(AUAudioDevice *)arg1;
- (void)audioDeviceOutputMeterLevel:(AUAudioDevice *)arg1 Peak:(float)arg2;
- (void)audioDeviceInputMeterLevel:(AUAudioDevice *)arg1 Peak:(float)arg2;
- (void)audioDeviceUnPluginHeadset:(AUAudioDevice *)arg1;
- (void)audioDevicePluginHeadset:(AUAudioDevice *)arg1;
- (void)audioDeviceFarawayEar:(AUAudioDevice *)arg1;
- (void)audioDeviceNearEar:(AUAudioDevice *)arg1;
@end

