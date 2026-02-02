//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, TRTCQualityInfo, TRTCSpeedTestResult, TRTCStatistics;

@protocol TRTCCloudDelegate <NSObject>

@optional
- (void)onAudioEffectFinished:(int)arg1 code:(int)arg2;
- (void)onUserExit:(NSString *)arg1 reason:(long long)arg2;
- (void)onUserEnter:(NSString *)arg1;
- (void)onLocalRecordComplete:(long long)arg1 storagePath:(NSString *)arg2;
- (void)onLocalRecording:(long long)arg1 storagePath:(NSString *)arg2;
- (void)onLocalRecordBegin:(long long)arg1 storagePath:(NSString *)arg2;
- (void)onScreenCaptureStoped:(int)arg1;
- (void)onScreenCaptureResumed:(int)arg1;
- (void)onScreenCapturePaused:(int)arg1;
- (void)onScreenCaptureStarted;
- (void)onSetMixTranscodingConfig:(int)arg1 errMsg:(NSString *)arg2;
- (void)onStopPublishCDNStream:(int)arg1 errMsg:(NSString *)arg2;
- (void)onStartPublishCDNStream:(int)arg1 errMsg:(NSString *)arg2;
- (void)onStopPublishing:(int)arg1 errMsg:(NSString *)arg2;
- (void)onStartPublishing:(int)arg1 errMsg:(NSString *)arg2;
- (void)onRecvSEIMsg:(NSString *)arg1 message:(NSData *)arg2;
- (void)onMissCustomCmdMsgUserId:(NSString *)arg1 cmdID:(long long)arg2 errCode:(long long)arg3 missed:(long long)arg4;
- (void)onRecvCustomCmdMsgUserId:(NSString *)arg1 cmdID:(long long)arg2 seq:(unsigned int)arg3 message:(NSData *)arg4;
- (void)onUserVoiceVolume:(NSArray *)arg1 totalVolume:(long long)arg2;
- (void)onAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (void)onMicDidReady;
- (void)onCameraDidReady;
- (void)onConnectionRecovery;
- (void)onTryToReconnect;
- (void)onConnectionLost;
- (void)onSpeedTestResult:(TRTCSpeedTestResult *)arg1;
- (void)onStatistics:(TRTCStatistics *)arg1;
- (void)onNetworkQuality:(TRTCQualityInfo *)arg1 remoteQuality:(NSArray *)arg2;
- (void)onUserVideoSizeChanged:(NSString *)arg1 streamType:(long long)arg2 newWidth:(int)arg3 newHeight:(int)arg4;
- (void)onRemoteVideoStatusUpdated:(NSString *)arg1 streamType:(long long)arg2 streamStatus:(unsigned long long)arg3 reason:(unsigned long long)arg4 extrainfo:(NSDictionary *)arg5;
- (void)onSendFirstLocalAudioFrame;
- (void)onSendFirstLocalVideoFrame:(long long)arg1;
- (void)onFirstAudioFrame:(NSString *)arg1;
- (void)onFirstVideoFrame:(NSString *)arg1 streamType:(long long)arg2 width:(int)arg3 height:(int)arg4;
- (void)onUserAudioAvailable:(NSString *)arg1 available:(_Bool)arg2;
- (void)onUserSubStreamAvailable:(NSString *)arg1 available:(_Bool)arg2;
- (void)onUserVideoAvailable:(NSString *)arg1 available:(_Bool)arg2;
- (void)onRemoteUserLeaveRoom:(NSString *)arg1 reason:(long long)arg2;
- (void)onRemoteUserEnterRoom:(NSString *)arg1;
- (void)onDisconnectOtherRoom:(int)arg1 errMsg:(NSString *)arg2;
- (void)onConnectOtherRoom:(NSString *)arg1 errCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onSwitchRoom:(int)arg1 errMsg:(NSString *)arg2;
- (void)onSwitchRole:(int)arg1 errMsg:(NSString *)arg2;
- (void)onExitRoom:(long long)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onWarning:(int)arg1 warningMsg:(NSString *)arg2 extInfo:(NSDictionary *)arg3;
- (void)onError:(int)arg1 errMsg:(NSString *)arg2 extInfo:(NSDictionary *)arg3;
@end

