//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface VQMProfileInfoCommon : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)instanceFromEnvironmentInTheBeginning;
+ (id)instanceFromEnvironmentInTheCurrent;
+ (id)instanceFromAppStatusInTheBeginning;
+ (id)instanceFromAppStatusInTheCurrent;
+ (id)instanceFromMetricsInfoInTheCurrent;
+ (id)instanceFromMetricsInfoInTheBeginning;
+ (id)instanceFromMetricsInfo:(id)arg1;
- (id)instanceAfterCaculatingHardwareAverage;
- (id)report28331Content;
- (unsigned long long)timestampUnixWithTimestampStready:(unsigned long long)arg1;
- (int)infoBits;

// Remaining properties
@property(nonatomic) int appIsCarplayConnectedFinal; // @dynamic appIsCarplayConnectedFinal;
@property(nonatomic) int appIsPipDisplayedFinal; // @dynamic appIsPipDisplayedFinal;
@property(nonatomic) int appStateBegin; // @dynamic appStateBegin;
@property(nonatomic) int appStateFinal; // @dynamic appStateFinal;
@property(nonatomic) unsigned long long appTimestampEnterForegroundAtFirst; // @dynamic appTimestampEnterForegroundAtFirst;
@property(nonatomic) int callIsAccepted; // @dynamic callIsAccepted;
@property(nonatomic) int callIsCaller; // @dynamic callIsCaller;
@property(nonatomic) int callIsEnded; // @dynamic callIsEnded;
@property(nonatomic) int callIsInterrput; // @dynamic callIsInterrput;
@property(nonatomic) int callKernalTypeBegin; // @dynamic callKernalTypeBegin;
@property(nonatomic) int callKernalTypeFinal; // @dynamic callKernalTypeFinal;
@property(nonatomic) unsigned long long callLastConfirmingByPollingInterval; // @dynamic callLastConfirmingByPollingInterval;
@property(nonatomic) int callOpenFrom; // @dynamic callOpenFrom;
@property(nonatomic) unsigned long long callRoomId; // @dynamic callRoomId;
@property(nonatomic) unsigned long long callRoomKey; // @dynamic callRoomKey;
@property(nonatomic) int callRoomType; // @dynamic callRoomType;
@property(nonatomic) unsigned long long callTimestampBegin; // @dynamic callTimestampBegin;
@property(nonatomic) unsigned long long callTimestampBeginUnix; // @dynamic callTimestampBeginUnix;
@property(nonatomic) unsigned long long callTimestampFinal; // @dynamic callTimestampFinal;
@property(nonatomic) unsigned long long callTimestampSignalRecvUnix; // @dynamic callTimestampSignalRecvUnix;
@property(nonatomic) unsigned long long callTimestampSignalSendUnix; // @dynamic callTimestampSignalSendUnix;
@property(nonatomic) unsigned long long callTimestampUiAccept; // @dynamic callTimestampUiAccept;
@property(nonatomic) unsigned long long callTimestampUiClickAccepting; // @dynamic callTimestampUiClickAccepting;
@property(nonatomic) unsigned long long callTimestampUiFirstAppear; // @dynamic callTimestampUiFirstAppear;
@property(nonatomic) unsigned long long callTimestampUiMainFirstAppear; // @dynamic callTimestampUiMainFirstAppear;
@property(nonatomic) unsigned long long callTimestampUiWillQuit; // @dynamic callTimestampUiWillQuit;
@property(nonatomic) unsigned long long cameraCountDropFrames; // @dynamic cameraCountDropFrames;
@property(nonatomic) unsigned long long cameraCountOutputFrames; // @dynamic cameraCountOutputFrames;
@property(nonatomic) int cameraErrorCodeStartUpFinalFailed; // @dynamic cameraErrorCodeStartUpFinalFailed;
@property(nonatomic) unsigned long long cameraTimestampRecvAtFirst; // @dynamic cameraTimestampRecvAtFirst;
@property(nonatomic) unsigned long long cameraTimestampStartUpAtFirst; // @dynamic cameraTimestampStartUpAtFirst;
@property(nonatomic) unsigned long long cameraTimestampStartupSuccAtFirst; // @dynamic cameraTimestampStartupSuccAtFirst;
@property(nonatomic) int hardwareBatteryPercentBegin; // @dynamic hardwareBatteryPercentBegin;
@property(nonatomic) int hardwareBatteryPercentFinal; // @dynamic hardwareBatteryPercentFinal;
@property(nonatomic) int hardwareBatteryStateBegin; // @dynamic hardwareBatteryStateBegin;
@property(nonatomic) int hardwareBatteryStateFinal; // @dynamic hardwareBatteryStateFinal;
@property(nonatomic) unsigned long long hardwareBetteryBegin; // @dynamic hardwareBetteryBegin;
@property(nonatomic) unsigned long long hardwareBetteryFinal; // @dynamic hardwareBetteryFinal;
@property(nonatomic) int hardwareIsLowPowerModeEnableBegin; // @dynamic hardwareIsLowPowerModeEnableBegin;
@property(nonatomic) int hardwareIsLowPowerModeEnableFinal; // @dynamic hardwareIsLowPowerModeEnableFinal;
@property(nonatomic) unsigned long long hardwareTemperatureBegin; // @dynamic hardwareTemperatureBegin;
@property(nonatomic) unsigned long long hardwareTemperatureFinal; // @dynamic hardwareTemperatureFinal;
@property(nonatomic) int hardwareThermalStateBegin; // @dynamic hardwareThermalStateBegin;
@property(nonatomic) int hardwareThermalStateFinal; // @dynamic hardwareThermalStateFinal;
@property(nonatomic) unsigned long long hardwareTimestampTemperatureTooHighAtFirst; // @dynamic hardwareTimestampTemperatureTooHighAtFirst;
@property(nonatomic) unsigned long long hardwareTimestampThermalStateChangeToCriticalAtFirst; // @dynamic hardwareTimestampThermalStateChangeToCriticalAtFirst;
@property(nonatomic) unsigned long long hardwareTimestampThermalStateChangeToFairAtFirst; // @dynamic hardwareTimestampThermalStateChangeToFairAtFirst;
@property(nonatomic) unsigned long long hardwareTimestampThermalStateChangeToSeriousAtFirst; // @dynamic hardwareTimestampThermalStateChangeToSeriousAtFirst;
@property(nonatomic) unsigned long long hardwareUsageAppCpuAverage; // @dynamic hardwareUsageAppCpuAverage;
@property(nonatomic) unsigned long long hardwareUsageAppCpuFinal; // @dynamic hardwareUsageAppCpuFinal;
@property(nonatomic) unsigned long long hardwareUsageAppMemoryAverage; // @dynamic hardwareUsageAppMemoryAverage;
@property(nonatomic) unsigned long long hardwareUsageAppMemoryFinal; // @dynamic hardwareUsageAppMemoryFinal;
@property(nonatomic) unsigned long long hardwareUsageDeviceCpuAverage; // @dynamic hardwareUsageDeviceCpuAverage;
@property(nonatomic) unsigned long long hardwareUsageDeviceCpuFinal; // @dynamic hardwareUsageDeviceCpuFinal;
@property(nonatomic) unsigned long long hardwareUsageGpuDeviceUtilizationAverage; // @dynamic hardwareUsageGpuDeviceUtilizationAverage;
@property(nonatomic) unsigned long long hardwareUsageGpuDeviceUtilizationFinal; // @dynamic hardwareUsageGpuDeviceUtilizationFinal;
@property(nonatomic) unsigned long long hardwareUsageGpuRendererUtilizationAverage; // @dynamic hardwareUsageGpuRendererUtilizationAverage;
@property(nonatomic) unsigned long long hardwareUsageGpuRendererUtilizationFinal; // @dynamic hardwareUsageGpuRendererUtilizationFinal;
@property(nonatomic) unsigned long long hardwareUsageGpuTilerUtilizationAverage; // @dynamic hardwareUsageGpuTilerUtilizationAverage;
@property(nonatomic) unsigned long long hardwareUsageGpuTilerUtilizationFinal; // @dynamic hardwareUsageGpuTilerUtilizationFinal;
@property(nonatomic) unsigned long long matrixCountMainThreadLagged; // @dynamic matrixCountMainThreadLagged;
@property(nonatomic) int matrixIsMaybeSuspend; // @dynamic matrixIsMaybeSuspend;
@property(nonatomic) int matrixReboot; // @dynamic matrixReboot;
@property(nonatomic) int renderIsRciEffectEnable; // @dynamic renderIsRciEffectEnable;
@property(nonatomic) int renderIsRciEnable; // @dynamic renderIsRciEnable;
@property(nonatomic) unsigned long long visualTimestampRecvPlaybackAtFirst; // @dynamic visualTimestampRecvPlaybackAtFirst;
@property(nonatomic) unsigned long long visualTimestampRecvRecordbackAtFirst; // @dynamic visualTimestampRecvRecordbackAtFirst;

@end

